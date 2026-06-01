unsigned __int64 __fastcall sub_33E2C0(__int64 a1, __int64 a2)
{
  unsigned __int64 **v3; // rdi
  void *v4; // rdi
  __int64 *v5; // rdi
  _QWORD *v6; // rdi
  __int64 *v7; // rdi
  unsigned __int64 **v8; // rdi
  _QWORD *v9; // rdi
  unsigned __int64 **v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  __int64 *v13; // rdi
  __int64 *v14; // rdi
  _QWORD *v15; // rdi
  _QWORD **v16; // rbp
  _QWORD **v17; // rbp
  __int64 v18; // rdi
  __int64 i; // rax
  void *v20; // rdi
  _QWORD *v21; // rdi
  void *v22; // rdi
  __int64 *v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 *v26; // rdi
  unsigned __int64 *v27; // rax
  unsigned __int64 v28; // rbp
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // rdi
  unsigned __int64 *v42; // rax
  unsigned __int64 v43; // rbp
  __int64 v44; // rdi
  __int64 v45; // rdi
  __int64 v46; // rdi
  __int64 v47; // rdi
  __int64 v48; // rdi
  __int64 v49; // r12
  __int64 v50; // rbp
  __int64 v51; // rdi
  __int64 *v53; // r12
  __int64 v54; // rdx
  __int64 *v55; // r13
  __int64 v56; // rax
  __int64 *v57; // rdi
  __int64 *v58; // rdi
  __int64 v59; // r13
  __int64 *v60; // rdi
  __int64 *v61; // rdi
  __int64 v62; // rax
  __int64 *v63; // r12
  __int64 v64; // rdx
  __int64 *v65; // r13
  __int64 v66; // rax
  __int64 *v67; // rdi
  __int64 *v68; // rdi
  __int64 v69; // r13
  __int64 *v70; // rdi
  __int64 *v71; // rdi
  __int64 v72; // rax
  __int64 (__fastcall **v73[3])(_QWORD); // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v74; // [rsp+18h] [rbp-30h]

  v74 = __readfsqword(0x28u);
  *(_QWORD *)a1 = off_4E3C78;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 840) + 286LL) & 2) != 0 )
  {
    set_hexdsp();
    v73[1] = (__int64 (__fastcall **)(_QWORD))a1;
    v73[0] = (__int64 (__fastcall **)(_QWORD))off_4E3C58;
    sub_33E220(v73);
  }
  sub_3AD580(*(void **)(a1 + 1400));
  v3 = *(unsigned __int64 ***)(a1 + 1392);
  *(_QWORD *)(a1 + 1400) = 0;
  sub_3B13B0(v3, a2);
  v4 = *(void **)(a1 + 1360);
  *(_QWORD *)(a1 + 1392) = 0;
  sub_3A5AA0(v4);
  v5 = *(__int64 **)(a1 + 768);
  *(_QWORD *)(a1 + 1360) = 0;
  sub_BB680(v5);
  v6 = *(_QWORD **)(a1 + 784);
  *(_QWORD *)(a1 + 768) = 0;
  sub_413840(v6);
  v7 = *(__int64 **)(a1 + 776);
  *(_QWORD *)(a1 + 784) = 0;
  sub_D04A0(v7);
  v8 = *(unsigned __int64 ***)(a1 + 792);
  *(_QWORD *)(a1 + 776) = 0;
  sub_140B50(v8, a2);
  v9 = *(_QWORD **)(a1 + 800);
  *(_QWORD *)(a1 + 792) = 0;
  sub_35ECD0(v9);
  v10 = *(unsigned __int64 ***)(a1 + 808);
  *(_QWORD *)(a1 + 800) = 0;
  sub_2799A0(v10);
  v11 = *(void **)(a1 + 816);
  *(_QWORD *)(a1 + 808) = 0;
  sub_260430(v11);
  v12 = *(void **)(a1 + 824);
  *(_QWORD *)(a1 + 816) = 0;
  sub_23FA90(v12);
  v13 = *(__int64 **)(a1 + 832);
  *(_QWORD *)(a1 + 824) = 0;
  sub_1D5B90(v13);
  v14 = *(__int64 **)(a1 + 840);
  *(_QWORD *)(a1 + 832) = 0;
  if ( v14 )
    sub_33B240(v14);
  *(_QWORD *)(a1 + 840) = 0;
  sub_374060(*(_QWORD **)(a1 + 1128));
  v15 = *(_QWORD **)(a1 + 112);
  *(_QWORD *)(a1 + 1128) = 0;
  sub_40B710(v15);
  v16 = *(_QWORD ***)(a1 + 1136);
  if ( v16 )
  {
    sub_33B070(v16[2]);
    operator delete(v16, 0x30u);
  }
  v17 = *(_QWORD ***)(a1 + 1144);
  *(_QWORD *)(a1 + 1136) = 0;
  if ( v17 )
  {
    sub_33B070(v17[2]);
    operator delete(v17, 0x30u);
  }
  v18 = *(_QWORD *)(a1 + 1152);
  *(_QWORD *)(a1 + 1144) = 0;
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 32LL))(v18);
  *(_QWORD *)(a1 + 1152) = 0;
  for ( i = *(_QWORD *)(a1 + 120); i; i = *(_QWORD *)(a1 + 120) )
    sub_33E040(a1, *(_QWORD *)(i + 8), *(_QWORD *)(i + 16));
  *(_QWORD *)(a1 + 192) = 0;
  v20 = *(void **)(a1 + 880);
  *(_QWORD *)(a1 + 872) = 0;
  sub_3C0E60(v20);
  v21 = *(_QWORD **)(a1 + 1008);
  *(_OWORD *)(a1 + 880) = 0;
  *(_OWORD *)(a1 + 1344) = 0;
  sub_389900(v21);
  v22 = *(void **)(a1 + 1016);
  *(_QWORD *)(a1 + 1008) = 0;
  sub_3D62B0(v22);
  v23 = *(__int64 **)(a1 + 1024);
  *(_QWORD *)(a1 + 1016) = 0;
  sub_1AE330(v23);
  *(_QWORD *)(a1 + 1024) = 0;
  nullsub_305();
  v24 = *(_QWORD *)(a1 + 1040);
  *(_QWORD *)(a1 + 1032) = 0;
  sub_284D50(v24);
  v25 = *(_QWORD *)(a1 + 1048);
  *(_QWORD *)(a1 + 1040) = 0;
  sub_284DD0(v25);
  v26 = *(__int64 **)(a1 + 1056);
  *(_QWORD *)(a1 + 1048) = 0;
  sub_312050(v26);
  *(_QWORD *)(a1 + 1056) = 0;
  unregister_post_event_visitor();
  sub_3CD6F0();
  clr_module_data();
  v27 = *(unsigned __int64 **)(a1 + 1432);
  if ( v27 )
  {
    v28 = *v27;
    if ( !*(_QWORD *)(a1 + 1440) )
    {
      *v27 = (unsigned __int64)v27 & 0xFFFFFFFFFFFFFFFCLL | *v27 & 3;
      *(__m128i *)(*(_QWORD *)(a1 + 1432) + 8LL) = _mm_unpacklo_epi64(
                                                     (__m128i)*(unsigned __int64 *)(a1 + 1432),
                                                     (__m128i)*(unsigned __int64 *)(a1 + 1432));
      **(_QWORD **)(a1 + 1432) &= ~1uLL;
      **(_QWORD **)(a1 + 1432) |= 2uLL;
      goto LABEL_16;
    }
    v53 = (__int64 *)(v28 & 0xFFFFFFFFFFFFFFFCLL);
    v54 = *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v54 & 2) != 0 )
    {
LABEL_81:
      *v27 = (unsigned __int64)v27 & 0xFFFFFFFFFFFFFFFCLL | v28 & 3;
      *(__m128i *)(*(_QWORD *)(a1 + 1432) + 8LL) = _mm_unpacklo_epi64(
                                                     (__m128i)*(unsigned __int64 *)(a1 + 1432),
                                                     (__m128i)*(unsigned __int64 *)(a1 + 1432));
      **(_QWORD **)(a1 + 1432) &= ~1uLL;
      **(_QWORD **)(a1 + 1432) |= 2uLL;
      *(_QWORD *)(a1 + 1440) = 0;
LABEL_16:
      v29 = *(_QWORD *)(a1 + 1432);
      if ( v29 )
        qfree(v29);
      goto LABEL_18;
    }
    v55 = (__int64 *)v53[1];
    v56 = *v55;
    if ( (*v55 & 2) != 0 )
    {
      v59 = v53[2];
      if ( (*(_BYTE *)v59 & 2) != 0 )
        goto LABEL_77;
      goto LABEL_70;
    }
    v57 = (__int64 *)v55[1];
    if ( (*(_BYTE *)v57 & 2) != 0 )
    {
      v58 = (__int64 *)v55[2];
      if ( (*(_BYTE *)v58 & 2) != 0 )
      {
LABEL_108:
        *v55 = v56 | 2;
LABEL_67:
        if ( v55 )
          qfree((__int64)v55);
        v59 = v53[2];
        if ( (*(_BYTE *)v59 & 2) != 0 )
        {
LABEL_76:
          v54 = *v53;
          if ( (*v53 & 2) != 0 )
          {
LABEL_78:
            if ( v28 > 3 )
              qfree(v28 & 0xFFFFFFFFFFFFFFFCLL);
            v27 = *(unsigned __int64 **)(a1 + 1432);
            v28 = *v27;
            goto LABEL_81;
          }
LABEL_77:
          *v53 = v54 | 2;
          goto LABEL_78;
        }
LABEL_70:
        v60 = *(__int64 **)(v59 + 8);
        if ( (*(_BYTE *)v60 & 2) != 0 )
        {
          v61 = *(__int64 **)(v59 + 16);
          if ( (*(_BYTE *)v61 & 2) != 0 )
          {
            v62 = *(_QWORD *)v59;
LABEL_116:
            *(_QWORD *)v59 = v62 | 2;
LABEL_74:
            if ( v59 )
              qfree(v59);
            goto LABEL_76;
          }
        }
        else
        {
          sub_33A9D0(v60);
          v61 = *(__int64 **)(v59 + 16);
          if ( (*(_BYTE *)v61 & 2) != 0 )
            goto LABEL_73;
        }
        sub_33A9D0(v61);
LABEL_73:
        v62 = *(_QWORD *)v59;
        if ( (*(_QWORD *)v59 & 2) != 0 )
          goto LABEL_74;
        goto LABEL_116;
      }
    }
    else
    {
      sub_33A9D0(v57);
      v58 = (__int64 *)v55[2];
      if ( (*(_BYTE *)v58 & 2) != 0 )
        goto LABEL_66;
    }
    sub_33A9D0(v58);
LABEL_66:
    v56 = *v55;
    if ( (*v55 & 2) != 0 )
      goto LABEL_67;
    goto LABEL_108;
  }
LABEL_18:
  v30 = *(_QWORD *)(a1 + 1368);
  if ( v30 )
  {
    *(_QWORD *)(a1 + 1376) = 0;
    qfree(v30);
  }
  v31 = *(_QWORD *)(a1 + 1312);
  if ( v31 )
  {
    *(_QWORD *)(a1 + 1320) = 0;
    qfree(v31);
  }
  clear_tinfo_t();
  v32 = *(_QWORD *)(a1 + 1280);
  if ( v32 )
  {
    *(_QWORD *)(a1 + 1288) = 0;
    qfree(v32);
  }
  v33 = *(_QWORD *)(a1 + 1256);
  if ( v33 )
  {
    *(_QWORD *)(a1 + 1264) = 0;
    qfree(v33);
  }
  v34 = *(_QWORD *)(a1 + 1232);
  if ( v34 )
  {
    *(_QWORD *)(a1 + 1240) = 0;
    qfree(v34);
  }
  v35 = *(_QWORD *)(a1 + 1208);
  if ( v35 )
  {
    *(_QWORD *)(a1 + 1216) = 0;
    qfree(v35);
  }
  v36 = *(_QWORD *)(a1 + 1184);
  if ( v36 )
  {
    *(_QWORD *)(a1 + 1192) = 0;
    qfree(v36);
  }
  v37 = *(_QWORD *)(a1 + 1160);
  if ( v37 )
  {
    *(_QWORD *)(a1 + 1168) = 0;
    qfree(v37);
  }
  v38 = *(_QWORD *)(a1 + 1088);
  if ( v38 )
  {
    *(_QWORD *)(a1 + 1096) = 0;
    qfree(v38);
  }
  v39 = *(_QWORD *)(a1 + 1064);
  if ( v39 )
  {
    *(_QWORD *)(a1 + 1072) = 0;
    qfree(v39);
  }
  v40 = *(_QWORD *)(a1 + 952);
  if ( v40 )
  {
    *(_QWORD *)(a1 + 960) = 0;
    qfree(v40);
  }
  v41 = *(_QWORD *)(a1 + 928);
  if ( v41 )
  {
    *(_QWORD *)(a1 + 936) = 0;
    qfree(v41);
  }
  v42 = *(unsigned __int64 **)(a1 + 904);
  if ( v42 )
  {
    v43 = *v42;
    if ( !*(_QWORD *)(a1 + 912) )
    {
      *v42 = (unsigned __int64)v42 & 0xFFFFFFFFFFFFFFFCLL | *v42 & 3;
      *(__m128i *)(*(_QWORD *)(a1 + 904) + 8LL) = _mm_unpacklo_epi64(
                                                    (__m128i)*(unsigned __int64 *)(a1 + 904),
                                                    (__m128i)*(unsigned __int64 *)(a1 + 904));
      **(_QWORD **)(a1 + 904) &= ~1uLL;
      **(_QWORD **)(a1 + 904) |= 2uLL;
      goto LABEL_45;
    }
    v63 = (__int64 *)(v43 & 0xFFFFFFFFFFFFFFFCLL);
    v64 = *(_QWORD *)(v43 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v64 & 2) != 0 )
    {
LABEL_102:
      *v42 = (unsigned __int64)v42 & 0xFFFFFFFFFFFFFFFCLL | v43 & 3;
      *(__m128i *)(*(_QWORD *)(a1 + 904) + 8LL) = _mm_unpacklo_epi64(
                                                    (__m128i)*(unsigned __int64 *)(a1 + 904),
                                                    (__m128i)*(unsigned __int64 *)(a1 + 904));
      **(_QWORD **)(a1 + 904) &= ~1uLL;
      **(_QWORD **)(a1 + 904) |= 2uLL;
      *(_QWORD *)(a1 + 912) = 0;
LABEL_45:
      v44 = *(_QWORD *)(a1 + 904);
      if ( v44 )
        qfree(v44);
      goto LABEL_47;
    }
    v65 = (__int64 *)v63[1];
    v66 = *v65;
    if ( (*v65 & 2) != 0 )
    {
      v69 = v63[2];
      if ( (*(_BYTE *)v69 & 2) != 0 )
        goto LABEL_98;
      goto LABEL_91;
    }
    v67 = (__int64 *)v65[1];
    if ( (*(_BYTE *)v67 & 2) != 0 )
    {
      v68 = (__int64 *)v65[2];
      if ( (*(_BYTE *)v68 & 2) != 0 )
      {
LABEL_110:
        *v65 = v66 | 2;
LABEL_88:
        if ( v65 )
          qfree((__int64)v65);
        v69 = v63[2];
        if ( (*(_BYTE *)v69 & 2) != 0 )
        {
LABEL_97:
          v64 = *v63;
          if ( (*v63 & 2) != 0 )
          {
LABEL_99:
            if ( v43 > 3 )
              qfree(v43 & 0xFFFFFFFFFFFFFFFCLL);
            v42 = *(unsigned __int64 **)(a1 + 904);
            v43 = *v42;
            goto LABEL_102;
          }
LABEL_98:
          *v63 = v64 | 2;
          goto LABEL_99;
        }
LABEL_91:
        v70 = *(__int64 **)(v69 + 8);
        if ( (*(_BYTE *)v70 & 2) != 0 )
        {
          v71 = *(__int64 **)(v69 + 16);
          if ( (*(_BYTE *)v71 & 2) != 0 )
          {
            v72 = *(_QWORD *)v69;
LABEL_113:
            *(_QWORD *)v69 = v72 | 2;
LABEL_95:
            if ( v69 )
              qfree(v69);
            goto LABEL_97;
          }
        }
        else
        {
          sub_33A8E0(v70);
          v71 = *(__int64 **)(v69 + 16);
          if ( (*(_BYTE *)v71 & 2) != 0 )
            goto LABEL_94;
        }
        sub_33A8E0(v71);
LABEL_94:
        v72 = *(_QWORD *)v69;
        if ( (*(_QWORD *)v69 & 2) != 0 )
          goto LABEL_95;
        goto LABEL_113;
      }
    }
    else
    {
      sub_33A8E0(v67);
      v68 = (__int64 *)v65[2];
      if ( (*(_BYTE *)v68 & 2) != 0 )
        goto LABEL_87;
    }
    sub_33A8E0(v68);
LABEL_87:
    v66 = *v65;
    if ( (*v65 & 2) != 0 )
      goto LABEL_88;
    goto LABEL_110;
  }
LABEL_47:
  v45 = *(_QWORD *)(a1 + 848);
  if ( v45 )
  {
    *(_QWORD *)(a1 + 856) = 0;
    qfree(v45);
  }
  v46 = *(_QWORD *)(a1 + 688);
  if ( v46 )
  {
    *(_QWORD *)(a1 + 696) = 0;
    qfree(v46);
  }
  v47 = *(_QWORD *)(a1 + 664);
  if ( v47 )
  {
    *(_QWORD *)(a1 + 672) = 0;
    qfree(v47);
  }
  *(_QWORD *)(a1 + 528) = &off_4EC308;
  remove_event_listener();
  *(_QWORD *)(a1 + 504) = &off_4EC308;
  remove_event_listener();
  *(_QWORD *)(a1 + 480) = &off_4EC308;
  remove_event_listener();
  *(_QWORD *)(a1 + 456) = &off_4EC308;
  remove_event_listener();
  v48 = *(_QWORD *)(a1 + 424);
  if ( v48 )
  {
    *(_QWORD *)(a1 + 432) = 0;
    qfree(v48);
  }
  v49 = a1 + 400;
  v50 = a1 + 368;
  do
  {
    v49 -= 8;
    clear_tinfo_t();
  }
  while ( v50 != v49 );
  do
  {
    v50 -= 8;
    clear_tinfo_t();
  }
  while ( a1 + 192 != v50 );
  v51 = *(_QWORD *)(a1 + 160);
  if ( v51 )
  {
    *(_QWORD *)(a1 + 168) = 0;
    qfree(v51);
  }
  return v74 - __readfsqword(0x28u);
}

