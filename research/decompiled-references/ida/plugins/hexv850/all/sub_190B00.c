__int64 __fastcall sub_190B00(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 result; // rax
  __m128i v4; // xmm0
  char v5; // dl
  __m128i v6; // xmm0
  __m128i v7; // [rsp+0h] [rbp-38h] BYREF
  __m128i v8; // [rsp+10h] [rbp-28h] BYREF
  __int64 v9; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  v7 = _mm_loadu_si128((const __m128i *)a1);
  v9 = v1;
  v2 = *(_QWORD *)(a1 + 24);
  v8 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  if ( v2 < *(_QWORD *)(a1 - 16) )
  {
    for ( a1 -= 40; ; a1 -= 40 )
    {
      v5 = *(_BYTE *)(a1 + 32);
      *(__m128i *)(a1 + 40) = _mm_loadu_si128((const __m128i *)a1);
      v6 = _mm_loadu_si128((const __m128i *)(a1 + 16));
      *(_BYTE *)(a1 + 72) = v5;
      *(__m128i *)(a1 + 56) = v6;
      if ( v2 >= *(_QWORD *)(a1 - 16) )
        break;
    }
  }
  result = (unsigned __int8)v9;
  *(__m128i *)a1 = _mm_load_si128(&v7);
  v4 = _mm_load_si128(&v8);
  *(_BYTE *)(a1 + 32) = result;
  *(__m128i *)(a1 + 16) = v4;
  return result;
}

