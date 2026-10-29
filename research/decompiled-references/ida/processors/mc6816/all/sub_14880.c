__int64 __fastcall sub_14880(__int64 a1, int *a2, __int64 a3, char a4)
{
  int v6; // eax
  int v7; // ebx
  int v8; // r13d
  __int64 v9; // rax
  int v11; // [rsp+Ch] [rbp-3Ch]

  v6 = sub_191F0(a3, 0);
  if ( v6 == -1 )
    return 4294967293LL;
  v7 = v6;
  v8 = sub_191F0(a3, 1);
  if ( v8 == -1 )
    return 4294967293LL;
  v11 = sub_191F0(a3, 2);
  if ( v11 == -1 )
    return 4294967293LL;
  sub_19120(a3, 3);
  *(_WORD *)(a1 + 26) += 3;
  v9 = a1 + 40LL * *a2;
  *(_BYTE *)(v9 + 41) = 6;
  *(_BYTE *)(v9 + 45) = a4;
  *(_QWORD *)(v9 + 56) = v11 | (v8 << 8) | (v7 << 16) & 0xF0000u;
  ++*a2;
  return 1;
}

