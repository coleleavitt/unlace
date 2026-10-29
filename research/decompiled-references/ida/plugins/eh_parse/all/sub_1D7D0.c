unsigned __int64 __fastcall sub_1D7D0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(__int64, __int64))
{
  __int64 v7; // r13
  __int64 v9; // r12
  unsigned __int8 v10; // al
  __int64 v11; // rcx
  __m128i *v12; // rax
  __int64 v13; // r14
  char v14; // cl
  __int64 v16; // rdx
  __int64 v17; // [rsp+8h] [rbp-70h]
  __m128i v18; // [rsp+10h] [rbp-68h] BYREF
  __m128i v19; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-40h]

  v7 = (a3 - 1) / 2;
  v18.m128i_i64[0] = a4;
  v18.m128i_i64[1] = a5;
  v20 = __readfsqword(0x28u);
  v17 = a3 & 1;
  if ( a2 >= v7 )
  {
    v12 = (__m128i *)(a1 + 16 * a2);
    if ( (a3 & 1) != 0 )
    {
      v19 = _mm_load_si128(&v18);
      goto LABEL_10;
    }
    v9 = a2;
  }
  else
  {
    v9 = a2;
    do
    {
      v10 = a6(a1 + 32 * (v9 + 1), a1 + 32 * (v9 + 1) - 16);
      v11 = 16 * v9;
      v9 = 2 * (v9 + 1) - v10;
      v12 = (__m128i *)(a1 + 16 * v9);
      *(__m128i *)(a1 + v11) = _mm_loadu_si128(v12);
    }
    while ( v9 < v7 );
    if ( v17 )
      goto LABEL_5;
  }
  if ( (a3 - 2) / 2 == v9 )
  {
    v16 = v9 + 1;
    v9 = 2 * (v9 + 1) - 1;
    *v12 = _mm_loadu_si128((const __m128i *)(a1 + 32 * v16 - 16));
    v12 = (__m128i *)(a1 + 16 * v9);
  }
LABEL_5:
  v19 = _mm_load_si128(&v18);
  v13 = (v9 - 1) / 2;
  if ( v9 > a2 )
  {
    while ( 1 )
    {
      v14 = a6(a1 + 16 * v13, (__int64)&v19);
      v12 = (__m128i *)(a1 + 16 * v9);
      if ( !v14 )
        break;
      v9 = v13;
      *v12 = _mm_loadu_si128((const __m128i *)(a1 + 16 * v13));
      if ( a2 >= v13 )
      {
        v12 = (__m128i *)(a1 + 16 * v13);
        break;
      }
      v13 = (v13 - 1) / 2;
    }
  }
LABEL_10:
  *v12 = _mm_load_si128(&v19);
  return v20 - __readfsqword(0x28u);
}

