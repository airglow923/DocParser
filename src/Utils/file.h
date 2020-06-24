#pragma once

#ifndef __FILE_H_
#define __FILE_H_

#if defined(_WIN32) || defined(WIN32) || defined(_WIN64) || defined(WIN64)

#include <fileapi.h>
#include <handleapi.h>
#include <inttypes.h>

#ifdef UNICODE
typedef wchar_t WINCHAR
#else
typedef char WINCHAR
#endif

#elif defined(__unix__) || defined(__linux__)

#include <sys/stat.h>

#endif

#endif