__int64 __fastcall sub_1A7C00(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  __int64 v8; // rbp
  __m128i v9; // xmm0
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  int v14; // r15d
  char v15; // bp
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  unsigned __int64 v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rdx
  unsigned int v29; // ebp
  __int64 v30; // rax
  unsigned __int64 v31; // rbp
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rdx
  __m128i *v36; // r15
  __int64 v37; // rbx
  __m128i *v38; // rbp
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rdx
  __m128i *v41; // rbx
  __int64 v42; // rdi
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rbx
  const __m128i *v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rdx
  __m128i v51; // xmm0
  bool v52; // cf
  __int64 v53; // rdi
  __int64 v54; // rcx
  __int64 v55; // rbx
  __m128i *v56; // r15
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rdx
  __m128i *v59; // rdi
  __m128i *v60; // rbx
  __int64 v61; // rdi
  __int64 v62; // rdx
  __int64 v63; // rdx
  int v64; // eax
  const __m128i *v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rcx
  const __m128i *v68; // rdx
  const __m128i *v69; // rax
  signed __int64 v70; // rax
  __int64 v71; // rsi
  const __m128i *v72; // rcx
  __m128i v73; // xmm0
  __int64 v74; // rax
  __int64 v75; // rcx
  void *v76; // r8
  const __m128i *v77; // rdi
  __int64 v78; // rcx
  __int64 v79; // rdx
  __m128i v80; // xmm0
  __int64 v81; // rdx
  __int64 v83; // [rsp+0h] [rbp-148h]
  __int64 v84; // [rsp+0h] [rbp-148h]
  __m128i *src; // [rsp+8h] [rbp-140h]
  __m128i *srca; // [rsp+8h] [rbp-140h]
  void *srcb; // [rsp+8h] [rbp-140h]
  __m128i v88; // [rsp+10h] [rbp-138h] BYREF
  __m128i v89; // [rsp+20h] [rbp-128h] BYREF
  __int64 v90; // [rsp+30h] [rbp-118h]
  _QWORD v91[5]; // [rsp+40h] [rbp-108h] BYREF
  char v92; // [rsp+68h] [rbp-E0h]
  __int64 v93; // [rsp+70h] [rbp-D8h]
  __int64 v94; // [rsp+78h] [rbp-D0h]
  __int64 v95; // [rsp+80h] [rbp-C8h]
  __int128 v96; // [rsp+88h] [rbp-C0h]
  __int64 v97; // [rsp+98h] [rbp-B0h]
  __int64 v98; // [rsp+A0h] [rbp-A8h]
  __int64 v99; // [rsp+A8h] [rbp-A0h]
  __int128 v100; // [rsp+B0h] [rbp-98h]
  __int64 v101; // [rsp+C0h] [rbp-88h] BYREF
  __int128 v102; // [rsp+C8h] [rbp-80h]
  __int64 v103; // [rsp+D8h] [rbp-70h]
  __int64 v104; // [rsp+E0h] [rbp-68h]
  __int64 v105; // [rsp+E8h] [rbp-60h]
  __int64 v106; // [rsp+F0h] [rbp-58h]
  int v107; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v108; // [rsp+108h] [rbp-40h]

  v108 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL);
  if ( *(_QWORD *)(a1 + 64) )
  {
    *(_QWORD *)(a1 + 72) = 0;
    qfree();
    *(_QWORD *)(a1 + 64) = 0;
    *(_QWORD *)(a1 + 80) = 0;
  }
  v9 = 0;
  v92 = 0;
  v107 = a4;
  v91[0] = off_4B0D30;
  v10 = *(_QWORD *)(a1 + 104);
  memset(&v91[1], 0, 32);
  v93 = 0;
  v94 = 0;
  v95 = 0;
  v97 = a1 + 64;
  v98 = a2;
  v99 = 0;
  v101 = 0;
  v103 = -1;
  v104 = a3;
  v106 = 0;
  v105 = v10;
  v96 = 0;
  v100 = 0;
  v102 = 0;
  sub_11B6F0(v8, (__int64)v91);
  v13 = *(_QWORD *)(a1 + 72);
  if ( !v13 )
  {
    if ( *(_BYTE *)(v8 + 320) )
      goto LABEL_5;
LABEL_50:
    LODWORD(v27) = 0;
    goto LABEL_51;
  }
  v53 = *(_QWORD *)(a1 + 64);
  v54 = 5 * v13;
  v55 = 40 * v13;
  v56 = (__m128i *)(v53 + 40 * v13);
  if ( (__m128i *)v53 != v56 )
  {
    v57 = 0xCCCCCCCCCCCCCCCDLL * (v55 >> 3);
    if ( v57 )
    {
      _BitScanReverse64(&v58, v57);
      src = *(__m128i **)(a1 + 64);
      sub_1A7910(v53, v56, 2LL * (int)v58, v54, v11, v12);
      v59 = src;
      if ( v55 > 640 )
      {
        v60 = src + 40;
        sub_191280(src, src + 40);
        do
        {
          v61 = (__int64)v60;
          v60 = (__m128i *)((char *)v60 + 40);
          sub_191200(v61);
        }
        while ( v56 != v60 );
        goto LABEL_61;
      }
    }
    else
    {
      srca = *(__m128i **)(a1 + 64);
      sub_1A7910(v53, v56, -2, v54, v11, v12);
      v59 = srca;
    }
    sub_191280(v59, v56);
  }
LABEL_61:
  v62 = v105;
  if ( *(_QWORD *)(a1 + 104)
     + *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL) * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL) >= v105 )
    v62 = *(_QWORD *)(a1 + 104)
        + *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL) * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
  if ( !(unsigned __int8)sub_1995F0(a1, a5 & (v103 == -1), v106, v62) )
  {
    if ( *(_QWORD *)(a1 + 64) )
    {
      *(_QWORD *)(a1 + 72) = 0;
      qfree();
      *(_QWORD *)(a1 + 64) = 0;
      *(_QWORD *)(a1 + 80) = 0;
    }
    goto LABEL_50;
  }
  v63 = *(_QWORD *)(a1 + 16);
  v64 = *(_DWORD *)(a1 + 112);
  if ( *(_DWORD *)(v63 + 8) != 3 )
    v64 += *(_DWORD *)(v63 + 48);
  if ( !v64 )
  {
    v65 = *(const __m128i **)(a1 + 64);
    v66 = v65[1].m128i_i64[1];
    if ( v66 == *(_QWORD *)(a1 + 104) )
    {
      if ( *(_BYTE *)(v8 + 320) )
      {
        if ( !under_debugger )
          sub_37DDE0(52526);
        goto LABEL_98;
      }
      if ( v103 != -1 && v66 != v103 )
      {
        if ( v66 >= v103 )
        {
          if ( !under_debugger )
            sub_37DDE0(51464);
        }
        else
        {
          v67 = *(_QWORD *)(a1 + 72);
          v68 = *(const __m128i **)(a1 + 64);
          v69 = (const __m128i *)((char *)v65 + 40 * v67);
          if ( v69 != v65 )
          {
            while ( v103 != v68[1].m128i_i64[1] )
            {
              v68 = (const __m128i *)((char *)v68 + 40);
              if ( v69 == v68 )
                goto LABEL_94;
            }
            if ( v69 != v68 )
            {
              v70 = 0xCCCCCCCCCCCCCCCDLL * (((char *)v69 - (char *)v68) >> 3) - 1;
              if ( v70 >= 0 )
              {
                v71 = *(_QWORD *)(a1 + 64);
                v72 = v68;
                do
                {
                  v73 = _mm_loadu_si128(v72);
                  v71 += 40;
                  v72 = (const __m128i *)((char *)v72 + 40);
                  *(__m128i *)(v71 - 40) = v73;
                  v9 = _mm_loadu_si128((const __m128i *)((char *)v72 - 24));
                  *(__m128i *)(v71 - 24) = v9;
                  *(_QWORD *)(v71 - 8) = v72[-1].m128i_i64[1];
                  v52 = v70-- == 0;
                }
                while ( !v52 );
                v67 = *(_QWORD *)(a1 + 72);
              }
              *(_QWORD *)(a1 + 72) = v67 - 0xCCCCCCCCCCCCCCCDLL * (((char *)v68 - (char *)v65) >> 3);
              goto LABEL_5;
            }
          }
LABEL_94:
          if ( !under_debugger )
            sub_37DDE0(51465);
        }
LABEL_98:
        BUG();
      }
      if ( v65 )
      {
        *(_QWORD *)(a1 + 72) = 0;
        qfree();
        *(_QWORD *)(a1 + 64) = 0;
        *(_QWORD *)(a1 + 80) = 0;
      }
    }
  }
LABEL_5:
  v14 = 0;
  v15 = 0;
  v16 = 0;
  if ( !(_QWORD)v100 )
    goto LABEL_47;
  do
  {
    v17 = sub_199BE0(v99 + 48 * v16, v9);
    v20 = *(_QWORD *)(a1 + 72);
    v21 = *(_QWORD *)(a1 + 64);
    v22 = v17;
    v23 = v21 + 40 * v20;
    if ( v21 == v23 )
      goto LABEL_30;
    v24 = *(_QWORD *)(a1 + 64);
    while ( v22 != *(_QWORD *)(v24 + 24) )
    {
      v24 += 40;
      if ( v24 == v23 )
        goto LABEL_30;
    }
    if ( v23 == v24 )
    {
LABEL_30:
      v89.m128i_i64[1] = v22;
      v31 = *(_QWORD *)(a1 + 80);
      v89.m128i_i64[0] = -1;
      v32 = v20 + 1;
      LOBYTE(v90) = 0;
      v88 = 0;
      if ( (unsigned __int64)&v88 >= v21 && (unsigned __int64)&v88 < v21 + 40 * v31 )
      {
        if ( v31 < v32 )
        {
          v74 = qvector_reserve();
          v75 = *(_QWORD *)(a1 + 72);
          v76 = *(void **)(a1 + 80);
          *(_QWORD *)(a1 + 80) = v31;
          v77 = *(const __m128i **)(a1 + 64);
          v78 = v75 - 1;
          if ( v78 >= 0 )
          {
            v79 = v74;
            do
            {
              v80 = _mm_loadu_si128(v77);
              v79 += 40;
              v77 = (const __m128i *)((char *)v77 + 40);
              *(__m128i *)(v79 - 40) = v80;
              *(__m128i *)(v79 - 24) = _mm_loadu_si128((const __m128i *)((char *)v77 - 24));
              *(_QWORD *)(v79 - 8) = v77[-1].m128i_i64[1];
              v52 = v78-- == 0;
            }
            while ( !v52 );
          }
          srcb = v76;
          v84 = v74;
          qfree();
          v18 = (__int64)srcb;
          v81 = 5LL * *(_QWORD *)(a1 + 72);
          *(_QWORD *)(a1 + 64) = v84;
          *(_QWORD *)(a1 + 80) = srcb;
          v23 = v84 + 8 * v81;
        }
        v9 = 0;
        *(_QWORD *)(v23 + 16) = -1;
        *(_QWORD *)(v23 + 24) = v22;
        *(_BYTE *)(v23 + 32) = 0;
        *(_OWORD *)v23 = 0;
      }
      else
      {
        if ( v31 < v32 )
        {
          v44 = qvector_reserve();
          v45 = *(_QWORD *)(a1 + 72);
          v46 = v44;
          v47 = *(const __m128i **)(a1 + 64);
          v48 = *(_QWORD *)(a1 + 80);
          *(_QWORD *)(a1 + 80) = v31;
          v49 = v45 - 1;
          if ( v49 >= 0 )
          {
            v50 = v46;
            do
            {
              v51 = _mm_loadu_si128(v47);
              v50 += 40;
              v47 = (const __m128i *)((char *)v47 + 40);
              *(__m128i *)(v50 - 40) = v51;
              *(__m128i *)(v50 - 24) = _mm_loadu_si128((const __m128i *)((char *)v47 - 24));
              *(_QWORD *)(v50 - 8) = v47[-1].m128i_i64[1];
              v52 = v49-- == 0;
            }
            while ( !v52 );
          }
          v83 = v48;
          qfree();
          *(_QWORD *)(a1 + 64) = v46;
          *(_QWORD *)(a1 + 80) = v83;
          v23 = v46 + 40LL * *(_QWORD *)(a1 + 72);
        }
        v33 = v90;
        *(__m128i *)v23 = _mm_load_si128(&v88);
        v9 = _mm_load_si128(&v89);
        *(_QWORD *)(v23 + 32) = v33;
        *(__m128i *)(v23 + 16) = v9;
      }
      ++*(_QWORD *)(a1 + 72);
      v15 = 1;
    }
    v16 = ++v14;
  }
  while ( v14 < (unsigned __int64)v100 );
  v25 = *(_QWORD *)(a1 + 72);
  if ( v15 )
  {
    v36 = *(__m128i **)(a1 + 64);
    v37 = 40 * v25;
    v38 = (__m128i *)((char *)v36 + 40 * v25);
    if ( v36 != v38 )
    {
      v39 = 0xCCCCCCCCCCCCCCCDLL * (v37 >> 3);
      if ( v39 )
      {
        _BitScanReverse64(&v40, v39);
        sub_1A7910(*(_QWORD *)(a1 + 64), v38, 2LL * (int)v40, v23, v18, v19);
        if ( v37 > 640 )
        {
          v41 = v36 + 40;
          sub_191280(v36, v36 + 40);
          do
          {
            v42 = (__int64)v41;
            v41 = (__m128i *)((char *)v41 + 40);
            sub_191200(v42);
          }
          while ( v38 != v41 );
          goto LABEL_47;
        }
      }
      else
      {
        sub_1A7910(*(_QWORD *)(a1 + 64), v38, -2, v23, v18, v19);
      }
      sub_191280(v36, v38);
LABEL_47:
      v25 = *(_QWORD *)(a1 + 72);
    }
  }
  v26 = v106;
  if ( v105 >= v106 )
    v26 = v105;
  v27 = v26;
  if ( v25 )
  {
    v34 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40 * v25 - 16);
    v35 = 0;
    if ( v34 >= 0 )
      v35 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40 * v25 - 16);
    if ( v35 >= v27 )
    {
LABEL_21:
      v29 = v25 - 2;
      if ( (int)v25 - 2 >= 0 )
      {
        v27 = 40LL * v29;
        do
        {
          while ( !(unsigned __int8)sub_311F40(&v101, *(_QWORD *)(*(_QWORD *)(a1 + 64) + v27 + 24)) )
          {
            --v29;
            v27 -= 40;
            if ( v29 == -1 )
              goto LABEL_28;
          }
          v30 = *(_QWORD *)(a1 + 72);
          if ( (__int64)(0xCCCCCCCCCCCCCCCDLL * ((40 * v30 - v27) >> 3) - 2) >= 0 )
          {
            memmove(
              (void *)(v27 + *(_QWORD *)(a1 + 64)),
              (const void *)(v27 + *(_QWORD *)(a1 + 64) + 40),
              40 * v30 - v27 - 40);
            v30 = *(_QWORD *)(a1 + 72);
          }
          --v29;
          v27 -= 40;
          *(_QWORD *)(a1 + 72) = v30 - 1;
        }
        while ( v29 != -1 );
LABEL_28:
        v25 = *(_QWORD *)(a1 + 72);
      }
      goto LABEL_29;
    }
    if ( (unsigned __int8)sub_311F40(&v101, v34) )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL * *(_QWORD *)(a1 + 72) - 16) = v27;
      goto LABEL_20;
    }
LABEL_19:
    sub_1953C0((unsigned __int64 *)(a1 + 64), v27, 0, 0);
LABEL_20:
    *(_BYTE *)(*(_QWORD *)(a1 + 64) + 40LL * *(_QWORD *)(a1 + 72) - 8) = 2;
    v25 = *(_QWORD *)(a1 + 72);
    goto LABEL_21;
  }
  v28 = *(_QWORD *)(a1 + 104) + *(_DWORD *)(a1 + 112) * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
  if ( v28 < 0 )
    v28 = 0;
  if ( v28 < v27 )
    goto LABEL_19;
LABEL_29:
  LOBYTE(v27) = v25 != 0;
LABEL_51:
  sub_192780(v91);
  return (unsigned int)v27;
}

