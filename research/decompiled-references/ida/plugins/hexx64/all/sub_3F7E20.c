__int64 __fastcall sub_3F7E20(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128 a8,
        __m128 a9,
        unsigned int a10)
{
  __int64 v13; // rax
  int v14; // r15d
  int dtype_size; // eax
  __int64 v17; // rsi

  v13 = *(_QWORD *)(a1 + 832);
  v14 = a10;
  if ( *(_DWORD *)(v13 + 84) != 8 || !a10 || (int)a10 >= (unsigned __int64)*(int *)(v13 + 80) )
    goto LABEL_2;
  if ( a2 != 54 )
  {
    if ( a2 > 0x36 )
    {
      if ( a2 != 57 )
        goto LABEL_2;
LABEL_9:
      v17 = a5;
      goto LABEL_10;
    }
    if ( a2 != 1 )
    {
      if ( a2 != 2 )
        goto LABEL_2;
      goto LABEL_9;
    }
  }
  v17 = a6;
LABEL_10:
  if ( v17 != -1 )
    v14 = sub_3F7DA0(a1, v17, a10, a7, a8, a9);
LABEL_2:
  dtype_size = get_dtype_size();
  return sub_1D6310(a1, a2, dtype_size, a4, a5, a6, *(double *)a7.m128i_i64, v14);
}

