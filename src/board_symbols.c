/*

Copyright 2011-2018 Stratify Labs, Inc

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

*/
#include <sos/symbols.h>
#include "config.h"

//#if defined __imxrt1052flexspi

//#if defined BOOTLOADER_MODE
#if 0
//bootloader won't run apps so it doesn't need to install additional symbols
u32 const symbols_table[] = { 0 };
#else
#include <sos/symbols/table.h>
#endif

