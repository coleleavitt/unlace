__int64 __fastcall sub_1D1F30(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v6; // rax
  unsigned int *v8; // r13
  _QWORD *v9; // rax
  unsigned int v10; // r14d
  __int64 result; // rax
  unsigned int v12; // eax
  __m128i v13; // xmm2
  __m128i v14; // xmm0
  __int64 v15; // rbx
  unsigned int v16; // eax
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  unsigned __int8 v19[16]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int8 v20[24]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-30h]

  v6 = a1[100];
  v21 = __readfsqword(0x28u);
  v8 = *(unsigned int **)(v6 + 112);
  v9 = &a1[5 * (int)a2];
  if ( *((_BYTE *)v9 + 65) == 1 )
  {
    v16 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)v8 + 168LL))(
            v8,
            *((unsigned __int16 *)v9 + 35));
    v17 = _mm_cvtsi32_si128(v16);
    if ( *(_BYTE *)a3 == 1 && v16 == *(_DWORD *)(a3 + 8) )
    {
      v15 = 0;
    }
    else
    {
      v18 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 4));
      *(_DWORD *)v20 = 1;
      *(_QWORD *)&v20[4] = _mm_unpacklo_epi32(v18, v17).m128i_u64[0];
      v15 = sub_1D1DD0((__int64)a1, 4, (unsigned __int8 *)a3, nullptr, v20);
      sub_1188E0((__int64)v20);
    }
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 56LL))(a1, a2, 0);
    result = 0;
    if ( v10 == -1 )
      return result;
    v12 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)v8 + 32LL))(v8, v8[16]);
    v13 = _mm_cvtsi32_si128(v8[16]);
    *(_DWORD *)v19 = 1;
    *(_QWORD *)&v19[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v12), v13).m128i_u64[0];
    v14 = _mm_cvtsi32_si128(v8[21]);
    *(_DWORD *)v20 = 1;
    *(_QWORD *)&v20[4] = _mm_unpacklo_epi32(v14, _mm_cvtsi32_si128(v10)).m128i_u64[0];
    v15 = sub_1D1DD0((__int64)a1, 1, (unsigned __int8 *)a3, v19, v20);
    sub_1188E0((__int64)v20);
    sub_1188E0((__int64)v19);
  }
  if ( a5 )
    *a5 = v15;
  return 1;
}

