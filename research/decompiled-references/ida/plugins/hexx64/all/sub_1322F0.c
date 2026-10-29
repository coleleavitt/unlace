char __fastcall sub_1322F0(const __m128i *a1, int *a2, int *a3, __m128i a4, __m128 a5)
{
  char result; // al
  unsigned int *v6; // r8
  int v7; // eax
  int *v8; // [rsp+8h] [rbp-10h]

  if ( *((_BYTE *)a2 + 32) != 4 )
    return 0;
  v6 = *((unsigned int **)a2 + 5);
  if ( *a3 != *v6 || a2[17] != a3[17] )
    return 0;
  v7 = *a2;
  if ( *a2 != 11 )
  {
LABEL_8:
    if ( v7 == 10 )
      return sub_132040(a1, 0, a3, 0, *((unsigned int **)a2 + 5), *(double *)a4.m128i_i64, a5);
    return 0;
  }
  v8 = a3;
  result = sub_131FD0(a1, 0, (__int64)a3, 0, v6, a4, a5);
  if ( !result )
  {
    v7 = *a2;
    a3 = v8;
    goto LABEL_8;
  }
  return result;
}

