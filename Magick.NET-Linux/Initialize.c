// Copyright 2013-2017 Dirk Lemstra <https://github.com/dlemstra/Magick.NET/>
//
// Licensed under the ImageMagick License (the "License"); you may not use this file except in
// compliance with the License. You may obtain a copy of the License at
//
//   https://www.imagemagick.org/script/license.php
//
// Unless required by applicable law or agreed to in writing, software distributed under the
// License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions
// and limitations under the License.

#include "Stdafx.h"

#pragma warning(push)
#pragma warning(disable : 4255)
#pragma warning(disable : 4668)

// #include <windows.h>

#pragma warning(pop)

/*
BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  (void)hinstDLL;
  (void)lpReserved;

  switch (fdwReason)
  {
  case DLL_PROCESS_ATTACH:
    MagickCoreGenesis((const char *)NULL, MagickFalse);
    SetMagickResourceLimit(HeightResource, 10000000);
    SetMagickResourceLimit(WidthResource, 10000000);
    break;
  default:
    break;
  }
  return TRUE;  // Successful DLL_PROCESS_ATTACH.
}
*/