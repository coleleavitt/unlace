__int64 __fastcall sub_A3390(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __m128i v16; // xmm1
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  __m128i v21; // xmm1
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdi
  int v25; // r14d
  __int64 v26; // rbp
  int v27; // edx
  int v28; // esi
  int v29; // eax
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 i; // r14
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  int v38; // r9d
  __int64 v39; // r12
  __int64 v40; // r15
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  int v44; // r9d
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  int v48; // r9d
  __int64 v49; // r12
  __int64 v50; // r15
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  int v54; // r9d
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  int v58; // r9d
  int v59; // eax
  __int64 v60; // rax
  void *v62; // rax
  const void *v63; // rsi
  __int64 v64; // rbp
  int v65; // eax
  void *v66; // rdi
  __int64 v67; // [rsp+8h] [rbp-200h]
  __int64 *v68; // [rsp+10h] [rbp-1F8h]
  __int64 v69; // [rsp+18h] [rbp-1F0h]
  unsigned int v70; // [rsp+24h] [rbp-1E4h]
  __int64 *v71; // [rsp+30h] [rbp-1D8h]
  __int64 *v72; // [rsp+38h] [rbp-1D0h]
  __int64 *v73; // [rsp+40h] [rbp-1C8h]
  __int64 n; // [rsp+48h] [rbp-1C0h]
  _QWORD v75[2]; // [rsp+50h] [rbp-1B8h] BYREF
  __int64 v76; // [rsp+60h] [rbp-1A8h]
  __m128i v77; // [rsp+68h] [rbp-1A0h]
  _QWORD v78[2]; // [rsp+80h] [rbp-188h] BYREF
  __int64 v79; // [rsp+90h] [rbp-178h]
  __m128i v80; // [rsp+98h] [rbp-170h]
  _QWORD v81[2]; // [rsp+B0h] [rbp-158h] BYREF
  __int64 v82; // [rsp+C0h] [rbp-148h]
  __m128i v83; // [rsp+C8h] [rbp-140h]
  _QWORD v84[2]; // [rsp+E0h] [rbp-128h] BYREF
  __int64 v85; // [rsp+F0h] [rbp-118h]
  __m128i v86; // [rsp+F8h] [rbp-110h]
  __int64 v87[2]; // [rsp+110h] [rbp-F8h] BYREF
  __int64 v88; // [rsp+120h] [rbp-E8h] BYREF
  __int64 v89; // [rsp+128h] [rbp-E0h]
  __int64 v90[2]; // [rsp+140h] [rbp-C8h] BYREF
  __int64 v91; // [rsp+150h] [rbp-B8h] BYREF
  __int64 v92; // [rsp+158h] [rbp-B0h]
  __int64 v93[2]; // [rsp+170h] [rbp-98h] BYREF
  void *src; // [rsp+180h] [rbp-88h] BYREF
  __int128 v95; // [rsp+188h] [rbp-80h]
  __int64 v96[2]; // [rsp+1A0h] [rbp-68h] BYREF
  void *v97; // [rsp+1B0h] [rbp-58h] BYREF
  __int128 v98; // [rsp+1B8h] [rbp-50h]
  unsigned __int64 v99; // [rsp+1C8h] [rbp-40h]

  v6 = *(unsigned int *)(a1 + 72);
  v99 = __readfsqword(0x28u);
  if ( !(_DWORD)v6 || *(_DWORD *)(a1 + 76) == 1 && (BYTE1(**(_DWORD **)(a1 + 64)) & 0x80u) != 0 )
  {
    *(_DWORD *)(a1 + 24) |= 0x200u;
    return 0;
  }
  v72 = (__int64 *)(a1 + 160);
  v8 = *(_QWORD *)(a1 + 160);
  v77 = _mm_loadu_si128((const __m128i *)(a1 + 184));
  v75[0] = v8;
  v9 = *(_QWORD *)(a1 + 168);
  v80 = _mm_loadu_si128((const __m128i *)(a1 + 264));
  v75[1] = v9;
  v10 = *(_QWORD *)(a1 + 176);
  *(_QWORD *)(a1 + 160) = 0;
  v76 = v10;
  v68 = (__int64 *)(a1 + 240);
  v11 = *(_QWORD *)(a1 + 240);
  *(_QWORD *)(a1 + 168) = 0;
  v78[0] = v11;
  v12 = *(_QWORD *)(a1 + 248);
  *(_QWORD *)(a1 + 176) = 0;
  v78[1] = v12;
  v13 = *(_QWORD *)(a1 + 256);
  *(_QWORD *)(a1 + 240) = 0;
  v79 = v13;
  v73 = (__int64 *)(a1 + 120);
  v14 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 248) = 0;
  v81[0] = v14;
  v15 = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(a1 + 256) = 0;
  v81[1] = v15;
  *(_QWORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  v16 = _mm_loadu_si128((const __m128i *)(a1 + 144));
  v71 = (__int64 *)(a1 + 200);
  v17 = *(_QWORD *)(a1 + 200);
  v18 = *(_QWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 200) = 0;
  v84[0] = v17;
  v19 = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 136) = 0;
  v84[1] = v19;
  v20 = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(a1 + 208) = 0;
  v85 = v20;
  LODWORD(v20) = *(_DWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 216) = 0;
  v83 = v16;
  v21 = _mm_loadu_si128((const __m128i *)(a1 + 224));
  BYTE1(v20) = BYTE1(v20) & 0xF9 | 4;
  *(_OWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 24) = v20;
  v22 = *(_QWORD *)(a1 + 480);
  *(_OWORD *)(a1 + 224) = 0;
  v23 = *(_QWORD *)(v22 + 112);
  v82 = v18;
  v24 = 0;
  v86 = v21;
  v69 = v23;
  if ( !a2 )
  {
    v70 = 0;
    goto LABEL_16;
  }
  v70 = 0;
  v25 = -1;
  v67 = v23 + 104;
  while ( 1 )
  {
    sub_5FE00(v93, v67);
    src = nullptr;
    v95 = 0;
    v26 = *(_QWORD *)(v69 + 128);
    if ( v26 )
    {
      src = (void *)qalloc_or_throw();
      *((_QWORD *)&v95 + 1) = v26;
      memcpy(src, *(const void **)(v69 + 120), 16 * v26);
      *(_QWORD *)&v95 = v26;
    }
    v27 = *(_DWORD *)(v69 + 84);
    v28 = *(_DWORD *)(v69 + 60);
    v96[0] = 0;
    v96[1] = 0;
    sub_5FC80(v96, v28, v27);
    v97 = nullptr;
    v98 = 0;
    sub_60080(v93, v96);
    sub_311F30(&src, &v97);
    if ( v97 )
    {
      *(_QWORD *)&v98 = 0;
      qfree();
    }
    qfree();
    v29 = sub_A11D0(a1, v69, *(unsigned int **)(a1 + 56), v93);
    v70 += v29;
    if ( !(v25 | v29) )
      break;
    v64 = *(_QWORD *)(a1 + 48);
    if ( !v64 )
      goto LABEL_77;
    v25 = 0;
    do
    {
      while ( 1 )
      {
        v25 += sub_163610(a1, v64, 6);
        if ( !*(_DWORD *)v64 )
          break;
        v64 = *(_QWORD *)(v64 + 8);
        if ( !v64 )
          goto LABEL_76;
      }
      v64 = sub_9F280(a1, v64);
      ++v70;
    }
    while ( v64 );
LABEL_76:
    if ( !v25 )
    {
LABEL_77:
      v65 = *(_DWORD *)(a1 + 24);
      if ( (v65 & 0x100) == 0 )
        break;
      v66 = src;
      v25 = 0;
LABEL_79:
      BYTE1(v65) &= ~1u;
      *(_DWORD *)(a1 + 24) = v65;
      if ( v66 )
      {
        *(_QWORD *)&v95 = 0;
        qfree();
      }
      goto LABEL_81;
    }
    sub_A3320(a1);
    v65 = *(_DWORD *)(a1 + 24);
    v66 = src;
    if ( (v65 & 0x100) != 0 )
      goto LABEL_79;
    if ( src )
    {
      *(_QWORD *)&v95 = 0;
      qfree();
    }
LABEL_81:
    qfree();
  }
  if ( src )
  {
    *(_QWORD *)&v95 = 0;
    qfree();
  }
  qfree();
  v30 = *(_QWORD *)(a1 + 176);
  *(_QWORD *)(a1 + 168) = 0;
  if ( v30 )
  {
    *(_QWORD *)(a1 + 184) = 0;
    qfree();
    *(_QWORD *)(a1 + 176) = 0;
    *(_QWORD *)(a1 + 192) = 0;
  }
  v24 = *(_QWORD *)(a1 + 136);
LABEL_16:
  *(_QWORD *)(a1 + 128) = 0;
  if ( v24 )
  {
    *(_QWORD *)(a1 + 144) = 0;
    qfree();
    *(_QWORD *)(a1 + 136) = 0;
    *(_QWORD *)(a1 + 152) = 0;
  }
  v31 = *(_QWORD *)(a1 + 256);
  *(_QWORD *)(a1 + 248) = 0;
  if ( v31 )
  {
    *(_QWORD *)(a1 + 264) = 0;
    qfree();
    *(_QWORD *)(a1 + 256) = 0;
    *(_QWORD *)(a1 + 272) = 0;
  }
  v32 = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(a1 + 208) = 0;
  if ( v32 )
  {
    *(_QWORD *)(a1 + 224) = 0;
    qfree();
    *(_QWORD *)(a1 + 216) = 0;
    *(_QWORD *)(a1 + 232) = 0;
  }
  v33 = *(_QWORD *)(a1 + 296);
  *(_QWORD *)(a1 + 288) = 0;
  if ( v33 )
  {
    *(_QWORD *)(a1 + 304) = 0;
    qfree();
    *(_QWORD *)(a1 + 296) = 0;
    *(_QWORD *)(a1 + 312) = 0;
  }
  for ( i = *(_QWORD *)(a1 + 48); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(char *)(i + 4) >= 0 )
    {
      sub_120480(v87, a1, i, 1);
      if ( !(unsigned __int8)sub_60680(v87) || v89 )
      {
        sub_60440((__int64 *)(a1 + 280), v87, v35, v36, v37, v38);
        sub_312EE0(a1 + 296, &v88);
        v39 = *(_QWORD *)(a1 + 64);
        sub_5FE00(v96, (__int64)v68);
        v40 = *(_QWORD *)(a1 + 264);
        v97 = nullptr;
        v98 = 0;
        if ( v40 )
        {
          v62 = (void *)qalloc_or_throw();
          v63 = *(const void **)(a1 + 256);
          v97 = v62;
          *((_QWORD *)&v98 + 1) = v40;
          memcpy(v62, v63, 16 * v40);
          *(_QWORD *)&v98 = v40;
        }
        sub_313340(&v97, v39 + 208);
        sub_60440(v87, v96, v41, v42, v43, v44);
        sub_312EE0(&v88, &v97);
        if ( v97 )
        {
          *(_QWORD *)&v98 = 0;
          qfree();
        }
        qfree();
        sub_60080(v72, v87);
        sub_311F30(a1 + 176, &v88);
        sub_120480(v96, a1, i, 0);
        sub_60440(v96, v68, v45, v46, v47, v48);
        sub_312EE0(&v97, a1 + 256);
        sub_60080(v73, v96);
        sub_311F30(a1 + 136, &v97);
        if ( v97 )
        {
          *(_QWORD *)&v98 = 0;
          qfree();
        }
        qfree();
      }
      sub_123820(v90, a1, i, 1);
      if ( !(unsigned __int8)sub_60680(v90) || v92 )
      {
        sub_60080(v68, v90);
        sub_311F30(a1 + 256, &v91);
        sub_123820(v93, a1, i, 0);
        sub_60080(v71, v93);
        sub_311F30(a1 + 216, &src);
        v49 = *(_QWORD *)(a1 + 64);
        sub_5FE00(v96, (__int64)v93);
        v50 = v95;
        v97 = nullptr;
        v98 = 0;
        if ( (_QWORD)v95 )
        {
          n = 16 * v95;
          v97 = (void *)qalloc_or_throw();
          *((_QWORD *)&v98 + 1) = v50;
          memcpy(v97, src, n);
          *(_QWORD *)&v98 = v50;
        }
        sub_313340(&v97, v49 + 208);
        sub_60080((__int64 *)(a1 + 280), v96);
        sub_311F30(a1 + 296, &v97);
        if ( v97 )
        {
          *(_QWORD *)&v98 = 0;
          qfree();
        }
        qfree();
        if ( src )
        {
          *(_QWORD *)&v95 = 0;
          qfree();
        }
        qfree();
      }
      if ( v91 )
      {
        v92 = 0;
        qfree();
      }
      qfree();
      if ( v88 )
      {
        v89 = 0;
        qfree();
      }
      qfree();
    }
  }
  sub_60440(v71, (__int64 *)(v69 + 104), v6, a4, a5, a6);
  sub_312EE0(a1 + 216, v69 + 120);
  sub_60440(v68, (__int64 *)(v69 + 104), v51, v52, v53, v54);
  sub_312EE0(a1 + 256, v69 + 120);
  sub_60440((__int64 *)(a1 + 280), (__int64 *)(v69 + 104), v55, v56, v57, v58);
  sub_312EE0(a1 + 296, v69 + 120);
  v59 = *(_DWORD *)(a1 + 24);
  BYTE1(v59) = BYTE1(v59) & 0xF9 | 2;
  *(_DWORD *)(a1 + 24) = v59;
  if ( v70 )
    sub_9E320(a1, (__int64)"local dead elimination result, total dead: %d", v70);
  if ( (unsigned int)sub_11EA30(v75, v72)
    || (unsigned int)sub_11EA30(v78, v68)
    || (unsigned int)sub_11EA30(v81, v73)
    || (unsigned int)sub_11EA30(v84, v71) )
  {
    v60 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 784LL);
    if ( v60 )
      *(_DWORD *)(v60 + 48) = 63;
  }
  if ( v85 )
  {
    v86.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  if ( v82 )
  {
    v83.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  if ( v79 )
  {
    v80.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  if ( v76 )
  {
    v77.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  return v70;
}

