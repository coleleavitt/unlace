__int64 __fastcall sub_1E490(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r15d
  __int64 v7; // r12
  unsigned int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  char v12; // [rsp+8h] [rbp-60h]
  unsigned int v13; // [rsp+18h] [rbp-50h]

  v5 = *(_DWORD *)(a1 + 912);
  v12 = 0;
  if ( a2 > 5 )
  {
    sub_12F00((__int64)"%s", "Loading Modules");
    v12 = 1;
  }
  v7 = *(_QWORD *)(a1 + 864);
  v13 = sub_591F0(v7, v5);
  v8 = sub_29D40(a1 + 1704, (unsigned int)a2, a3, a4);
  sub_591F0(v7, v13);
  if ( v12 )
    callui(24, 10, 0, &callui, v9, v10, &off_8B820, v12, v7, v13);
  return v8;
}

