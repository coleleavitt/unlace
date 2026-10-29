__int64 __fastcall sub_76FE0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  const char *v4; // rbp
  _QWORD *v5; // r12
  unsigned __int64 v6; // rsi
  _DWORD *v7; // rcx
  unsigned int v8; // r12d
  unsigned int v9; // r13d
  __int64 v10; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  unsigned int v13; // r8d
  unsigned int v14; // r9d
  int v15; // eax
  int v16; // r11d
  __int64 v17; // r10
  unsigned int v18; // r15d
  unsigned int i; // r13d
  __int64 v20; // r14
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r12
  size_t v24; // rax
  __int64 v25; // rsi
  __int64 v26; // r11
  unsigned __int64 v27; // rdx
  __int64 v28; // r12
  __int64 v29; // rbp
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 *v32; // rbx
  __int64 v33; // rsi
  __m128i v34; // xmm0
  __int64 *v36; // rbx
  __m128i *v37; // rsi
  __m128i si128; // xmm0
  __int64 v39; // rax
  const char *v40; // rdx
  __int64 *v41; // rdi
  const char *v42; // rdx
  __int64 *v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 *v46; // rbx
  __int64 v47; // rsi
  __m128i v48; // xmm0
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned int j; // r12d
  __int64 v52; // r15
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 *v55; // rax
  __int64 *k; // r13
  unsigned int v57; // ecx
  int v58; // r12d
  int v59; // r15d
  __int64 v60; // rax
  int v61; // ebp
  __int64 v62; // rsi
  __int64 v63; // rax
  __int64 v64; // rbp
  __int64 *v65; // r12
  __int64 v66; // rsi
  __int64 v67; // [rsp+0h] [rbp-128h]
  __int64 v68; // [rsp+0h] [rbp-128h]
  __int64 v69; // [rsp+8h] [rbp-120h]
  __int64 *v70; // [rsp+8h] [rbp-120h]
  _DWORD *v71; // [rsp+10h] [rbp-118h]
  unsigned int v72; // [rsp+10h] [rbp-118h]
  unsigned int v73; // [rsp+18h] [rbp-110h]
  const char *v74; // [rsp+18h] [rbp-110h]
  __int64 v75; // [rsp+20h] [rbp-108h]
  __int64 v76; // [rsp+28h] [rbp-100h]
  const char *v77; // [rsp+30h] [rbp-F8h]
  int v78; // [rsp+3Ch] [rbp-ECh]
  unsigned int v79; // [rsp+48h] [rbp-E0h] BYREF
  unsigned int v80; // [rsp+4Ch] [rbp-DCh] BYREF
  __int64 v81; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v82; // [rsp+58h] [rbp-D0h]
  __int128 v83; // [rsp+60h] [rbp-C8h]
  __int64 v84; // [rsp+70h] [rbp-B8h]
  __int128 v85; // [rsp+78h] [rbp-B0h]
  __int64 (__fastcall **v86)(); // [rsp+90h] [rbp-98h] BYREF
  __int128 v87; // [rsp+98h] [rbp-90h]
  __int64 v88; // [rsp+A8h] [rbp-80h]
  __int64 v89; // [rsp+B0h] [rbp-78h]
  __int64 v90; // [rsp+B8h] [rbp-70h]
  __int128 v91; // [rsp+C0h] [rbp-68h]
  __int128 v92; // [rsp+D0h] [rbp-58h]
  char v93; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v94; // [rsp+E8h] [rbp-40h]

  v94 = __readfsqword(0x28u);
  v4 = (const char *)a2;
  if ( !(unsigned __int8)sub_76710((size_t *)(a1 + 72), a2, a3) )
  {
    v36 = *(__int64 **)(a1 + 64);
    v37 = (__m128i *)*v36;
    if ( (unsigned __int64)v36[2] <= 0x20 )
    {
      v44 = qvector_reserve(v36, v37, 33, 1);
      *v36 = v44;
      v37 = (__m128i *)v44;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_942A0);
    v36[1] = 33;
    *v37 = si128;
    v37[1] = _mm_load_si128((const __m128i *)&xmmword_942B0);
    *(_BYTE *)(*v36 + 32) = 0;
    return 1;
  }
  v5 = *(_QWORD **)(a1 + 88);
  *(_QWORD *)(a1 + 128) = v5;
  if ( !(unsigned __int8)sub_55440((_BYTE *)(a1 + 200), v5) )
  {
    v87 = 0;
    v86 = nullptr;
    v86 = (__int64 (__fastcall **)())qvector_reserve(&v86, 0, 38, 1);
    *(_QWORD *)&v87 = 38;
    memmove(v86, v5, 0x25u);
    v42 = (const char *)v86;
    *((_BYTE *)v86 + 37) = 0;
    v43 = *(__int64 **)(a1 + 64);
    if ( !(_QWORD)v87 )
      v42 = src;
    sub_37FD0(v43, (__int64)"Wrong file signature: %s", v42);
    if ( v86 )
    {
      *(_QWORD *)&v87 = 0;
      qfree(v86);
    }
    return 1;
  }
  if ( !*(_BYTE *)(a1 + 200) )
  {
    v87 = 0;
    v86 = nullptr;
    v86 = (__int64 (__fastcall **)())qvector_reserve(&v86, 0, 38, 1);
    *(_QWORD *)&v87 = 38;
    memmove(v86, v5, 0x25u);
    v40 = (const char *)v86;
    *((_BYTE *)v86 + 37) = 0;
    v41 = *(__int64 **)(a1 + 64);
    if ( !(_QWORD)v87 )
      v40 = src;
    sub_37FD0(v41, (__int64)"Input file has an unsupported signature: %s", v40);
    if ( v86 )
    {
      *(_QWORD *)&v87 = 0;
      qfree(v86);
    }
    return 2;
  }
  v6 = *(_QWORD *)(a1 + 80);
  if ( v6 <= 0x34 )
    goto LABEL_35;
  v7 = *(_DWORD **)(a1 + 128);
  v8 = v7[8];
  *(_DWORD *)(a1 + 136) = v8;
  if ( v8 - 512 > 0xFE00 || (v9 = v8 & (v8 - 1)) != 0 )
  {
    v32 = *(__int64 **)(a1 + 64);
    v33 = *v32;
    if ( (unsigned __int64)v32[2] <= 0x16 )
    {
      v39 = qvector_reserve(v32, v33, 23, 1);
      *v32 = v39;
      v33 = v39;
    }
    v34 = _mm_load_si128((const __m128i *)&xmmword_942C0);
    v32[1] = 23;
    *(__m128i *)v33 = v34;
    *(_QWORD *)(v33 + 14) = 0x657A6973206B636FLL;
    *(_BYTE *)(*v32 + 22) = 0;
    return 2;
  }
  v10 = (unsigned int)v7[10];
  v11 = v8;
  *(_DWORD *)(a1 + 140) = v10;
  if ( (unsigned __int64)v8 * v10 - 1 >= v6 )
  {
    v46 = *(__int64 **)(a1 + 64);
    v47 = *v46;
    if ( (unsigned __int64)v46[2] <= 0x26 )
    {
      v53 = qvector_reserve(v46, v47, 39, 1);
      *v46 = v53;
      v47 = v53;
    }
    v48 = _mm_load_si128((const __m128i *)&xmmword_942D0);
    v46[1] = 39;
    *(__m128i *)v47 = v48;
    *(__m128i *)(v47 + 16) = _mm_load_si128((const __m128i *)&xmmword_942E0);
    *(_QWORD *)(v47 + 30) = 0x6565726761736964LL;
    *(_BYTE *)(*v46 + 38) = 0;
    return 1;
  }
  v12 = (unsigned int)v7[11];
  *(_DWORD *)(a1 + 144) = v12;
  v13 = v12;
  if ( v12 >= v6 || (v12 & 3) != 0 )
    goto LABEL_35;
  v14 = 4 * ((unsigned int)v12 / v8 - (((unsigned int)v12 % v8 == 0) - 1));
  v15 = v14 / v8;
  v16 = v14 / v8;
  if ( v14 % v8 )
  {
    if ( v8 >= 4 * (unsigned __int64)(unsigned int)(v15 + 14) )
    {
      v16 = v15 + 1;
      v76 = a1 + 152;
      goto LABEL_13;
    }
    goto LABEL_35;
  }
  if ( v8 < 4 * (unsigned __int64)(unsigned int)(v15 + 13) )
    goto LABEL_35;
  v76 = a1 + 152;
  if ( v14 >= v8 )
  {
LABEL_13:
    v71 = v7;
    v17 = 0;
    v18 = v13;
    v73 = v16;
    v77 = v4;
    v78 = v8 & (v8 - 1);
    for ( i = v8; ; i = *(_DWORD *)(a1 + 136) )
    {
      v20 = v11 * (unsigned int)v71[v17 + 13];
      if ( v20 + v11 - 1 >= v6 )
        break;
      if ( v18 <= i )
        i = v18;
      v21 = (__int64)i >> 2;
      if ( v21 )
      {
        v22 = *(_QWORD *)(a1 + 160);
        v23 = *(_QWORD *)(a1 + 128);
        v24 = 0;
        v25 = *(_QWORD *)(a1 + 152);
        v26 = 4 * v22;
        v27 = v21 + v22;
        if ( *(_QWORD *)(a1 + 168) < v27 )
        {
          v75 = v17;
          v68 = v26;
          v45 = qvector_reserve(v76, v25, v27, 4);
          v26 = v68;
          v17 = v75;
          *(_QWORD *)(a1 + 152) = v45;
          v25 = v45;
          v21 = (__int64)i >> 2;
          v24 = 4LL * *(_QWORD *)(a1 + 160) - v68;
        }
        v28 = v20 + v23;
        v29 = i & 0xFFFFFFFC;
        v30 = v25 + v26;
        v69 = v17;
        v67 = v21;
        memmove((void *)(v25 + v26 + v29), (const void *)(v25 + v26), v24);
        v17 = v69;
        v31 = 0;
        do
        {
          *(_DWORD *)(v30 + v31) = *(_DWORD *)(v28 + v31);
          v31 += 4;
        }
        while ( v29 != v31 );
        *(_QWORD *)(a1 + 160) += v67;
      }
      ++v17;
      v18 -= i;
      if ( (unsigned int)v17 >= v73 )
      {
        v9 = v78;
        v4 = v77;
        goto LABEL_49;
      }
      v11 = *(unsigned int *)(a1 + 136);
      v6 = *(_QWORD *)(a1 + 80);
    }
    v4 = v77;
    goto LABEL_35;
  }
LABEL_49:
  if ( !*(_QWORD *)(a1 + 160)
    || (sub_767C0(a1, a1 + 144, 1),
        v49 = *(_QWORD *)(a1 + 64),
        v91 = 0,
        *(_QWORD *)&v87 = v49,
        v86 = off_B22E0,
        *((_QWORD *)&v87 + 1) = a1,
        v88 = v76,
        v89 = a1 + 176,
        v50 = *(unsigned int *)(a1 + 144),
        v93 = 1,
        v90 = v50,
        v92 = -1,
        (v93 = sub_76280((__m128i *)&v86, 0)) == 0)
    || !(unsigned __int8)sub_76920(&v86, (char *)&v79, 4, 1) )
  {
LABEL_35:
    sub_37FD0(*(__int64 **)(a1 + 64), (__int64)"File %s is the malformed PDB file", v4);
    return 1;
  }
  for ( j = 0; j < v79; ++j )
  {
    if ( !(unsigned __int8)sub_76920(&v86, (char *)&v80, 4, 1) )
      goto LABEL_35;
    if ( v80 == -1 )
    {
      v81 = 0;
      v83 = 0;
      v82 = 0;
      v84 = 0;
      v85 = 0;
      sub_76C40((unsigned __int64 *)(a1 + 104), (unsigned __int64)&v81);
      v52 = v82;
      if ( v84 )
        qfree(v84);
      if ( !v52 )
        continue;
    }
    else
    {
      if ( (unsigned __int64)v80 >= *(_QWORD *)(a1 + 80) )
        goto LABEL_35;
      LODWORD(v81) = v80;
      v83 = 0;
      v82 = 0;
      v84 = 0;
      v85 = 0;
      sub_76C40((unsigned __int64 *)(a1 + 104), (unsigned __int64)&v81);
      v52 = v82;
      if ( v84 )
        qfree(v84);
      if ( !v52 )
        continue;
    }
    qfree(v52);
  }
  v54 = *(_QWORD *)(a1 + 112);
  v55 = *(__int64 **)(a1 + 104);
  v70 = &v55[7 * v54];
  if ( v70 != v55 )
  {
    v74 = v4;
    v72 = v9;
    for ( k = v55 + 1; ; k += 7 )
    {
      v57 = *(_DWORD *)(a1 + 136);
      v58 = *((_DWORD *)k - 2) / v57;
      if ( *((_DWORD *)k - 2) % v57 )
        break;
      if ( *((_DWORD *)k - 2) >= v57 )
        goto LABEL_71;
LABEL_78:
      if ( v70 == k + 6 )
      {
        v9 = v72;
        v55 = *(__int64 **)(a1 + 104);
        v54 = *(_QWORD *)(a1 + 112);
        goto LABEL_81;
      }
    }
    ++v58;
LABEL_71:
    v59 = 0;
    while ( (unsigned __int8)sub_76920(&v86, (char *)&v81, 4, 1) )
    {
      v60 = k[1];
      v61 = v81;
      v62 = *k;
      if ( k[2] < (unsigned __int64)(v60 + 1) )
      {
        v63 = qvector_reserve(k, v62, v60 + 1, 4);
        *k = v63;
        v62 = v63;
        v60 = k[1];
      }
      ++v59;
      *(_DWORD *)(v62 + 4 * v60) = v61;
      ++k[1];
      if ( v59 == v58 )
        goto LABEL_78;
    }
    v4 = v74;
    goto LABEL_35;
  }
LABEL_81:
  v64 = (__int64)v55;
  v65 = &v55[7 * v54];
  while ( (__int64 *)v64 != v65 )
  {
    v66 = v64;
    v64 += 56;
    sub_767C0(a1, v66, 0);
  }
  return v9;
}
