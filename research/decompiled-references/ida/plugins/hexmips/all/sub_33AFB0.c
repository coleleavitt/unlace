unsigned __int64 __fastcall sub_33AFB0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 *v4; // r12
  __int64 v5; // r13
  unsigned __int64 v6; // r15
  const char *v7; // rbx
  char *v8; // rsi
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rcx
  __m128i v13; // xmm7
  __int64 v14; // rax
  __m128 v15; // xmm0
  unsigned __int64 v16; // r14
  const char *v17; // rdi
  const char *v18; // rbx
  const char *v19; // rsi
  const char *v20; // rbx
  __m128 v21; // xmm3
  const char *v22; // r12
  __m128i v23; // xmm0
  const char *v24; // rdi
  __m128i v25; // xmm5
  __int64 v26; // rax
  unsigned __int64 v27; // rbx
  __int64 v28; // r14
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  double v31; // r13
  __m128i si128; // xmm1
  __int64 v33; // rbx
  __m128i v34; // xmm2
  unsigned __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rbx
  int v39; // eax
  __int64 v40; // rdx
  __m128i v41; // xmm7
  double v42; // r14
  _OWORD *v43; // rbx
  _QWORD *v44; // rax
  char *v45; // r13
  __m128i v46; // xmm1
  __int64 v47; // rax
  __m128i v48; // xmm6
  __m128i v49; // xmm6
  unsigned __int64 v50; // rax
  _QWORD *v51; // rdx
  __int64 v52; // r12
  __m128i v53; // xmm1
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rax
  __m128i v56; // xmm7
  __int64 v57; // rax
  __m128 v58; // xmm0
  unsigned __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rbx
  __m128i v62; // xmm1
  __int64 v63; // rax
  unsigned __int64 v64; // rax
  __m128i v65; // xmm6
  char *v66; // rbx
  __m128i v67; // xmm1
  __int64 v68; // rax
  __int64 v69; // rax
  __m128i v70; // xmm6
  char *s2[2]; // [rsp+0h] [rbp-98h] BYREF
  __int64 *v72; // [rsp+10h] [rbp-88h]
  __int64 *v73; // [rsp+18h] [rbp-80h]
  char *v74[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v75; // [rsp+30h] [rbp-68h]
  char *v76; // [rsp+38h] [rbp-60h]
  double v77; // [rsp+40h] [rbp-58h] BYREF
  __m128i v78; // [rsp+48h] [rbp-50h]
  unsigned __int64 v79; // [rsp+58h] [rbp-40h]

  v72 = (__int64 *)a1;
  v73 = (__int64 *)a2;
  v75 = a3;
  v79 = __readfsqword(0x28u);
  v3 = a2 - a1;
  if ( (__int64)(a2 - a1) <= 384 )
    return v79 - __readfsqword(0x28u);
  if ( !v75 )
  {
LABEL_30:
    v27 = (unsigned __int64)v73;
    v28 = (__int64)v72;
    sub_33ADA0((__int64)v72, (unsigned __int64)v73, (unsigned __int64)v73);
    if ( (__int64)(v27 - v28) > 24 )
    {
      do
      {
        v29 = (__int64)v72;
        v73 -= 3;
        v30 = (unsigned __int64)v73;
        v31 = *(double *)v73;
        si128 = _mm_loadu_si128((const __m128i *)(v73 + 1));
        *v73 = 0;
        *(_OWORD *)(v30 + 8) = 0;
        v33 = *(_QWORD *)v29;
        v34 = _mm_loadu_si128((const __m128i *)(v29 + 8));
        *(_QWORD *)v29 = 0;
        *(_OWORD *)(v29 + 8) = 0;
        if ( *(_QWORD *)v30 )
        {
          *(_QWORD *)(v30 + 8) = 0;
          *(__m128i *)v74 = si128;
          *(__m128i *)s2 = v34;
          qfree();
          si128 = _mm_load_si128((const __m128i *)v74);
          v34 = _mm_load_si128((const __m128i *)s2);
        }
        v35 = (unsigned __int64)v73;
        v36 = (__int64)v72;
        v77 = v31;
        *v73 = v33;
        v37 = v35 - v36;
        *(__m128i *)(v35 + 8) = v34;
        v78 = si128;
        sub_335D80(v36, 0, 0xAAAAAAAAAAAAAAABLL * ((__int64)(v35 - v36) >> 3), (char *)&v77);
        if ( v77 != 0.0 )
          qfree();
      }
      while ( v37 > 24 );
    }
    return v79 - __readfsqword(0x28u);
  }
  while ( 2 )
  {
    --v75;
    v4 = &v72[((__int64)(0xAAAAAAAAAAAAAAABLL * (v3 >> 3)) >> 1)
            + ((0xAAAAAAAAAAAAAAABLL * (v3 >> 3)) & 0xFFFFFFFFFFFFFFFELL)];
    v5 = v72[4];
    v6 = (unsigned __int64)(v72 + 3);
    if ( v4[1] )
    {
      v7 = s1;
      s2[0] = (char *)*v4;
      if ( !v5 )
        goto LABEL_6;
    }
    else
    {
      if ( !v5 )
      {
        if ( !*(v73 - 2) )
        {
          v49 = _mm_loadu_si128((const __m128i *)(v72 + 1));
          v42 = *(double *)v72;
          v43 = v72 + 1;
          s2[0] = (char *)s1;
          *(__m128i *)v74 = v49;
          if ( strcmp(s1, s1) >= 0 )
            goto LABEL_43;
          goto LABEL_50;
        }
        v7 = s1;
        s2[0] = (char *)s1;
        goto LABEL_40;
      }
      s2[0] = (char *)s1;
    }
    v7 = (const char *)v72[3];
LABEL_6:
    v8 = (char *)s1;
    if ( strcmp(v7, s2[0]) < 0 )
    {
      if ( *(v73 - 2) )
        v8 = (char *)*(v73 - 3);
      v74[0] = v8;
      v9 = strcmp(s2[0], v8);
      v10 = (__int64)v72;
      v11 = *v72;
      *(__m128i *)s2 = _mm_loadu_si128((const __m128i *)(v72 + 1));
      if ( v9 < 0 )
      {
        *v72 = 0;
        *(_OWORD *)(v10 + 8) = 0;
        v66 = (char *)*v4;
        v67 = _mm_loadu_si128((const __m128i *)(v4 + 1));
        *v4 = 0;
        *(_OWORD *)(v4 + 1) = 0;
        if ( *(_QWORD *)v10 )
        {
          *(_QWORD *)(v10 + 8) = 0;
          *(__m128i *)v74 = v67;
          qfree();
          v67 = _mm_load_si128((const __m128i *)v74);
        }
        v68 = (__int64)v72;
        *v72 = (__int64)v66;
        *(__m128i *)(v68 + 8) = v67;
        if ( *v4 )
        {
          v4[1] = 0;
          qfree();
        }
        v69 = (__int64)v72;
        v70 = _mm_load_si128((const __m128i *)s2);
        *v4 = v11;
        *(__m128i *)(v4 + 1) = v70;
        v5 = *(_QWORD *)(v69 + 8);
      }
      else if ( strcmp(v7, v74[0]) < 0 )
      {
        v59 = (unsigned __int64)v73;
        v60 = (__int64)v72;
        *v72 = 0;
        *(_OWORD *)(v60 + 8) = 0;
        v61 = *(_QWORD *)(v59 - 24);
        v62 = _mm_loadu_si128((const __m128i *)(v59 - 16));
        *(_QWORD *)(v59 - 24) = 0;
        *(_OWORD *)(v59 - 16) = 0;
        if ( *(_QWORD *)v60 )
        {
          *(_QWORD *)(v60 + 8) = 0;
          *(__m128i *)v74 = v62;
          qfree();
          v62 = _mm_load_si128((const __m128i *)v74);
        }
        v63 = (__int64)v72;
        *v72 = v61;
        *(__m128i *)(v63 + 8) = v62;
        if ( *(v73 - 3) )
        {
          *(v73 - 2) = 0;
          qfree();
        }
        v64 = (unsigned __int64)v73;
        v65 = _mm_load_si128((const __m128i *)s2);
        *(v73 - 3) = v11;
        *(__m128i *)(v64 - 16) = v65;
        v5 = v72[1];
      }
      else
      {
        v12 = (__int64)v72;
        v13 = _mm_load_si128((const __m128i *)s2);
        v14 = v72[3];
        v15 = _mm_loadh_ps((const double *)v72 + 5);
        v72[3] = v11;
        *(__m128 *)(v12 + 8) = v15;
        *(_QWORD *)v12 = v14;
        *(__m128i *)(v12 + 32) = v13;
      }
      goto LABEL_12;
    }
    if ( *(v73 - 2) )
LABEL_40:
      v8 = (char *)*(v73 - 3);
    v76 = v8;
    v39 = strcmp(v7, v8);
    v40 = (__int64)v72;
    v41 = _mm_loadu_si128((const __m128i *)(v72 + 1));
    v42 = *(double *)v72;
    v43 = v72 + 1;
    *(__m128i *)v74 = v41;
    if ( v39 >= 0 )
    {
      if ( strcmp(s2[0], v76) >= 0 )
      {
LABEL_43:
        v44 = v72;
        *v72 = 0;
        *v43 = 0;
        v45 = (char *)*v4;
        v46 = _mm_loadu_si128((const __m128i *)(v4 + 1));
        *v4 = 0;
        *(_OWORD *)(v4 + 1) = 0;
        if ( *v44 )
        {
          v44[1] = 0;
          *(__m128i *)s2 = v46;
          qfree();
          v46 = _mm_load_si128((const __m128i *)s2);
        }
        *v72 = (__int64)v45;
        *v43 = v46;
        if ( *v4 )
        {
          v4[1] = 0;
          qfree();
        }
        v47 = (__int64)v72;
        v48 = _mm_load_si128((const __m128i *)v74);
        *(double *)v4 = v42;
        *(__m128i *)(v4 + 1) = v48;
        v5 = *(_QWORD *)(v47 + 8);
        goto LABEL_12;
      }
LABEL_50:
      v50 = (unsigned __int64)v73;
      v51 = v72;
      *v72 = 0;
      *v43 = 0;
      v52 = *(_QWORD *)(v50 - 24);
      v53 = _mm_loadu_si128((const __m128i *)(v50 - 16));
      *(_QWORD *)(v50 - 24) = 0;
      *(_OWORD *)(v50 - 16) = 0;
      if ( *v51 )
      {
        v51[1] = 0;
        *(__m128i *)s2 = v53;
        qfree();
        v53 = _mm_load_si128((const __m128i *)s2);
      }
      *v72 = v52;
      v54 = (unsigned __int64)v73;
      *v43 = v53;
      if ( *(_QWORD *)(v54 - 24) )
      {
        *(_QWORD *)(v54 - 16) = 0;
        qfree();
      }
      v55 = (unsigned __int64)v73;
      v56 = _mm_load_si128((const __m128i *)v74);
      *((double *)v73 - 3) = v42;
      *(__m128i *)(v55 - 16) = v56;
      v5 = v72[1];
      goto LABEL_12;
    }
    v57 = v72[3];
    *((double *)v72 + 3) = v42;
    v58 = _mm_loadh_ps((const double *)(v40 + 40));
    *(__m128i *)(v40 + 32) = v41;
    *(_QWORD *)v40 = v57;
    *(__m128 *)(v40 + 8) = v58;
LABEL_12:
    v16 = (unsigned __int64)v73;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v5 )
        {
          v17 = s1;
          v18 = (const char *)*v72;
          if ( !*(_QWORD *)(v6 + 8) )
            goto LABEL_14;
          goto LABEL_18;
        }
        v18 = s1;
        if ( !*(_QWORD *)(v6 + 8) )
          break;
LABEL_18:
        v17 = *(const char **)v6;
LABEL_14:
        if ( strcmp(v17, v18) >= 0 )
          goto LABEL_19;
        v6 += 24LL;
      }
      do
      {
LABEL_19:
        v16 -= 24LL;
        v19 = s1;
        if ( *(_QWORD *)(v16 + 8) )
          v19 = *(const char **)v16;
      }
      while ( strcmp(v18, v19) < 0 );
      if ( v6 >= v16 )
        break;
      v20 = *(const char **)v6;
      *(_QWORD *)v6 = 0;
      v21 = _mm_loadh_ps((const double *)(v6 + 16));
      *(_OWORD *)(v6 + 8) = 0;
      v22 = *(const char **)v16;
      v23 = _mm_loadu_si128((const __m128i *)(v16 + 8));
      *(_QWORD *)v16 = 0;
      *(_OWORD *)(v16 + 8) = 0;
      v24 = *(const char **)v6;
      *(__m128 *)s2 = v21;
      if ( v24 )
      {
        *(_QWORD *)(v6 + 8) = 0;
        *(__m128i *)v74 = v23;
        qfree();
        v23 = _mm_load_si128((const __m128i *)v74);
      }
      *(_QWORD *)v6 = v22;
      *(__m128i *)(v6 + 8) = v23;
      if ( *(_QWORD *)v16 )
      {
        *(_QWORD *)(v16 + 8) = 0;
        qfree();
      }
      v25 = _mm_load_si128((const __m128i *)s2);
      v26 = (__int64)v72;
      *(_QWORD *)v16 = v20;
      v6 += 24LL;
      *(__m128i *)(v16 + 8) = v25;
      v5 = *(_QWORD *)(v26 + 8);
    }
    sub_33AFB0(v6, v73, v75);
    v3 = v6 - (_QWORD)v72;
    if ( (__int64)(v6 - (_QWORD)v72) > 384 )
    {
      v73 = (__int64 *)v6;
      if ( !v75 )
        goto LABEL_30;
      continue;
    }
    return v79 - __readfsqword(0x28u);
  }
}

