__int64 __fastcall sub_173C0(
        __int64 *a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128i a8,
        __m128i a9,
        __m128i a10,
        const __m128i a11,
        __int128 a12)
{
  __int64 v12; // r12
  __int64 v13; // rbp
  const char *v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  const char *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // rsi
  unsigned __int64 v31; // xmm0_8
  __m128i v32; // xmm0
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // xmm0_8
  __int64 result; // rax
  __int128 v41; // xmm0
  __int64 v42; // rax
  const char *v43; // [rsp+30h] [rbp-98h] BYREF
  __int64 v44; // [rsp+38h] [rbp-90h]
  __m128i v45[4]; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v46; // [rsp+98h] [rbp-30h]

  v12 = *a1;
  v46 = __readfsqword(0x28u);
  v13 = a1[1];
  if ( (*(_BYTE *)(v12 + 108) & 2) != 0 )
  {
    sub_10160(
      (__int64)&v43,
      (__int64)a2,
      a3,
      a4,
      a5,
      a6,
      (__int128)_mm_loadu_si128(&a11),
      (__int128)_mm_loadu_si128((const __m128i *)&a12));
    v14 = s1;
    if ( v44 )
      v14 = v43;
    a2 = "cppobj";
    sub_7470((__int64)"%-12s %s\n", "cppobj", v14);
    if ( v43 )
    {
      v44 = 0;
      qfree(v43);
    }
  }
  v15 = sub_BB20();
  v16 = sub_A170(v15);
  if ( v16 <= 0x1A )
  {
    if ( v16 > 0x17 || v16 == 21 )
    {
      v41 = (__int128)_mm_loadu_si128((const __m128i *)&a12);
      LOBYTE(result) = sub_161F0(
                         v13,
                         (const char *)v12,
                         v17,
                         v18,
                         v19,
                         v20,
                         *(double *)&v41,
                         a8,
                         a9,
                         a10,
                         (__int128)_mm_loadu_si128(&a11),
                         v41);
LABEL_21:
      *(_DWORD *)(v13 + 76) |= 0x80u;
      return (unsigned __int8)result;
    }
    goto LABEL_24;
  }
  if ( v16 != 44 )
  {
LABEL_24:
    if ( (*(_BYTE *)(v12 + 108) & 2) != 0 )
      sub_7470((__int64)"%-12s SKIP\n", "cppobj");
    return 1;
  }
  v21 = (__int128)_mm_loadu_si128(&a11);
  v22 = (__int128)_mm_loadu_si128((const __m128i *)&a12);
  v45[2] = (__m128i)v21;
  v45[3] = (__m128i)v22;
  if ( (*(_BYTE *)(v12 + 108) & 2) != 0 )
  {
    sub_10160((__int64)&v43, (__int64)a2, v17, v18, v19, v20, v21, v22);
    v23 = s1;
    if ( v44 )
      v23 = v43;
    sub_7470((__int64)"%-12s %s\n", "base", v23);
    if ( v43 )
    {
      v44 = 0;
      qfree(v43);
    }
  }
  v24 = sub_BB20();
  sub_A290((__int64)v45, v24, v25, v26);
  v27 = sub_BB20();
  v28 = sub_AD40(v27);
  if ( v28 >= 0 )
  {
    v29 = *(_QWORD *)(v13 + 40);
    v30 = *(_QWORD *)(v13 + 32);
    v31 = 0;
    if ( v29 )
    {
      v32 = _mm_loadu_si128((const __m128i *)(v30 + 144 * v29 - 144));
      v31 = _mm_add_epi64(v32, _mm_srli_si128(v32, 8)).m128i_u64[0];
    }
    if ( *(_QWORD *)(v13 + 48) < (unsigned __int64)(v29 + 1) )
    {
      v42 = qvector_reserve(v13 + 32, v30, v29 + 1, 144);
      *(_QWORD *)(v13 + 32) = v42;
      v30 = v42;
      v29 = *(_QWORD *)(v13 + 40);
    }
    v33 = v30 + 144 * v29;
    *(_OWORD *)v33 = 0;
    *(_QWORD *)(v33 + 128) = 0;
    *(_OWORD *)(v33 + 24) = 0;
    *(_OWORD *)(v33 + 48) = 0;
    *(_OWORD *)(v33 + 64) = 0;
    *(_QWORD *)(v33 + 16) = 0;
    *(_QWORD *)(v33 + 40) = 0;
    *(_QWORD *)(v33 + 112) = 1;
    *(_DWORD *)(v33 + 120) = -1;
    *(_BYTE *)(v33 + 136) = 0;
    ++*(_QWORD *)(v13 + 40);
    *(_DWORD *)(v33 + 132) |= 0x20u;
    *(_QWORD *)(v33 + 8) = 8 * v28;
    *(_QWORD *)v33 = v31;
    v34 = sub_BB20();
    if ( (unsigned int)sub_B5E0(v34) )
      *(_DWORD *)(v33 + 132) |= 0x80u;
    v39 = _mm_load_si128(v45).m128i_u64[0];
    LOBYTE(result) = sub_138E0(
                       (_QWORD *)(v33 + 64),
                       (const char *)v12,
                       v35,
                       v36,
                       v37,
                       v38,
                       *(double *)&v39,
                       (__m128i)0LL,
                       a9,
                       a10,
                       v39);
    goto LABEL_21;
  }
  *(_DWORD *)(v13 + 76) |= 0x80u;
  return 1;
}
