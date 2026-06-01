__int64 __fastcall sub_1D6BA0(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  int v5; // ebx
  __int64 result; // rax
  __int64 v7; // rdx
  _QWORD v8[9]; // [rsp+0h] [rbp-48h] BYREF

  v8[3] = __readfsqword(0x28u);
  v5 = a3 + 27;
  qsnprintf();
  result = sub_335B10(a1, a2, (__int64)v8, a4 + 24, 2, a4, 1);
  v7 = *(_QWORD *)(result + 72);
  *(_DWORD *)(v7 + 280) |= 0x14u;
  *(_DWORD *)(v7 + 284) = v5;
  return result;
}

