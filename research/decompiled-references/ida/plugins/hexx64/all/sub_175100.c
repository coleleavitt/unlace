__int64 __fastcall sub_175100(__int64 a1, __int64 a2, __int64 a3, char a4, __m128 a5, __m128 a6)
{
  unsigned int **v7; // rbp
  __int64 v8; // rbp

  if ( *(_BYTE *)a2 != 10 )
  {
    if ( a4 )
      return 0;
    v7 = *(unsigned int ***)(a1 + 56);
    if ( *(_QWORD *)(a1 + 64) << 6 )
    {
      while ( !sub_1255D0(
                 (unsigned __int8 *)a2,
                 *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL),
                 (__int64)(v7 + 1),
                 0,
                 *(double *)a5.m128_u64) )
      {
        v7 += 8;
        if ( v7 == (unsigned int **)(*(_QWORD *)(a1 + 56) + (*(_QWORD *)(a1 + 64) << 6)) )
          goto LABEL_11;
      }
      if ( v7 && (unsigned __int8)sub_174DF0((__int64 *)a1, (char *)a2, v7, a5, a6) )
      {
        ++*(_DWORD *)(a1 + 104);
        *(_BYTE *)(a1 + 40) = 1;
        return 0;
      }
    }
LABEL_11:
    if ( *(_BYTE *)(a1 + 40) || *(_BYTE *)a2 != 14 )
      return 0;
    v8 = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(a1 + 96) = a2;
    sub_11E9B0(*(_QWORD *)(a2 + 8), a1, 0, 0, *(double *)a5.m128_u64);
    sub_11E9B0(*(_QWORD *)(a2 + 8) + 16LL, a1, 0, 0, *(double *)a5.m128_u64);
    *(_QWORD *)(a1 + 96) = v8;
  }
  *(_BYTE *)(a1 + 40) = 1;
  return 0;
}

