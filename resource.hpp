#ifndef _RAR_RESOURCE_
#define _RAR_RESOURCE_

#include "os.hpp"

#ifdef RARDLL
#define St(x) (L"")
#else
const wchar *St(MSGID StringId);
#endif


#endif
