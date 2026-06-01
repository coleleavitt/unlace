__int64 __fastcall sub_1A1D0(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        __m128i a5,
        __m128i a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int128 a11,
        __int128 a12)
{
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // edx
  __int128 v20; // xmm0
  const char *v23; // rdx
  _QWORD *v24; // r12
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rbx
  const char *v28; // r12
  __m128i v29; // xmm1
  __int64 v30; // rdi
  const char *v31; // rdi
  const char *v32; // rbp
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // xmm0_8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __m128i v42; // [rsp+20h] [rbp-78h] BYREF
  const char *v43; // [rsp+30h] [rbp-68h] BYREF
  __m128i v44; // [rsp+38h] [rbp-60h] BYREF
  __m128i v45; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v46; // [rsp+68h] [rbp-30h]

  v46 = __readfsqword(0x28u);
  v13 = sub_BB20();
  v14 = sub_A170(v13);
  if ( v14 == 15 )
  {
    if ( (*(_BYTE *)(*a1 + 108) & 2) != 0 )
    {
      sub_10160(
        (__int64)&v43,
        a2,
        v15,
        v16,
        v17,
        v18,
        (__int128)_mm_loadu_si128((const __m128i *)&a11),
        (__int128)_mm_loadu_si128((const __m128i *)&a12));
      v23 = s1;
      if ( v44.m128i_i64[0] )
        v23 = v43;
      sub_7470((__int64)"%-12s %s\n", "ivar", v23);
      if ( v43 )
      {
        v44.m128i_i64[0] = 0;
        qfree(v43);
      }
    }
    v24 = (_QWORD *)a1[1];
    v25 = v24[5];
    v26 = v24[4];
    if ( v24[6] < (unsigned __int64)(v25 + 1) )
    {
      v41 = qvector_reserve(v24 + 4, v26, v25 + 1, 144);
      v24[4] = v41;
      v26 = v41;
      v25 = v24[5];
    }
    v27 = v26 + 144 * v25;
    *(_OWORD *)v27 = 0;
    *(_OWORD *)(v27 + 24) = 0;
    *(_OWORD *)(v27 + 48) = 0;
    *(_OWORD *)(v27 + 64) = 0;
    *(_QWORD *)(v27 + 16) = 0;
    *(_QWORD *)(v27 + 40) = 0;
    *(_QWORD *)(v27 + 112) = 1;
    *(_DWORD *)(v27 + 120) = -1;
    *(_QWORD *)(v27 + 128) = 0;
    *(_BYTE *)(v27 + 136) = 0;
    ++v24[5];
    sub_C260((__int64)&v43);
    v28 = v43;
    v29 = _mm_loadu_si128(&v44);
    v43 = nullptr;
    v44 = 0;
    v30 = *(_QWORD *)(v27 + 16);
    if ( v30 )
    {
      *(_QWORD *)(v27 + 24) = 0;
      v42 = v29;
      qfree(v30);
      v31 = v43;
      v29 = _mm_load_si128(&v42);
      *(_QWORD *)(v27 + 16) = v28;
      *(__m128i *)(v27 + 24) = v29;
      if ( v31 )
      {
        v44.m128i_i64[0] = 0;
        qfree(v31);
      }
    }
    else
    {
      *(_QWORD *)(v27 + 16) = v28;
      *(__m128i *)(v27 + 24) = v29;
    }
    v32 = (const char *)*a1;
    v33 = sub_BB20();
    sub_A290((__int64)&v45, v33, v34, v35);
    v36 = _mm_load_si128(&v45).m128i_u64[0];
    return (unsigned __int8)sub_138E0((_QWORD *)(v27 + 64), v32, v37, v38, v39, v40, *(double *)&v36, v29, a5, a6, v36);
  }
  v19 = 1;
  if ( (unsigned int)(v14 - 16) <= 1 )
  {
    v20 = (__int128)_mm_loadu_si128((const __m128i *)&a12);
    return (unsigned __int8)sub_19780(
                              a1[1],
                              (const char *)*a1,
                              1,
                              v16,
                              v17,
                              v18,
                              *(double *)&v20,
                              a4,
                              a5,
                              a6,
                              (__int128)_mm_loadu_si128((const __m128i *)&a11),
                              v20);
  }
  return v19;
}
