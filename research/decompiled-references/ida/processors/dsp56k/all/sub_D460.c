__int64 __fastcall sub_D460(__int64 a1, __int64 a2, int a3)
{
  char v3; // cl
  int v4; // edx
  char v5; // al

  v3 = a3;
  v4 = (a3 >> 2) & 3;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 3;
  *(_WORD *)(*(_QWORD *)(a1 + 248) + 6LL) = v3 & 3;
  v5 = 2;
  if ( v4 != 2 )
  {
    v5 = 1;
    if ( v4 != 3 )
      v5 = (v4 != 1) + 3;
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = v5;
  *(_QWORD *)(a1 + 248) += 40LL;
  return 1;
}

