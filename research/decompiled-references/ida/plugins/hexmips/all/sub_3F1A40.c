__int64 __fastcall sub_3F1A40(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 *a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  unsigned __int64 v14; // rax
  __int64 v16; // rdx
  __int64 (__fastcall *v17)(__int64, __int32, double); // r8
  __int64 v18; // r9
  int v19; // r13d
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  unsigned int v22; // r15d
  __int64 v23; // rbx
  unsigned int v24; // eax
  unsigned __int64 v25; // xmm0_8
  __int64 v27; // rdx
  __int64 v28; // rax
  __m128i v29; // xmm0
  unsigned __int8 v30[24]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v31; // [rsp+18h] [rbp-40h]

  v14 = BYTE1(a1[5 * (int)a2 + 8]);
  v31 = __readfsqword(0x28u);
  if ( (unsigned __int8)v14 > 0xBu )
  {
    v17 = *(__int64 (__fastcall **)(__int64, __int32, double))(*a1 + 56LL);
    if ( v17 == sub_3EDDC0 )
      return 0;
    goto LABEL_23;
  }
  v16 = 2562;
  if ( _bittest64(&v16, v14) )
  {
    v24 = sub_3ED570((__int64)a1, a2, 0, *(double *)a6.m128_u64);
    if ( v24 == -1 )
    {
      if ( !under_debugger )
        sub_37E160(0xCD2Bu, *(double *)a6.m128_u64);
      BUG();
    }
    if ( *(_BYTE *)a3 == 1 && v24 == *(_DWORD *)(a3 + 8) )
    {
      v23 = 0;
    }
    else
    {
      v25 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a3 + 4)), _mm_cvtsi32_si128(v24)).m128i_u64[0];
      *(_DWORD *)v30 = 1;
      *(_QWORD *)&v30[4] = v25;
      v23 = sub_1D2090((__int64)a1, 4, (unsigned __int8 *)a3, nullptr, v30);
      sub_118BA0((__int64)v30);
    }
    goto LABEL_14;
  }
  v17 = *(__int64 (__fastcall **)(__int64, __int32, double))(*a1 + 56LL);
  if ( v17 != sub_3EDDC0 )
  {
LABEL_23:
    v19 = ((__int64 (__fastcall *)(_QWORD *, __int64, _QWORD))v17)(a1, a2, a4);
    goto LABEL_6;
  }
  if ( (unsigned __int8)(v14 - 6) > 1u && (unsigned __int8)(v14 - 2) > 2u )
    return 0;
  v19 = sub_3ED570((__int64)a1, a2, 1, *(double *)a6.m128_u64);
LABEL_6:
  if ( v19 == -1 )
    return 0;
  if ( *(_BYTE *)a3 == 1 )
  {
    v22 = *(_DWORD *)(a3 + 8);
  }
  else
  {
    v27 = a1[104];
    v28 = *(_QWORD *)(v27 + 760);
    if ( !v28 )
      sub_3E5460(*(double *)a6.m128_u64);
    v22 = *(_DWORD *)(*(_QWORD *)(v27 + 752) + 4 * v28 - 4);
    *(_QWORD *)(v27 + 760) = v28 - 1;
    v29 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 4));
    a8 = (__m128)_mm_cvtsi32_si128(v22);
    *(_DWORD *)v30 = 1;
    a6 = (__m128)_mm_unpacklo_epi32(v29, (__m128i)a8);
    *(_QWORD *)&v30[4] = a6.m128_u64[0];
    sub_1D2090((__int64)a1, 4, (unsigned __int8 *)a3, nullptr, v30);
    sub_118BA0((__int64)v30);
  }
  if ( !(unsigned __int8)sub_3F17D0(
                           (__int64)a1,
                           v22,
                           v19,
                           (char *)*(int *)(a3 + 4),
                           2,
                           v18,
                           a6,
                           a7,
                           a8,
                           a9,
                           v20,
                           v21,
                           a12,
                           a13) )
  {
    sub_3E8540(a1[104], v22);
    sub_3E8540(a1[104], v19);
    return 0;
  }
  v23 = *(_QWORD *)(a1[2] + 56LL);
LABEL_14:
  if ( a5 )
    *a5 = v23;
  return 1;
}

