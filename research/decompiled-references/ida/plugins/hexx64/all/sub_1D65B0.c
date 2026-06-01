__int64 __fastcall sub_1D65B0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        double a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v9; // rax
  unsigned int *v11; // r13
  _QWORD *v12; // rax
  unsigned int v13; // r14d
  __int64 result; // rax
  unsigned int v15; // eax
  __m128 v16; // xmm2
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  __int64 v19; // rbx
  unsigned int v20; // eax
  __m128i v21; // xmm0
  __m128i v22; // xmm1
  __m128 v23; // xmm1
  unsigned __int8 v24[16]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int8 v25[24]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-30h]

  v9 = a1[100];
  v26 = __readfsqword(0x28u);
  v11 = *(unsigned int **)(v9 + 112);
  v12 = &a1[5 * (int)a2];
  if ( *((_BYTE *)v12 + 65) == 1 )
  {
    v20 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)v11 + 168LL))(
            v11,
            *((unsigned __int16 *)v12 + 35));
    v21 = _mm_cvtsi32_si128(v20);
    if ( *(_BYTE *)a3 == 1 && v20 == *(_DWORD *)(a3 + 8) )
    {
      v19 = 0;
    }
    else
    {
      v22 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 4));
      *(_DWORD *)v25 = 1;
      v23 = (__m128)_mm_unpacklo_epi32(v22, v21);
      *(_QWORD *)&v25[4] = v23.m128_u64[0];
      v19 = sub_1D6450((__int64)a1, 4, (unsigned __int8 *)a3, nullptr, v25, v21, v23, a8);
      sub_11CDA0((__int64)v25);
    }
  }
  else
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 56LL))(a1, a2, 0);
    result = 0;
    if ( v13 == -1 )
      return result;
    v15 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)v11 + 32LL))(v11, v11[16]);
    v16 = (__m128)_mm_cvtsi32_si128(v11[16]);
    *(_DWORD *)v24 = 1;
    *(_QWORD *)&v24[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), (__m128i)v16).m128i_u64[0];
    v17 = _mm_cvtsi32_si128(v11[21]);
    *(_DWORD *)v25 = 1;
    v18 = _mm_unpacklo_epi32(v17, _mm_cvtsi32_si128(v13));
    *(_QWORD *)&v25[4] = v18.m128i_i64[0];
    v19 = sub_1D6450((__int64)a1, 1, (unsigned __int8 *)a3, v24, v25, v18, a7, v16);
    sub_11CDA0((__int64)v25);
    sub_11CDA0((__int64)v24);
  }
  if ( a5 )
    *a5 = v19;
  return 1;
}

