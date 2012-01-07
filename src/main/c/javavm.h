 /*
 * $Id$
 * Provides the Java VM module. See LICENSE for license terms.
 */

#ifndef JNLUA_JAVAVM_INCLUDED
#define JNLUA_JAVAVM_INCLUDED

#include <stdlib.h>
#include <string.h>
#include <jni.h>
#include <lua.h>
#include <lauxlib.h>
#ifdef LUA_WIN
#include <stddef.h>
#endif
#ifdef LUA_USE_POSIX
#include <stdint.h>
#endif

/**
 * Opens the Java VM module in a Lua state.
 *
 * @param L the Lua state
 * @return the number of results
 */
JNIEXPORT int luaopen_javavm (lua_State *L);

#endif /* JNLUA_JAVAVM_INCLUDED */
