__int64 __fastcall sub_9130(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 (__fastcall *a5)(__int64, __int64))
{
  __int64 result; // rax
  __m128i v9; // xmm0
  __m128i v10; // [rsp+0h] [rbp-48h] BYREF
  __m128i v11; // [rsp+10h] [rbp-38h]

  if ( (unsigned __int8)a5(a2, a3) )
  {
    result = a5(a3, a4);
    if ( !(_BYTE)result )
    {
      result = a5(a2, a4);
      v9 = _mm_loadu_si128((const __m128i *)a1);
      v10.m128i_i32[3] = v9.m128i_i32[3];
      v11 = _mm_loadu_si128((const __m128i *)(a1 + 16));
      if ( (_BYTE)result )
      {
LABEL_4:
        *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)a4);
        *(__m128i *)(a1 + 12) = _mm_loadu_si128((const __m128i *)(a4 + 12));
        *(__m128i *)a4 = v9;
        *(__m128i *)(a4 + 12) = _mm_loadu_si128((const __m128i *)((char *)&v10.m128i_u64[1] + 4));
        return result;
      }
      goto LABEL_9;
    }
    v9 = _mm_loadu_si128((const __m128i *)a1);
    v10.m128i_i32[3] = v9.m128i_i32[3];
    v11 = _mm_loadu_si128((const __m128i *)(a1 + 16));
LABEL_7:
    *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)a3);
    *(__m128i *)(a1 + 12) = _mm_loadu_si128((const __m128i *)(a3 + 12));
    *(__m128i *)a3 = v9;
    *(__m128i *)(a3 + 12) = _mm_loadu_si128((const __m128i *)((char *)&v10.m128i_u64[1] + 4));
    return result;
  }
  result = a5(a2, a4);
  if ( !(_BYTE)result )
  {
    result = a5(a3, a4);
    v9 = _mm_loadu_si128((const __m128i *)a1);
    v10.m128i_i32[3] = v9.m128i_i32[3];
    v11 = _mm_loadu_si128((const __m128i *)(a1 + 16));
    if ( (_BYTE)result )
      goto LABEL_4;
    goto LABEL_7;
  }
  v9 = _mm_loadu_si128((const __m128i *)a1);
  v10.m128i_i32[3] = v9.m128i_i32[3];
  v11 = _mm_loadu_si128((const __m128i *)(a1 + 16));
LABEL_9:
  *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)a2);
  *(__m128i *)(a1 + 12) = _mm_loadu_si128((const __m128i *)(a2 + 12));
  *(__m128i *)a2 = v9;
  *(__m128i *)(a2 + 12) = _mm_loadu_si128((const __m128i *)((char *)&v10.m128i_u64[1] + 4));
  return result;
}

