__int64 __fastcall sub_14CA0(__int64 a1, int *a2, __int64 a3)
{
  int v4; // eax
  int v5; // ebx
  int v6; // r14d
  __int64 v7; // r12
  __int64 v8; // rbp

  v4 = sub_191F0(a3, 0);
  if ( v4 == -1 )
    return 4294967293LL;
  v5 = v4;
  v6 = sub_191F0(a3, 1);
  if ( v6 == -1 )
    return 4294967293LL;
  sub_19120(a3, 2);
  *(_WORD *)(a1 + 26) += 2;
  v7 = a1 + 40LL * *a2;
  *(_BYTE *)(v7 + 41) = 7;
  *(_BYTE *)(v7 + 45) = 9;
  v8 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(v7 + 56) = v8 + sub_195E0(v6 | (unsigned int)(v5 << 8), 0xFFFF) + 6;
  ++*a2;
  return 1;
}

