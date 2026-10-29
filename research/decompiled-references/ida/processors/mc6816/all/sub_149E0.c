__int64 __fastcall sub_149E0(__int64 a1, int *a2, __int64 a3, __int16 a4, char a5)
{
  unsigned int v8; // eax
  unsigned int v9; // r12d
  __int64 v10; // rax

  v8 = sub_191F0(a3, 0);
  if ( v8 == -1 )
    return 4294967293LL;
  v9 = v8;
  sub_19120(a3, 1);
  ++*(_WORD *)(a1 + 26);
  v10 = a1 + 40LL * *a2;
  *(_BYTE *)(v10 + 41) = 4;
  *(_BYTE *)(v10 + 45) = a5;
  *(_WORD *)(v10 + 46) = a4;
  *(_QWORD *)(v10 + 56) = v9;
  ++*a2;
  return 1;
}

