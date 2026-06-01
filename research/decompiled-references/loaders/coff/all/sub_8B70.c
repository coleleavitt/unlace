unsigned __int64 __fastcall sub_8B70(_QWORD *a1, const __m128i *a2, unsigned int a3, char a4)
{
  __int64 v4; // r13
  unsigned __int64 v8; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v10; // rdi
  __int8 v11; // dl
  __int32 v12; // edx
  _QWORD *v13; // rsi
  unsigned __int64 v14; // rdx
  __m128i v15; // xmm0
  unsigned __int64 *v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rax

  v4 = a3;
  v8 = a1[8];
  if ( v8 < a3 )
  {
    v17 = a1[7];
    if ( a1[9] < (unsigned __int64)a3 )
    {
      v18 = qvector_reserve(a1 + 7, v17, a3, 24);
      v8 = a1[8];
      a1[7] = v18;
      v17 = v18;
    }
    memset((void *)(v17 + 24 * v8), 0, 24 * (v4 - v8));
    a1[8] = v4;
  }
  else if ( a3 != v8 )
  {
    a1[8] = a3;
  }
  result = a1[7];
  v10 = result + 24 * v4;
  v11 = 0;
  do
  {
    while ( v11 )
    {
      v15 = _mm_loadu_si128(a2);
      result += 24LL;
      --v11;
      a2 = (const __m128i *)((char *)a2 + 20);
      *(__m128i *)(result - 24) = v15;
      *(_DWORD *)(result - 8) = a2[-1].m128i_i32[3];
      if ( result >= v10 )
        return result;
    }
    v12 = a2->m128i_i32[0];
    *(_DWORD *)result = a2->m128i_i32[0];
    *(_DWORD *)(result + 4) = a2->m128i_i32[1];
    *(_QWORD *)(result + 8) = a2->m128i_u32[2];
    *(_DWORD *)(result + 16) = a2->m128i_i32[3];
    *(_BYTE *)(result + 22) = a2[1].m128i_i8[2];
    *(_BYTE *)(result + 23) = a2[1].m128i_i8[3];
    *(_WORD *)(result + 20) = a2[1].m128i_i16[0];
    if ( a4 )
    {
      if ( !v12 )
        *(_DWORD *)(result + 4) = _byteswap_ulong(a2->m128i_u32[1]);
      *(_QWORD *)(result + 8) = _byteswap_ulong(a2->m128i_u32[2]);
      *(_DWORD *)(result + 16) = _byteswap_ulong(a2->m128i_u32[3]);
      *(_WORD *)(result + 20) = __ROL2__(a2[1].m128i_i16[0], 8);
    }
    v13 = *(_QWORD **)(*a1 + 141LL);
    v14 = a2->m128i_u32[3];
    if ( v14 < v13[1] && a2->m128i_i32[3] )
    {
      v16 = (unsigned __int64 *)(*v13 + 32 * v14);
      if ( !*v16 )
        *v16 = result;
    }
    result += 24LL;
    v11 = a2[1].m128i_i8[3];
    a2 = (const __m128i *)((char *)a2 + 20);
  }
  while ( result < v10 );
  return result;
}
