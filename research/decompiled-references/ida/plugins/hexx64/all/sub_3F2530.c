unsigned __int64 __fastcall sub_3F2530(__int64 a1, __m128 si128)
{
  __int64 v2; // rax
  bool v3; // zf
  __int64 ph; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  const __m128i *v8; // rdx
  int v9; // edi
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // esi
  int v13; // r12d
  __int16 v14; // r12
  int v15; // esi
  int v16; // ecx
  int v17; // edx
  __int64 v18; // rdi
  int v19; // eax
  int v20; // r12d
  double v21; // xmm0_8
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  int v26; // esi
  int v27; // edx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // esi
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // esi
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // esi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // esi
  __m128i v44; // xmm0
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __m128i *v49; // rax
  __m128i v50; // xmm0
  __int64 v51; // rdx
  __int64 v52; // rcx
  int v53; // esi
  __int64 v54; // rdx
  __int64 v55; // rcx
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  int v59; // esi
  int v60; // edx
  __int64 v61; // rdx
  __int64 v62; // rcx
  int v63; // eax
  int v64; // esi
  __int64 v65; // rdx
  __int64 v66; // rcx
  int v67; // esi
  int v68; // edx
  __int64 v69; // rdx
  __int64 v70; // rcx
  int v72; // esi
  int v73; // esi
  __int64 v74; // rdx
  __int64 v75; // rcx
  int v76; // esi
  __int64 v77; // rdx
  __int64 v78; // rcx
  int v79; // esi
  __int64 v80; // rdx
  __int64 v81; // rcx
  int v82; // esi
  __int64 v83; // rdx
  __int64 v84; // rcx
  int v85; // esi
  __int64 v86; // rdx
  __int64 v87; // rcx
  int v88; // esi
  __int64 v89; // rdx
  __int64 v90; // rcx
  int v91; // esi
  __int64 v92; // rdx
  __int64 v93; // rcx
  void *v94; // r14
  __int64 v95; // rdx
  __int64 v96; // rcx
  unsigned __int64 v97; // rax
  __int64 v98; // rdi
  int v99; // esi
  __int64 v100; // rdx
  __int64 v101; // rcx
  int v102; // esi
  __int64 v103; // rdx
  __int64 v104; // rcx
  int v105; // esi
  __int64 v106; // rdx
  __int64 v107; // rcx
  int v108; // esi
  __int64 v109; // rdx
  __int64 v110; // rcx
  int v111; // esi
  __int64 v112; // rdx
  __int64 v113; // rcx
  int v114; // esi
  __int64 v115; // rdx
  __int64 v116; // rcx
  int v117; // esi
  __int64 v118; // rdx
  __int64 v119; // rcx
  size_t v120; // r13
  int v121; // esi
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 *v124; // [rsp+8h] [rbp-90h]
  int v125; // [rsp+8h] [rbp-90h]
  __m128i v126; // [rsp+10h] [rbp-88h] BYREF
  char v127; // [rsp+27h] [rbp-71h]
  __int64 *v128; // [rsp+28h] [rbp-70h]
  __int64 v129; // [rsp+30h] [rbp-68h] BYREF
  __int64 v130; // [rsp+38h] [rbp-60h]
  __int64 v131; // [rsp+40h] [rbp-58h] BYREF
  __int128 v132; // [rsp+48h] [rbp-50h]
  unsigned __int64 v133; // [rsp+58h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 96);
  v3 = *(_DWORD *)(a1 + 84) == 8;
  v133 = __readfsqword(0x28u);
  v127 = *(_BYTE *)(v2 + 148);
  if ( v3 )
  {
    *(_DWORD *)(a1 + 48) = 790997;
    if ( (getinf() & 0xF) == 6 && (unsigned __int8)getinf_flag() )
      *(_DWORD *)(a1 + 48) |= 0x20u;
  }
  else
  {
    *(_DWORD *)(a1 + 48) = 791000;
  }
  if ( (getinf() & 0xF) != 7 )
    *(_DWORD *)(a1 + 48) |= 2u;
  ph = get_ph();
  if ( (unsigned __int8)getinf() )
    LOBYTE(v6) = getinf();
  else
    v6 = *(_QWORD *)(ph + 120);
  *(_DWORD *)(a1 + 448) = (unsigned __int8)v6;
  if ( !(_BYTE)v6 )
  {
    if ( !under_debugger )
      sub_383060(0xC738u, *(double *)si128.m128_u64);
LABEL_138:
    BUG();
  }
  v7 = a1 + 712;
  v8 = (const __m128i *)&unk_434CA0;
  v9 = 0;
  v10 = a1 + 712;
  do
  {
    v11 = v8->m128i_i64[0];
    if ( *(_DWORD *)(a1 + 84) == 8 || (unsigned __int64)(v11 - 412) > 0x1C && (unsigned __int64)(v11 - 624) > 0x3C )
    {
      *(__m128i *)v10 = _mm_load_si128(v8);
      si128 = (__m128)_mm_load_si128(v8 + 1);
      *(__m128 *)(v10 + 16) = si128;
      switch ( *(_DWORD *)(v10 + 24) )
      {
        case 1:
          LOWORD(v12) = *(_WORD *)(a1 + 80);
          break;
        case 2:
          LOWORD(v12) = 2 * *(_WORD *)(a1 + 80);
          break;
        case 3:
          LOWORD(v12) = *(_WORD *)(a1 + 448);
          break;
        case 4:
          LOWORD(v12) = 1;
          break;
        case 5:
          v12 = 2 * *(_DWORD *)(a1 + 80);
          if ( v12 < *(_DWORD *)(a1 + 448) )
            LOWORD(v12) = *(_DWORD *)(a1 + 448);
          break;
        default:
          LOWORD(v12) = *(unsigned __int8 *)(v10 + 18);
          break;
      }
      v13 = *(_DWORD *)(v10 + 20);
      *(_WORD *)(v10 + 18) = v12;
      switch ( v13 )
      {
        case 1:
          v72 = *(_DWORD *)(a1 + 80);
          goto LABEL_63;
        case 2:
          v72 = 2 * *(_DWORD *)(a1 + 80);
          if ( *(_QWORD *)v10 == -1 )
            goto LABEL_72;
          goto LABEL_64;
        case 3:
          v72 = *(_DWORD *)(a1 + 448);
          goto LABEL_63;
        case 4:
          v14 = 1;
          if ( v11 == -1 )
            goto LABEL_18;
          v14 = 1;
          v15 = v9 + 1 - *(_DWORD *)(a1 + 80);
          *(_DWORD *)(v10 + 28) = v15;
          goto LABEL_17;
        case 5:
          v72 = 2 * *(_DWORD *)(a1 + 80);
          if ( v72 < *(_DWORD *)(a1 + 448) )
            v72 = *(_DWORD *)(a1 + 448);
          goto LABEL_63;
        default:
          v72 = *(unsigned __int8 *)(v10 + 16);
LABEL_63:
          if ( *(_QWORD *)v10 == -1 )
          {
LABEL_72:
            v9 = *(_DWORD *)(v10 + 28);
          }
          else
          {
LABEL_64:
            if ( v72 > 0 && *(_DWORD *)(a1 + 88) >= v72 && v13 != 3 )
              v9 = (v9 + v72 - 1) & -v72;
            *(_DWORD *)(v10 + 28) = v9;
          }
          v14 = v72;
          v9 += v72;
          if ( v11 == -1 )
            goto LABEL_18;
          v15 = *(_DWORD *)(v10 + 28);
LABEL_17:
          *(_DWORD *)(a1 + v11) = v15;
LABEL_18:
          *(_WORD *)(v10 + 16) = v14;
          v10 += 32;
          break;
      }
    }
    v8 += 2;
  }
  while ( v8 != (const __m128i *)byte_435880 );
  v16 = *(_DWORD *)(a1 + 448);
  v17 = *(_DWORD *)(a1 + 520) - *(_DWORD *)(a1 + 492);
  *(_QWORD *)(a1 + 3752) = (v10 - v7) >> 5;
  if ( v17 != 7 * v16 )
  {
    if ( !under_debugger )
      sub_383060(0xCDD4u, *(double *)si128.m128_u64);
    goto LABEL_138;
  }
  v18 = *(_QWORD *)(a1 + 120);
  v19 = *(_DWORD *)(a1 + 708);
  *(_QWORD *)(a1 + 112) = 0;
  v20 = *(_DWORD *)(a1 + 80);
  *(_QWORD *)&v21 = _mm_unpacklo_epi32(
                      _mm_cvtsi32_si128((v19 + 31) & 0xFFFFFFE0),
                      _mm_cvtsi32_si128(*(_DWORD *)(a1 + 444))).m128i_u64[0];
  *(double *)(a1 + 68) = v21;
  if ( v18 )
  {
    *(_QWORD *)(a1 + 128) = 0;
    qfree(v18);
    *(_QWORD *)(a1 + 120) = 0;
    *(_QWORD *)(a1 + 136) = 0;
  }
  v22 = *(_QWORD *)(a1 + 160);
  *(_QWORD *)(a1 + 152) = 0;
  if ( v22 )
  {
    *(_QWORD *)(a1 + 168) = 0;
    qfree(v22);
    *(_QWORD *)(a1 + 160) = 0;
    *(_QWORD *)(a1 + 176) = 0;
  }
  v23 = *(_QWORD *)(a1 + 200);
  *(_QWORD *)(a1 + 192) = 0;
  if ( v23 )
  {
    *(_QWORD *)(a1 + 208) = 0;
    qfree(v23);
    *(_QWORD *)(a1 + 200) = 0;
    *(_QWORD *)(a1 + 216) = 0;
  }
  v24 = *(_QWORD *)(a1 + 240);
  *(_QWORD *)(a1 + 232) = 0;
  if ( v24 )
  {
    *(_QWORD *)(a1 + 248) = 0;
    qfree(v24);
    *(_QWORD *)(a1 + 240) = 0;
    *(_QWORD *)(a1 + 256) = 0;
  }
  v25 = *(_QWORD *)(a1 + 280);
  *(_QWORD *)(a1 + 272) = 0;
  if ( v25 )
  {
    *(_QWORD *)(a1 + 288) = 0;
    qfree(v25);
    *(_QWORD *)(a1 + 280) = 0;
    *(_QWORD *)(a1 + 296) = 0;
  }
  v26 = *(_DWORD *)(a1 + 452);
  v27 = *(_DWORD *)(a1 + 480);
  v129 = 0;
  v130 = 0;
  sub_63E80(&v129, v26, v27 - v26, v21);
  v131 = 0;
  v132 = 0;
  sub_64280((__int64 *)(a1 + 104), &v129, 0.0);
  sub_316CB0((__int64 *)(a1 + 120), (const void **)&v131, v28, v29);
  if ( v131 )
  {
    *(_QWORD *)&v132 = 0;
    qfree(v131);
  }
  qfree(v129);
  v129 = 0;
  v130 = 0;
  sub_63E80(&v129, 0, 5, 0.0);
  v131 = 0;
  v132 = 0;
  sub_64280((__int64 *)(a1 + 184), &v129, 0.0);
  sub_316CB0((__int64 *)(a1 + 200), (const void **)&v131, v30, v31);
  if ( v131 )
  {
    *(_QWORD *)&v132 = 0;
    qfree(v131);
  }
  qfree(v129);
  if ( (getinf() & 0xF) != 3 )
  {
    v32 = *(_DWORD *)(a1 + 388);
    v129 = 0;
    v130 = 0;
    sub_63E80(&v129, v32, v20, 0.0);
    v131 = 0;
    v132 = 0;
    sub_64280((__int64 *)(a1 + 184), &v129, 0.0);
    sub_316CB0((__int64 *)(a1 + 200), (const void **)&v131, v33, v34);
    if ( v131 )
    {
      *(_QWORD *)&v132 = 0;
      qfree(v131);
    }
    qfree(v129);
    v35 = *(_DWORD *)(a1 + 444);
    v129 = 0;
    v130 = 0;
    sub_63E80(&v129, v35, 2, 0.0);
    v131 = 0;
    v132 = 0;
    sub_64280((__int64 *)(a1 + 184), &v129, 0.0);
    sub_316CB0((__int64 *)(a1 + 200), (const void **)&v131, v36, v37);
    if ( v131 )
    {
      *(_QWORD *)&v132 = 0;
      qfree(v131);
    }
    qfree(v129);
    v38 = *(_DWORD *)(a1 + 524);
    v129 = 0;
    v130 = 0;
    sub_63E80(&v129, v38, 6, 0.0);
    v131 = 0;
    v132 = 0;
    sub_64280((__int64 *)(a1 + 184), &v129, 0.0);
    sub_316CB0((__int64 *)(a1 + 200), (const void **)&v131, v39, v40);
    if ( v131 )
    {
      *(_QWORD *)&v132 = 0;
      qfree(v131);
    }
    qfree(v129);
    if ( *(_DWORD *)(a1 + 84) != 8 )
      goto LABEL_43;
    if ( v127 == 2 )
    {
      v99 = *(_DWORD *)(a1 + 380);
      v129 = 0;
      v130 = 0;
      sub_63E80(&v129, v99, v20, 0.0);
      v131 = 0;
      v132 = 0;
      sub_64280((__int64 *)(a1 + 184), &v129, 0.0);
      sub_316CB0((__int64 *)(a1 + 200), (const void **)&v131, v100, v101);
      if ( v131 )
      {
        *(_QWORD *)&v132 = 0;
        qfree(v131);
      }
      qfree(v129);
      v102 = *(_DWORD *)(a1 + 428);
      v125 = 2 * v20;
      v129 = 0;
      v130 = 0;
      sub_63E80(&v129, v102, 2 * v20, 0.0);
      v131 = 0;
      v132 = 0;
      sub_64280((__int64 *)(a1 + 184), &v129, 0.0);
      sub_316CB0((__int64 *)(a1 + 200), (const void **)&v131, v103, v104);
      if ( v131 )
      {
        *(_QWORD *)&v132 = 0;
        qfree(v131);
      }
      qfree(v129);
      v105 = *(_DWORD *)(a1 + 388);
      v129 = 0;
      v130 = 0;
      sub_63E80(&v129, v105, v125, 0.0);
      v131 = 0;
      v126.m128i_i64[0] = a1 + 264;
      v132 = 0;
      sub_64280((__int64 *)(a1 + 264), &v129, 0.0);
      v128 = (__int64 *)(a1 + 280);
      sub_316CB0((__int64 *)(a1 + 280), (const void **)&v131, v106, v107);
      if ( v131 )
      {
        *(_QWORD *)&v132 = 0;
        qfree(v131);
      }
      qfree(v129);
      v108 = *(_DWORD *)(a1 + 404);
      v129 = 0;
      v130 = 0;
      sub_63E80(&v129, v108, v125, 0.0);
      v131 = 0;
      v132 = 0;
      sub_64280((__int64 *)v126.m128i_i64[0], &v129, 0.0);
      sub_316CB0(v128, (const void **)&v131, v109, v110);
      if ( v131 )
      {
        *(_QWORD *)&v132 = 0;
        qfree(v131);
      }
      qfree(v129);
      v111 = *(_DWORD *)(a1 + 412);
      v129 = 0;
      v130 = 0;
      sub_63E80(&v129, v111, 4 * v20, 0.0);
      v131 = 0;
      v132 = 0;
      sub_64280((__int64 *)v126.m128i_i64[0], &v129, 0.0);
      sub_316CB0(v128, (const void **)&v131, v112, v113);
      if ( v131 )
      {
        *(_QWORD *)&v132 = 0;
        qfree(v131);
      }
      qfree(v129);
      v114 = *(_DWORD *)(a1 + 560);
      v129 = 0;
      v130 = 0;
      sub_63E80(&v129, v114, 240, 0.0);
      v131 = 0;
      v132 = 0;
      sub_64280((__int64 *)(a1 + 184), &v129, 0.0);
      sub_316CB0((__int64 *)(a1 + 200), (const void **)&v131, v115, v116);
      if ( v131 )
      {
        *(_QWORD *)&v132 = 0;
        qfree(v131);
      }
      qfree(v129);
      v117 = *(_DWORD *)(a1 + 620);
      v129 = 0;
      v130 = 0;
      sub_63E80(&v129, v117, 16, 0.0);
      v131 = 0;
      v126.m128i_i64[0] = a1 + 224;
      v132 = 0;
      sub_64280((__int64 *)(a1 + 224), &v129, 0.0);
      v128 = (__int64 *)(a1 + 240);
      sub_316CB0((__int64 *)(a1 + 240), (const void **)&v131, v118, v119);
      if ( v131 )
      {
        *(_QWORD *)&v132 = 0;
        qfree(v131);
      }
    }
    else
    {
      v73 = *(_DWORD *)(a1 + 412);
      v129 = 0;
      v130 = 0;
      sub_63E80(&v129, v73, 4 * v20, 0.0);
      v131 = 0;
      v132 = 0;
      sub_64280((__int64 *)(a1 + 184), &v129, 0.0);
      sub_316CB0((__int64 *)(a1 + 200), (const void **)&v131, v74, v75);
      if ( v131 )
      {
        *(_QWORD *)&v132 = 0;
        qfree(v131);
      }
      qfree(v129);
      v76 = *(_DWORD *)(a1 + 576);
      v129 = 0;
      v130 = 0;
      sub_63E80(&v129, v76, 32, 0.0);
      v131 = 0;
      v132 = 0;
      sub_64280((__int64 *)(a1 + 184), &v129, 0.0);
      sub_316CB0((__int64 *)(a1 + 200), (const void **)&v131, v77, v78);
      if ( v131 )
      {
        *(_QWORD *)&v132 = 0;
        qfree(v131);
      }
      qfree(v129);
      v79 = *(_DWORD *)(a1 + 428);
      v125 = 2 * v20;
      v129 = 0;
      v130 = 0;
      sub_63E80(&v129, v79, 2 * v20, 0.0);
      v131 = 0;
      v126.m128i_i64[0] = a1 + 224;
      v132 = 0;
      sub_64280((__int64 *)(a1 + 224), &v129, 0.0);
      v128 = (__int64 *)(a1 + 240);
      sub_316CB0((__int64 *)(a1 + 240), (const void **)&v131, v80, v81);
      if ( v131 )
      {
        *(_QWORD *)&v132 = 0;
        qfree(v131);
      }
      qfree(v129);
      if ( (getinf() & 0xF) != 1 )
        goto LABEL_93;
      v121 = *(_DWORD *)(a1 + 584);
      v129 = 0;
      v130 = 0;
      sub_63E80(&v129, v121, 160, 0.0);
      v131 = 0;
      v132 = 0;
      sub_64280((__int64 *)v126.m128i_i64[0], &v129, 0.0);
      sub_316CB0(v128, (const void **)&v131, v122, v123);
      if ( v131 )
      {
        *(_QWORD *)&v132 = 0;
        qfree(v131);
      }
    }
    qfree(v129);
LABEL_93:
    v82 = *(_DWORD *)(a1 + 436);
    v129 = 0;
    v130 = 0;
    sub_63E80(&v129, v82, v125, 0.0);
    v131 = 0;
    v132 = 0;
    sub_64280((__int64 *)v126.m128i_i64[0], &v129, 0.0);
    sub_316CB0(v128, (const void **)&v131, v83, v84);
    if ( v131 )
    {
      *(_QWORD *)&v132 = 0;
      qfree(v131);
    }
    qfree(v129);
LABEL_43:
    v124 = (__int64 *)(a1 + 264);
    sub_64280((__int64 *)(a1 + 264), (__int64 *)(a1 + 184), 0.0);
    sub_316CB0((__int64 *)(a1 + 280), (const void **)(a1 + 200), v41, v42);
    v43 = *(_DWORD *)(a1 + 380);
    v129 = 0;
    v130 = 0;
    sub_63E80(&v129, v43, v20, 0.0);
    v44.m128i_i64[0] = 0;
    v131 = 0;
    v132 = 0;
    sub_64280((__int64 *)(a1 + 264), &v129, 0.0);
    sub_316CB0((__int64 *)(a1 + 280), (const void **)&v131, v45, v46);
    if ( v131 )
    {
      *(_QWORD *)&v132 = 0;
      qfree(v131);
    }
    qfree(v129);
    goto LABEL_46;
  }
  v94 = nullptr;
  v124 = (__int64 *)(a1 + 264);
  sub_648D0((__int64 *)(a1 + 264), (const void **)(a1 + 184), 0.0);
  v97 = *(_QWORD *)(a1 + 208);
  v44 = _mm_unpacklo_epi64((__m128i)v97, (__m128i)v97);
  if ( v97 )
  {
    v126 = v44;
    v120 = 16 * v97;
    v94 = (void *)qalloc_or_throw(16 * v97, a1 + 184, v95, v96);
    memcpy(v94, *(const void **)(a1 + 200), v120);
    v44 = _mm_load_si128(&v126);
  }
  v98 = *(_QWORD *)(a1 + 280);
  if ( v98 )
  {
    *(_QWORD *)(a1 + 288) = 0;
    v126 = v44;
    qfree(v98);
    v44 = _mm_load_si128(&v126);
  }
  *(_QWORD *)(a1 + 280) = v94;
  *(__m128i *)(a1 + 288) = v44;
LABEL_46:
  v129 = 0;
  v130 = 0;
  sub_63E80(&v129, 8, v20, *(double *)v44.m128i_i64);
  v131 = 0;
  v132 = 0;
  sub_64280(v124, &v129, 0.0);
  sub_316CB0((__int64 *)(a1 + 280), (const void **)&v131, v47, v48);
  if ( v131 )
  {
    *(_QWORD *)&v132 = 0;
    qfree(v131);
  }
  qfree(v129);
  v129 = 0;
  v130 = 0;
  v131 = 0;
  v132 = 0;
  v49 = (__m128i *)qvector_reserve((__int64)&v131, 0, 1, 16);
  v50 = _mm_load_si128((const __m128i *)&xmmword_424800);
  v131 = (__int64)v49;
  v49[(_QWORD)v132] = v50;
  *(_QWORD *)&v132 = v132 + 1;
  sub_64280(v124, &v129, *(double *)v50.m128i_i64);
  sub_316CB0((__int64 *)(a1 + 280), (const void **)&v131, v51, v52);
  if ( v131 )
  {
    *(_QWORD *)&v132 = 0;
    qfree(v131);
  }
  qfree(v129);
  if ( v127 != 2 )
  {
    if ( (getinf() & 0xF) != 6 || !(unsigned __int8)getinf_flag() )
    {
      v85 = *(_DWORD *)(a1 + 408);
      v129 = 0;
      v130 = 0;
      sub_63E80(&v129, v85, v20, *(double *)v50.m128i_i64);
      v131 = 0;
      v132 = 0;
      sub_64280((__int64 *)(a1 + 224), &v129, 0.0);
      sub_316CB0((__int64 *)(a1 + 240), (const void **)&v131, v86, v87);
      if ( v131 )
      {
        *(_QWORD *)&v132 = 0;
        qfree(v131);
      }
      qfree(v129);
      v88 = *(_DWORD *)(a1 + 404);
      v129 = 0;
      v130 = 0;
      sub_63E80(&v129, v88, v20, 0.0);
      v50.m128i_i64[0] = 0;
      v131 = 0;
      v132 = 0;
      sub_64280((__int64 *)(a1 + 224), &v129, 0.0);
      sub_316CB0((__int64 *)(a1 + 240), (const void **)&v131, v89, v90);
      if ( v131 )
      {
        *(_QWORD *)&v132 = 0;
        qfree(v131);
      }
      qfree(v129);
    }
    v91 = *(_DWORD *)(a1 + 396);
    v129 = 0;
    v130 = 0;
    sub_63E80(&v129, v91, v20, *(double *)v50.m128i_i64);
    v50.m128i_i64[0] = 0;
    v131 = 0;
    v132 = 0;
    sub_64280((__int64 *)(a1 + 224), &v129, 0.0);
    sub_316CB0((__int64 *)(a1 + 240), (const void **)&v131, v92, v93);
    if ( v131 )
    {
      *(_QWORD *)&v132 = 0;
      qfree(v131);
    }
    qfree(v129);
  }
  v53 = *(_DWORD *)(a1 + 400);
  v129 = 0;
  v130 = 0;
  sub_63E80(&v129, v53, v20, *(double *)v50.m128i_i64);
  v131 = 0;
  v132 = 0;
  sub_64280((__int64 *)(a1 + 224), &v129, 0.0);
  sub_316CB0((__int64 *)(a1 + 240), (const void **)&v131, v54, v55);
  if ( v131 )
  {
    *(_QWORD *)&v132 = 0;
    qfree(v131);
  }
  qfree(v129);
  v56 = *(_DWORD *)(a1 + 60);
  v129 = 0;
  v130 = 0;
  sub_63E80(&v129, 8, v56 - 8, 0.0);
  v131 = 0;
  v132 = 0;
  sub_64280((__int64 *)(a1 + 144), &v129, 0.0);
  sub_316CB0((__int64 *)(a1 + 160), (const void **)&v131, v57, v58);
  if ( v131 )
  {
    *(_QWORD *)&v132 = 0;
    qfree(v131);
  }
  qfree(v129);
  v59 = *(_DWORD *)(a1 + 400);
  v60 = *(_DWORD *)(a1 + 444);
  v129 = 0;
  v130 = 0;
  sub_63E80(&v129, v59, v60 - v59, 0.0);
  v131 = 0;
  v132 = 0;
  sub_64280((__int64 *)(a1 + 144), &v129, 0.0);
  sub_316CB0((__int64 *)(a1 + 160), (const void **)&v131, v61, v62);
  if ( v131 )
  {
    *(_QWORD *)&v132 = 0;
    qfree(v131);
  }
  qfree(v129);
  v63 = *(_DWORD *)(a1 + 448);
  v64 = *(_DWORD *)(a1 + 492);
  v129 = 0;
  v130 = 0;
  sub_63E80(&v129, v64, 8 * v63, 0.0);
  v131 = 0;
  v132 = 0;
  sub_64280((__int64 *)(a1 + 144), &v129, 0.0);
  sub_316CB0((__int64 *)(a1 + 160), (const void **)&v131, v65, v66);
  if ( v131 )
  {
    *(_QWORD *)&v132 = 0;
    qfree(v131);
  }
  qfree(v129);
  v67 = *(_DWORD *)(a1 + 528);
  v68 = *(_DWORD *)(a1 + 708);
  v129 = 0;
  v130 = 0;
  sub_63E80(&v129, v67, v68 - v67, 0.0);
  v131 = 0;
  v132 = 0;
  sub_64280((__int64 *)(a1 + 144), &v129, 0.0);
  sub_316CB0((__int64 *)(a1 + 160), (const void **)&v131, v69, v70);
  if ( v131 )
  {
    *(_QWORD *)&v132 = 0;
    qfree(v131);
  }
  qfree(v129);
  *(__m128i *)(a1 + 3760) = _mm_loadu_si128((const __m128i *)(a1 + 452));
  return v133 - __readfsqword(0x28u);
}

