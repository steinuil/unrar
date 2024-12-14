#ifndef _RAR_VOLUME_
#define _RAR_VOLUME_

#include "os.hpp"
#include "archive.hpp"

bool MergeArchive(Archive &Arc,ComprDataIO *DataIO,bool ShowFileName,
                  wchar Command);

#endif
