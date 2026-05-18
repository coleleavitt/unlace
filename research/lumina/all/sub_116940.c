__int64 (__fastcall *__fastcall sub_116940(__m128i *a1, __int64 a2, __int64 a3, __int64 a4))(__int64)
{
  _BOOL4 v5; // ebp
  int v6; // ebx
  __int32 v7; // r15d
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 i; // rdx
  __int64 (__fastcall *result)(__int64); // rax

  if ( qword_2424C0 )
    qword_2424C0(a1, a2, a3, a4);
  if ( !a1[6].m128i_i8[15] )
    sub_CC760((__int64)a1);
  v5 = 0;
  if ( (a1[2].m128i_i8[12] & 1) != 0 )
    v5 = a1[12].m128i_i8[5] == 0;
  v6 = 0;
  if ( a1[2].m128i_i32[2] > 0 )
  {
    v7 = 0;
    do
    {
      v8 = *(_QWORD *)(a1[2].m128i_i64[0] + 32LL * v7 + 8);
      if ( v8 )
      {
        if ( *(_BYTE *)(v8 + 16) == 2 )
          v6 = 1;
        sub_116800(v8, (unsigned int)a2, !v5);
      }
      ++v7;
    }
    while ( a1[2].m128i_i32[2] > v7 );
  }
  sub_D0560((__int64)a1, 136);
  if ( qword_2424C8 )
    qword_2424C8(a1, 136);
  if ( v5 )
  {
    for ( i = a1->m128i_i64[1]; i; i = *(_QWORD *)(i + 16) )
      *(_BYTE *)(i + 198) = *(_BYTE *)(i + 198) & 0xFC | 1;
    sub_D8BB0(a1, 136);
  }
  if ( !a1[6].m128i_i8[15] )
    sub_CC7E0((__int64)a1, 136, v9);
  a1[3].m128i_i64[0] &= 0xFFFFFFFDFFF7FFFFLL;
  result = (__int64 (__fastcall *)(__int64))a1[18].m128i_i64[1];
  a1[46].m128i_i64[1] = 0;
  a1[47].m128i_i64[0] = 0;
  if ( result && (v6 || !a1[6].m128i_i8[5]) )
    return (__int64 (__fastcall *)(__int64))result(a1[18].m128i_i64[0]);
  return result;
}
