__int64 __fastcall sub_A7590(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, int a6)
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
  __m128 v21; // xmm1
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdi
  int v25; // r14d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbp
  int v29; // edx
  int v30; // esi
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // r8d
  int v34; // r9d
  int v35; // eax
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // rdi
  __int64 i; // r14
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  int v44; // r9d
  __int64 v45; // r12
  __m128i *v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r15
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  int v52; // r9d
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  int v58; // r9d
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  int v63; // r8d
  int v64; // r9d
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r12
  __m128i *v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r15
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  int v76; // r9d
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  int v80; // r9d
  int v81; // eax
  __int64 v82; // rax
  __int64 *v84; // rax
  const void *v85; // rsi
  __int64 v86; // rbp
  int v87; // eax
  void *v88; // rdi
  __int64 v89; // [rsp+8h] [rbp-200h]
  __int64 *v90; // [rsp+10h] [rbp-1F8h]
  __int64 v91; // [rsp+18h] [rbp-1F0h]
  unsigned int v92; // [rsp+24h] [rbp-1E4h]
  __int64 *v93; // [rsp+30h] [rbp-1D8h]
  __int64 *v94; // [rsp+38h] [rbp-1D0h]
  __int64 *v95; // [rsp+40h] [rbp-1C8h]
  __int64 n; // [rsp+48h] [rbp-1C0h]
  __int64 v97[2]; // [rsp+50h] [rbp-1B8h] BYREF
  __int64 v98; // [rsp+60h] [rbp-1A8h]
  __m128i v99; // [rsp+68h] [rbp-1A0h]
  __int64 v100[2]; // [rsp+80h] [rbp-188h] BYREF
  __int64 v101; // [rsp+90h] [rbp-178h]
  __m128i v102; // [rsp+98h] [rbp-170h]
  __int64 v103[2]; // [rsp+B0h] [rbp-158h] BYREF
  __int64 v104; // [rsp+C0h] [rbp-148h]
  __m128i v105; // [rsp+C8h] [rbp-140h]
  __int64 v106[2]; // [rsp+E0h] [rbp-128h] BYREF
  __int64 v107; // [rsp+F0h] [rbp-118h]
  __m128 v108; // [rsp+F8h] [rbp-110h]
  __int64 v109[2]; // [rsp+110h] [rbp-F8h] BYREF
  __int64 *v110; // [rsp+120h] [rbp-E8h] BYREF
  __int64 v111; // [rsp+128h] [rbp-E0h]
  __int64 v112[2]; // [rsp+140h] [rbp-C8h] BYREF
  __int64 *v113; // [rsp+150h] [rbp-B8h] BYREF
  __int64 v114; // [rsp+158h] [rbp-B0h]
  __int64 v115[2]; // [rsp+170h] [rbp-98h] BYREF
  void *src; // [rsp+180h] [rbp-88h] BYREF
  __int128 v117; // [rsp+188h] [rbp-80h]
  __int64 v118[2]; // [rsp+1A0h] [rbp-68h] BYREF
  __int64 *v119; // [rsp+1B0h] [rbp-58h] BYREF
  __int128 v120; // [rsp+1B8h] [rbp-50h]
  unsigned __int64 v121; // [rsp+1C8h] [rbp-40h]

  v6 = *(unsigned int *)(a1 + 72);
  v121 = __readfsqword(0x28u);
  if ( !(_DWORD)v6 || *(_DWORD *)(a1 + 76) == 1 && (BYTE1(**(_DWORD **)(a1 + 64)) & 0x80u) != 0 )
  {
    *(_DWORD *)(a1 + 24) |= 0x200u;
    return 0;
  }
  v94 = (__int64 *)(a1 + 160);
  v8 = *(_QWORD *)(a1 + 160);
  v99 = _mm_loadu_si128((const __m128i *)(a1 + 184));
  v97[0] = v8;
  v9 = *(_QWORD *)(a1 + 168);
  v102 = _mm_loadu_si128((const __m128i *)(a1 + 264));
  v97[1] = v9;
  v10 = *(_QWORD *)(a1 + 176);
  *(_QWORD *)(a1 + 160) = 0;
  v98 = v10;
  v90 = (__int64 *)(a1 + 240);
  v11 = *(_QWORD *)(a1 + 240);
  *(_QWORD *)(a1 + 168) = 0;
  v100[0] = v11;
  v12 = *(_QWORD *)(a1 + 248);
  *(_QWORD *)(a1 + 176) = 0;
  v100[1] = v12;
  v13 = *(_QWORD *)(a1 + 256);
  *(_QWORD *)(a1 + 240) = 0;
  v101 = v13;
  v95 = (__int64 *)(a1 + 120);
  v14 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 248) = 0;
  v103[0] = v14;
  v15 = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(a1 + 256) = 0;
  v103[1] = v15;
  *(_QWORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  v16 = _mm_loadu_si128((const __m128i *)(a1 + 144));
  v93 = (__int64 *)(a1 + 200);
  v17 = *(_QWORD *)(a1 + 200);
  v18 = *(_QWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 200) = 0;
  v106[0] = v17;
  v19 = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 136) = 0;
  v106[1] = v19;
  v20 = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(a1 + 208) = 0;
  v107 = v20;
  LODWORD(v20) = *(_DWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 216) = 0;
  v105 = v16;
  v21 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 224));
  BYTE1(v20) = BYTE1(v20) & 0xF9 | 4;
  *(_OWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 24) = v20;
  v22 = *(_QWORD *)(a1 + 480);
  *(_OWORD *)(a1 + 224) = 0;
  v23 = *(_QWORD *)(v22 + 112);
  v104 = v18;
  v24 = 0;
  v108 = v21;
  v91 = v23;
  if ( !a2 )
  {
    v92 = 0;
    goto LABEL_16;
  }
  v92 = 0;
  v25 = -1;
  v89 = v23 + 104;
  while ( 1 )
  {
    sub_64000(v115, v89, 0.0);
    src = nullptr;
    v117 = 0;
    v28 = *(_QWORD *)(v91 + 128);
    if ( v28 )
    {
      src = (void *)qalloc_or_throw(16 * v28, v89, v26, v27);
      *((_QWORD *)&v117 + 1) = v28;
      memcpy(src, *(const void **)(v91 + 120), 16 * v28);
      *(_QWORD *)&v117 = v28;
    }
    v29 = *(_DWORD *)(v91 + 84);
    v30 = *(_DWORD *)(v91 + 60);
    v118[0] = 0;
    v118[1] = 0;
    sub_63E80(v118, v30, v29, 0.0);
    v119 = nullptr;
    v120 = 0;
    sub_64280(v115, v118, 0.0);
    sub_316CB0((__int64 *)&src, &v119, v31, v32);
    if ( v119 )
    {
      *(_QWORD *)&v120 = 0;
      qfree((__int64)v119);
    }
    qfree(v118[0]);
    v35 = sub_A53D0((const __m128i *)a1, v91, *(unsigned int **)(a1 + 56), v115, v33, v34, 0.0, v21);
    v92 += v35;
    if ( !(v25 | v35) )
      break;
    v86 = *(_QWORD *)(a1 + 48);
    if ( !v86 )
      goto LABEL_77;
    v25 = 0;
    do
    {
      while ( 1 )
      {
        v25 += sub_167810(a1, v86, 6);
        if ( !*(_DWORD *)v86 )
          break;
        v86 = *(_QWORD *)(v86 + 8);
        if ( !v86 )
          goto LABEL_76;
      }
      v86 = sub_A3480(a1, (_BYTE *)v86);
      ++v92;
    }
    while ( v86 );
LABEL_76:
    if ( !v25 )
    {
LABEL_77:
      v87 = *(_DWORD *)(a1 + 24);
      if ( (v87 & 0x100) == 0 )
        break;
      v88 = src;
      v25 = 0;
LABEL_79:
      BYTE1(v87) &= ~1u;
      *(_DWORD *)(a1 + 24) = v87;
      if ( v88 )
      {
        *(_QWORD *)&v117 = 0;
        qfree((__int64)v88);
      }
      goto LABEL_81;
    }
    sub_A7520(a1);
    v87 = *(_DWORD *)(a1 + 24);
    v88 = src;
    if ( (v87 & 0x100) != 0 )
      goto LABEL_79;
    if ( src )
    {
      *(_QWORD *)&v117 = 0;
      qfree((__int64)src);
    }
LABEL_81:
    qfree(v115[0]);
  }
  if ( src )
  {
    *(_QWORD *)&v117 = 0;
    qfree((__int64)src);
  }
  qfree(v115[0]);
  v36 = *(_QWORD *)(a1 + 176);
  *(_QWORD *)(a1 + 168) = 0;
  if ( v36 )
  {
    *(_QWORD *)(a1 + 184) = 0;
    qfree(v36);
    *(_QWORD *)(a1 + 176) = 0;
    *(_QWORD *)(a1 + 192) = 0;
  }
  v24 = *(_QWORD *)(a1 + 136);
LABEL_16:
  *(_QWORD *)(a1 + 128) = 0;
  if ( v24 )
  {
    *(_QWORD *)(a1 + 144) = 0;
    qfree(v24);
    *(_QWORD *)(a1 + 136) = 0;
    *(_QWORD *)(a1 + 152) = 0;
  }
  v37 = *(_QWORD *)(a1 + 256);
  *(_QWORD *)(a1 + 248) = 0;
  if ( v37 )
  {
    *(_QWORD *)(a1 + 264) = 0;
    qfree(v37);
    *(_QWORD *)(a1 + 256) = 0;
    *(_QWORD *)(a1 + 272) = 0;
  }
  v38 = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(a1 + 208) = 0;
  if ( v38 )
  {
    *(_QWORD *)(a1 + 224) = 0;
    qfree(v38);
    *(_QWORD *)(a1 + 216) = 0;
    *(_QWORD *)(a1 + 232) = 0;
  }
  v39 = *(_QWORD *)(a1 + 296);
  *(_QWORD *)(a1 + 288) = 0;
  if ( v39 )
  {
    *(_QWORD *)(a1 + 304) = 0;
    qfree(v39);
    *(_QWORD *)(a1 + 296) = 0;
    *(_QWORD *)(a1 + 312) = 0;
  }
  for ( i = *(_QWORD *)(a1 + 48); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(char *)(i + 4) >= 0 )
    {
      sub_124680((__int64)v109, a1, i, 1u);
      if ( !(unsigned __int8)sub_64880(v109) || v111 )
      {
        sub_64640((__int64 *)(a1 + 280), v109, v41, v42, v43, v44);
        sub_317C60((__int64 *)(a1 + 296), (__int64)&v110);
        v45 = *(_QWORD *)(a1 + 64);
        sub_64000(v118, (__int64)v90, 0.0);
        v48 = *(_QWORD *)(a1 + 264);
        v119 = nullptr;
        v120 = 0;
        if ( v48 )
        {
          v84 = (__int64 *)qalloc_or_throw(16 * v48, (__int64)v90, 16 * v48, v47);
          v85 = *(const void **)(a1 + 256);
          v119 = v84;
          *((_QWORD *)&v120 + 1) = v48;
          memcpy(v84, v85, 16 * v48);
          *(_QWORD *)&v120 = v48;
        }
        sub_3180C0((__int64 *)&v119, v45 + 208, v46, v47);
        sub_64640(v109, v118, v49, v50, v51, v52);
        sub_317C60((__int64 *)&v110, (__int64)&v119);
        if ( v119 )
        {
          *(_QWORD *)&v120 = 0;
          qfree((__int64)v119);
        }
        qfree(v118[0]);
        sub_64280(v94, v109, 0.0);
        sub_316CB0((__int64 *)(a1 + 176), &v110, v53, v54);
        sub_124680((__int64)v118, a1, i, 0);
        sub_64640(v118, v90, v55, v56, v57, v58);
        sub_317C60((__int64 *)&v119, a1 + 256);
        sub_64280(v95, v118, 0.0);
        sub_316CB0((__int64 *)(a1 + 136), &v119, v59, v60);
        if ( v119 )
        {
          *(_QWORD *)&v120 = 0;
          qfree((__int64)v119);
        }
        qfree(v118[0]);
      }
      sub_127A20((__int64)v112, a1, i, 1, v43, v44);
      if ( !(unsigned __int8)sub_64880(v112) || v114 )
      {
        sub_64280(v90, v112, 0.0);
        sub_316CB0((__int64 *)(a1 + 256), &v113, v61, v62);
        sub_127A20((__int64)v115, a1, i, 0, v63, v64);
        sub_64280(v93, v115, 0.0);
        sub_316CB0((__int64 *)(a1 + 216), (__int64 **)&src, v65, v66);
        v67 = *(_QWORD *)(a1 + 64);
        sub_64000(v118, (__int64)v115, 0.0);
        v70 = v117;
        v119 = nullptr;
        v120 = 0;
        if ( (_QWORD)v117 )
        {
          n = 16 * v117;
          v119 = (__int64 *)qalloc_or_throw(16 * v117, (__int64)v115, 16 * v117, v69);
          *((_QWORD *)&v120 + 1) = v70;
          memcpy(v119, src, n);
          *(_QWORD *)&v120 = v70;
        }
        sub_3180C0((__int64 *)&v119, v67 + 208, v68, v69);
        sub_64280((__int64 *)(a1 + 280), v118, 0.0);
        sub_316CB0((__int64 *)(a1 + 296), &v119, v71, v72);
        if ( v119 )
        {
          *(_QWORD *)&v120 = 0;
          qfree((__int64)v119);
        }
        qfree(v118[0]);
        if ( src )
        {
          *(_QWORD *)&v117 = 0;
          qfree((__int64)src);
        }
        qfree(v115[0]);
      }
      if ( v113 )
      {
        v114 = 0;
        qfree((__int64)v113);
      }
      qfree(v112[0]);
      if ( v110 )
      {
        v111 = 0;
        qfree((__int64)v110);
      }
      qfree(v109[0]);
    }
  }
  sub_64640(v93, (__int64 *)(v91 + 104), v6, a4, a5, a6);
  sub_317C60((__int64 *)(a1 + 216), v91 + 120);
  sub_64640(v90, (__int64 *)(v91 + 104), v73, v74, v75, v76);
  sub_317C60((__int64 *)(a1 + 256), v91 + 120);
  sub_64640((__int64 *)(a1 + 280), (__int64 *)(v91 + 104), v77, v78, v79, v80);
  sub_317C60((__int64 *)(a1 + 296), v91 + 120);
  v81 = *(_DWORD *)(a1 + 24);
  BYTE1(v81) = BYTE1(v81) & 0xF9 | 2;
  *(_DWORD *)(a1 + 24) = v81;
  if ( v92 )
    sub_A2520(a1, "local dead elimination result, total dead: %d");
  if ( sub_122C30((__int64)v97, (__int64)v94)
    || sub_122C30((__int64)v100, (__int64)v90)
    || sub_122C30((__int64)v103, (__int64)v95)
    || sub_122C30((__int64)v106, (__int64)v93) )
  {
    v82 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 784LL);
    if ( v82 )
      *(_DWORD *)(v82 + 48) = 63;
  }
  if ( v107 )
  {
    v108.m128_u64[0] = 0;
    qfree(v107);
  }
  qfree(v106[0]);
  if ( v104 )
  {
    v105.m128i_i64[0] = 0;
    qfree(v104);
  }
  qfree(v103[0]);
  if ( v101 )
  {
    v102.m128i_i64[0] = 0;
    qfree(v101);
  }
  qfree(v100[0]);
  if ( v98 )
  {
    v99.m128i_i64[0] = 0;
    qfree(v98);
  }
  qfree(v97[0]);
  return v92;
}

