__int64 __fastcall sub_1AC200(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned __int8 a5, double a6, __m128 a7)
{
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rbp
  __m128i v14; // xmm0
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  int v22; // r15d
  char v23; // bp
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rbx
  __int64 v33; // rdx
  unsigned int v34; // ebp
  __int64 v35; // rax
  unsigned __int64 v36; // rbp
  __int64 v37; // rax
  signed __int64 v38; // rsi
  __int64 v39; // rdx
  __m128i *v40; // r15
  __int64 v41; // rbx
  __m128i *v42; // rbp
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rdx
  __m128i *v45; // rbx
  __int64 v46; // rdi
  __int64 v47; // rdi
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rbx
  const __m128i *v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rdx
  __m128i v56; // xmm0
  bool v57; // cf
  __int64 v58; // rdi
  __int64 v59; // rcx
  __int64 v60; // rbx
  __m128i *v61; // r15
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rdx
  __m128i *v64; // rdi
  __m128i *v65; // rbx
  __int64 v66; // rdi
  __int64 v67; // rdx
  int v68; // eax
  __int64 v69; // rdi
  __int64 v70; // rax
  __int64 v71; // rcx
  const __m128i *v72; // rdx
  __int64 v73; // rax
  signed __int64 v74; // rax
  const __m128i *v75; // rcx
  __m128i v76; // xmm0
  __int64 v77; // rax
  __int64 v78; // rcx
  void *v79; // r8
  const __m128i *v80; // rdi
  __int64 v81; // rcx
  __int64 v82; // rdx
  __m128i v83; // xmm0
  __int64 v85; // [rsp+0h] [rbp-148h]
  __int64 v86; // [rsp+0h] [rbp-148h]
  __m128i *src; // [rsp+8h] [rbp-140h]
  __m128i *srca; // [rsp+8h] [rbp-140h]
  void *srcb; // [rsp+8h] [rbp-140h]
  __m128i v90; // [rsp+10h] [rbp-138h] BYREF
  __m128i v91; // [rsp+20h] [rbp-128h] BYREF
  __int64 v92; // [rsp+30h] [rbp-118h]
  _QWORD v93[5]; // [rsp+40h] [rbp-108h] BYREF
  char v94; // [rsp+68h] [rbp-E0h]
  __int64 v95; // [rsp+70h] [rbp-D8h]
  __int64 v96; // [rsp+78h] [rbp-D0h]
  __int64 v97; // [rsp+80h] [rbp-C8h]
  __int128 v98; // [rsp+88h] [rbp-C0h]
  __int64 v99; // [rsp+98h] [rbp-B0h]
  __int64 v100; // [rsp+A0h] [rbp-A8h]
  __int64 v101; // [rsp+A8h] [rbp-A0h]
  __int128 v102; // [rsp+B0h] [rbp-98h]
  unsigned __int64 *v103; // [rsp+C0h] [rbp-88h] BYREF
  __int128 v104; // [rsp+C8h] [rbp-80h]
  __int64 v105; // [rsp+D8h] [rbp-70h]
  __int64 v106; // [rsp+E0h] [rbp-68h]
  __int64 v107; // [rsp+E8h] [rbp-60h]
  __int64 v108; // [rsp+F0h] [rbp-58h]
  int v109; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v110; // [rsp+108h] [rbp-40h]

  v110 = __readfsqword(0x28u);
  v11 = *(_QWORD *)(a1 + 16);
  v12 = *(_QWORD *)(a1 + 64);
  v13 = *(_QWORD *)(v11 + 280);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 72) = 0;
    qfree(v12);
    *(_QWORD *)(a1 + 64) = 0;
    *(_QWORD *)(a1 + 80) = 0;
  }
  v14 = 0;
  v94 = 0;
  v109 = a4;
  v93[0] = off_4DE2B0;
  v15 = *(_QWORD *)(a1 + 104);
  v16 = (unsigned __int64)v93;
  memset(&v93[1], 0, 32);
  v95 = 0;
  v96 = 0;
  v97 = 0;
  v99 = a1 + 64;
  v100 = a2;
  v101 = 0;
  v103 = nullptr;
  v105 = -1;
  v106 = a3;
  v108 = 0;
  v107 = v15;
  v98 = 0;
  v102 = 0;
  v104 = 0;
  sub_11FBB0(v13, (__int64)v93);
  v21 = *(_QWORD *)(a1 + 72);
  if ( !v21 )
  {
    if ( *(_BYTE *)(v13 + 320) )
      goto LABEL_5;
LABEL_50:
    LODWORD(v32) = 0;
    goto LABEL_51;
  }
  v58 = *(_QWORD *)(a1 + 64);
  v59 = 5 * v21;
  v60 = 40 * v21;
  v61 = (__m128i *)(v58 + 40 * v21);
  if ( (__m128i *)v58 != v61 )
  {
    v62 = 0xCCCCCCCCCCCCCCCDLL * (v60 >> 3);
    if ( v62 )
    {
      _BitScanReverse64(&v63, v62);
      src = *(__m128i **)(a1 + 64);
      sub_1ABF10(v58, v61, 2LL * (int)v63, v59, v19, v20);
      v64 = src;
      if ( v60 > 640 )
      {
        v65 = src + 40;
        sub_195740(src, src + 40);
        do
        {
          v66 = (__int64)v65;
          v65 = (__m128i *)((char *)v65 + 40);
          sub_1956C0(v66);
        }
        while ( v61 != v65 );
        goto LABEL_62;
      }
    }
    else
    {
      srca = *(__m128i **)(a1 + 64);
      sub_1ABF10(v58, v61, -2, v59, v19, v20);
      v64 = srca;
    }
    sub_195740(v64, v61);
  }
LABEL_62:
  v67 = v107;
  if ( *(_QWORD *)(a1 + 104)
     + *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL) * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL) >= v107 )
    v67 = *(_QWORD *)(a1 + 104)
        + *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL) * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
  v16 = a5 & (v105 == -1);
  if ( !(unsigned __int8)sub_19DBF0(a1, a5 & (v105 == -1), v108, v67, 0.0) )
  {
    v47 = *(_QWORD *)(a1 + 64);
    if ( v47 )
    {
      *(_QWORD *)(a1 + 72) = 0;
      qfree(v47);
      *(_QWORD *)(a1 + 64) = 0;
      *(_QWORD *)(a1 + 80) = 0;
    }
    goto LABEL_50;
  }
  v17 = *(_QWORD *)(a1 + 16);
  v68 = *(_DWORD *)(a1 + 112);
  if ( *(_DWORD *)(v17 + 8) != 3 )
    v68 += *(_DWORD *)(v17 + 48);
  if ( !v68 )
  {
    v69 = *(_QWORD *)(a1 + 64);
    v70 = *(_QWORD *)(v69 + 24);
    if ( v70 == *(_QWORD *)(a1 + 104) )
    {
      if ( *(_BYTE *)(v13 + 320) )
      {
        if ( !under_debugger )
          sub_383060(0xCD2Eu, 0.0);
        goto LABEL_100;
      }
      v16 = v105;
      if ( v105 != -1 && v70 != v105 )
      {
        if ( v70 >= v105 )
        {
          if ( !under_debugger )
            sub_383060(0xC908u, 0.0);
        }
        else
        {
          v71 = *(_QWORD *)(a1 + 72);
          v72 = *(const __m128i **)(a1 + 64);
          v73 = v69 + 40 * v71;
          if ( v73 != v69 )
          {
            while ( v105 != v72[1].m128i_i64[1] )
            {
              v72 = (const __m128i *)((char *)v72 + 40);
              if ( (const __m128i *)v73 == v72 )
                goto LABEL_96;
            }
            if ( (const __m128i *)v73 != v72 )
            {
              v16 = 0xCCCCCCCCCCCCCCCDLL;
              v74 = 0xCCCCCCCCCCCCCCCDLL * ((v73 - (__int64)v72) >> 3) - 1;
              if ( v74 >= 0 )
              {
                v16 = *(_QWORD *)(a1 + 64);
                v75 = v72;
                do
                {
                  v76 = _mm_loadu_si128(v75);
                  v16 += 40LL;
                  v75 = (const __m128i *)((char *)v75 + 40);
                  *(__m128i *)(v16 - 40) = v76;
                  v14 = _mm_loadu_si128((const __m128i *)((char *)v75 - 24));
                  *(__m128i *)(v16 - 24) = v14;
                  *(_QWORD *)(v16 - 8) = v75[-1].m128i_i64[1];
                  v57 = v74-- == 0;
                }
                while ( !v57 );
                v71 = *(_QWORD *)(a1 + 72);
              }
              v17 = ((__int64)v72->m128i_i64 - v69) >> 3;
              v18 = v71 - 0xCCCCCCCCCCCCCCCDLL * v17;
              *(_QWORD *)(a1 + 72) = v18;
              goto LABEL_5;
            }
          }
LABEL_96:
          if ( !under_debugger )
            sub_383060(0xC909u, 0.0);
        }
LABEL_100:
        BUG();
      }
      if ( v69 )
      {
        *(_QWORD *)(a1 + 72) = 0;
        qfree(v69);
        *(_QWORD *)(a1 + 64) = 0;
        *(_QWORD *)(a1 + 80) = 0;
      }
    }
  }
LABEL_5:
  v22 = 0;
  v23 = 0;
  v24 = 0;
  if ( !(_QWORD)v102 )
    goto LABEL_47;
  do
  {
    v25 = sub_19E1E0(v101 + 48 * v24, v14, v16, v17, v18, a7);
    v17 = *(_QWORD *)(a1 + 72);
    v16 = *(_QWORD *)(a1 + 64);
    v28 = v25;
    v18 = v16 + 40 * v17;
    if ( v16 == v18 )
      goto LABEL_30;
    v29 = *(_QWORD *)(a1 + 64);
    while ( v28 != *(_QWORD *)(v29 + 24) )
    {
      v29 += 40;
      if ( v29 == v18 )
        goto LABEL_30;
    }
    if ( v18 == v29 )
    {
LABEL_30:
      a7 = 0;
      v91.m128i_i64[1] = v28;
      v36 = *(_QWORD *)(a1 + 80);
      v91.m128i_i64[0] = -1;
      ++v17;
      LOBYTE(v92) = 0;
      v90 = 0;
      if ( (unsigned __int64)&v90 >= v16 && (v16 += 40 * v36, (unsigned __int64)&v90 < v16) )
      {
        if ( v36 < v17 )
        {
          v16 = 0;
          v77 = qvector_reserve(a1 + 64, 0, v17, 40);
          v78 = *(_QWORD *)(a1 + 72);
          v79 = *(void **)(a1 + 80);
          *(_QWORD *)(a1 + 80) = v36;
          v80 = *(const __m128i **)(a1 + 64);
          v81 = v78 - 1;
          if ( v81 >= 0 )
          {
            v82 = v77;
            do
            {
              v83 = _mm_loadu_si128(v80);
              v82 += 40;
              v80 = (const __m128i *)((char *)v80 + 40);
              *(__m128i *)(v82 - 40) = v83;
              *(__m128i *)(v82 - 24) = _mm_loadu_si128((const __m128i *)((char *)v80 - 24));
              v16 = v80[-1].m128i_u64[1];
              *(_QWORD *)(v82 - 8) = v16;
              v57 = v81-- == 0;
            }
            while ( !v57 );
            v80 = *(const __m128i **)(a1 + 64);
          }
          srcb = v79;
          v86 = v77;
          qfree((__int64)v80);
          v26 = (__int64)srcb;
          v17 = 5LL * *(_QWORD *)(a1 + 72);
          *(_QWORD *)(a1 + 64) = v86;
          *(_QWORD *)(a1 + 80) = srcb;
          v18 = v86 + 8 * v17;
        }
        v14 = 0;
        *(_QWORD *)(v18 + 16) = -1;
        *(_QWORD *)(v18 + 24) = v28;
        *(_BYTE *)(v18 + 32) = 0;
        *(_OWORD *)v18 = 0;
      }
      else
      {
        if ( v36 < v17 )
        {
          v16 = 0;
          v49 = qvector_reserve(a1 + 64, 0, v17, 40);
          v50 = *(_QWORD *)(a1 + 72);
          v51 = v49;
          v52 = *(const __m128i **)(a1 + 64);
          v53 = *(_QWORD *)(a1 + 80);
          *(_QWORD *)(a1 + 80) = v36;
          v54 = v50 - 1;
          if ( v54 >= 0 )
          {
            v55 = v51;
            do
            {
              v56 = _mm_loadu_si128(v52);
              v55 += 40;
              v52 = (const __m128i *)((char *)v52 + 40);
              *(__m128i *)(v55 - 40) = v56;
              *(__m128i *)(v55 - 24) = _mm_loadu_si128((const __m128i *)((char *)v52 - 24));
              v16 = v52[-1].m128i_u64[1];
              *(_QWORD *)(v55 - 8) = v16;
              v57 = v54-- == 0;
            }
            while ( !v57 );
            v52 = *(const __m128i **)(a1 + 64);
          }
          v85 = v53;
          qfree((__int64)v52);
          *(_QWORD *)(a1 + 64) = v51;
          *(_QWORD *)(a1 + 80) = v85;
          v18 = v51 + 40LL * *(_QWORD *)(a1 + 72);
        }
        v37 = v92;
        *(__m128i *)v18 = _mm_load_si128(&v90);
        v14 = _mm_load_si128(&v91);
        *(_QWORD *)(v18 + 32) = v37;
        *(__m128i *)(v18 + 16) = v14;
      }
      ++*(_QWORD *)(a1 + 72);
      v23 = 1;
    }
    v24 = ++v22;
  }
  while ( v22 < (unsigned __int64)v102 );
  v30 = *(_QWORD *)(a1 + 72);
  if ( v23 )
  {
    v40 = *(__m128i **)(a1 + 64);
    v41 = 40 * v30;
    v42 = (__m128i *)((char *)v40 + 40 * v30);
    if ( v40 != v42 )
    {
      v43 = 0xCCCCCCCCCCCCCCCDLL * (v41 >> 3);
      if ( v43 )
      {
        _BitScanReverse64(&v44, v43);
        sub_1ABF10(*(_QWORD *)(a1 + 64), v42, 2LL * (int)v44, v18, v26, v27);
        if ( v41 > 640 )
        {
          v45 = v40 + 40;
          sub_195740(v40, v40 + 40);
          do
          {
            v46 = (__int64)v45;
            v45 = (__m128i *)((char *)v45 + 40);
            sub_1956C0(v46);
          }
          while ( v42 != v45 );
          goto LABEL_47;
        }
      }
      else
      {
        sub_1ABF10(*(_QWORD *)(a1 + 64), v42, -2, v18, v26, v27);
      }
      sub_195740(v40, v42);
LABEL_47:
      v30 = *(_QWORD *)(a1 + 72);
    }
  }
  v31 = v108;
  if ( v107 >= v108 )
    v31 = v107;
  v32 = v31;
  if ( v30 )
  {
    v38 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40 * v30 - 16);
    v39 = 0;
    if ( v38 >= 0 )
      v39 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40 * v30 - 16);
    if ( v39 >= v32 )
    {
LABEL_21:
      v34 = v30 - 2;
      if ( (int)v30 - 2 >= 0 )
      {
        v32 = 40LL * v34;
        do
        {
          while ( !sub_317040(&v103, *(_QWORD *)(*(_QWORD *)(a1 + 64) + v32 + 24)) )
          {
            --v34;
            v32 -= 40;
            if ( v34 == -1 )
              goto LABEL_28;
          }
          v35 = *(_QWORD *)(a1 + 72);
          if ( (__int64)(0xCCCCCCCCCCCCCCCDLL * ((40 * v35 - v32) >> 3) - 2) >= 0 )
          {
            memmove(
              (void *)(v32 + *(_QWORD *)(a1 + 64)),
              (const void *)(v32 + *(_QWORD *)(a1 + 64) + 40),
              40 * v35 - v32 - 40);
            v35 = *(_QWORD *)(a1 + 72);
          }
          --v34;
          v32 -= 40;
          *(_QWORD *)(a1 + 72) = v35 - 1;
        }
        while ( v34 != -1 );
LABEL_28:
        v30 = *(_QWORD *)(a1 + 72);
      }
      goto LABEL_29;
    }
    if ( sub_317040(&v103, v38) )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL * *(_QWORD *)(a1 + 72) - 16) = v32;
      goto LABEL_20;
    }
LABEL_19:
    sub_1999C0((const __m128i **)(a1 + 64), v32, 0, 0, *(double *)v14.m128i_i64);
LABEL_20:
    *(_BYTE *)(*(_QWORD *)(a1 + 64) + 40LL * *(_QWORD *)(a1 + 72) - 8) = 2;
    v30 = *(_QWORD *)(a1 + 72);
    goto LABEL_21;
  }
  v33 = *(_QWORD *)(a1 + 104) + *(_DWORD *)(a1 + 112) * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
  if ( v33 < 0 )
    v33 = 0;
  if ( v33 < v32 )
    goto LABEL_19;
LABEL_29:
  LOBYTE(v32) = v30 != 0;
LABEL_51:
  sub_196C40(v93);
  return (unsigned int)v32;
}

