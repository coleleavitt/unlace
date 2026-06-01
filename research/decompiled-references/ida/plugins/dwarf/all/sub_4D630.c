unsigned __int64 __fastcall sub_4D630(
        __m128i *a1,
        __int64 a2,
        __m128i *a3,
        __int64 (__fastcall *a4)(__m128 *, __m128i *))
{
  __int64 v5; // rsi
  __int64 v9; // r15
  __int64 v10; // rdi
  unsigned __int64 result; // rax
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // [rsp+0h] [rbp-48h]

  v5 = a2 - (_QWORD)a1;
  v14 = (__int64)a3->m128i_i64 + v5;
  if ( v5 <= 624 )
    return sub_47AD0((__int64)a1, a2, a4);
  v9 = (__int64)a1;
  do
  {
    v10 = v9;
    v9 += 728;
    sub_47AD0(v10, v9, a4);
  }
  while ( a2 - v9 > 624 );
  result = sub_47AD0(v9, a2, a4);
  if ( v5 > 728 )
  {
    v12 = 7;
    do
    {
      sub_4D560((__int64)a1, a2, a3, v12, (__int64 (__fastcall *)(__m128i *, __m128i *))a4);
      v13 = 2 * v12;
      v12 *= 4;
      result = sub_4D560((__int64)a3, v14, a1, v13, (__int64 (__fastcall *)(__m128i *, __m128i *))a4);
    }
    while ( 0x4EC4EC4EC4EC4EC5LL * (v5 >> 3) > v12 );
  }
  return result;
}

