__int64 __fastcall sub_3E3930(__m128i *a1, __m128i *a2, unsigned __int8 a3, __m128 a4)
{
  _DWORD *exception; // rax
  __m128i *v6; // r12
  __m128i *v7; // rax
  __m128i *v8; // rbp
  __int16 v9; // ax
  int v10; // edx

  v6 = a2;
  sub_3E1360(a1);
  if ( a1[67].m128i_i16[2] != 40 )
LABEL_17:
    sub_5ADD6(a1, a2, *(double *)a4.m128_u64);
  sub_3E1360(a1);
  v7 = (__m128i *)sub_3E1440((__int64)a1, 0);
  a2->m128i_i8[0] = 4;
  a2->m128i_i64[1] = (__int64)v7;
  v8 = v7;
  sub_3E2BD0(a1, v7 + 2, 1, a4);
  v9 = a1[67].m128i_i16[2];
  if ( a3 )
  {
    if ( v9 == 15420 )
    {
      v10 = 27;
      goto LABEL_5;
    }
    if ( (unsigned __int16)v9 <= 0x3C3Cu )
    {
      if ( v9 == 43 )
      {
LABEL_12:
        v10 = 26 - a3;
        goto LABEL_5;
      }
      v10 = 35;
      if ( v9 == 45 )
        goto LABEL_5;
    }
    else if ( v9 == 15934 )
    {
      v10 = 28;
      goto LABEL_5;
    }
    exception = __cxa_allocate_exception(4u);
    *exception = 47;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, nullptr);
  }
  if ( ((v9 - 43) & 0xFFFD) != 0 )
    JUMPOUT(0x5B89E);
  v10 = 30;
  if ( v9 == 43 )
    goto LABEL_12;
LABEL_5:
  v8->m128i_i32[0] = v10;
  sub_3E1360(a1);
  a2 = v8 + 3;
  sub_3E2BD0(a1, v8 + 3, 1, a4);
  v8[4].m128i_i32[1] = 1;
  v6->m128i_i32[1] = 1;
  if ( a1[67].m128i_i16[2] != 41 )
    goto LABEL_17;
  return sub_3E1360(a1);
}

