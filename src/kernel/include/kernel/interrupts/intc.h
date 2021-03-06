/*********************************************************************
*
*   MODULE:
*       intc.h
*
*   DESCRIPTION:
*       Interrupt controller definitions
*
*********************************************************************/

#ifndef _KERNEL_INTC_H
#define _KERNEL_INTC_H

/*--------------------------------------------------------------------
                               INCLUDES
--------------------------------------------------------------------*/

#include <stdint.h>

#include "intc_types.h"

/*--------------------------------------------------------------------
                          LITERAL CONSTANTS
--------------------------------------------------------------------*/

/*--------------------------------------------------------------------
                                TYPES
--------------------------------------------------------------------*/

/*--------------------------------------------------------------------
                           MEMORY CONSTANTS
--------------------------------------------------------------------*/

#ifdef __cplusplus
extern "C" {
#endif

/*--------------------------------------------------------------------
                              VARIABLES
--------------------------------------------------------------------*/

/*--------------------------------------------------------------------
                                MACROS
--------------------------------------------------------------------*/

/*--------------------------------------------------------------------
                              PROCEDURES
--------------------------------------------------------------------*/

void intc_init
    (
    void
    );

void intc_ack
    (
    uint32_t            irq         /* The IRQ number to clear      */
    );

void intc_enable
    (
    uint32_t            irq,
    bool                enable
    );

void intc_trigger_type
    (
    uint32_t            irq,
    enum intc_trigger_type
                        trigger_type
    );

void intc_hndlr
    (
    uint32_t            irq
    );

void intc_register_irq_hndlr
    (
    uint32_t            irq,
    enum intc_trigger_type
                        trigger_type,
    bool                auto_ack,
    bool                enable,
    irq_hndlr_func *    irq_hndlr
    );

#ifdef __cplusplus
}
#endif
#endif /* _KERNEL_INTC_H */