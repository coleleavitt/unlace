__int64 __fastcall sub_3F0D80(__int64 *a1, __int64 a2, unsigned __int64 dtype_size)
{
  bool v3; // zf
  __int64 v5; // rax
  __m128i si128; // xmm0
  __int64 v7; // rdi
  __int64 v8; // rbp
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  __int64 v11; // rdi
  __m128i v13; // [rsp+0h] [rbp-58h] BYREF
  const void *v14[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  __m128i v16; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-20h]

  v3 = *(_BYTE *)(a2 + 1) == 2;
  v17 = __readfsqword(0x28u);
  if ( v3 && !*(_BYTE *)(a2 + 32) )
  {
    if ( !dtype_size )
    {
      v13.m128i_i64[0] = a2;
      dtype_size = get_dtype_size();
    }
    return sub_122B20(a1, *(_QWORD *)(a2 + 16), dtype_size);
  }
  else
  {
    v16 = 0;
    v14[0] = nullptr;
    v14[1] = nullptr;
    v15 = 0;
    v5 = qvector_reserve((__int64)&v15, 0, 1, 16);
    si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
    v15 = v5;
    *(__m128i *)(v5 + 16 * v16.m128i_i64[0]++) = si128;
    sub_648D0(a1, v14, *(double *)si128.m128i_i64);
    v7 = a1[2];
    v8 = v15;
    v15 = 0;
    v9 = _mm_loadu_si128(&v16);
    v16 = 0;
    if ( v7 )
    {
      a1[3] = 0;
      v13 = v9;
      qfree(v7);
      v10 = _mm_load_si128(&v13);
      v11 = v15;
      a1[2] = v8;
      *(__m128i *)(a1 + 3) = v10;
      if ( v11 )
      {
        v16.m128i_i64[0] = 0;
        qfree(v11);
      }
    }
    else
    {
      a1[2] = v8;
      *(__m128i *)(a1 + 3) = v9;
    }
    qfree((__int64)v14[0]);
    return v17 - __readfsqword(0x28u);
  }
}

