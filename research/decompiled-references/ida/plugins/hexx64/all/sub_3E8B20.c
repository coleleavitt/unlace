__int64 __fastcall sub_3E8B20(__m128i *a1, __m128i *a2, int a3, __int32 a4, __m128 a5)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __m128i *v9; // rax
  __int64 v10; // rcx
  __m128i *v11; // rbp

  sub_3E65E0(a1);
  if ( a1[67].m128i_i16[2] != 40 )
    goto LABEL_8;
  sub_3E65E0(a1);
  v9 = (__m128i *)sub_3E66C0((__int64)a1, (unsigned int)a3, v7, v8);
  a2->m128i_i8[0] = 4;
  a2->m128i_i64[1] = (__int64)v9;
  v11 = v9;
  if ( a3 > 62 )
    v9->m128i_i32[1] |= 0x10u;
  sub_3E7E50(a1, v9 + 2, 1, v10, a5);
  if ( !a4 )
    a4 = v11[2].m128i_i32[1];
  v11[4].m128i_i32[1] = a4;
  a2->m128i_i32[1] = a4;
  if ( a1[67].m128i_i16[2] != 41 )
LABEL_8:
    sub_5C092();
  return sub_3E65E0(a1);
}

