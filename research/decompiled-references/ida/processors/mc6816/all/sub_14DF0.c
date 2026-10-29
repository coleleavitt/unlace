__int64 __fastcall sub_14DF0(__int64 a1, int *a2, __int64 a3, int a4)
{
  unsigned int v6; // eax
  unsigned int v7; // r12d
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx

  v6 = sub_191F0(a3, 0);
  if ( v6 == -1 )
    return 4294967293LL;
  v7 = v6;
  sub_19120(a3, 1);
  ++*(_WORD *)(a1 + 26);
  v8 = *a2;
  v9 = a1 + 40 * v8;
  *(_BYTE *)(v9 + 41) = 5;
  *(_BYTE *)(v9 + 45) = 0;
  v10 = v7;
  if ( a4 )
    v10 = sub_195E0(v7, 255);
  v11 = a1 + 40 * v8;
  *(_QWORD *)(v11 + 48) = v10;
  *(_BYTE *)(v11 + 72) = a4;
  ++*a2;
  return 1;
}

