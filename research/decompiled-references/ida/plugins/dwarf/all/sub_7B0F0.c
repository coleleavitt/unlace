__m128i *__fastcall sub_7B0F0(
        __int64 a1,
        __int64 a2,
        __m128i *a3,
        __int64 a4,
        unsigned __int8 (__fastcall *a5)(__int64, __int64))
{
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rbp
  __int64 v10; // rdi

  v5 = 2 * a4;
  v6 = 0xCCCCCCCCCCCCCCCDLL * ((a2 - a1) >> 4);
  v7 = a1;
  if ( 2 * a4 <= v6 )
  {
    v8 = 160 * a4;
    v9 = -80 * a4;
    do
    {
      v10 = v7;
      v7 += v8;
      a3 = sub_7AD30(v10, v7 + v9, v7 + v9, v7, a3, a5);
      v6 = 0xCCCCCCCCCCCCCCCDLL * ((a2 - v7) >> 4);
    }
    while ( v6 >= v5 );
  }
  if ( a4 <= v6 )
    v6 = a4;
  return sub_7AD30(v7, v7 + 80 * v6, v7 + 80 * v6, a2, a3, a5);
}

