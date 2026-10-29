__int64 __fastcall sub_14D40(__int64 a1, int *a2, __int64 a3, __int16 a4, char a5)
{
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rbp
  int v12; // [rsp+Ch] [rbp-3Ch]

  v8 = sub_191F0(a3, 0);
  if ( v8 == -1 )
    return 4294967293LL;
  v9 = v8;
  v12 = sub_191F0(a3, 1);
  if ( v12 == -1 )
    return 4294967293LL;
  sub_19120(a3, 2);
  *(_WORD *)(a1 + 26) += 2;
  v10 = a1 + 40LL * *a2;
  *(_BYTE *)(v10 + 41) = 4;
  *(_BYTE *)(v10 + 45) = a5;
  *(_WORD *)(v10 + 46) = a4;
  *(_QWORD *)(v10 + 56) = sub_195E0(v12 | (unsigned int)(v9 << 8), 0xFFFF);
  ++*a2;
  return 1;
}

