#include <Windows.h>
#include "win_utils.h"
#define skCrypt_(str) _xor_(str).c_str()
#define BIT_CHECK(a,b) (!!((a) & (1ULL<<(b))))

static const void* game_rbx_jmp;

Vector3 CamLoc;
Vector3 CamRot;

DWORD_PTR PlayerCameraManager;

float GlobalFOV = 80.f;