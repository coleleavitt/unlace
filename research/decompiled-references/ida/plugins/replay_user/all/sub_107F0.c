__int64 __fastcall sub_107F0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // eax
  unsigned int v7; // ebp
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebp
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rsi
  __int16 v17; // r12
  __m128i v18; // xmm0
  __m128i v19; // xmm1
  __int64 v20; // rax
  __int16 v21; // r12
  __m128i v22; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v23[7]; // [rsp+10h] [rbp-38h] BYREF

  v6 = *(_DWORD *)(a1 + 1032);
  v23[3] = __readfsqword(0x28u);
  v7 = -1;
  if ( v6 > 0 && (unsigned __int8)sub_10780(a1, (__int64)v23, 0, a4, a5, a6) )
  {
    v12 = 0;
    if ( LODWORD(v23[0]) == 5 )
    {
      callui(
        1138,
        *(unsigned int *)(a1 + 1032),
        a2,
        &callui,
        v10,
        v11,
        v22.m128i_i64[0],
        v22.m128i_i64[1],
        v23[0],
        v23[1]);
    }
    else
    {
      while ( v12 < (int)get_segm_qty() )
      {
        v15 = getnseg();
        v16 = *a2;
        v17 = *(_WORD *)(v15 + 42);
        v18 = _mm_loadl_epi64((const __m128i *)v15);
        v19 = _mm_loadl_epi64((const __m128i *)(v15 + 8));
        v20 = a2[1];
        v21 = __ROL2__(v17, 8);
        if ( a2[2] < (unsigned __int64)(v20 + 1) )
        {
          v22.m128i_i64[1] = v19.m128i_i64[0];
          v22.m128i_i64[0] = v18.m128i_i64[0];
          v13 = qvector_reserve();
          v19 = _mm_loadl_epi64((const __m128i *)&v22.m128i_u64[1]);
          v18 = _mm_loadl_epi64(&v22);
          *a2 = v13;
          v16 = v13;
          v20 = a2[1];
        }
        ++v12;
        v14 = 80 * v20 + v16;
        *(_QWORD *)(v14 + 16) = 0;
        *(_QWORD *)(v14 + 40) = 0;
        *(_QWORD *)(v14 + 64) = 0;
        *(_WORD *)(v14 + 72) = v21;
        *(__m128i *)v14 = _mm_unpacklo_epi64(v18, v19);
        *(_OWORD *)(v14 + 24) = 0;
        *(_OWORD *)(v14 + 48) = 0;
        ++a2[1];
      }
    }
    return 1;
  }
  return v7;
}

