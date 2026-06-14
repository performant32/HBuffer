#pragma once

//Handles defines and importing standard library
#include <iostream>
#include <string>
#include <string.h>
#include <map>
#include <memory>
#include <algorithm>
#include <vector>
//#if __cplusplus < 201103L
//#error HBUFFER ONLY SUPPORTS CPP11+ remind the dev to actually work on his code 
//#endif

#ifndef HBUFF_NO_CONSTEXPR
#define HBUFF_CONSTEXPR constexpr
#endif

#ifndef HBUFF_NO_NOEXCEPT
#define HBUFF_NOEXCEPT noexcept
#endif
