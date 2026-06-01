__int64 __fastcall sub_15ED0(
        __int64 *a1,
        __int64 a2,
        char a3,
        double a4,
        double a5,
        __m128i a6,
        __m128i a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int128 a11,
        __int128 a12)
{
  unsigned int v14; // ebp
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  const char *v21; // rdi
  __m128i v22; // xmm0
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // xmm0_8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 result; // rax
  __int64 v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // rsi
  __int64 v42; // r15
  const char *v43; // r13
  __m128i v44; // xmm0
  __int64 v45; // rdi
  __int64 v46; // rax
  const char *v47; // rdx
  __m128i v48; // [rsp+30h] [rbp-C8h] BYREF
  __m128i *v49; // [rsp+40h] [rbp-B8h]
  int v50; // [rsp+4Ch] [rbp-ACh]
  const char *v51; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v52; // [rsp+58h] [rbp-A0h] BYREF
  __m128i v53; // [rsp+70h] [rbp-88h] BYREF
  __m128i v54; // [rsp+90h] [rbp-68h] BYREF
  __m128i v55; // [rsp+A0h] [rbp-58h] BYREF
  unsigned __int64 v56; // [rsp+B8h] [rbp-40h]

  v14 = 0;
  v56 = __readfsqword(0x28u);
  v16 = sub_BB20();
  v50 = sub_B640(
          v16,
          a2,
          v17,
          v18,
          v19,
          v20,
          (__int128)_mm_loadu_si128((const __m128i *)&a11),
          (__int128)_mm_loadu_si128((const __m128i *)&a12));
  v49 = &v54;
  if ( v50 <= 0 )
    return 1;
  while ( 1 )
  {
    v32 = sub_BB20();
    sub_B670(
      (__int64)v49,
      v32,
      v14,
      v33,
      v34,
      v35,
      (__int128)_mm_loadu_si128((const __m128i *)&a11),
      (__int128)_mm_loadu_si128((const __m128i *)&a12));
    if ( !a3 && (*(_BYTE *)(a2 + 108) & 2) != 0 )
    {
      sub_10160((__int64)&v51, v32, v36, v37, v38, v39, (__int128)_mm_load_si128(&v54), (__int128)_mm_load_si128(&v55));
      v47 = s1;
      if ( v52.m128i_i64[0] )
        v47 = v51;
      sub_7470((__int64)"%-12s %s\n", "param", v47);
      if ( v51 )
      {
        v52.m128i_i64[0] = 0;
        qfree(v51);
      }
    }
    v40 = a1[1];
    v41 = *a1;
    if ( a1[2] < (unsigned __int64)(v40 + 1) )
    {
      v46 = qvector_reserve(a1, v41, v40 + 1, 80);
      v40 = a1[1];
      *a1 = v46;
      v41 = v46;
    }
    v42 = v41 + 80 * v40;
    *(_OWORD *)(v42 + 24) = 0;
    *(_OWORD *)(v42 + 48) = 0;
    *(_DWORD *)v42 = 0;
    *(_QWORD *)(v42 + 8) = 0;
    *(_QWORD *)(v42 + 16) = 0;
    *(_QWORD *)(v42 + 40) = 0;
    *(_QWORD *)(v42 + 64) = 0;
    *(_DWORD *)(v42 + 72) = 0;
    ++a1[1];
    sub_C260((__int64)&v51);
    v43 = v51;
    v44 = _mm_loadu_si128(&v52);
    v51 = nullptr;
    v52 = 0;
    v45 = *(_QWORD *)(v42 + 16);
    if ( v45 )
    {
      *(_QWORD *)(v42 + 24) = 0;
      v48 = v44;
      qfree(v45);
      v21 = v51;
      v22 = _mm_load_si128(&v48);
      *(_QWORD *)(v42 + 16) = v43;
      *(__m128i *)(v42 + 24) = v22;
      if ( v21 )
      {
        v52.m128i_i64[0] = 0;
        qfree(v21);
      }
    }
    else
    {
      *(_QWORD *)(v42 + 16) = v43;
      *(__m128i *)(v42 + 24) = v44;
    }
    v23 = sub_BB20();
    sub_A290((__int64)&v53, v23, v24, v25);
    v26 = _mm_load_si128(&v53).m128i_u64[0];
    result = sub_138E0(
               (_QWORD *)(v42 + 64),
               (const char *)a2,
               v27,
               v28,
               v29,
               v30,
               *(double *)&v26,
               (__m128i)0LL,
               a6,
               a7,
               v26);
    if ( !(_BYTE)result )
      break;
    if ( v50 == ++v14 )
      return 1;
  }
  return result;
}

