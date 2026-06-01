__int64 __fastcall sub_12B60(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // rax
  int *v7; // r13
  unsigned int v8; // r12d
  __int64 v9; // rsi
  int v10; // edx
  __int64 v11; // r13
  unsigned __int64 v12; // r12
  unsigned int *v13; // r14
  __m128i v14; // xmm0
  void (__fastcall *hexdsp)(__int64, __int64, _QWORD); // rax
  void (__fastcall *v17)(__int64, __int64, _QWORD); // rax
  __int64 v18; // r12
  unsigned int v19; // eax
  __int64 v20; // rdi
  bool v21; // dl
  __m128i v22; // xmm0
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // r9
  __int64 v31; // rax
  __m128i *v32; // r10
  __int64 v33; // rdi
  __int64 v34; // r11
  __int64 v35; // r9
  __int64 v36; // rax
  unsigned __int64 v37; // r15
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // rdx
  __int64 *v40; // rax
  __int64 v41; // r15
  char v42; // al
  _QWORD *v43; // r15
  void *v44; // rdi
  _QWORD *v45; // rbx
  void *v46; // rdi
  __int64 v47; // rdi
  __int64 v48; // rax
  unsigned __int64 v49; // r15
  unsigned __int64 v50; // r8
  unsigned __int64 v51; // rsi
  _QWORD *v52; // rax
  __int64 v53; // rsi
  const __m128i *v54; // rdi
  __int64 v55; // rax
  unsigned __int64 v56; // rdx
  __m128i v57; // xmm0
  bool v58; // cf
  __int64 v59; // rax
  __int64 v60; // rsi
  const __m128i *v61; // rdi
  __int64 v62; // rax
  unsigned __int64 v63; // rdx
  __m128i v64; // xmm0
  __m128i v65; // xmm0
  bool v66; // zf
  __m128i v67; // xmm0
  __m128i v68; // xmm0
  __int64 v69; // rdx
  const __m128i *v70; // rdi
  __int64 v71; // rax
  unsigned __int64 v72; // rsi
  __m128i v73; // xmm0
  __int64 v74; // rax
  __int64 v75; // rsi
  const __m128i *v76; // rdi
  __int64 v77; // rax
  unsigned __int64 v78; // rdx
  __m128i v79; // xmm0
  __int64 v80; // [rsp+10h] [rbp-160h]
  __int64 v81; // [rsp+10h] [rbp-160h]
  __int64 v82; // [rsp+18h] [rbp-158h]
  __int64 v83; // [rsp+20h] [rbp-150h]
  __int64 v84; // [rsp+20h] [rbp-150h]
  __int64 v85; // [rsp+20h] [rbp-150h]
  __int64 v86; // [rsp+20h] [rbp-150h]
  unsigned int v87; // [rsp+2Ch] [rbp-144h]
  __int64 v88; // [rsp+40h] [rbp-130h]
  __int64 v90; // [rsp+50h] [rbp-120h]
  _QWORD *v91; // [rsp+58h] [rbp-118h]
  __int64 v94; // [rsp+80h] [rbp-F0h]
  unsigned int v95; // [rsp+88h] [rbp-E8h]
  int v96; // [rsp+8Ch] [rbp-E4h]
  unsigned int v97; // [rsp+8Ch] [rbp-E4h]
  __int64 v98; // [rsp+90h] [rbp-E0h] BYREF
  __m128i v99; // [rsp+98h] [rbp-D8h] BYREF
  char v100; // [rsp+A8h] [rbp-C8h]
  __m128i v101; // [rsp+B0h] [rbp-C0h] BYREF
  char v102; // [rsp+C8h] [rbp-A8h]
  void *v103; // [rsp+D0h] [rbp-A0h] BYREF
  unsigned int v104; // [rsp+D8h] [rbp-98h]
  unsigned int v105; // [rsp+DCh] [rbp-94h]
  char v106; // [rsp+E0h] [rbp-90h]
  bool v107; // [rsp+E1h] [rbp-8Fh]
  __int64 v108; // [rsp+E8h] [rbp-88h]
  __m128i v109; // [rsp+F0h] [rbp-80h] BYREF
  void *s; // [rsp+100h] [rbp-70h] BYREF
  void *v111[2]; // [rsp+108h] [rbp-68h] BYREF
  __int64 v112; // [rsp+118h] [rbp-58h]
  __int64 v113; // [rsp+120h] [rbp-50h]
  __m128i v114; // [rsp+128h] [rbp-48h] BYREF
  unsigned __int64 v115; // [rsp+138h] [rbp-38h]

  v115 = __readfsqword(0x28u);
  v4 = a2[61];
  if ( !(_DWORD)v4 )
    goto LABEL_14;
  if ( (int)v4 <= 0 )
  {
    v10 = 0x7FFFFFFF;
    v91 = a2 + 74;
    v87 = v4 - 1;
    if ( (int)v4 - 1 >= 0 )
    {
LABEL_7:
      v11 = 40LL * v10;
      v12 = 40 * (v10 - (unsigned __int64)v87);
      while ( 1 )
      {
        v13 = (unsigned int *)(v11 + a2[60]);
        v97 = v13[1];
        if ( (unsigned __int8)sub_26340(v91, *v13) )
        {
          sub_112E0((__int64)&s, (__int64)a2, a3, a4, v97 + 2, v13[2] + 1, v97 + 1);
          if ( (_BYTE)v112 )
            break;
        }
        if ( v12 == v11 )
          goto LABEL_14;
        v11 -= 40;
      }
      v14 = _mm_loadu_si128((const __m128i *)v111);
      *(_QWORD *)a1 = s;
      *(_BYTE *)(a1 + 24) = 1;
      *(__m128i *)(a1 + 8) = v14;
      return a1;
    }
LABEL_14:
    *(_BYTE *)a1 = 1;
    *(_BYTE *)(a1 + 24) = 0;
    return a1;
  }
  v94 = 0;
  v6 = (unsigned int)(v4 - 1);
  v87 = v6;
  v90 = 8 * (5 * v6 + 5);
  v91 = a2 + 74;
  while ( 1 )
  {
    v7 = (int *)(a2[60] + v94);
    v8 = v7[1];
    v96 = *v7;
    v9 = (unsigned int)*v7;
    if ( (unsigned __int8)sub_26340(v91, v9) )
      break;
LABEL_5:
    v94 += 40;
    if ( v90 == v94 )
    {
      v10 = v87;
      goto LABEL_7;
    }
  }
  v95 = v8 + 1;
  hexdsp = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(v91, v9);
  hexdsp(205, a4, (unsigned int)v96);
  v17 = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(205, a4);
  v17(205, a4, v8 + 1);
  v18 = a2[57] + 32LL * v96;
  sub_51660(&v103, v96, v7);
  v19 = *(_DWORD *)(v18 + 8);
  LODWORD(s) = v96;
  v105 = v19;
  v20 = v108;
  v21 = v19 == -1;
  v111[0] = v103;
  v111[1] = (void *)_mm_unpacklo_epi32(_mm_cvtsi32_si128(v104), _mm_cvtsi32_si128(v19)).m128i_u64[0];
  v22 = _mm_load_si128(&v109);
  LOBYTE(v112) = v106;
  v23 = a2[131];
  v24 = (__int64)(a2 + 130);
  v114 = v22;
  v107 = v21;
  BYTE1(v112) = v21;
  v113 = v108;
  v108 = 0;
  v109 = 0;
  if ( !v23 )
    goto LABEL_23;
  do
  {
    while ( 1 )
    {
      v25 = *(_QWORD *)(v23 + 16);
      v26 = *(_QWORD *)(v23 + 24);
      if ( v96 > *(_DWORD *)(v23 + 32) )
        break;
      v24 = v23;
      v23 = *(_QWORD *)(v23 + 16);
      if ( !v25 )
        goto LABEL_21;
    }
    v23 = *(_QWORD *)(v23 + 24);
  }
  while ( v26 );
LABEL_21:
  if ( a2 + 130 == (_QWORD *)v24 || v96 < *(_DWORD *)(v24 + 32) )
  {
LABEL_23:
    v27 = sub_11100(a2 + 129, v24, (__int64)&s);
    v20 = v113;
    v24 = v27;
  }
  if ( v20 )
    qfree(v20);
  v28 = *((_QWORD *)v7 + 3);
  if ( (int)v28 <= 0 )
  {
LABEL_80:
    if ( v108 )
    {
      v109.m128i_i64[0] = 0;
      qfree(v108);
    }
    goto LABEL_5;
  }
  v29 = 0;
  v88 = (unsigned int)(v28 - 1);
  while ( 1 )
  {
    v30 = *((_QWORD *)v7 + 2) + 72 * v29;
    if ( *(_QWORD *)(v30 + 8) == -1 )
    {
      sub_64B50(
        (unsigned int)&s,
        a2[4],
        (unsigned int)"inline_catch_handlers [%d,%d) handlers[%d].handler_ea == BADADDR",
        v96,
        v95,
        v29);
      v67 = _mm_loadu_si128((const __m128i *)v111);
      *(_QWORD *)a1 = s;
      *(_BYTE *)(a1 + 24) = 1;
      *(__m128i *)(a1 + 8) = v67;
      goto LABEL_56;
    }
    v111[0] = &dword_0 + 1;
    s = &v114.m128i_u64[1];
    v111[1] = nullptr;
    v112 = 0;
    LODWORD(v113) = 1065353216;
    v114 = 0u;
    sub_11D20((__int64)&v98, (__int64)a2, a3, v96, v95, v30, (__int64)&s);
    if ( v100 )
    {
      v68 = _mm_loadu_si128(&v99);
      *(_QWORD *)a1 = v98;
      *(_BYTE *)(a1 + 24) = 1;
      *(__m128i *)(a1 + 8) = v68;
      goto LABEL_52;
    }
    if ( (_DWORD)v98 == 1 )
    {
      v101 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
      v47 = v24 + 64;
      v48 = *(_QWORD *)(v24 + 72);
      v49 = *(_QWORD *)(v24 + 64);
      v50 = *(_QWORD *)(v24 + 80);
      v51 = v48 + 1;
      if ( (unsigned __int64)&v101 < v49 || (unsigned __int64)&v101 >= v49 + 16 * v50 )
      {
        if ( v50 < v51 )
        {
          v84 = *(_QWORD *)(v24 + 80);
          v49 = qvector_reserve(v47, 0, v48 + 1, 16);
          v59 = *(_QWORD *)(v24 + 72);
          v60 = *(_QWORD *)(v24 + 80);
          v61 = *(const __m128i **)(v24 + 64);
          *(_QWORD *)(v24 + 80) = v84;
          v62 = v59 - 1;
          if ( v62 >= 0 )
          {
            v63 = v49;
            do
            {
              v64 = _mm_loadu_si128(v61);
              v63 += 16LL;
              ++v61;
              *(__m128i *)(v63 - 16) = v64;
              v58 = v62-- == 0;
            }
            while ( !v58 );
            v61 = *(const __m128i **)(v24 + 64);
          }
          qfree(v61);
          v48 = *(_QWORD *)(v24 + 72);
          *(_QWORD *)(v24 + 64) = v49;
          *(_QWORD *)(v24 + 80) = v60;
        }
        *(__m128i *)(v49 + 16 * v48) = _mm_load_si128(&v101);
      }
      else
      {
        if ( v50 < v51 )
        {
          v86 = *(_QWORD *)(v24 + 80);
          v49 = qvector_reserve(v47, 0, v48 + 1, 16);
          v74 = *(_QWORD *)(v24 + 72);
          v75 = *(_QWORD *)(v24 + 80);
          v76 = *(const __m128i **)(v24 + 64);
          *(_QWORD *)(v24 + 80) = v86;
          v77 = v74 - 1;
          if ( v77 >= 0 )
          {
            v78 = v49;
            do
            {
              v79 = _mm_loadu_si128(v76);
              v78 += 16LL;
              ++v76;
              *(__m128i *)(v78 - 16) = v79;
              v58 = v77-- == 0;
            }
            while ( !v58 );
            v76 = *(const __m128i **)(v24 + 64);
          }
          qfree(v76);
          v48 = *(_QWORD *)(v24 + 72);
          *(_QWORD *)(v24 + 64) = v49;
          *(_QWORD *)(v24 + 80) = v75;
        }
        v52 = (_QWORD *)(v49 + 16 * v48);
        *v52 = -1;
        v52[1] = 0;
      }
      ++*(_QWORD *)(v24 + 72);
      v42 = v100;
      goto LABEL_42;
    }
    if ( (_DWORD)v98 == 2 )
    {
      *(_BYTE *)a1 = 0;
      *(_BYTE *)(a1 + 24) = 0;
      goto LABEL_52;
    }
    if ( !(_DWORD)v98 )
      break;
LABEL_45:
    v43 = v111[1];
    if ( v111[1] )
    {
      do
      {
        v44 = v43;
        v43 = (_QWORD *)*v43;
        operator delete(v44, 0x18u);
      }
      while ( v43 );
    }
    memset(s, 0, 8 * (__int64)v111[0]);
    v112 = 0;
    v111[1] = nullptr;
    if ( s != &v114.m128i_u64[1] )
      operator delete(s, 8 * (__int64)v111[0]);
    if ( v29 == v88 )
      goto LABEL_80;
    ++v29;
  }
  v31 = a2[36];
  v32 = &v101;
  v33 = v24 + 64;
  v34 = *(_QWORD *)(v31 + 32);
  v35 = *(_QWORD *)(v31 + 8);
  v101.m128i_i64[0] = v34;
  v101.m128i_i64[1] = v35;
  v36 = *(_QWORD *)(v24 + 72);
  v37 = *(_QWORD *)(v24 + 64);
  v38 = *(_QWORD *)(v24 + 80);
  v39 = v36 + 1;
  if ( (unsigned __int64)&v101 < v37 || (unsigned __int64)&v101 >= v37 + 16 * v38 )
  {
    if ( v38 < v39 )
    {
      v83 = *(_QWORD *)(v24 + 80);
      v37 = qvector_reserve(v33, 0, v39, 16);
      v53 = *(_QWORD *)(v24 + 80);
      v54 = *(const __m128i **)(v24 + 64);
      v55 = *(_QWORD *)(v24 + 72) - 1LL;
      *(_QWORD *)(v24 + 80) = v83;
      if ( v55 >= 0 )
      {
        v56 = v37;
        do
        {
          v57 = _mm_loadu_si128(v54);
          v56 += 16LL;
          ++v54;
          *(__m128i *)(v56 - 16) = v57;
          v58 = v55-- == 0;
        }
        while ( !v58 );
        v54 = *(const __m128i **)(v24 + 64);
      }
      qfree(v54);
      *(_QWORD *)(v24 + 64) = v37;
      v36 = *(_QWORD *)(v24 + 72);
      LODWORD(v32) = (unsigned int)&v101;
      *(_QWORD *)(v24 + 80) = v53;
    }
    *(__m128i *)(v37 + 16 * v36) = _mm_load_si128(&v101);
  }
  else
  {
    if ( v38 < v39 )
    {
      v80 = *(_QWORD *)(v24 + 80);
      v82 = v35;
      v85 = v34;
      v37 = qvector_reserve(v33, 0, v39, 16);
      v69 = *(_QWORD *)(v24 + 80);
      v70 = *(const __m128i **)(v24 + 64);
      v71 = *(_QWORD *)(v24 + 72) - 1LL;
      *(_QWORD *)(v24 + 80) = v80;
      if ( v71 >= 0 )
      {
        v72 = v37;
        do
        {
          v73 = _mm_loadu_si128(v70);
          v72 += 16LL;
          ++v70;
          *(__m128i *)(v72 - 16) = v73;
          v58 = v71-- == 0;
        }
        while ( !v58 );
        v70 = *(const __m128i **)(v24 + 64);
      }
      v81 = v69;
      qfree(v70);
      *(_QWORD *)(v24 + 64) = v37;
      v36 = *(_QWORD *)(v24 + 72);
      LODWORD(v32) = (unsigned int)&v101;
      *(_QWORD *)(v24 + 80) = v81;
      v35 = v82;
      v34 = v85;
    }
    v40 = (__int64 *)(v37 + 16 * v36);
    *v40 = v34;
    v40[1] = v35;
  }
  ++*(_QWORD *)(v24 + 72);
  v41 = a2[135] + 40LL * a2[136] - 40;
  sub_62570(
    (_DWORD)v32,
    (_DWORD)a2,
    *(_QWORD *)(a3 + 8),
    *(_DWORD *)(v41 + 16),
    *(_DWORD *)(v41 + 24),
    *(_QWORD *)(v41 + 8),
    *(_QWORD *)(v41 + 32),
    (__int64)&s,
    0);
  if ( !v102 )
  {
    *(_DWORD *)(v41 + 24) = v101.m128i_i32[0];
    if ( v102 && v101.m128i_i64[0] )
    {
      v101.m128i_i64[1] = 0;
      qfree(v101.m128i_i64[0]);
    }
    v42 = v100;
LABEL_42:
    if ( v42 && v98 )
    {
      v99.m128i_i64[0] = 0;
      qfree(v98);
    }
    goto LABEL_45;
  }
  v65 = _mm_loadu_si128((const __m128i *)&v101.m128i_u64[1]);
  v66 = v100 == 0;
  *(_QWORD *)a1 = v101.m128i_i64[0];
  *(_BYTE *)(a1 + 24) = 1;
  *(__m128i *)(a1 + 8) = v65;
  if ( !v66 && v98 )
  {
    v99.m128i_i64[0] = 0;
    qfree(v98);
  }
LABEL_52:
  v45 = v111[1];
  if ( v111[1] )
  {
    do
    {
      v46 = v45;
      v45 = (_QWORD *)*v45;
      operator delete(v46, 0x18u);
    }
    while ( v45 );
  }
  memset(s, 0, 8 * (__int64)v111[0]);
  v112 = 0;
  v111[1] = nullptr;
  if ( s != &v114.m128i_u64[1] )
    operator delete(s, 8 * (__int64)v111[0]);
LABEL_56:
  if ( v108 )
  {
    v109.m128i_i64[0] = 0;
    qfree(v108);
  }
  return a1;
}
