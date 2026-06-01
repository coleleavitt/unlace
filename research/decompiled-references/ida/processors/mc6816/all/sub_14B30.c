__int64 __fastcall sub_14B30(__int64 a1, int *a2, __int64 a3, __int16 a4, char a5)
{
  int v7; // eax
  int v8; // ebx
  int v9; // r12d
  __int64 v10; // rbp
  int v13; // [rsp+Ch] [rbp-3Ch]

  v7 = sub_191F0(a3, 0);
  if ( v7 == -1 )
    return 4294967293LL;
  v8 = v7;
  v9 = sub_191F0(a3, 1);
  if ( v9 == -1 )
    return 4294967293LL;
  v13 = sub_191F0(a3, 2);
  if ( v13 == -1 )
    return 4294967293LL;
  sub_19120(a3, 3);
  *(_WORD *)(a1 + 26) += 3;
  v10 = a1 + 40LL * *a2;
  *(_BYTE *)(v10 + 41) = 4;
  *(_BYTE *)(v10 + 45) = a5;
  *(_WORD *)(v10 + 46) = a4;
  *(_QWORD *)(v10 + 56) = sub_195E0(v13 | (v9 << 8) | (v8 << 16) & 0xF0000u, 0xFFFFF);
  ++*a2;
  return 1;
}

