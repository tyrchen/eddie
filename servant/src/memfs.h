/*
The contents of this file are subject to the Erlang Public License,
Version 1.0, (the "License"); you may not use this file except in
compliance with the License. You may obtain a copy of the License at
http://www.eddieware.org/EPL

Software distributed under the License is distributed on an "AS IS"
basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See
the License for the specific language governing rights and limitations
under the License.

The Original Code is Eddie-0.83b1.

The Initial Developer of the Original Code is Ericsson Telecom
AB. Portions created by Ericsson are Copyright (C), 1998, Ericsson
Telecom AB. All Rights Reserved.

Contributor(s): ______________________________________.
*/

#ifndef MEMFS_H

#include "config.h"

#ifdef STDC_HEADERS
# ifdef STDLIB_MALLOC
#  include <stdlib.h>
# else
#  ifdef HAVE_MALLOC_H
#   include <malloc.h>
#  else
#   error "Cannot find malloc"
#  endif
# endif
#endif

#define MEMFS_H 1
#endif
