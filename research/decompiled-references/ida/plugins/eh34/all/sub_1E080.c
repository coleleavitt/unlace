__int64 __fastcall sub_1E080(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned int *v3; // r12
  _QWORD *v4; // rbx
  unsigned int k; // ebp
  __int64 v6; // rax
  unsigned int *i; // r14
  unsigned int v8; // r15d
  void (__fastcall *hexdsp)(__int64, __int64 *, _QWORD); // rax
  unsigned int v10; // r15d
  void (__fastcall *v11)(__int64, __int64 *, _QWORD); // rax
  unsigned __int8 (__fastcall *v12)(__int64, __int64 *); // rax
  __int64 *v13; // rdi
  __int64 *v14; // rsi
  __int64 (__fastcall *v15)(__int64, __int64 *, _QWORD); // rax
  __int64 *v16; // rsi
  __int64 v17; // rdi
  int v18; // edx
  unsigned int j; // r13d
  __int64 v20; // rsi
  unsigned int v21; // ebp
  __int64 (__fastcall *v22)(__int64, __int64 *, _QWORD); // rax
  __int64 v23; // r15
  int v24; // r13d
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rbp
  __int64 v30; // r14
  __int64 (__fastcall *v31)(__int64, __int64 *, _QWORD); // rax
  char v32; // dl
  __int64 v33; // rax
  int v34; // eax
  unsigned __int64 v35; // rax
  __int64 v36; // rbp
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // r12
  _QWORD *v39; // rdi
  __m128i v40; // xmm1
  __m128i v41; // xmm0
  unsigned __int64 v42; // rdx
  __m128i *v43; // rdx
  unsigned int *v44; // rax
  __int64 v45; // rdi
  unsigned int *v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // r12
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rdx
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // r13
  _QWORD *v55; // rdi
  __m128i v56; // xmm0
  unsigned __int64 v57; // rdx
  __int64 v59; // rdi
  void (__fastcall *v60)(__int64, __int64 *, _QWORD); // rax
  __m128i v61; // xmm1
  __m128i v62; // xmm0
  unsigned __int64 v63; // rdx
  __m128i *v64; // rdx
  unsigned __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rax
  unsigned __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // r15
  __int64 v72; // r14
  const __m128i *v73; // rdi
  __int64 v74; // rdx
  __int64 v75; // rcx
  __m128i v76; // xmm0
  bool v77; // cf
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // r15
  __int64 v81; // r14
  const __m128i *v82; // rdi
  __int64 v83; // rcx
  __int64 v84; // rdx
  __m128i v85; // xmm0
  __int64 v86; // rax
  const __m128i *v87; // rdi
  __int64 v88; // rcx
  __int64 v89; // r14
  __int64 v90; // r15
  const __m128i *v91; // rdx
  __int64 v92; // rcx
  __m128i v93; // xmm0
  __int64 v94; // rax
  const __m128i *v95; // rdi
  __int64 v96; // r14
  __int64 v97; // rdx
  __int64 v98; // rax
  __int64 v99; // r15
  const __m128i *v100; // rcx
  __int64 v101; // rax
  __m128i v102; // xmm0
  __int64 v103; // [rsp+10h] [rbp-D8h]
  int v104; // [rsp+18h] [rbp-D0h]
  __int64 v105; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v106; // [rsp+28h] [rbp-C0h]
  __m128i v107; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v108; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v109; // [rsp+48h] [rbp-A0h]
  __m128i v110; // [rsp+60h] [rbp-88h] BYREF
  __m128i v111; // [rsp+70h] [rbp-78h] BYREF
  __m128i v112; // [rsp+80h] [rbp-68h] BYREF
  __m128i v113; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v114; // [rsp+A8h] [rbp-40h]

  v2 = a1[3];
  v3 = (unsigned int *)a1[5];
  v114 = __readfsqword(0x28u);
  v4 = a1;
  v105 = 0;
  v104 = v2;
  k = v2;
  v6 = a1[6];
  v106 = 0;
  for ( i = &v3[10 * v6]; i != v3; v3 += 10 )
  {
    v8 = *v3;
    hexdsp = (void (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(a1, a2);
    hexdsp(205, &v105, v8);
    v10 = v3[1] + 1;
    v11 = (void (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(205, &v105);
    a2 = &v105;
    a1 = &qword_C8 + 5;
    v11(205, &v105, v10);
  }
  if ( *(_BYTE *)v4 == 4 && (v4[16] & 1) != 0 )
  {
    v60 = (void (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(a1, a2);
    a2 = &v105;
    a1 = &qword_C8 + 5;
    v60(205, &v105, 0);
  }
  v12 = (unsigned __int8 (__fastcall *)(__int64, __int64 *))get_hexdsp(a1, a2);
  v13 = &qword_D8 + 1;
  v14 = &v105;
  if ( v12(217, &v105) )
  {
    v59 = v4[2];
    if ( v59 )
    {
      v4[3] = 0;
      qfree(v59);
      v4[2] = 0;
      v4[4] = 0;
    }
    goto LABEL_48;
  }
  v108 = 0;
  v109 = 0;
  if ( v104 )
  {
    v13 = &v108;
    v14 = nullptr;
    v108 = qvector_reserve(&v108, 0, v104, 4);
    v67 = v109;
    if ( (unsigned __int64)v109 < v104 )
    {
      *(_DWORD *)(v108 + 4 * v109) = -1;
      v68 = v67 + 1;
      if ( v68 < v104 )
      {
        do
          *(_DWORD *)(v108 + 4 * v68++) = -1;
        while ( v104 != v68 );
      }
    }
    *(_QWORD *)&v109 = v104;
  }
  v15 = (__int64 (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(v13, v14);
  v16 = &v105;
  v17 = 227;
  v18 = v15(227, &v105, 0);
  for ( j = 0; (_DWORD)v106 != v18; v18 = v22(227, &v105, v21) )
  {
    v20 = j++;
    v21 = v18 + 1;
    *(_DWORD *)(v108 + 4LL * v18) = v20;
    v22 = (__int64 (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(227, v20);
    v16 = &v105;
    v17 = 227;
  }
  if ( v104 <= 0 )
  {
    v24 = 0;
    v36 = 0;
    if ( v4[3] )
      goto LABEL_30;
    goto LABEL_31;
  }
  v23 = 0;
  v24 = 0;
  v103 = (unsigned int)(v104 - 1);
  while ( 1 )
  {
    v29 = 32 * v23;
    v30 = 32 * v23 + v4[2];
    v31 = (__int64 (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(v17, v16);
    v16 = &v105;
    v17 = 213;
    v32 = v31(213, &v105, (unsigned int)v23);
    v33 = *(int *)(v30 + 8);
    if ( !v32 )
      break;
    v25 = v108;
    if ( (int)v33 >= 0 )
      *(_DWORD *)(v30 + 8) = *(_DWORD *)(v108 + 4 * v33);
    v26 = 32LL * v24;
    if ( v24 != (_DWORD)v23 )
    {
      v27 = v4[2];
      *(__m128i *)(v27 + 32LL * v24) = _mm_loadu_si128((const __m128i *)(v27 + v29));
      *(__m128i *)(v27 + v26 + 16) = _mm_loadu_si128((const __m128i *)(v27 + v29 + 16));
    }
    v16 = (__int64 *)*(unsigned int *)(v25 + 4 * v23);
    ++v24;
    *(_DWORD *)(v4[2] + v26 + 4) = (_DWORD)v16;
LABEL_17:
    v28 = v23 + 1;
    if ( v103 == v23 )
      goto LABEL_23;
LABEL_18:
    v23 = v28;
  }
  if ( (int)v33 < 0 )
    goto LABEL_17;
  v34 = *(_DWORD *)(v108 + 4 * v33);
  if ( v34 < 0 )
    goto LABEL_17;
  *(_DWORD *)(v108 + 4 * v23) = v34;
  v28 = v23 + 1;
  if ( v103 != v23 )
    goto LABEL_18;
LABEL_23:
  v35 = v4[3];
  v36 = v24;
  if ( v35 != v24 )
  {
    v111.m128i_i8[12] = 0;
    v110 = 0;
    v111.m128i_i64[0] = -1;
    *(__int64 *)((char *)v110.m128i_i64 + 4) = 0xFFFFFFFEFFFFFFFELL;
    if ( v24 >= v35 )
    {
      v37 = v4[2];
      v38 = v4[4];
      v39 = v4 + 2;
      if ( (unsigned __int64)&v110 < v37 || (unsigned __int64)&v110 >= 32 * v38 + v37 )
      {
        if ( v38 < v24 )
        {
          v78 = qvector_reserve(v39, 0, v24, 32);
          v79 = v4[3];
          v80 = v4[4];
          v81 = v78;
          v4[4] = v38;
          v82 = (const __m128i *)v4[2];
          v83 = v79 - 1;
          if ( v83 >= 0 )
          {
            v84 = v78;
            do
            {
              v85 = _mm_loadu_si128(v82);
              v84 += 32;
              v82 += 2;
              *(__m128i *)(v84 - 32) = v85;
              *(__m128i *)(v84 - 16) = _mm_loadu_si128(v82 - 1);
              v77 = v83-- == 0;
            }
            while ( !v77 );
            v82 = (const __m128i *)v4[2];
          }
          qfree(v82);
          v4[2] = v81;
          v35 = v4[3];
          v4[4] = v80;
        }
        if ( v35 < v24 )
        {
          v40 = _mm_load_si128(&v110);
          v41 = _mm_load_si128(&v111);
          do
          {
            v42 = v35++;
            v43 = (__m128i *)(v4[2] + 32 * v42);
            *v43 = v40;
            v43[1] = v41;
          }
          while ( v35 != v24 );
        }
      }
      else
      {
        v112 = _mm_load_si128(&v110);
        v113 = _mm_load_si128(&v111);
        if ( v38 < v24 )
        {
          v86 = qvector_reserve(v39, 0, v24, 32);
          v87 = (const __m128i *)v4[2];
          v88 = v4[3];
          v89 = v86;
          v90 = v4[4];
          v4[4] = v38;
          v91 = v87;
          v92 = v88 - 1;
          if ( v92 >= 0 )
          {
            do
            {
              v93 = _mm_loadu_si128(v91);
              v86 += 32;
              v91 += 2;
              *(__m128i *)(v86 - 32) = v93;
              *(__m128i *)(v86 - 16) = _mm_loadu_si128(v91 - 1);
              v77 = v92-- == 0;
            }
            while ( !v77 );
            v87 = (const __m128i *)v4[2];
          }
          qfree(v87);
          v4[2] = v89;
          v35 = v4[3];
          v4[4] = v90;
        }
        if ( v35 < v24 )
        {
          v61 = _mm_load_si128(&v112);
          v62 = _mm_load_si128(&v113);
          do
          {
            v63 = v35++;
            v64 = (__m128i *)(v4[2] + 32 * v63);
            *v64 = v61;
            v64[1] = v62;
          }
          while ( v35 != v24 );
        }
      }
    }
LABEL_30:
    v4[3] = v36;
  }
LABEL_31:
  v44 = (unsigned int *)v4[5];
  v45 = v108;
  v46 = &v44[10 * v4[6]];
  for ( k = v104 - v24; v46 != v44; *(v44 - 8) = *(_DWORD *)(v108 + 4LL * *(v44 - 8)) )
  {
    v47 = *v44;
    v44 += 10;
    *(v44 - 10) = *(_DWORD *)(v45 + 4 * v47);
    *(v44 - 9) = *(_DWORD *)(v108 + 4LL * (*(v44 - 9) + 1)) - 1;
    v45 = v108;
  }
  v48 = v4[9];
  if ( (int)v48 <= 0 )
  {
    if ( !v48 )
      goto LABEL_46;
    v48 = 0;
    goto LABEL_53;
  }
  v49 = 0;
  do
  {
    v50 = v49 + v4[8];
    v51 = *(int *)(v50 + 8);
    if ( (int)v51 >= 0 )
      *(_DWORD *)(v50 + 8) = *(_DWORD *)(v45 + 4 * v51);
    v49 += 16;
  }
  while ( 16 * ((unsigned int)(v48 - 1) + 1LL) != v49 );
  v52 = v4[9];
  v48 = (int)v48;
  if ( (int)v48 == v52 )
  {
LABEL_46:
    if ( !v45 )
      goto LABEL_48;
LABEL_47:
    *(_QWORD *)&v109 = 0;
    qfree(v45);
    goto LABEL_48;
  }
  v107.m128i_i64[0] = -1;
  v107.m128i_i32[2] = -2;
  if ( (int)v48 >= v52 )
  {
    v53 = v4[8];
    v54 = v4[10];
    v55 = v4 + 8;
    if ( (unsigned __int64)&v107 < v53 || (unsigned __int64)&v107 >= 16 * v54 + v53 )
    {
      if ( v54 < (int)v48 )
      {
        v69 = qvector_reserve(v55, 0, (int)v48, 16);
        v70 = v4[9];
        v71 = v4[10];
        v72 = v69;
        v4[10] = v54;
        v73 = (const __m128i *)v4[8];
        v74 = v70 - 1;
        if ( v74 >= 0 )
        {
          v75 = v69;
          do
          {
            v76 = _mm_loadu_si128(v73);
            v75 += 16;
            ++v73;
            *(__m128i *)(v75 - 16) = v76;
            v77 = v74-- == 0;
          }
          while ( !v77 );
          v73 = (const __m128i *)v4[8];
        }
        qfree(v73);
        v4[8] = v72;
        v52 = v4[9];
        v4[10] = v71;
      }
      if ( v52 < (int)v48 )
      {
        v56 = _mm_load_si128(&v107);
        do
        {
          v57 = v52++;
          *(__m128i *)(v4[8] + 16 * v57) = v56;
        }
        while ( (int)v48 != v52 );
      }
    }
    else
    {
      if ( v54 < (int)v48 )
      {
        v94 = qvector_reserve(v55, 0, (int)v48, 16);
        v95 = (const __m128i *)v4[8];
        v96 = v94;
        v97 = v94;
        v98 = v4[9];
        v99 = v4[10];
        v4[10] = v54;
        v100 = v95;
        v101 = v98 - 1;
        if ( v101 >= 0 )
        {
          do
          {
            v102 = _mm_loadu_si128(v100);
            v97 += 16;
            ++v100;
            *(__m128i *)(v97 - 16) = v102;
            v77 = v101-- == 0;
          }
          while ( !v77 );
          v95 = (const __m128i *)v4[8];
        }
        qfree(v95);
        v4[8] = v96;
        v52 = v4[9];
        v4[10] = v99;
      }
      if ( v52 < (int)v48 )
      {
        do
        {
          v65 = v52++;
          v66 = v4[8] + 16 * v65;
          *(_QWORD *)v66 = -1;
          *(_DWORD *)(v66 + 8) = -2;
        }
        while ( (int)v48 != v52 );
      }
    }
    v4[9] = (int)v48;
    v45 = v108;
    goto LABEL_46;
  }
LABEL_53:
  v4[9] = v48;
  if ( v45 )
    goto LABEL_47;
LABEL_48:
  qfree(v105);
  return k;
}

