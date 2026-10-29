__int64 __fastcall sub_414790(
        __int64 a1,
        int a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        __int64 a5,
        unsigned __int8 a6,
        double a7,
        __m128 a8)
{
  unsigned int *v11; // rax
  unsigned int v14; // eax
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  char v17; // r9
  double v18; // xmm0_8
  unsigned __int8 v19[16]; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v20[11]; // [rsp+20h] [rbp-58h] BYREF

  v11 = *(unsigned int **)(a1 + 192);
  v20[3] = __readfsqword(0x28u);
  if ( *(unsigned int **)(a1 + 200) != v11 && sub_32ED40(*v11, 0) )
  {
    v14 = sub_138140(*(_QWORD **)(a1 + 16), *(int *)(a5 + 4), 1, a7);
    if ( v14 == -1 )
    {
      if ( !under_debugger )
        sub_383060(0xCE3Du, a7);
      BUG();
    }
    v15 = _mm_cvtsi32_si128(*(_DWORD *)(a5 + 4));
    v16 = _mm_cvtsi32_si128(v14);
    v17 = 1;
    *(_DWORD *)v19 = 1;
    *(_QWORD *)&v18 = _mm_unpacklo_epi32(v15, v16).m128i_u64[0];
    *(double *)&v19[4] = v18;
    if ( !a6 )
      v17 = a2 > 62;
    v20[0] = 0xFFFFFFFF00000000LL;
    v20[1] = 0;
    sub_4146E0((__int64 *)a1, 4, v19, (unsigned __int8 *)v20, (unsigned __int8 *)a5, v17, v18, (__m128)v16);
    sub_11CDA0((__int64)v20);
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 16LL);
    (*(void (__fastcall **)(__int64, _QWORD, unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, _QWORD))(*(_QWORD *)a1 + 64LL))(
      a1,
      (unsigned int)a2,
      a3,
      a4,
      v19,
      a6);
    sub_11CDA0((__int64)v19);
  }
  else
  {
    sub_4146E0((__int64 *)a1, a2, a3, a4, (unsigned __int8 *)a5, a6, a7, a8);
  }
  return *(_QWORD *)(a1 + 200);
}

