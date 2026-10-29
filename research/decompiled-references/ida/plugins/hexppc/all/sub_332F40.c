unsigned __int64 __fastcall sub_332F40(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdi
  __m128i *v8; // rbx
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  __m128i *v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // r13
  __int64 v17; // r12
  __int64 v18; // rbp
  _QWORD *v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rax
  __m128i si128; // xmm2
  __int64 v23; // rdx
  __int64 v24; // rbp
  __int64 i; // rbx
  __int64 v26; // rax
  unsigned __int64 *v27; // rax
  unsigned __int64 v28; // rbx
  __int64 *v29; // rbp
  __int64 v30; // rdx
  __int64 *v31; // rdi
  __int64 *v32; // rdi
  _QWORD *v33; // rbx
  __int64 (__fastcall *v34)(_QWORD *); // rax
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // rdi
  _QWORD *v38; // rbx
  _QWORD *v39; // rdi
  _QWORD *v40; // rdi
  _QWORD *v41; // rdi
  unsigned __int64 *v42; // rax
  unsigned __int64 v43; // rbx
  __int64 *v44; // rbp
  __int64 v45; // rdx
  __int64 *v46; // rdi
  __int64 *v47; // rdi
  __int64 v48; // rdi
  __int64 v49; // rdi
  _QWORD *v50; // rbx
  __int64 v51; // rdi
  __int64 v52; // r12
  __int64 j; // rbp
  _QWORD *v54; // rbx
  unsigned __int64 **v55; // rbx
  unsigned __int64 *v56; // rax
  unsigned __int64 v57; // rbp
  unsigned __int64 **v58; // rbx
  unsigned __int64 *v59; // rax
  unsigned __int64 v60; // rbp
  __int64 *v61; // rsi
  __int64 v62; // rax
  __int64 k; // r13
  __int64 *v64; // rbp
  __int64 v65; // rdi
  __int64 v66; // r12
  __int64 v67; // r14
  __int64 v68; // rbx
  __int64 *v70; // r12
  __int64 v71; // rdx
  __int64 *v72; // r13
  __int64 v73; // rax
  __int64 *v74; // r13
  __int64 *v75; // rdi
  __int64 *v76; // rdi
  __int64 v77; // rax
  unsigned __int64 v78; // r12
  __int64 v79; // r13
  __int64 v80; // r13
  __int64 *v81; // rdi
  __int64 *v82; // rdi
  __int64 *v83; // rdi
  __int64 *v84; // rdi
  __int64 *v85; // rdi
  __int64 *v86; // rdi
  __m128i v87; // [rsp+0h] [rbp-78h] BYREF
  __int64 *v88; // [rsp+10h] [rbp-68h]
  __int64 v89; // [rsp+18h] [rbp-60h]
  __m128i *v90; // [rsp+20h] [rbp-58h]
  __int128 v91; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v92; // [rsp+38h] [rbp-40h]

  v92 = __readfsqword(0x28u);
  sub_64050((_QWORD *)a1);
  v2 = *(_QWORD *)(a1 + 520);
  while ( v2 )
  {
    v3 = v2;
    v2 = *(_QWORD *)(v2 + 8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  v4 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 520) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = 0x347000401LL;
  if ( v4 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    qfree();
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 32) = 0;
  }
  v5 = *(_QWORD *)(a1 + 184);
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
  if ( v5 )
  {
    *(_QWORD *)(a1 + 192) = 0;
    qfree();
    *(_QWORD *)(a1 + 184) = 0;
    *(_QWORD *)(a1 + 200) = 0;
  }
  if ( *(_QWORD *)(a1 + 208) )
  {
    *(_QWORD *)(a1 + 216) = 0;
    qfree();
    *(_QWORD *)(a1 + 208) = 0;
    *(_QWORD *)(a1 + 224) = 0;
  }
  v6 = 0;
  v91 = 0;
  v90 = (__m128i *)qvector_reserve();
  *v90 = _mm_load_si128((const __m128i *)&xmmword_411C00);
  v7 = *(_QWORD *)(a1 + 232);
  v8 = v90;
  v90 = nullptr;
  v9 = (__m128i)_mm_loadh_ps((const double *)&v91 + 1);
  v91 = 0;
  if ( v7 )
  {
    *(_QWORD *)(a1 + 240) = 0;
    v87 = v9;
    qfree();
    v10 = _mm_load_si128(&v87);
    v11 = v90;
    *(_QWORD *)(a1 + 232) = v8;
    *(__m128i *)(a1 + 240) = v10;
    if ( v11 )
    {
      *(_QWORD *)&v91 = 0;
      qfree();
    }
  }
  else
  {
    *(_QWORD *)(a1 + 232) = v8;
    *(__m128i *)(a1 + 240) = v9;
  }
  v12 = *(_QWORD *)(a1 + 272);
  *(_QWORD *)(a1 + 264) = 0;
  if ( v12 )
  {
    *(_QWORD *)(a1 + 280) = 0;
    qfree();
    *(_QWORD *)(a1 + 272) = 0;
    *(_QWORD *)(a1 + 288) = 0;
  }
  *(_BYTE *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 312) = 0;
  clear_tinfo_t();
  if ( *(_QWORD *)(a1 + 336) )
  {
    *(_QWORD *)(a1 + 344) = 0;
    qfree();
    *(_QWORD *)(a1 + 336) = 0;
    *(_QWORD *)(a1 + 352) = 0;
  }
  v13 = *(_QWORD *)(a1 + 376);
  *(_QWORD *)(a1 + 368) = 0;
  if ( v13 )
  {
    *(_QWORD *)(a1 + 384) = 0;
    qfree();
    *(_QWORD *)(a1 + 376) = 0;
    *(_QWORD *)(a1 + 392) = 0;
  }
  v14 = *(_QWORD *)(a1 + 408);
  *(_DWORD *)(a1 + 400) = 0;
  if ( v14 )
  {
    *(_QWORD *)(a1 + 416) = 0;
    qfree();
    *(_QWORD *)(a1 + 408) = 0;
    *(_QWORD *)(a1 + 424) = 0;
  }
  v15 = *(_QWORD *)(a1 + 432);
  if ( v15 )
  {
    v16 = *(_QWORD *)(a1 + 440);
    if ( v16 )
    {
      v17 = 0;
      v18 = 0;
      do
      {
        v19 = (_QWORD *)(v15 + v17);
        clear_tinfo_t();
        if ( *(_QWORD *)(v15 + v17 + 56) )
        {
          v19[8] = 0;
          qfree();
        }
        if ( v19[4] )
        {
          v19[5] = 0;
          qfree();
        }
        ++v18;
        v17 += 104;
        cleanup_argloc();
        v15 = *(_QWORD *)(a1 + 432);
      }
      while ( v16 != v18 );
    }
    *(_QWORD *)(a1 + 440) = 0;
    qfree();
    *(_QWORD *)(a1 + 432) = 0;
    *(_QWORD *)(a1 + 448) = 0;
  }
  if ( *(_QWORD *)(a1 + 456) )
  {
    *(_QWORD *)(a1 + 464) = 0;
    qfree();
    *(_QWORD *)(a1 + 456) = 0;
    *(_QWORD *)(a1 + 472) = 0;
  }
  v20 = *(_QWORD *)(a1 + 496);
  *(_DWORD *)(a1 + 480) = -1;
  *(_QWORD *)(a1 + 488) = -1;
  if ( v20 )
  {
    *(_QWORD *)(a1 + 504) = 0;
    qfree();
    *(_QWORD *)(a1 + 496) = 0;
    *(_QWORD *)(a1 + 512) = 0;
  }
  v21 = a1 + 536;
  do
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_411C00);
    *(_QWORD *)(v21 + 16) = "<unnamed inteval>";
    v21 += 32;
    *(_QWORD *)(v21 - 8) = 0;
    *(__m128i *)(v21 - 32) = si128;
  }
  while ( a1 + 728 != v21 );
  v23 = *(_QWORD *)(a1 + 728);
  if ( v23 )
  {
    v24 = *(_QWORD *)(a1 + 736);
    if ( v24 )
    {
      for ( i = 0; i != v24; ++i )
      {
        v26 = v23 + 40 * i;
        if ( *(_QWORD *)(v26 + 16) )
        {
          *(_QWORD *)(v26 + 24) = 0;
          qfree();
          v23 = *(_QWORD *)(a1 + 728);
        }
      }
    }
    *(_QWORD *)(a1 + 736) = 0;
    qfree();
    *(_QWORD *)(a1 + 728) = 0;
    *(_QWORD *)(a1 + 744) = 0;
  }
  v27 = *(unsigned __int64 **)(a1 + 816);
  *(_DWORD *)(a1 + 792) = 0;
  *(_OWORD *)(a1 + 752) = 0;
  *(_OWORD *)(a1 + 768) = 0;
  *(_OWORD *)(a1 + 800) = 0;
  if ( !v27 )
    goto LABEL_54;
  v28 = *v27;
  if ( !*(_QWORD *)(a1 + 824) )
  {
    *v27 = *v27 & 3 | (unsigned __int64)v27 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(*(_QWORD *)(a1 + 816) + 8LL) = _mm_unpacklo_epi64(
                                                  (__m128i)*(unsigned __int64 *)(a1 + 816),
                                                  (__m128i)*(unsigned __int64 *)(a1 + 816));
    **(_QWORD **)(a1 + 816) &= ~1uLL;
    **(_QWORD **)(a1 + 816) |= 2uLL;
    goto LABEL_55;
  }
  v29 = (__int64 *)(v28 & 0xFFFFFFFFFFFFFFFCLL);
  v30 = *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v30 & 2) == 0 )
  {
    v31 = (__int64 *)v29[1];
    if ( (*(_BYTE *)v31 & 2) != 0 )
    {
      v32 = (__int64 *)v29[2];
      if ( (*(_BYTE *)v32 & 2) != 0 )
        goto LABEL_163;
    }
    else
    {
      sub_324E70(v31);
      v32 = (__int64 *)v29[2];
      if ( (*(_BYTE *)v32 & 2) != 0 )
        goto LABEL_49;
    }
    sub_324E70(v32);
LABEL_49:
    v30 = *v29;
    if ( (*v29 & 2) != 0 )
    {
LABEL_50:
      if ( v28 > 3 )
        qfree();
      v27 = *(unsigned __int64 **)(a1 + 816);
      v28 = *v27;
      goto LABEL_53;
    }
LABEL_163:
    *v29 = v30 | 2;
    goto LABEL_50;
  }
LABEL_53:
  *v27 = v28 & 3 | (unsigned __int64)v27 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(*(_QWORD *)(a1 + 816) + 8LL) = _mm_unpacklo_epi64(
                                                (__m128i)*(unsigned __int64 *)(a1 + 816),
                                                (__m128i)*(unsigned __int64 *)(a1 + 816));
  **(_QWORD **)(a1 + 816) &= ~1uLL;
  **(_QWORD **)(a1 + 816) |= 2uLL;
LABEL_54:
  *(_QWORD *)(a1 + 824) = 0;
LABEL_55:
  sub_7F200((unsigned __int64 **)(a1 + 872));
  v33 = *(_QWORD **)(a1 + 920);
  *(_QWORD *)(a1 + 904) = 0;
  *(_DWORD *)(a1 + 912) = 0;
  *(_OWORD *)(a1 + 888) = 0;
  if ( v33 )
  {
    v34 = *(__int64 (__fastcall **)(_QWORD *))(*v33 + 8LL);
    if ( v34 == sub_76CF0 )
    {
      v35 = v33[4];
      *v33 = &off_4C8E98;
      if ( v35 )
      {
        v33[5] = 0;
        qfree();
      }
      if ( v33[1] )
      {
        v33[2] = 0;
        qfree();
      }
      qfree();
    }
    else
    {
      ((void (__fastcall *)(_QWORD *, _QWORD))v34)(v33, 0);
    }
  }
  v36 = *(_QWORD *)(a1 + 928);
  *(_QWORD *)(a1 + 920) = 0;
  if ( v36 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v36 + 8LL))(v36, 0);
  v37 = *(_QWORD *)(a1 + 936);
  *(_QWORD *)(a1 + 928) = 0;
  if ( v37 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v37 + 8LL))(v37, 0);
  v38 = *(_QWORD **)(a1 + 944);
  *(_QWORD *)(a1 + 936) = 0;
  if ( v38 )
  {
    if ( v38[5] )
    {
      v38[6] = 0;
      qfree();
    }
    clear_tinfo_t();
    v6 = 72;
    operator delete(v38, 0x48u);
  }
  *(_QWORD *)(a1 + 944) = 0;
  sub_3255C0(*(_QWORD **)(a1 + 968));
  *(_QWORD *)(a1 + 968) = 0;
  v39 = *(_QWORD **)(a1 + 1016);
  *(_QWORD *)(a1 + 976) = a1 + 960;
  *(_QWORD *)(a1 + 984) = a1 + 960;
  *(_QWORD *)(a1 + 992) = 0;
  sub_3255C0(v39);
  *(_QWORD *)(a1 + 1016) = 0;
  v40 = *(_QWORD **)(a1 + 1064);
  *(_QWORD *)(a1 + 1024) = a1 + 1008;
  *(_QWORD *)(a1 + 1032) = a1 + 1008;
  *(_QWORD *)(a1 + 1040) = 0;
  sub_3255C0(v40);
  *(_QWORD *)(a1 + 1064) = 0;
  v41 = *(_QWORD **)(a1 + 1112);
  *(_QWORD *)(a1 + 1072) = a1 + 1056;
  *(_QWORD *)(a1 + 1080) = a1 + 1056;
  *(_QWORD *)(a1 + 1088) = 0;
  sub_3255C0(v41);
  *(_QWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1120) = a1 + 1104;
  *(_QWORD *)(a1 + 1128) = a1 + 1104;
  v42 = *(unsigned __int64 **)(a1 + 1144);
  *(_QWORD *)(a1 + 1136) = 0;
  if ( !v42 )
    goto LABEL_82;
  v43 = *v42;
  if ( !*(_QWORD *)(a1 + 1152) )
  {
    *v42 = *v42 & 3 | (unsigned __int64)v42 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(*(_QWORD *)(a1 + 1144) + 8LL) = _mm_unpacklo_epi64(
                                                   (__m128i)*(unsigned __int64 *)(a1 + 1144),
                                                   (__m128i)*(unsigned __int64 *)(a1 + 1144));
    **(_QWORD **)(a1 + 1144) &= ~1uLL;
    **(_QWORD **)(a1 + 1144) |= 2uLL;
    goto LABEL_83;
  }
  v44 = (__int64 *)(v43 & 0xFFFFFFFFFFFFFFFCLL);
  v45 = *(_QWORD *)(v43 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v45 & 2) == 0 )
  {
    v46 = (__int64 *)v44[1];
    if ( (*(_BYTE *)v46 & 2) != 0 )
    {
      v47 = (__int64 *)v44[2];
      if ( (*(_BYTE *)v47 & 2) != 0 )
        goto LABEL_165;
    }
    else
    {
      sub_324E70(v46);
      v47 = (__int64 *)v44[2];
      if ( (*(_BYTE *)v47 & 2) != 0 )
        goto LABEL_77;
    }
    sub_324E70(v47);
LABEL_77:
    v45 = *v44;
    if ( (*v44 & 2) != 0 )
    {
LABEL_78:
      if ( v43 > 3 )
        qfree();
      v42 = *(unsigned __int64 **)(a1 + 1144);
      v43 = *v42;
      goto LABEL_81;
    }
LABEL_165:
    *v44 = v45 | 2;
    goto LABEL_78;
  }
LABEL_81:
  *v42 = v43 & 3 | (unsigned __int64)v42 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(*(_QWORD *)(a1 + 1144) + 8LL) = _mm_unpacklo_epi64(
                                                 (__m128i)*(unsigned __int64 *)(a1 + 1144),
                                                 (__m128i)*(unsigned __int64 *)(a1 + 1144));
  **(_QWORD **)(a1 + 1144) &= ~1uLL;
  **(_QWORD **)(a1 + 1144) |= 2uLL;
LABEL_82:
  *(_QWORD *)(a1 + 1152) = 0;
LABEL_83:
  if ( *(_QWORD *)(a1 + 1160) )
  {
    *(_QWORD *)(a1 + 1168) = 0;
    qfree();
    *(_QWORD *)(a1 + 1160) = 0;
    *(_QWORD *)(a1 + 1176) = 0;
  }
  v48 = *(_QWORD *)(a1 + 1192);
  *(_DWORD *)(a1 + 1184) = -1;
  if ( v48 )
  {
    *(_QWORD *)(a1 + 1200) = 0;
    qfree();
    *(_QWORD *)(a1 + 1192) = 0;
    *(_QWORD *)(a1 + 1208) = 0;
  }
  if ( *(_QWORD *)(a1 + 1216) )
  {
    *(_QWORD *)(a1 + 1224) = 0;
    qfree();
    *(_QWORD *)(a1 + 1216) = 0;
    *(_QWORD *)(a1 + 1232) = 0;
  }
  v49 = *(_QWORD *)(a1 + 1240);
  if ( v49 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v49 + 8LL))(v49, v6);
  v50 = *(_QWORD **)(a1 + 1248);
  *(_QWORD *)(a1 + 1240) = 0;
  if ( v50 )
  {
    if ( *v50 )
    {
      v50[1] = 0;
      qfree();
    }
    qfree();
  }
  v51 = *(_QWORD *)(a1 + 1256);
  *(_QWORD *)(a1 + 1248) = 0;
  if ( v51 )
  {
    v52 = *(_QWORD *)(a1 + 1264);
    if ( v52 )
    {
      for ( j = 0; j != v52; ++j )
      {
        v54 = (_QWORD *)(v51 + 96 * j);
        if ( v54[7] )
        {
          v54[8] = 0;
          qfree();
        }
        clear_tinfo_t();
        if ( v54[3] )
        {
          v54[4] = 0;
          qfree();
        }
        cleanup_argloc();
        v51 = *(_QWORD *)(a1 + 1256);
      }
    }
    *(_QWORD *)(a1 + 1264) = 0;
    qfree();
    *(_QWORD *)(a1 + 1256) = 0;
    *(_QWORD *)(a1 + 1272) = 0;
  }
  sub_801D0((unsigned __int64 **)(a1 + 1280));
  *(_QWORD *)(a1 + 1296) = 0;
  *(_DWORD *)(a1 + 1304) = 1;
  sub_80530((unsigned __int64 **)(a1 + 1312));
  v55 = *(unsigned __int64 ***)(a1 + 1328);
  if ( v55 )
  {
    v56 = *v55;
    if ( !*v55 )
    {
LABEL_110:
      qfree();
      goto LABEL_111;
    }
    v57 = *v56;
    if ( !v55[1] )
    {
      *v56 = (unsigned __int64)v56 & 0xFFFFFFFFFFFFFFFCLL | *v56 & 3;
      *(__m128i *)(*v55 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v55, (__m128i)(unsigned __int64)*v55);
      **v55 &= ~1uLL;
      **v55 |= 2u;
      goto LABEL_108;
    }
    v78 = v57 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v57 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_161:
      *v56 = (unsigned __int64)v56 & 0xFFFFFFFFFFFFFFFCLL | v57 & 3;
      *(__m128i *)(*v55 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v55, (__m128i)(unsigned __int64)*v55);
      **v55 &= ~1uLL;
      **v55 |= 2u;
      v55[1] = nullptr;
LABEL_108:
      if ( *v55 )
        qfree();
      goto LABEL_110;
    }
    v79 = *(_QWORD *)(v78 + 8);
    if ( (*(_BYTE *)v79 & 2) != 0 )
    {
      v80 = *(_QWORD *)(v78 + 16);
      if ( (*(_BYTE *)v80 & 2) != 0 )
        goto LABEL_183;
      goto LABEL_151;
    }
    v83 = *(__int64 **)(v79 + 8);
    if ( (*(_BYTE *)v83 & 2) != 0 )
    {
      v84 = *(__int64 **)(v79 + 16);
      if ( (*(_BYTE *)v84 & 2) != 0 )
      {
LABEL_192:
        if ( *(_QWORD *)(v79 + 48) )
        {
          *(_QWORD *)(v79 + 56) = 0;
          qfree();
        }
        *(_QWORD *)v79 |= 2uLL;
LABEL_171:
        if ( v79 )
          qfree();
        v80 = *(_QWORD *)(v78 + 16);
        if ( (*(_BYTE *)v80 & 2) != 0 )
        {
LABEL_157:
          if ( (*(_BYTE *)v78 & 2) != 0 )
          {
LABEL_158:
            if ( v57 > 3 )
              qfree();
            v56 = *v55;
            v57 = **v55;
            goto LABEL_161;
          }
LABEL_183:
          if ( *(_QWORD *)(v78 + 48) )
          {
            *(_QWORD *)(v78 + 56) = 0;
            qfree();
          }
          *(_QWORD *)v78 |= 2uLL;
          goto LABEL_158;
        }
LABEL_151:
        v81 = *(__int64 **)(v80 + 8);
        if ( (*(_BYTE *)v81 & 2) != 0 )
        {
          v82 = *(__int64 **)(v80 + 16);
          if ( (*(_BYTE *)v82 & 2) != 0 )
            goto LABEL_188;
        }
        else
        {
          sub_324FF0(v81);
          v82 = *(__int64 **)(v80 + 16);
          if ( (*(_BYTE *)v82 & 2) != 0 )
            goto LABEL_154;
        }
        sub_324FF0(v82);
LABEL_154:
        if ( (*(_BYTE *)v80 & 2) != 0 )
        {
LABEL_155:
          if ( v80 )
            qfree();
          goto LABEL_157;
        }
LABEL_188:
        if ( *(_QWORD *)(v80 + 48) )
        {
          *(_QWORD *)(v80 + 56) = 0;
          qfree();
        }
        *(_QWORD *)v80 |= 2uLL;
        goto LABEL_155;
      }
    }
    else
    {
      sub_324FF0(v83);
      v84 = *(__int64 **)(v79 + 16);
      if ( (*(_BYTE *)v84 & 2) != 0 )
        goto LABEL_170;
    }
    sub_324FF0(v84);
LABEL_170:
    if ( (*(_BYTE *)v79 & 2) != 0 )
      goto LABEL_171;
    goto LABEL_192;
  }
LABEL_111:
  v58 = *(unsigned __int64 ***)(a1 + 1344);
  *(_QWORD *)(a1 + 1328) = 0;
  if ( !v58 )
    goto LABEL_118;
  v59 = *v58;
  if ( *v58 )
  {
    v60 = *v59;
    if ( !v58[1] )
    {
      *v59 = *v59 & 3 | (unsigned __int64)v59 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*v58 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v58, (__m128i)(unsigned __int64)*v58);
      **v58 &= ~1uLL;
      **v58 |= 2u;
      goto LABEL_115;
    }
    v70 = (__int64 *)(v60 & 0xFFFFFFFFFFFFFFFCLL);
    v71 = *(_QWORD *)(v60 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v71 & 2) != 0 )
    {
LABEL_147:
      *v59 = v60 & 3 | (unsigned __int64)v59 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*v58 + 1) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v58, (__m128i)(unsigned __int64)*v58);
      **v58 &= ~1uLL;
      **v58 |= 2u;
      v58[1] = nullptr;
LABEL_115:
      if ( *v58 )
        qfree();
      goto LABEL_117;
    }
    v72 = (__int64 *)v70[1];
    v73 = *v72;
    if ( (*v72 & 2) != 0 )
    {
      v74 = (__int64 *)v70[2];
      if ( (*(_BYTE *)v74 & 2) != 0 )
        goto LABEL_186;
      goto LABEL_137;
    }
    v85 = (__int64 *)v72[1];
    if ( (*(_BYTE *)v85 & 2) != 0 )
    {
      v86 = (__int64 *)v72[2];
      if ( (*(_BYTE *)v86 & 2) != 0 )
      {
LABEL_199:
        *v72 = v73 | 2;
LABEL_179:
        if ( v72 )
          qfree();
        v74 = (__int64 *)v70[2];
        if ( (*(_BYTE *)v74 & 2) != 0 )
        {
LABEL_143:
          v71 = *v70;
          if ( (*v70 & 2) != 0 )
          {
LABEL_144:
            if ( v60 > 3 )
              qfree();
            v59 = *v58;
            v60 = **v58;
            goto LABEL_147;
          }
LABEL_186:
          *v70 = v71 | 2;
          goto LABEL_144;
        }
LABEL_137:
        v75 = (__int64 *)v74[1];
        if ( (*(_BYTE *)v75 & 2) != 0 )
        {
          v76 = (__int64 *)v74[2];
          if ( (*(_BYTE *)v76 & 2) != 0 )
          {
            v77 = *v74;
LABEL_197:
            *v74 = v77 | 2;
LABEL_141:
            if ( v74 )
              qfree();
            goto LABEL_143;
          }
        }
        else
        {
          sub_324C90(v75);
          v76 = (__int64 *)v74[2];
          if ( (*(_BYTE *)v76 & 2) != 0 )
            goto LABEL_140;
        }
        sub_324C90(v76);
LABEL_140:
        v77 = *v74;
        if ( (*v74 & 2) != 0 )
          goto LABEL_141;
        goto LABEL_197;
      }
    }
    else
    {
      sub_324C90(v85);
      v86 = (__int64 *)v72[2];
      if ( (*(_BYTE *)v86 & 2) != 0 )
        goto LABEL_178;
    }
    sub_324C90(v86);
LABEL_178:
    v73 = *v72;
    if ( (*v72 & 2) != 0 )
      goto LABEL_179;
    goto LABEL_199;
  }
LABEL_117:
  qfree();
LABEL_118:
  v61 = *(__int64 **)(a1 + 1336);
  *(_QWORD *)(a1 + 1344) = 0;
  v88 = v61;
  if ( v61 )
  {
    v62 = *v61;
    if ( *v61 )
    {
      v89 = v61[1];
      if ( v89 )
      {
        for ( k = 0; k != v89; ++k )
        {
          v64 = (__int64 *)(v62 + 24 * k);
          v65 = *v64;
          if ( *v64 )
          {
            v87.m128i_i64[0] = v64[1];
            if ( v87.m128i_i64[0] )
            {
              v66 = 0;
              v67 = 0;
              do
              {
                v68 = v65 + v66;
                ++v67;
                v66 += 112;
                sub_119360(v68 + 88);
                sub_119360(v68 + 72);
                sub_119360(v68 + 56);
                v65 = *v64;
              }
              while ( v87.m128i_i64[0] != v67 );
            }
            v64[1] = 0;
            qfree();
            v62 = *v88;
          }
        }
      }
      v88[1] = 0;
      qfree();
    }
    qfree();
  }
  *(_QWORD *)(a1 + 1336) = 0;
  *(_QWORD *)(a1 + 1352) = -1;
  sub_80640((unsigned __int64 **)(a1 + 1360));
  sub_80750((unsigned __int64 **)(a1 + 1376));
  sub_80750((unsigned __int64 **)(a1 + 1392));
  if ( *(_QWORD *)(a1 + 1408) )
  {
    *(_QWORD *)(a1 + 1416) = 0;
    qfree();
    *(_QWORD *)(a1 + 1408) = 0;
    *(_QWORD *)(a1 + 1424) = 0;
  }
  *(_QWORD *)(a1 + 1432) = -1;
  return v92 - __readfsqword(0x28u);
}

