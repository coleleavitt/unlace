__int64 __fastcall sub_14C10(__int64 a1, int *a2, __int64 a3)
{
  unsigned int v4; // eax
  unsigned int v5; // r12d
  __int64 v6; // r13
  __int64 v7; // rbx

  v4 = sub_191F0(a3, 0);
  if ( v4 == -1 )
    return 4294967293LL;
  v5 = v4;
  sub_19120(a3, 1);
  ++*(_WORD *)(a1 + 26);
  v6 = a1 + 40LL * *a2;
  *(_BYTE *)(v6 + 41) = 7;
  *(_BYTE *)(v6 + 45) = 9;
  v7 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(v6 + 56) = v7 + sub_195E0(v5, 255) + 6;
  ++*a2;
  return 1;
}

