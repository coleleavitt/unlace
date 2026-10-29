bool __fastcall sub_46840(__int64 a1, __int64 a2, int *a3, size_t a4, int a5)
{
  const void *v7; // rsi
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  bool result; // al
  __int64 v11; // rax

  *(_QWORD *)(a2 + 8) = 0;
  v7 = a3 + 2;
  v8 = *(_QWORD *)(a1 + 672) + 32LL * a5;
  if ( *a3 >= -1 )
    v7 = *((const void **)a3 + 1);
  if ( (*(_BYTE *)(v8 + 9) & 1) != 0 )
    goto LABEL_5;
  v9 = *(unsigned __int8 *)(v8 + 13);
  result = (_BYTE)v9 == 8 || (unsigned __int8)(v9 - 16) <= 1u;
  if ( result )
    goto LABEL_5;
  if ( (unsigned __int8)v9 <= 0x12u )
  {
    v11 = 294968;
    if ( _bittest64(&v11, v9) )
    {
LABEL_5:
      if ( a4 )
        sub_3E2B0(a2, v7, a4);
      return 1;
    }
    result = (_BYTE)v9 == 7 || (unsigned __int8)v9 <= 2u;
    if ( result )
    {
      if ( a4 )
        sub_3E2B0(a2, v7, a4);
      if ( *(int *)(qword_8FB50 + 144LL * *(int *)(a1 + 1176) + 124) > 0 )
        memrev();
      return 1;
    }
  }
  return result;
}

