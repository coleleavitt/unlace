bool __fastcall sub_851D0(__int64 *a1, __m128i *a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // r14
  __m128i v6; // xmm0
  __int64 v7; // rdx
  __int64 v8; // rdi
  bool result; // al
  unsigned __int64 v10; // rdx
  __int64 v11; // rdx
  __m128i v12; // xmm0
  __m128i v13; // [rsp+0h] [rbp-78h] BYREF
  __m128i v14; // [rsp+10h] [rbp-68h] BYREF
  __m128i v15; // [rsp+20h] [rbp-58h] BYREF
  __m128i v16; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+40h] [rbp-38h]
  unsigned __int64 v18; // [rsp+48h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  if ( a1[2] )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = a1[1];
      v8 = *a1;
      v13 = v6;
      v14 = v6;
      v15 = v6;
      v16 = v6;
      v17 = 0;
      result = sub_85140(v8, (__int64)&v13, v7, v5);
      v6 = 0;
      if ( result )
      {
        if ( v14.m128i_i64[0] )
        {
          if ( a3 < v14.m128i_i64[0] )
            goto LABEL_10;
          v10 = v14.m128i_u64[1];
        }
        else
        {
          v10 = v14.m128i_u64[1];
          if ( !v14.m128i_i64[1] )
            goto LABEL_6;
        }
        if ( a3 < v10 )
        {
LABEL_6:
          v11 = v17;
          *a2 = _mm_load_si128(&v13);
          v12 = _mm_load_si128(&v14);
          a2[4].m128i_i64[0] = v11;
          a2[1] = v12;
          a2[2] = _mm_load_si128(&v15);
          a2[3] = _mm_load_si128(&v16);
          return result;
        }
      }
LABEL_10:
      ++v5;
    }
    while ( v5 < a1[2] );
  }
  return 0;
}

