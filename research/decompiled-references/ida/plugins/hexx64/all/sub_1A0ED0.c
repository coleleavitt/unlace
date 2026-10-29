unsigned __int64 __fastcall sub_1A0ED0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        signed int a5,
        unsigned int a6,
        unsigned int a7)
{
  __m128i v7; // xmm0
  signed int v8; // ebp
  _QWORD *v9; // rax
  __int64 i; // rdx
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 *v16; // [rsp+10h] [rbp-48h] BYREF
  __int128 v17; // [rsp+18h] [rbp-40h]
  unsigned __int64 v18; // [rsp+28h] [rbp-30h]

  v7 = _mm_cvtsi32_si128(a6);
  v8 = a4;
  v18 = __readfsqword(0x28u);
  *(_OWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = a3;
  *(__m128i *)(a1 + 48) = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(_mm_cvtsi32_si128(a4), _mm_cvtsi32_si128(a5)),
                            _mm_unpacklo_epi32(v7, _mm_cvtsi32_si128(a7)));
  if ( a5 != -1 )
  {
    sub_122B20((__int64 *)a1, *(_QWORD *)(a2 + 1440) + a5, (int)(a7 * a6));
    v8 = *(_DWORD *)(a1 + 48);
  }
  if ( v8 != -1 )
  {
    v9 = *(_QWORD **)(a1 + 40);
    for ( i = v8; (unsigned __int64)v8 < v9[1]; i = v8 )
    {
      v11 = *(_DWORD *)(*v9 + 4 * i);
      v15[0] = 0;
      v15[1] = 0;
      sub_63E80(v15, v11, a7, *(double *)v7.m128i_i64);
      v16 = nullptr;
      v17 = 0;
      sub_64280((__int64 *)a1, v15, *(double *)v7.m128i_i64);
      sub_316CB0((__int64 *)(a1 + 16), &v16, v12, v13);
      if ( v16 )
      {
        *(_QWORD *)&v17 = 0;
        qfree((__int64)v16);
      }
      ++v8;
      qfree(v15[0]);
      v9 = *(_QWORD **)(a1 + 40);
    }
  }
  return v18 - __readfsqword(0x28u);
}

