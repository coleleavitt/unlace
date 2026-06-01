__int64 __fastcall sub_62D90(const __m128i *a1, unsigned __int8 a2, int a3, int a4, int a5)
{
  unsigned __int64 v5; // rbx
  __int64 result; // rax
  _QWORD *v8; // r15
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rsi
  __m128i v13; // xmm0
  __int64 v14; // rax
  int v15; // [rsp+Ch] [rbp-2Ch]

  v5 = a1[1].m128i_i64[0] + a2;
  if ( __CFADD__(a1[1].m128i_i64[0], a2) )
    return 0;
  result = 0;
  if ( *(_QWORD *)(a1[2].m128i_i64[0] + 8) >= v5 )
  {
    v8 = (_QWORD *)a1->m128i_i64[1];
    v10 = v8[4];
    v11 = v8[3];
    if ( v8[5] < (unsigned __int64)(v10 + 1) )
    {
      v15 = a5;
      v14 = qvector_reserve();
      a5 = v15;
      v8[3] = v14;
      v11 = v14;
      v10 = v8[4];
    }
    v12 = 32 * v10 + v11;
    *(_QWORD *)(v12 + 16) = 0;
    *(_DWORD *)(v12 + 24) = -1;
    *(_OWORD *)v12 = -1;
    *(_BYTE *)(v12 + 28) = 0;
    ++v8[4];
    v13 = _mm_loadl_epi64(a1 + 1);
    *(_DWORD *)(v12 + 16) = a3;
    *(_DWORD *)(v12 + 24) = a4;
    *(_DWORD *)(v12 + 20) = a5;
    *(__m128i *)v12 = _mm_unpacklo_epi64(v13, (__m128i)v5);
    return 1;
  }
  return result;
}
