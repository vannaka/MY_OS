/*********************************************************************
*
*   MODULE:
*       gdt.h
*
*   DESCRIPTION:
*       description
*
*********************************************************************/

#ifndef _KERNEL_GDT_H
#define _KERNEL_GDT_H

/*--------------------------------------------------------------------
                               INCLUDES
--------------------------------------------------------------------*/

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

/*------------------------------------------------------
gdt.c
------------------------------------------------------*/
void gdt_init
    (
    void
    );
    

#ifdef __cplusplus
}
#endif
#endif /* _KERNEL_GDT_H */