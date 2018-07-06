/*
 * gvl_wrappers.c - Wrapper functions for locking/unlocking the Ruby GVL
 *
 */

#include "pg.h"

#ifndef HAVE_PQENCRYPTPASSWORDCONN
char *PQencryptPasswordConn(PGconn *conn, const char *passwd, const char *user, const char *algorithm){return NULL;}
#endif

FOR_EACH_BLOCKING_FUNCTION( DEFINE_GVL_WRAPPER_STRUCT );
FOR_EACH_BLOCKING_FUNCTION( DEFINE_GVL_SKELETON );
FOR_EACH_BLOCKING_FUNCTION( DEFINE_GVL_STUB );
FOR_EACH_CALLBACK_FUNCTION( DEFINE_GVL_WRAPPER_STRUCT );
FOR_EACH_CALLBACK_FUNCTION( DEFINE_GVLCB_SKELETON );
FOR_EACH_CALLBACK_FUNCTION( DEFINE_GVLCB_STUB );
