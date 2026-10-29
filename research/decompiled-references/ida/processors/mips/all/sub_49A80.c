__int64 __fastcall sub_49A80(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // r9
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rdi
  unsigned __int64 v10; // r8
  __int64 v11; // r8
  __int64 i; // rdx
  __int64 v14; // r10
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 j; // rdx
  __int64 v18; // rsi

  v3 = a2 - a1;
  v4 = a1;
  v5 = 0xCCCCCCCCCCCCCCCDLL * (v3 >> 3);
  if ( v3 <= 0 )
    return v4;
  v6 = *a3;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = v5 >> 1;
      v8 = 40 * (v5 >> 1);
      v9 = v4 + v8;
      v10 = *(_QWORD *)(v4 + v8 + 8);
      if ( v10 >= v6 )
        break;
      v4 = v9 + 40;
      v5 = v5 - 1 - v7;
      if ( v5 <= 0 )
        return v4;
    }
    if ( v6 >= v10 )
      break;
    v5 >>= 1;
    if ( v7 <= 0 )
      return v4;
  }
  v11 = v4;
  for ( i = 0xCCCCCCCCCCCCCCCDLL * (v8 >> 3); i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v14 = v11 + 40 * (i >> 1);
      if ( *(_QWORD *)(v14 + 8) >= v6 )
        break;
      v11 = v14 + 40;
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        goto LABEL_13;
    }
  }
LABEL_13:
  v15 = v4 + 40 * v5;
  v16 = v9 + 40;
  for ( j = 0xCCCCCCCCCCCCCCCDLL * ((v15 - (v9 + 40)) >> 3); j > 0; j >>= 1 )
  {
    while ( 1 )
    {
      v18 = v16 + 40 * (j >> 1);
      if ( v6 < *(_QWORD *)(v18 + 8) )
        break;
      v16 = v18 + 40;
      j = j - 1 - (j >> 1);
      if ( j <= 0 )
        return v11;
    }
  }
  return v11;
}

