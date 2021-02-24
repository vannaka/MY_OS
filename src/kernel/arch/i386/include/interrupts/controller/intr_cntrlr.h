/*********************************************************************
*
*   MODULE:
*       intr_cntrlr.h
*
*   DESCRIPTION:
*       Interrupt controller definitions
*
*********************************************************************/

#ifndef _KERNEL_MEM_UTILS_H
#define _KERNEL_MEM_UTILS_H

/*--------------------------------------------------------------------
                               INCLUDES
--------------------------------------------------------------------*/

#include <stdint.h>

/*--------------------------------------------------------------------
                          LITERAL CONSTANTS
--------------------------------------------------------------------*/

/*--------------------------------------------------------------------
                                TYPES
--------------------------------------------------------------------*/

enum intr_cntrlr_type
    {
    INTR_CNTRLR_PIC,
    INTR_CNTRLR_APIC
    };

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

void intr_cnrl_pwrp
    (
    void
    );

void intr_cntrl_init
    (
    enum intr_cntrlr_type
                        controller
    );

void intr_cntrl_eoi
    (
    uint8_t             irq         /* The IRQ number to clear      */
    );


#ifdef __cplusplus
}
#endif
#endif /* _KERNEL_MEM_UTILS_H */