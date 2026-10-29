__int64 __fastcall sub_3E8BB0(__m128i *a1, __m128i *a2, unsigned __int8 a3, __m128 a4)
{
  _DWORD *exception; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __m128i *v8; // rax
  __m128i *v9; // rbp
  __int64 v10; // rcx
  __int16 v11; // ax
  int v12; // edx
  __int64 v13; // rcx

  sub_3E65E0(a1);
  if ( a1[67].m128i_i16[2] != 40 )
LABEL_17:
    sub_5C092();
  sub_3E65E0(a1);
  v8 = (__m128i *)sub_3E66C0((__int64)a1, 0, v6, v7);
  a2->m128i_i8[0] = 4;
  a2->m128i_i64[1] = (__int64)v8;
  v9 = v8;
  sub_3E7E50(a1, v8 + 2, 1, v10, a4);
  v11 = a1[67].m128i_i16[2];
  if ( a3 )
  {
    if ( v11 == 15420 )
    {
      v12 = 27;
      goto LABEL_5;
    }
    if ( (unsigned __int16)v11 <= 0x3C3Cu )
    {
      if ( v11 == 43 )
      {
LABEL_12:
        v12 = 26 - a3;
        goto LABEL_5;
      }
      v12 = 35;
      if ( v11 == 45 )
        goto LABEL_5;
    }
    else if ( v11 == 15934 )
    {
      v12 = 28;
      goto LABEL_5;
    }
    exception = __cxa_allocate_exception(4u);
    *exception = 47;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, nullptr);
  }
  if ( ((v11 - 43) & 0xFFFD) != 0 )
    JUMPOUT(0x5CB5A);
  v12 = 30;
  if ( v11 == 43 )
    goto LABEL_12;
LABEL_5:
  v9->m128i_i32[0] = v12;
  sub_3E65E0(a1);
  sub_3E7E50(a1, v9 + 3, 1, v13, a4);
  v9[4].m128i_i32[1] = 1;
  a2->m128i_i32[1] = 1;
  if ( a1[67].m128i_i16[2] != 41 )
    goto LABEL_17;
  return sub_3E65E0(a1);
}

