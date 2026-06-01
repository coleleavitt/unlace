unsigned __int64 __fastcall sub_337540(__int64 a1, double a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rbx
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // r13
  __int64 v19; // r12
  __int64 v20; // rbp
  _QWORD *v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rax
  __m128i si128; // xmm2
  __int64 v28; // rdx
  __int64 v29; // rbp
  __int64 i; // rbx
  __int64 v31; // rax
  __int64 v32; // rdi
  unsigned __int64 *v33; // rax
  unsigned __int64 v34; // rbx
  __int64 *v35; // rbp
  __int64 v36; // rdx
  __int64 *v37; // rdi
  __int64 *v38; // rdi
  _QWORD *v39; // rbx
  __int64 (__fastcall *v40)(_QWORD *); // rax
  __int64 v41; // rdi
  __int64 v42; // rdi
  __int64 v43; // rdi
  __int64 v44; // rdi
  _QWORD *v45; // rbx
  __int64 v46; // rdi
  _QWORD *v47; // rdi
  _QWORD *v48; // rdi
  _QWORD *v49; // rdi
  unsigned __int64 *v50; // rax
  unsigned __int64 v51; // rbx
  __int64 *v52; // rbp
  __int64 v53; // rdx
  __int64 *v54; // rdi
  __int64 *v55; // rdi
  __int64 v56; // rdi
  __int64 v57; // rdi
  __int64 v58; // rdi
  __int64 v59; // rdi
  __int64 *v60; // rbx
  __int64 v61; // rdi
  __int64 v62; // rdi
  __int64 v63; // r12
  __int64 j; // rbp
  _QWORD *v65; // rbx
  __int64 v66; // rdi
  __int64 v67; // rdi
  __int64 *v68; // rbx
  __int64 v69; // rax
  unsigned __int64 v70; // rbp
  __int64 *v71; // rbx
  __int64 v72; // rax
  unsigned __int64 v73; // rbp
  __int64 *v74; // rsi
  __int64 v75; // rax
  __int64 k; // r13
  __int64 *v77; // rbp
  __int64 v78; // rdi
  __int64 v79; // r12
  __int64 v80; // r14
  __int64 v81; // rbx
  __int64 v82; // rdi
  __int64 *v84; // r12
  __int64 v85; // rdx
  __int64 *v86; // r13
  __int64 v87; // rax
  __int64 v88; // r13
  __int64 *v89; // rdi
  __int64 *v90; // rdi
  __int64 v91; // rax
  unsigned __int64 v92; // r12
  __int64 v93; // r13
  __int64 v94; // r13
  __int64 *v95; // rdi
  __int64 *v96; // rdi
  __int64 *v97; // rdi
  __int64 *v98; // rdi
  __int64 *v99; // rdi
  __int64 *v100; // rdi
  __int64 v101; // rdi
  __int64 v102; // rdi
  __int64 v103; // rdi
  __m128i v104; // [rsp+0h] [rbp-78h] BYREF
  __int64 *v105; // [rsp+10h] [rbp-68h]
  __int64 v106; // [rsp+18h] [rbp-60h]
  __int64 v107; // [rsp+20h] [rbp-58h] BYREF
  __int128 v108; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v109; // [rsp+38h] [rbp-40h]

  v109 = __readfsqword(0x28u);
  sub_67A90((_QWORD *)a1, a2);
  v3 = *(_QWORD *)(a1 + 520);
  while ( v3 )
  {
    v4 = v3;
    v3 = *(_QWORD *)(v3 + 8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  v5 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 520) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = 0x347000401LL;
  if ( v5 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    qfree(v5);
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 32) = 0;
  }
  v6 = *(_QWORD *)(a1 + 184);
  *(_QWORD *)(a1 + 56) = -1;
  *(_OWORD *)(a1 + 40) = -1;
  *(_QWORD *)(a1 + 64) = 0xFFFFFFFF00000000LL;
  *(_DWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 160) = -1;
  *(_OWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 168) = 0;
  if ( v6 )
  {
    *(_QWORD *)(a1 + 192) = 0;
    qfree(v6);
    *(_QWORD *)(a1 + 184) = 0;
    *(_QWORD *)(a1 + 200) = 0;
  }
  v7 = *(_QWORD *)(a1 + 208);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 216) = 0;
    qfree(v7);
    *(_QWORD *)(a1 + 208) = 0;
    *(_QWORD *)(a1 + 224) = 0;
  }
  v108 = 0;
  v107 = 0;
  v107 = qvector_reserve((__int64)&v107, 0, 1, 16);
  *(__m128i *)(v107 + 16 * v108) = _mm_load_si128((const __m128i *)&xmmword_424800);
  v8 = *(_QWORD *)(a1 + 232);
  v9 = v107;
  v107 = 0;
  v10 = (__m128i)_mm_loadh_ps((const double *)&v108 + 1);
  v108 = 0;
  if ( v8 )
  {
    *(_QWORD *)(a1 + 240) = 0;
    v104 = v10;
    qfree(v8);
    v11 = _mm_load_si128(&v104);
    v12 = v107;
    *(_QWORD *)(a1 + 232) = v9;
    *(__m128i *)(a1 + 240) = v11;
    if ( v12 )
    {
      *(_QWORD *)&v108 = 0;
      qfree(v12);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 232) = v9;
    *(__m128i *)(a1 + 240) = v10;
  }
  v13 = *(_QWORD *)(a1 + 272);
  *(_QWORD *)(a1 + 264) = 0;
  if ( v13 )
  {
    *(_QWORD *)(a1 + 280) = 0;
    qfree(v13);
    *(_QWORD *)(a1 + 272) = 0;
    *(_QWORD *)(a1 + 288) = 0;
  }
  *(_BYTE *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 312) = 0;
  clear_tinfo_t();
  v14 = *(_QWORD *)(a1 + 336);
  if ( v14 )
  {
    *(_QWORD *)(a1 + 344) = 0;
    qfree(v14);
    *(_QWORD *)(a1 + 336) = 0;
    *(_QWORD *)(a1 + 352) = 0;
  }
  v15 = *(_QWORD *)(a1 + 376);
  *(_QWORD *)(a1 + 368) = 0;
  if ( v15 )
  {
    *(_QWORD *)(a1 + 384) = 0;
    qfree(v15);
    *(_QWORD *)(a1 + 376) = 0;
    *(_QWORD *)(a1 + 392) = 0;
  }
  v16 = *(_QWORD *)(a1 + 408);
  *(_DWORD *)(a1 + 400) = 0;
  if ( v16 )
  {
    *(_QWORD *)(a1 + 416) = 0;
    qfree(v16);
    *(_QWORD *)(a1 + 408) = 0;
    *(_QWORD *)(a1 + 424) = 0;
  }
  v17 = *(_QWORD *)(a1 + 432);
  if ( v17 )
  {
    v18 = *(_QWORD *)(a1 + 440);
    if ( v18 )
    {
      v19 = 0;
      v20 = 0;
      do
      {
        v21 = (_QWORD *)(v17 + v19);
        clear_tinfo_t();
        v22 = *(_QWORD *)(v17 + v19 + 56);
        if ( v22 )
        {
          v21[8] = 0;
          qfree(v22);
        }
        v23 = v21[4];
        if ( v23 )
        {
          v21[5] = 0;
          qfree(v23);
        }
        ++v20;
        v19 += 104;
        cleanup_argloc();
        v17 = *(_QWORD *)(a1 + 432);
      }
      while ( v18 != v20 );
    }
    *(_QWORD *)(a1 + 440) = 0;
    qfree(v17);
    *(_QWORD *)(a1 + 432) = 0;
    *(_QWORD *)(a1 + 448) = 0;
  }
  v24 = *(_QWORD *)(a1 + 456);
  if ( v24 )
  {
    *(_QWORD *)(a1 + 464) = 0;
    qfree(v24);
    *(_QWORD *)(a1 + 456) = 0;
    *(_QWORD *)(a1 + 472) = 0;
  }
  v25 = *(_QWORD *)(a1 + 496);
  *(_DWORD *)(a1 + 480) = -1;
  *(_QWORD *)(a1 + 488) = -1;
  if ( v25 )
  {
    *(_QWORD *)(a1 + 504) = 0;
    qfree(v25);
    *(_QWORD *)(a1 + 496) = 0;
    *(_QWORD *)(a1 + 512) = 0;
  }
  v26 = a1 + 536;
  do
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
    *(_QWORD *)(v26 + 16) = "<unnamed inteval>";
    v26 += 32;
    *(_QWORD *)(v26 - 8) = 0;
    *(__m128i *)(v26 - 32) = si128;
  }
  while ( a1 + 728 != v26 );
  v28 = *(_QWORD *)(a1 + 728);
  if ( v28 )
  {
    v29 = *(_QWORD *)(a1 + 736);
    if ( v29 )
    {
      for ( i = 0; i != v29; ++i )
      {
        v31 = v28 + 40 * i;
        v32 = *(_QWORD *)(v31 + 16);
        if ( v32 )
        {
          *(_QWORD *)(v31 + 24) = 0;
          qfree(v32);
          v28 = *(_QWORD *)(a1 + 728);
        }
      }
    }
    *(_QWORD *)(a1 + 736) = 0;
    qfree(v28);
    *(_QWORD *)(a1 + 728) = 0;
    *(_QWORD *)(a1 + 744) = 0;
  }
  v33 = *(unsigned __int64 **)(a1 + 816);
  *(_DWORD *)(a1 + 792) = 0;
  *(_OWORD *)(a1 + 752) = 0;
  *(_OWORD *)(a1 + 768) = 0;
  *(_OWORD *)(a1 + 800) = 0;
  if ( !v33 )
    goto LABEL_54;
  v34 = *v33;
  if ( !*(_QWORD *)(a1 + 824) )
  {
    *v33 = *v33 & 3 | (unsigned __int64)v33 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(*(_QWORD *)(a1 + 816) + 8LL) = _mm_unpacklo_epi64(
                                                  (__m128i)*(unsigned __int64 *)(a1 + 816),
                                                  (__m128i)*(unsigned __int64 *)(a1 + 816));
    **(_QWORD **)(a1 + 816) &= ~1uLL;
    **(_QWORD **)(a1 + 816) |= 2uLL;
    goto LABEL_55;
  }
  v35 = (__int64 *)(v34 & 0xFFFFFFFFFFFFFFFCLL);
  v36 = *(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v36 & 2) == 0 )
  {
    v37 = (__int64 *)v35[1];
    if ( (*(_BYTE *)v37 & 2) != 0 )
    {
      v38 = (__int64 *)v35[2];
      if ( (*(_BYTE *)v38 & 2) != 0 )
        goto LABEL_163;
    }
    else
    {
      sub_328FF0(v37);
      v38 = (__int64 *)v35[2];
      if ( (*(_BYTE *)v38 & 2) != 0 )
        goto LABEL_49;
    }
    sub_328FF0(v38);
LABEL_49:
    v36 = *v35;
    if ( (*v35 & 2) != 0 )
    {
LABEL_50:
      if ( v34 > 3 )
        qfree(v34 & 0xFFFFFFFFFFFFFFFCLL);
      v33 = *(unsigned __int64 **)(a1 + 816);
      v34 = *v33;
      goto LABEL_53;
    }
LABEL_163:
    *v35 = v36 | 2;
    goto LABEL_50;
  }
LABEL_53:
  *v33 = v34 & 3 | (unsigned __int64)v33 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(*(_QWORD *)(a1 + 816) + 8LL) = _mm_unpacklo_epi64(
                                                (__m128i)*(unsigned __int64 *)(a1 + 816),
                                                (__m128i)*(unsigned __int64 *)(a1 + 816));
  **(_QWORD **)(a1 + 816) &= ~1uLL;
  **(_QWORD **)(a1 + 816) |= 2uLL;
LABEL_54:
  *(_QWORD *)(a1 + 824) = 0;
LABEL_55:
  sub_82C40((unsigned __int64 **)(a1 + 872));
  v39 = *(_QWORD **)(a1 + 920);
  *(_QWORD *)(a1 + 904) = 0;
  *(_DWORD *)(a1 + 912) = 0;
  *(_OWORD *)(a1 + 888) = 0;
  if ( v39 )
  {
    v40 = *(__int64 (__fastcall **)(_QWORD *))(*v39 + 8LL);
    if ( v40 == sub_7A730 )
    {
      v41 = v39[4];
      *v39 = &off_4DBD38;
      if ( v41 )
      {
        v39[5] = 0;
        qfree(v41);
      }
      v42 = v39[1];
      if ( v42 )
      {
        v39[2] = 0;
        qfree(v42);
      }
      qfree((__int64)v39);
    }
    else
    {
      v40(v39);
    }
  }
  v43 = *(_QWORD *)(a1 + 928);
  *(_QWORD *)(a1 + 920) = 0;
  if ( v43 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 8LL))(v43);
  v44 = *(_QWORD *)(a1 + 936);
  *(_QWORD *)(a1 + 928) = 0;
  if ( v44 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 8LL))(v44);
  v45 = *(_QWORD **)(a1 + 944);
  *(_QWORD *)(a1 + 936) = 0;
  if ( v45 )
  {
    v46 = v45[5];
    if ( v46 )
    {
      v45[6] = 0;
      qfree(v46);
    }
    clear_tinfo_t();
    operator delete(v45, 0x48u);
  }
  *(_QWORD *)(a1 + 944) = 0;
  sub_329740(*(_QWORD **)(a1 + 968));
  *(_QWORD *)(a1 + 968) = 0;
  v47 = *(_QWORD **)(a1 + 1016);
  *(_QWORD *)(a1 + 976) = a1 + 960;
  *(_QWORD *)(a1 + 984) = a1 + 960;
  *(_QWORD *)(a1 + 992) = 0;
  sub_329740(v47);
  *(_QWORD *)(a1 + 1016) = 0;
  v48 = *(_QWORD **)(a1 + 1064);
  *(_QWORD *)(a1 + 1024) = a1 + 1008;
  *(_QWORD *)(a1 + 1032) = a1 + 1008;
  *(_QWORD *)(a1 + 1040) = 0;
  sub_329740(v48);
  *(_QWORD *)(a1 + 1064) = 0;
  v49 = *(_QWORD **)(a1 + 1112);
  *(_QWORD *)(a1 + 1072) = a1 + 1056;
  *(_QWORD *)(a1 + 1080) = a1 + 1056;
  *(_QWORD *)(a1 + 1088) = 0;
  sub_329740(v49);
  *(_QWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1120) = a1 + 1104;
  *(_QWORD *)(a1 + 1128) = a1 + 1104;
  v50 = *(unsigned __int64 **)(a1 + 1144);
  *(_QWORD *)(a1 + 1136) = 0;
  if ( !v50 )
    goto LABEL_82;
  v51 = *v50;
  if ( !*(_QWORD *)(a1 + 1152) )
  {
    *v50 = *v50 & 3 | (unsigned __int64)v50 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(*(_QWORD *)(a1 + 1144) + 8LL) = _mm_unpacklo_epi64(
                                                   (__m128i)*(unsigned __int64 *)(a1 + 1144),
                                                   (__m128i)*(unsigned __int64 *)(a1 + 1144));
    **(_QWORD **)(a1 + 1144) &= ~1uLL;
    **(_QWORD **)(a1 + 1144) |= 2uLL;
    goto LABEL_83;
  }
  v52 = (__int64 *)(v51 & 0xFFFFFFFFFFFFFFFCLL);
  v53 = *(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v53 & 2) == 0 )
  {
    v54 = (__int64 *)v52[1];
    if ( (*(_BYTE *)v54 & 2) != 0 )
    {
      v55 = (__int64 *)v52[2];
      if ( (*(_BYTE *)v55 & 2) != 0 )
        goto LABEL_165;
    }
    else
    {
      sub_328FF0(v54);
      v55 = (__int64 *)v52[2];
      if ( (*(_BYTE *)v55 & 2) != 0 )
        goto LABEL_77;
    }
    sub_328FF0(v55);
LABEL_77:
    v53 = *v52;
    if ( (*v52 & 2) != 0 )
    {
LABEL_78:
      if ( v51 > 3 )
        qfree(v51 & 0xFFFFFFFFFFFFFFFCLL);
      v50 = *(unsigned __int64 **)(a1 + 1144);
      v51 = *v50;
      goto LABEL_81;
    }
LABEL_165:
    *v52 = v53 | 2;
    goto LABEL_78;
  }
LABEL_81:
  *v50 = v51 & 3 | (unsigned __int64)v50 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(*(_QWORD *)(a1 + 1144) + 8LL) = _mm_unpacklo_epi64(
                                                 (__m128i)*(unsigned __int64 *)(a1 + 1144),
                                                 (__m128i)*(unsigned __int64 *)(a1 + 1144));
  **(_QWORD **)(a1 + 1144) &= ~1uLL;
  **(_QWORD **)(a1 + 1144) |= 2uLL;
LABEL_82:
  *(_QWORD *)(a1 + 1152) = 0;
LABEL_83:
  v56 = *(_QWORD *)(a1 + 1160);
  if ( v56 )
  {
    *(_QWORD *)(a1 + 1168) = 0;
    qfree(v56);
    *(_QWORD *)(a1 + 1160) = 0;
    *(_QWORD *)(a1 + 1176) = 0;
  }
  v57 = *(_QWORD *)(a1 + 1192);
  *(_DWORD *)(a1 + 1184) = -1;
  if ( v57 )
  {
    *(_QWORD *)(a1 + 1200) = 0;
    qfree(v57);
    *(_QWORD *)(a1 + 1192) = 0;
    *(_QWORD *)(a1 + 1208) = 0;
  }
  v58 = *(_QWORD *)(a1 + 1216);
  if ( v58 )
  {
    *(_QWORD *)(a1 + 1224) = 0;
    qfree(v58);
    *(_QWORD *)(a1 + 1216) = 0;
    *(_QWORD *)(a1 + 1232) = 0;
  }
  v59 = *(_QWORD *)(a1 + 1240);
  if ( v59 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 8LL))(v59);
  v60 = *(__int64 **)(a1 + 1248);
  *(_QWORD *)(a1 + 1240) = 0;
  if ( v60 )
  {
    v61 = *v60;
    if ( *v60 )
    {
      v60[1] = 0;
      qfree(v61);
    }
    qfree((__int64)v60);
  }
  v62 = *(_QWORD *)(a1 + 1256);
  *(_QWORD *)(a1 + 1248) = 0;
  if ( v62 )
  {
    v63 = *(_QWORD *)(a1 + 1264);
    if ( v63 )
    {
      for ( j = 0; j != v63; ++j )
      {
        v65 = (_QWORD *)(v62 + 96 * j);
        v66 = v65[7];
        if ( v66 )
        {
          v65[8] = 0;
          qfree(v66);
        }
        clear_tinfo_t();
        v67 = v65[3];
        if ( v67 )
        {
          v65[4] = 0;
          qfree(v67);
        }
        cleanup_argloc();
        v62 = *(_QWORD *)(a1 + 1256);
      }
    }
    *(_QWORD *)(a1 + 1264) = 0;
    qfree(v62);
    *(_QWORD *)(a1 + 1256) = 0;
    *(_QWORD *)(a1 + 1272) = 0;
  }
  sub_83C10((unsigned __int64 **)(a1 + 1280));
  *(_QWORD *)(a1 + 1296) = 0;
  *(_DWORD *)(a1 + 1304) = 1;
  sub_83F70((unsigned __int64 **)(a1 + 1312));
  v68 = *(__int64 **)(a1 + 1328);
  if ( v68 )
  {
    v69 = *v68;
    if ( !*v68 )
    {
LABEL_110:
      qfree((__int64)v68);
      goto LABEL_111;
    }
    v70 = *(_QWORD *)v69;
    if ( !v68[1] )
    {
      *(_QWORD *)v69 = v69 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v69 & 3LL;
      *(__m128i *)(*v68 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v68, (__m128i)(unsigned __int64)*v68);
      *(_QWORD *)*v68 &= ~1uLL;
      *(_QWORD *)*v68 |= 2uLL;
      goto LABEL_108;
    }
    v92 = v70 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v70 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_161:
      *(_QWORD *)v69 = v69 & 0xFFFFFFFFFFFFFFFCLL | v70 & 3;
      *(__m128i *)(*v68 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v68, (__m128i)(unsigned __int64)*v68);
      *(_QWORD *)*v68 &= ~1uLL;
      *(_QWORD *)*v68 |= 2uLL;
      v68[1] = 0;
LABEL_108:
      if ( *v68 )
        qfree(*v68);
      goto LABEL_110;
    }
    v93 = *(_QWORD *)(v92 + 8);
    if ( (*(_BYTE *)v93 & 2) != 0 )
    {
      v94 = *(_QWORD *)(v92 + 16);
      if ( (*(_BYTE *)v94 & 2) != 0 )
        goto LABEL_183;
      goto LABEL_151;
    }
    v97 = *(__int64 **)(v93 + 8);
    if ( (*(_BYTE *)v97 & 2) != 0 )
    {
      v98 = *(__int64 **)(v93 + 16);
      if ( (*(_BYTE *)v98 & 2) != 0 )
      {
LABEL_192:
        v103 = *(_QWORD *)(v93 + 48);
        if ( v103 )
        {
          *(_QWORD *)(v93 + 56) = 0;
          qfree(v103);
        }
        *(_QWORD *)v93 |= 2uLL;
LABEL_171:
        if ( v93 )
          qfree(v93);
        v94 = *(_QWORD *)(v92 + 16);
        if ( (*(_BYTE *)v94 & 2) != 0 )
        {
LABEL_157:
          if ( (*(_BYTE *)v92 & 2) != 0 )
          {
LABEL_158:
            if ( v70 > 3 )
              qfree(v70 & 0xFFFFFFFFFFFFFFFCLL);
            v69 = *v68;
            v70 = *(_QWORD *)*v68;
            goto LABEL_161;
          }
LABEL_183:
          v101 = *(_QWORD *)(v92 + 48);
          if ( v101 )
          {
            *(_QWORD *)(v92 + 56) = 0;
            qfree(v101);
          }
          *(_QWORD *)v92 |= 2uLL;
          goto LABEL_158;
        }
LABEL_151:
        v95 = *(__int64 **)(v94 + 8);
        if ( (*(_BYTE *)v95 & 2) != 0 )
        {
          v96 = *(__int64 **)(v94 + 16);
          if ( (*(_BYTE *)v96 & 2) != 0 )
            goto LABEL_188;
        }
        else
        {
          sub_329170(v95);
          v96 = *(__int64 **)(v94 + 16);
          if ( (*(_BYTE *)v96 & 2) != 0 )
            goto LABEL_154;
        }
        sub_329170(v96);
LABEL_154:
        if ( (*(_BYTE *)v94 & 2) != 0 )
        {
LABEL_155:
          if ( v94 )
            qfree(v94);
          goto LABEL_157;
        }
LABEL_188:
        v102 = *(_QWORD *)(v94 + 48);
        if ( v102 )
        {
          *(_QWORD *)(v94 + 56) = 0;
          qfree(v102);
        }
        *(_QWORD *)v94 |= 2uLL;
        goto LABEL_155;
      }
    }
    else
    {
      sub_329170(v97);
      v98 = *(__int64 **)(v93 + 16);
      if ( (*(_BYTE *)v98 & 2) != 0 )
        goto LABEL_170;
    }
    sub_329170(v98);
LABEL_170:
    if ( (*(_BYTE *)v93 & 2) != 0 )
      goto LABEL_171;
    goto LABEL_192;
  }
LABEL_111:
  v71 = *(__int64 **)(a1 + 1344);
  *(_QWORD *)(a1 + 1328) = 0;
  if ( !v71 )
    goto LABEL_118;
  v72 = *v71;
  if ( *v71 )
  {
    v73 = *(_QWORD *)v72;
    if ( !v71[1] )
    {
      *(_QWORD *)v72 = *(_QWORD *)v72 & 3LL | v72 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*v71 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v71, (__m128i)(unsigned __int64)*v71);
      *(_QWORD *)*v71 &= ~1uLL;
      *(_QWORD *)*v71 |= 2uLL;
      goto LABEL_115;
    }
    v84 = (__int64 *)(v73 & 0xFFFFFFFFFFFFFFFCLL);
    v85 = *(_QWORD *)(v73 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v85 & 2) != 0 )
    {
LABEL_147:
      *(_QWORD *)v72 = v73 & 3 | v72 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*v71 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v71, (__m128i)(unsigned __int64)*v71);
      *(_QWORD *)*v71 &= ~1uLL;
      *(_QWORD *)*v71 |= 2uLL;
      v71[1] = 0;
LABEL_115:
      if ( *v71 )
        qfree(*v71);
      goto LABEL_117;
    }
    v86 = (__int64 *)v84[1];
    v87 = *v86;
    if ( (*v86 & 2) != 0 )
    {
      v88 = v84[2];
      if ( (*(_BYTE *)v88 & 2) != 0 )
        goto LABEL_186;
      goto LABEL_137;
    }
    v99 = (__int64 *)v86[1];
    if ( (*(_BYTE *)v99 & 2) != 0 )
    {
      v100 = (__int64 *)v86[2];
      if ( (*(_BYTE *)v100 & 2) != 0 )
      {
LABEL_199:
        *v86 = v87 | 2;
LABEL_179:
        if ( v86 )
          qfree((__int64)v86);
        v88 = v84[2];
        if ( (*(_BYTE *)v88 & 2) != 0 )
        {
LABEL_143:
          v85 = *v84;
          if ( (*v84 & 2) != 0 )
          {
LABEL_144:
            if ( v73 > 3 )
              qfree(v73 & 0xFFFFFFFFFFFFFFFCLL);
            v72 = *v71;
            v73 = *(_QWORD *)*v71;
            goto LABEL_147;
          }
LABEL_186:
          *v84 = v85 | 2;
          goto LABEL_144;
        }
LABEL_137:
        v89 = *(__int64 **)(v88 + 8);
        if ( (*(_BYTE *)v89 & 2) != 0 )
        {
          v90 = *(__int64 **)(v88 + 16);
          if ( (*(_BYTE *)v90 & 2) != 0 )
          {
            v91 = *(_QWORD *)v88;
LABEL_197:
            *(_QWORD *)v88 = v91 | 2;
LABEL_141:
            if ( v88 )
              qfree(v88);
            goto LABEL_143;
          }
        }
        else
        {
          sub_328E10(v89);
          v90 = *(__int64 **)(v88 + 16);
          if ( (*(_BYTE *)v90 & 2) != 0 )
            goto LABEL_140;
        }
        sub_328E10(v90);
LABEL_140:
        v91 = *(_QWORD *)v88;
        if ( (*(_QWORD *)v88 & 2) != 0 )
          goto LABEL_141;
        goto LABEL_197;
      }
    }
    else
    {
      sub_328E10(v99);
      v100 = (__int64 *)v86[2];
      if ( (*(_BYTE *)v100 & 2) != 0 )
        goto LABEL_178;
    }
    sub_328E10(v100);
LABEL_178:
    v87 = *v86;
    if ( (*v86 & 2) != 0 )
      goto LABEL_179;
    goto LABEL_199;
  }
LABEL_117:
  qfree((__int64)v71);
LABEL_118:
  v74 = *(__int64 **)(a1 + 1336);
  *(_QWORD *)(a1 + 1344) = 0;
  v105 = v74;
  if ( v74 )
  {
    v75 = *v74;
    if ( *v74 )
    {
      v106 = v74[1];
      if ( v106 )
      {
        for ( k = 0; k != v106; ++k )
        {
          v77 = (__int64 *)(v75 + 24 * k);
          v78 = *v77;
          if ( *v77 )
          {
            v104.m128i_i64[0] = v77[1];
            if ( v104.m128i_i64[0] )
            {
              v79 = 0;
              v80 = 0;
              do
              {
                v81 = v78 + v79;
                ++v80;
                v79 += 112;
                sub_11CDA0(v81 + 88);
                sub_11CDA0(v81 + 72);
                sub_11CDA0(v81 + 56);
                v78 = *v77;
              }
              while ( v104.m128i_i64[0] != v80 );
            }
            v77[1] = 0;
            qfree(v78);
            v75 = *v105;
          }
        }
      }
      v105[1] = 0;
      qfree(v75);
    }
    qfree((__int64)v105);
  }
  *(_QWORD *)(a1 + 1336) = 0;
  *(_QWORD *)(a1 + 1352) = -1;
  sub_84080((unsigned __int64 **)(a1 + 1360));
  sub_84190((unsigned __int64 **)(a1 + 1376));
  sub_84190((unsigned __int64 **)(a1 + 1392));
  v82 = *(_QWORD *)(a1 + 1408);
  if ( v82 )
  {
    *(_QWORD *)(a1 + 1416) = 0;
    qfree(v82);
    *(_QWORD *)(a1 + 1408) = 0;
    *(_QWORD *)(a1 + 1424) = 0;
  }
  *(_QWORD *)(a1 + 1432) = -1;
  return v109 - __readfsqword(0x28u);
}

