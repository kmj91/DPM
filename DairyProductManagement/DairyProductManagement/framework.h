﻿// header.h: 표준 시스템 포함 파일
// 또는 프로젝트 특정 포함 파일이 들어 있는 포함 파일입니다.
//

#pragma once

#include "targetver.h"
#define WIN32_LEAN_AND_MEAN             // 거의 사용되지 않는 내용을 Windows 헤더에서 제외합니다.
// Windows 헤더 파일
#include <windows.h>
// C 런타임 헤더 파일입니다.
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>


// 추가 헤더
#include <vector>
#include <list>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <memory>
#include <time.h>
#include <string>

using namespace std;

#include "Include.h"
#include "Component/CComponent.h"
#include "BaseObj/CBaseObj.h"

#pragma comment(lib, "msimg32.lib")

#ifdef _DEBUG

#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

#ifndef DBG_NEW

#define DBG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DBG_NEW

#endif // !DBG_NEW

#endif // _DEBUG
