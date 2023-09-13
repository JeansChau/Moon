#pragma once

#include <stdint.h>
#include <cstddef>

#ifdef MOON_IS_WINDOWS
#ifndef UNICODE
#define UNICODE
#endif

#ifndef _UNICODE
#define UNICODE
#endif

#endif // MOON_IS_WINDOWS