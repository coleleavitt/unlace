unsigned __int64 __fastcall sub_1F24B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5)
{
  __int64 i; // rcx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // rbx
  unsigned __int8 v14; // al
  __int64 v15; // r12
  __int64 v16; // rbp
  __int64 v17; // rbx
  __int64 v18; // r14
  __m128i v19; // xmm0
  __int64 v20; // rdi
  __int64 v21; // rax
  __m128i v22; // xmm7
  __int64 v23; // rdi
  __int64 v24; // r14
  __int64 j; // r15
  __int64 *v26; // rdx
  __int64 v27; // rdi
  __m128i v28; // xmm6
  char v29; // dl
  __int64 v30; // r14
  __int64 v31; // rax
  __m128i v32; // xmm0
  __m128i v33; // xmm1
  __int64 v34; // rax
  __int64 v35; // rax
  __m128i v36; // xmm0
  __int64 v37; // r14
  __int64 v38; // rdx
  unsigned __int64 v39; // rax
  bool v40; // al
  __int64 v41; // rbp
  __int64 v42; // r12
  __m128i v43; // xmm0
  __int64 v44; // rdi
  __int64 v45; // rax
  __m128i v46; // xmm3
  __int64 v47; // rdi
  __int64 v48; // r12
  __int64 m; // r15
  __int64 *v50; // rdx
  __int64 v51; // rdi
  __m128i v52; // xmm5
  char v53; // al
  __int64 v54; // rdi
  __int64 v55; // rbp
  __m128i v56; // xmm0
  __int64 v57; // rdi
  __m128i v58; // xmm7
  __int64 v59; // r14
  __int64 v60; // r13
  __int64 n; // rbp
  __int64 *v62; // r12
  __int64 v63; // rdi
  __m128i v64; // xmm2
  __int64 v65; // rdi
  __int64 v66; // rax
  __m128i si128; // xmm0
  __int64 v68; // r12
  __int64 v69; // rbx
  __int64 *v70; // rbp
  __int64 v71; // rdi
  __int64 v73; // rax
  __m128i v74; // xmm3
  __m128i v75; // xmm0
  __int64 v76; // r12
  __int64 v77; // r15
  __int64 v78; // rbp
  __int64 v79; // r12
  __m128i v80; // xmm0
  __int64 v81; // rdi
  __int64 v82; // rax
  __m128i v83; // xmm4
  __int64 v84; // rdi
  __int64 v85; // r12
  __int64 k; // r14
  __int64 *v87; // rdx
  __int64 v88; // rdi
  __m128i v89; // xmm5
  __m128i v90; // [rsp+0h] [rbp-F8h] BYREF
  __m128i v91; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v92; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v93; // [rsp+30h] [rbp-C8h]
  __int64 v94; // [rsp+38h] [rbp-C0h]
  __int64 v95; // [rsp+40h] [rbp-B8h]
  __int64 v96; // [rsp+48h] [rbp-B0h]
  __int64 v97[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v98; // [rsp+60h] [rbp-98h]
  __m128i v99; // [rsp+68h] [rbp-90h] BYREF
  __int64 v100; // [rsp+78h] [rbp-80h]
  __m128i v101; // [rsp+80h] [rbp-78h] BYREF
  _BYTE v102[24]; // [rsp+90h] [rbp-68h] BYREF
  char v103; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v104; // [rsp+B8h] [rbp-40h]

  v95 = a3;
  v93 = a2;
  v96 = a4;
  v104 = __readfsqword(0x28u);
  v94 = (a3 - 1) / 2;
  if ( a2 < v94 )
  {
    for ( i = a2; ; i = v15 )
    {
      v7 = 192 * (i + 1);
      v8 = a1 + v7 - 96;
      v9 = a1 + v7;
      v10 = *(_QWORD *)(v9 + 64);
      v11 = *(_QWORD *)(v8 + 64);
      if ( v10 != v11 )
      {
        v12 = *(_QWORD *)(v8 + 72);
        if ( !*(_QWORD *)(v9 + 72) || !v12 )
        {
          v14 = v12 == 0;
          goto LABEL_8;
        }
        v13 = *(_QWORD *)(v11 + 24);
        if ( *(_QWORD *)(v10 + 24) != v13 )
        {
          v14 = *(_QWORD *)(v10 + 24) < v13;
          goto LABEL_8;
        }
      }
      v29 = *(_BYTE *)(v9 + 84);
      if ( v29 == *(_BYTE *)(v8 + 84) )
        v14 = *(_DWORD *)(v9 + 80) < *(_DWORD *)(v8 + 80);
      else
        v14 = v29 ^ 1;
LABEL_8:
      v15 = 2 * (i + 1) - v14;
      v16 = a1 + 96 * i;
      v17 = a1 + 96 * v15;
      sub_648D0((__int64 *)v16, (const void **)v17, *(double *)a5.m128_u64);
      v18 = *(_QWORD *)(v17 + 16);
      v19 = _mm_loadu_si128((const __m128i *)(v17 + 24));
      *(_QWORD *)(v17 + 16) = 0;
      *(_OWORD *)(v17 + 24) = 0;
      v20 = *(_QWORD *)(v16 + 16);
      if ( v20 )
      {
        *(_QWORD *)(v16 + 24) = 0;
        v90 = v19;
        qfree(v20);
        v19 = _mm_load_si128(&v90);
      }
      *(_QWORD *)(v16 + 16) = v18;
      *(__m128i *)(v16 + 24) = v19;
      v21 = *(_QWORD *)(v17 + 40);
      v22 = _mm_loadu_si128((const __m128i *)(v17 + 48));
      *(_QWORD *)(v17 + 40) = 0;
      *(_OWORD *)(v17 + 48) = 0;
      v23 = *(_QWORD *)(v16 + 40);
      v91.m128i_i64[0] = v21;
      v92 = v22;
      if ( v23 )
      {
        v24 = *(_QWORD *)(v16 + 48);
        if ( v24 )
        {
          for ( j = 0; j != v24; ++j )
          {
            v26 = (__int64 *)(v23 + 40 * j);
            v27 = v26[2];
            if ( v27 )
            {
              v26[3] = 0;
              v90.m128i_i64[0] = (__int64)v26;
              qfree(v27);
              v26 = (__int64 *)v90.m128i_i64[0];
            }
            qfree(*v26);
            v23 = *(_QWORD *)(v16 + 40);
          }
        }
        *(_QWORD *)(v16 + 48) = 0;
        qfree(v23);
      }
      v28 = _mm_load_si128(&v92);
      *(_QWORD *)(v16 + 40) = v91.m128i_i64[0];
      *(__m128i *)(v16 + 48) = v28;
      a5 = (__m128)_mm_loadu_si128((const __m128i *)(v17 + 64));
      *(__m128 *)(v16 + 64) = a5;
      *(_QWORD *)(v16 + 77) = *(_QWORD *)(v17 + 77);
      *(_BYTE *)(v16 + 88) = *(_BYTE *)(v17 + 88);
      if ( v94 <= v15 )
        goto LABEL_24;
    }
  }
  v15 = v93;
  v17 = a1 + 96 * v93;
LABEL_24:
  if ( (v95 & 1) == 0 && (v95 - 2) / 2 == v15 )
  {
    v76 = v15 + 1;
    v77 = 2 * v76;
    v78 = a1 + 192 * v76 - 96;
    sub_648D0((__int64 *)v17, (const void **)v78, *(double *)a5.m128_u64);
    v79 = *(_QWORD *)(v78 + 16);
    v80 = _mm_loadu_si128((const __m128i *)(v78 + 24));
    *(_QWORD *)(v78 + 16) = 0;
    *(_OWORD *)(v78 + 24) = 0;
    v81 = *(_QWORD *)(v17 + 16);
    if ( v81 )
    {
      *(_QWORD *)(v17 + 24) = 0;
      v90 = v80;
      qfree(v81);
      v80 = _mm_load_si128(&v90);
    }
    *(__m128i *)(v17 + 24) = v80;
    *(_QWORD *)(v17 + 16) = v79;
    v82 = *(_QWORD *)(v78 + 40);
    v83 = _mm_loadu_si128((const __m128i *)(v78 + 48));
    *(_QWORD *)(v78 + 40) = 0;
    *(_OWORD *)(v78 + 48) = 0;
    v84 = *(_QWORD *)(v17 + 40);
    v92.m128i_i64[0] = v82;
    v91 = v83;
    if ( v84 )
    {
      v85 = *(_QWORD *)(v17 + 48);
      if ( v85 )
      {
        for ( k = 0; k != v85; ++k )
        {
          v87 = (__int64 *)(v84 + 40 * k);
          v88 = v87[2];
          if ( v88 )
          {
            v87[3] = 0;
            v90.m128i_i64[0] = (__int64)v87;
            qfree(v88);
            v87 = (__int64 *)v90.m128i_i64[0];
          }
          qfree(*v87);
          v84 = *(_QWORD *)(v17 + 40);
        }
      }
      *(_QWORD *)(v17 + 48) = 0;
      qfree(v84);
    }
    v89 = _mm_load_si128(&v91);
    v15 = v77 - 1;
    *(_QWORD *)(v17 + 40) = v92.m128i_i64[0];
    *(__m128i *)(v17 + 48) = v89;
    a5 = (__m128)_mm_loadu_si128((const __m128i *)(v78 + 64));
    *(__m128 *)(v17 + 64) = a5;
    *(_QWORD *)(v17 + 77) = *(_QWORD *)(v78 + 77);
    *(_BYTE *)(v17 + 88) = *(_BYTE *)(v78 + 88);
    v17 = a1 + 96 * (v77 - 1);
  }
  v30 = v96;
  v94 = (__int64)v97;
  sub_64000(v97, v96, *(double *)a5.m128_u64);
  v31 = *(_QWORD *)(v30 + 16);
  v32 = _mm_loadu_si128((const __m128i *)(v30 + 24));
  *(_QWORD *)(v30 + 16) = 0;
  v33 = _mm_loadu_si128((const __m128i *)(v30 + 48));
  v98 = v31;
  v34 = *(_QWORD *)(v30 + 40);
  v99 = v32;
  v100 = v34;
  v35 = *(_QWORD *)(v30 + 80);
  *(_OWORD *)(v30 + 24) = 0;
  *(_QWORD *)&v102[16] = v35;
  LOBYTE(v35) = *(_BYTE *)(v30 + 88);
  *(_OWORD *)(v30 + 48) = 0;
  v36 = _mm_loadu_si128((const __m128i *)(v30 + 64));
  v103 = v35;
  *(_QWORD *)(v30 + 40) = 0;
  v101 = v33;
  *(__m128i *)v102 = v36;
  v37 = (v15 - 1) / 2;
  if ( v15 > v93 )
  {
    while ( 1 )
    {
      v17 = a1 + 96 * v37;
      v38 = *(_QWORD *)(v17 + 64);
      if ( v38 != *(_QWORD *)v102 )
      {
        if ( !*(_QWORD *)(v17 + 72) )
        {
          v40 = *(_QWORD *)&v102[8] == 0;
LABEL_32:
          if ( !v40 )
            goto LABEL_46;
          goto LABEL_33;
        }
        if ( !*(_QWORD *)&v102[8] )
          goto LABEL_33;
        v39 = *(_QWORD *)(*(_QWORD *)v102 + 24LL);
        if ( *(_QWORD *)(v38 + 24) != v39 )
        {
          v40 = *(_QWORD *)(v38 + 24) < v39;
          goto LABEL_32;
        }
      }
      v53 = *(_BYTE *)(v17 + 84);
      if ( v53 == v102[20] )
      {
        if ( *(_DWORD *)(v17 + 80) >= *(int *)&v102[16] )
        {
          v17 = a1 + 96 * v15;
          break;
        }
      }
      else if ( v53 )
      {
LABEL_46:
        v17 = a1 + 96 * v15;
        break;
      }
LABEL_33:
      v41 = a1 + 96 * v15;
      sub_648D0((__int64 *)v41, (const void **)(a1 + 96 * v37), *(double *)v36.m128i_i64);
      v42 = *(_QWORD *)(v17 + 16);
      v43 = _mm_loadu_si128((const __m128i *)(v17 + 24));
      *(_QWORD *)(v17 + 16) = 0;
      *(_OWORD *)(v17 + 24) = 0;
      v44 = *(_QWORD *)(v41 + 16);
      if ( v44 )
      {
        *(_QWORD *)(v41 + 24) = 0;
        v90 = v43;
        qfree(v44);
        v43 = _mm_load_si128(&v90);
      }
      *(_QWORD *)(v41 + 16) = v42;
      *(__m128i *)(v41 + 24) = v43;
      v45 = *(_QWORD *)(v17 + 40);
      v46 = _mm_loadu_si128((const __m128i *)(v17 + 48));
      *(_QWORD *)(v17 + 40) = 0;
      *(_OWORD *)(v17 + 48) = 0;
      v47 = *(_QWORD *)(v41 + 40);
      v92.m128i_i64[0] = v45;
      v91 = v46;
      if ( v47 )
      {
        v48 = *(_QWORD *)(v41 + 48);
        if ( v48 )
        {
          for ( m = 0; m != v48; ++m )
          {
            v50 = (__int64 *)(v47 + 40 * m);
            v51 = v50[2];
            if ( v51 )
            {
              v50[3] = 0;
              v90.m128i_i64[0] = (__int64)v50;
              qfree(v51);
              v50 = (__int64 *)v90.m128i_i64[0];
            }
            qfree(*v50);
            v47 = *(_QWORD *)(v41 + 40);
          }
        }
        *(_QWORD *)(v41 + 48) = 0;
        qfree(v47);
      }
      v52 = _mm_load_si128(&v91);
      v15 = v37;
      *(_QWORD *)(v41 + 40) = v92.m128i_i64[0];
      *(__m128i *)(v41 + 48) = v52;
      v36 = _mm_loadu_si128((const __m128i *)(v17 + 64));
      *(__m128i *)(v41 + 64) = v36;
      *(_QWORD *)(v41 + 77) = *(_QWORD *)(v17 + 77);
      *(_BYTE *)(v41 + 88) = *(_BYTE *)(v17 + 88);
      if ( v93 >= v37 )
        break;
      v37 = (v37 - 1) / 2;
    }
  }
  sub_648D0((__int64 *)v17, (const void **)v94, *(double *)v36.m128i_i64);
  v54 = *(_QWORD *)(v17 + 16);
  v55 = v98;
  v98 = 0;
  v56 = _mm_loadu_si128(&v99);
  v99 = 0;
  if ( v54 )
  {
    *(_QWORD *)(v17 + 24) = 0;
    v90 = v56;
    qfree(v54);
    v56 = _mm_load_si128(&v90);
  }
  v57 = *(_QWORD *)(v17 + 40);
  *(__m128i *)(v17 + 24) = v56;
  v58 = _mm_load_si128(&v101);
  v59 = v100;
  *(_QWORD *)(v17 + 16) = v55;
  v100 = 0;
  v90 = v58;
  v101 = 0;
  if ( v57 )
  {
    v60 = *(_QWORD *)(v17 + 48);
    if ( v60 )
    {
      for ( n = 0; n != v60; ++n )
      {
        v62 = (__int64 *)(v57 + 40 * n);
        v63 = v62[2];
        if ( v63 )
        {
          v62[3] = 0;
          qfree(v63);
        }
        qfree(*v62);
        v57 = *(_QWORD *)(v17 + 40);
      }
    }
    *(_QWORD *)(v17 + 48) = 0;
    qfree(v57);
    v64 = _mm_load_si128(&v90);
    v65 = v100;
    *(_QWORD *)(v17 + 40) = v59;
    v66 = *(_QWORD *)&v102[13];
    si128 = _mm_load_si128((const __m128i *)v102);
    *(__m128i *)(v17 + 48) = v64;
    *(__m128i *)(v17 + 64) = si128;
    *(_QWORD *)(v17 + 77) = v66;
    *(_BYTE *)(v17 + 88) = v103;
    if ( v65 )
    {
      v68 = v101.m128i_i64[0];
      if ( v101.m128i_i64[0] )
      {
        v69 = 0;
        do
        {
          v70 = (__int64 *)(v65 + 40 * v69);
          v71 = v70[2];
          if ( v71 )
          {
            v70[3] = 0;
            qfree(v71);
          }
          ++v69;
          qfree(*v70);
          v65 = v100;
        }
        while ( v68 != v69 );
      }
      v101.m128i_i64[0] = 0;
      qfree(v65);
    }
  }
  else
  {
    v73 = *(_QWORD *)&v102[13];
    v74 = _mm_load_si128(&v90);
    *(_QWORD *)(v17 + 40) = v59;
    v75 = _mm_load_si128((const __m128i *)v102);
    *(__m128i *)(v17 + 48) = v74;
    *(__m128i *)(v17 + 64) = v75;
    *(_QWORD *)(v17 + 77) = v73;
    *(_BYTE *)(v17 + 88) = v103;
  }
  if ( v98 )
  {
    v99.m128i_i64[0] = 0;
    qfree(v98);
  }
  qfree(v97[0]);
  return v104 - __readfsqword(0x28u);
}

