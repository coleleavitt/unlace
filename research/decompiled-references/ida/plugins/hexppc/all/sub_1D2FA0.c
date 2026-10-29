__int64 __fastcall sub_1D2FA0(int a1, int a2, unsigned __int8 a3, int a4)
{
  int v5; // ebx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // [rsp-8h] [rbp-50h]
  _DWORD v9[6]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+18h] [rbp-30h]

  LODWORD(v10) = __readfsqword(0x28u);
  v5 = a3 + 27;
  qsnprintf();
  result = sub_331530(a1, a2, (unsigned int)v9, a4 + 24, 2, a4, 1, v8, v9[0], v9[2], v9[4], v10);
  v7 = *(_QWORD *)(result + 72);
  *(_DWORD *)(v7 + 280) |= 0x14u;
  *(_DWORD *)(v7 + 284) = v5;
  return result;
}

