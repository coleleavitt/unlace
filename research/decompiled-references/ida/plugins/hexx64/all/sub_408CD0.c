unsigned __int64 __fastcall sub_408CD0(__int64 a1, __int64 a2, __int64 a3, double a4, double a5, __m128 a6)
{
  __m128 *v6; // rax
  char *v7; // rbx
  __m128 si128; // xmm1
  __m128i v9; // xmm0
  __m128 v10; // xmm1
  double v11; // xmm0_8
  __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  char v20; // al
  __int64 v21; // [rsp+18h] [rbp-118h] BYREF
  __int64 v22[2]; // [rsp+20h] [rbp-110h] BYREF
  __int64 v23; // [rsp+30h] [rbp-100h] BYREF
  __int128 v24; // [rsp+38h] [rbp-F8h]
  _BYTE v25[84]; // [rsp+50h] [rbp-E0h] BYREF
  double v26; // [rsp+A4h] [rbp-8Ch]
  char v27; // [rsp+F0h] [rbp-40h] BYREF
  unsigned __int64 v28; // [rsp+F8h] [rbp-38h]

  v6 = (__m128 *)v25;
  v7 = &v27;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_4247F0);
  v28 = __readfsqword(0x28u);
  v24 = 0;
  v22[0] = 0;
  v22[1] = 0;
  v23 = 0;
  do
  {
    v6->m128_i32[1] = -1;
    v6 += 5;
    v6[-5].m128_i16[0] = 0;
    v6[-5].m128_i16[1] = 0;
    v6[-5].m128_u64[1] = 0;
    v6[-4] = si128;
    v6[-3].m128_u64[0] = 0;
    *(__m128 *)((char *)&v6[-3] + 8) = 0;
    v6[-2].m128_i32[2] = 0;
    v6[-1].m128_u64[0] = 0;
    v6[-1].m128_i32[2] = 0;
  }
  while ( v6 != (__m128 *)&v27 );
  sub_3FAC20(a1, (__int64)v25, 57, a3, v22, (__m128i)0LL, si128, a6);
  v9 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL));
  if ( !*(_BYTE *)(a2 + 16) )
  {
    v20 = sub_3FACB0(a2, v9, si128, a6);
    v9 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v9));
    if ( !v20 )
      sub_3EB430(*(double *)v9.m128i_i64);
  }
  v10 = (__m128)_mm_cvtsi32_si128(*(_DWORD *)(a2 + 12));
  v25[80] = 1;
  *(_QWORD *)&v11 = _mm_unpacklo_epi32(v9, (__m128i)v10).m128i_u64[0];
  v26 = v11;
  copy_tinfo_t();
  clear_tinfo_t();
  v21 = 0;
  v12 = sub_335B10(
          *(_QWORD *)(a1 + 8),
          *(_QWORD *)(a1 + 40),
          (__int64)"__FBSTP__",
          (__int64)&v21,
          2,
          (__int64)v25,
          v11,
          v10,
          1);
  clear_tinfo_t();
  v13 = *(_QWORD *)(v12 + 72);
  *(_DWORD *)(v13 + 280) |= 0x10u;
  sub_64280((__int64 *)(v13 + 136), v22, v11);
  sub_316CB0((__int64 *)(v13 + 152), (const void **)&v23, v14, v15);
  sub_316CB0((__int64 *)(v13 + 216), (const void **)&v23, v16, v17);
  sub_B5290(*(_QWORD **)(a1 + 16), v12, v11);
  *(_DWORD *)(*(_QWORD *)(a1 + 800) + 1416LL) |= 1u;
  do
  {
    v7 -= 80;
    cleanup_argloc();
    v18 = *((_QWORD *)v7 + 4);
    if ( v18 )
    {
      *((_QWORD *)v7 + 5) = 0;
      qfree(v18);
    }
    clear_tinfo_t();
    sub_11CDA0((__int64)v7);
  }
  while ( v7 != v25 );
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23);
  }
  qfree(v22[0]);
  return v28 - __readfsqword(0x28u);
}

