/*********************************************************************
*
*   MODULE:
*       assert.c
*
*   DESCRIPTION:
*       Assert implementation
*
*********************************************************************/

/*--------------------------------------------------------------------
                               INCLUDES
--------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

/*--------------------------------------------------------------------
                          LITERAL CONSTANTS
--------------------------------------------------------------------*/

/*--------------------------------------------------------------------
                                TYPES
--------------------------------------------------------------------*/

/*--------------------------------------------------------------------
                           MEMORY CONSTANTS
--------------------------------------------------------------------*/

/*--------------------------------------------------------------------
                              VARIABLES
--------------------------------------------------------------------*/

/*--------------------------------------------------------------------
                                MACROS
--------------------------------------------------------------------*/

/*--------------------------------------------------------------------
                              PROCEDURES
--------------------------------------------------------------------*/

/*********************************************************************
*
*   PROCEDURE NAME:
*       _assert
*
*   DESCRIPTION:
*       Send assert message to stderror and abort.
*
*********************************************************************/
void _assert
    (
    const char *        condition,
    const char *        file,
    unsigned int        line,
    const char *        func
    )
    {
    printf( "\n%s:%d: %s: Assertion '%s' failed.\n", file, line, func, condition );
    abort();
    
    } /* _assert() */
