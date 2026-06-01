__int64 __fastcall sub_14940(__int64 a1, int *a2, __int64 a3, char a4)
{
  int v6; // eax
  int v7; // ebx
  int v8; // r14d
  __int64 v9; // rax

  v6 = sub_191F0(a3, 0);
  if ( v6 == -1 )
    return 4294967293LL;
  v7 = v6;
  v8 = sub_191F0(a3, 1);
  if ( v8 == -1 )
    return 4294967293LL;
  sub_19120(a3, 2);
  *(_WORD *)(a1 + 26) += 2;
  v9 = a1 + 40LL * *a2;
  *(_BYTE *)(v9 + 41) = 2;
  *(_BYTE *)(v9 + 45) = a4;
  *(_QWORD *)(v9 + 56) = v8 | (unsigned int)(v7 << 8);
  ++*a2;
  return 1;
}

