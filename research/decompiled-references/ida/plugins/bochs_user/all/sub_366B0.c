unsigned __int64 __fastcall sub_366B0(__int64 *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  bool v8; // zf
  __int64 v9; // rdx
  int v10; // edx
  _UNKNOWN **v12; // [rsp+0h] [rbp-48h] BYREF
  __int64 v13; // [rsp+8h] [rbp-40h]
  __int64 v14; // [rsp+10h] [rbp-38h]
  __int64 v15; // [rsp+18h] [rbp-30h]
  unsigned __int64 v16; // [rsp+28h] [rbp-20h]

  v5 = *a1;
  v6 = a1[1];
  v16 = __readfsqword(0x28u);
  v12 = &off_71BA0;
  v8 = *(_DWORD *)(v5 + 72) == 23126;
  v15 = v5;
  v13 = 0;
  v9 = *(_QWORD *)(v5 + 592);
  v14 = 0;
  if ( v8 )
    v10 = v9 + 40;
  else
    v10 = *(unsigned __int16 *)(v5 + 92) + (_DWORD)v9 + 24;
  sub_354A0(v5, v6, (const char *)v10, *(unsigned __int16 *)(v5 + 78), (__int64)&v12);
  *a2 = v13;
  *a3 = v14 + HIDWORD(v13);
  return v16 - __readfsqword(0x28u);
}

