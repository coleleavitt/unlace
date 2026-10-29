__int64 __fastcall sub_4D560(
        __int64 a1,
        __int64 a2,
        __m128i *a3,
        __int64 a4,
        __int64 (__fastcall *a5)(__m128i *, __m128i *))
{
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // rdi

  v5 = a1;
  v6 = 0x4EC4EC4EC4EC4EC5LL * ((a2 - a1) >> 3);
  v7 = 2 * a4;
  if ( 2 * a4 <= v6 )
  {
    v8 = 208 * a4;
    v9 = -104 * a4;
    do
    {
      v10 = v5;
      v5 += v8;
      a3 = (__m128i *)sub_4CFC0(v10, v5 + v9, v5 + v9, v5, a3, a5);
      v6 = 0x4EC4EC4EC4EC4EC5LL * ((a2 - v5) >> 3);
    }
    while ( v6 >= v7 );
  }
  if ( a4 <= v6 )
    v6 = a4;
  return sub_4CFC0(v5, v5 + 104 * v6, v5 + 104 * v6, a2, a3, a5);
}

