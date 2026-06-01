unsigned __int64 __fastcall sub_62A0(_QWORD *a1, const __m128i *a2, unsigned int a3, char a4)
{
  __int64 v4; // r12
  unsigned __int64 v7; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rsi
  __int8 v10; // dl
  __int32 v11; // edx
  __m128i v12; // xmm0
  __int64 v13; // rsi
  __int64 v14; // rax

  v4 = a3;
  v7 = a1[8];
  if ( v7 < a3 )
  {
    v13 = a1[7];
    if ( a1[9] < (unsigned __int64)a3 )
    {
      v14 = qvector_reserve(a1 + 7, v13, a3, 24);
      v7 = a1[8];
      a1[7] = v14;
      v13 = v14;
    }
    memset((void *)(v13 + 24 * v7), 0, 24 * (v4 - v7));
    a1[8] = v4;
  }
  else if ( a3 != v7 )
  {
    a1[8] = a3;
  }
  result = a1[7];
  v9 = result + 24 * v4;
  v10 = 0;
  do
  {
    while ( v10 )
    {
      v12 = _mm_loadu_si128(a2);
      result += 24LL;
      --v10;
      a2 = (const __m128i *)((char *)a2 + 20);
      *(__m128i *)(result - 24) = v12;
      *(_DWORD *)(result - 8) = a2[-1].m128i_i32[3];
      if ( result >= v9 )
        return result;
    }
    v11 = a2->m128i_i32[0];
    *(_DWORD *)result = a2->m128i_i32[0];
    *(_DWORD *)(result + 4) = a2->m128i_i32[1];
    *(_QWORD *)(result + 8) = a2->m128i_u32[2];
    *(_DWORD *)(result + 16) = a2->m128i_i32[3];
    *(_BYTE *)(result + 22) = a2[1].m128i_i8[2];
    *(_BYTE *)(result + 23) = a2[1].m128i_i8[3];
    *(_WORD *)(result + 20) = a2[1].m128i_i16[0];
    if ( a4 )
    {
      if ( !v11 )
        *(_DWORD *)(result + 4) = _byteswap_ulong(a2->m128i_u32[1]);
      *(_QWORD *)(result + 8) = _byteswap_ulong(a2->m128i_u32[2]);
      *(_DWORD *)(result + 16) = _byteswap_ulong(a2->m128i_u32[3]);
      *(_WORD *)(result + 20) = __ROL2__(a2[1].m128i_i16[0], 8);
    }
    result += 24LL;
    v10 = a2[1].m128i_i8[3];
    a2 = (const __m128i *)((char *)a2 + 20);
  }
  while ( result < v9 );
  return result;
}
