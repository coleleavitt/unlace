__int64 __fastcall sub_152EE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const __m128i *a6,
        __m128i a7,
        __m128 a8,
        __int64 a9)
{
  unsigned __int8 v11; // al
  unsigned __int8 v12; // dl
  int v16; // ecx
  __int64 v17; // rcx
  char v18; // al
  __int64 v19; // [rsp-8h] [rbp-40h]

  v11 = *(_BYTE *)a4;
  v12 = *(_BYTE *)a3;
  if ( *(_BYTE *)a4 != v12 )
  {
    if ( v12 == 14 )
    {
      if ( sub_125B60((unsigned __int8 *)a4, *(_QWORD *)(a3 + 8) + 16LL, 0, *(double *)a7.m128i_i64) )
      {
        sub_125180((unsigned __int8 *)a2, (unsigned __int8 *)a3);
        return 1;
      }
      v11 = *(_BYTE *)a4;
    }
    if ( v11 == 14 && sub_125B60((unsigned __int8 *)a3, *(_QWORD *)(a4 + 8), 0, *(double *)a7.m128i_i64) )
      goto LABEL_6;
    return 0;
  }
  sub_125180((unsigned __int8 *)a2, (unsigned __int8 *)a4);
  if ( sub_1255D0((unsigned __int8 *)a2, a1, a3, 1, *(double *)a7.m128i_i64) )
    return 1;
  v16 = *(_DWORD *)(a3 + 4);
  if ( *(_DWORD *)(a2 + 4) <= v16
    || (sub_1273B0(a2, (unsigned __int64 *)a1, a5, v16, a7),
        !sub_125B60((unsigned __int8 *)a2, a3, 0, *(double *)a7.m128i_i64)) )
  {
    sub_125180((unsigned __int8 *)a2, (unsigned __int8 *)a3);
    do
    {
      if ( *(_DWORD *)(a2 + 4) > *(_DWORD *)(a1 + 88) )
        break;
      if ( sub_152650(a2, (unsigned __int64 *)a1, a4, v17, a7) )
        return 1;
      v18 = sub_131730((unsigned __int64 *)a1, a6, a9, a2, 2 * *(_DWORD *)(a2 + 4), 0, a7, a8, 0);
      v17 = v19;
    }
    while ( v18 );
    return 0;
  }
LABEL_6:
  sub_125180((unsigned __int8 *)a2, (unsigned __int8 *)a4);
  return 1;
}

