#ifndef _RAR_FILESTR_
#define _RAR_FILESTR_

#include "os.hpp"
#include "options.hpp"
#include "strlist.hpp"

bool ReadTextFile(
  const std::wstring &Name,
  StringList *List,
  bool Config,
  bool AbortOnError=false,
  RAR_CHARSET SrcCharset=RCH_DEFAULT,
  bool Unquote=false,
  bool SkipComments=false,
  bool ExpandEnvStr=false
);

RAR_CHARSET DetectTextEncoding(const byte *Data,size_t DataSize);

#endif
