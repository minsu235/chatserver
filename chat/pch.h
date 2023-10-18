#pragma once

#include <WinSock2.h>
#pragma comment(lib, "ws2_32")

#include <Windows.h>
#include <process.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <string>
#include <vector>

#pragma warning(disable:4996)
using namespace std;
IN_ADDR GetDefaultMyIP();