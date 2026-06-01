unsigned __int64 __fastcall sub_3850(__int64 a1)
{
  int v1; // ebp
  unsigned int v2; // ebp
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // r13d
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __m128i v37; // xmm0
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  unsigned __int16 word; // ax
  unsigned __int16 v47; // ax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rbx
  __int64 v54; // rbp
  __int64 v55; // rdi
  __int64 v57; // rdx
  int v58; // r13d
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  unsigned __int32 v66; // r12d
  __int32 v67; // r14d
  unsigned __int64 v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  unsigned int v73; // r14d
  unsigned int v74; // eax
  int v75; // r14d
  __int128 v76; // xmm0
  __m128i si128; // xmm0
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rdx
  int v82; // r13d
  unsigned __int32 v83; // r13d
  __int64 v84; // rdx
  int v85; // r14d
  unsigned int v86; // eax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rdx
  int v92; // r13d
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  unsigned __int32 v97; // r12d
  __int64 v98; // rdx
  __int32 v99; // r14d
  unsigned __int64 v100; // rsi
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  unsigned int v105; // r14d
  unsigned int v106; // eax
  int v107; // r14d
  __int128 v108; // xmm0
  __m128i v109; // xmm0
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // rdx
  unsigned __int32 v114; // r13d
  __int64 v115; // rdx
  int v116; // r14d
  unsigned int v117; // eax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  const char *v125; // rsi
  __int64 v126; // [rsp+0h] [rbp-1A8h]
  const char *v127; // [rsp+8h] [rbp-1A0h]
  __int64 v128; // [rsp+10h] [rbp-198h]
  __int64 v129; // [rsp+18h] [rbp-190h]
  __int64 v130; // [rsp+18h] [rbp-190h]
  __int64 v131; // [rsp+18h] [rbp-190h]
  __int64 v132; // [rsp+20h] [rbp-188h]
  __int64 v133; // [rsp+28h] [rbp-180h] BYREF
  __m128i v134; // [rsp+30h] [rbp-178h] BYREF
  __m128i v135; // [rsp+40h] [rbp-168h] BYREF
  __m128i v136; // [rsp+50h] [rbp-158h] BYREF
  __m128i v137; // [rsp+60h] [rbp-148h] BYREF
  __m128i v138; // [rsp+70h] [rbp-138h]
  __m128i v139; // [rsp+80h] [rbp-128h]
  __int128 v140; // [rsp+90h] [rbp-118h] BYREF
  __int64 selector; // [rsp+C0h] [rbp-E8h]
  __int128 v142; // [rsp+C8h] [rbp-E0h]
  __int128 v143; // [rsp+D8h] [rbp-D0h]
  __int128 v144; // [rsp+E8h] [rbp-C0h]
  __int128 v145; // [rsp+F8h] [rbp-B0h]
  __int128 v146; // [rsp+108h] [rbp-A0h]
  __int128 v147; // [rsp+118h] [rbp-90h]
  __int128 v148; // [rsp+128h] [rbp-80h]
  __int128 v149; // [rsp+138h] [rbp-70h]
  __int64 v150; // [rsp+148h] [rbp-60h]
  char v151[24]; // [rsp+150h] [rbp-58h] BYREF
  unsigned __int64 v152; // [rsp+168h] [rbp-40h]

  v152 = __readfsqword(0x28u);
  set_processor_type("m65816", 1);
  sub_2730((__int64)&v134, a1);
  v1 = v134.m128i_u8[9];
  v133 = -1;
  netnode_check(&v133, "$ m65816", 0, 1);
  v2 = v1 << 9;
  netnode_hashset(v133, "device", "snes", 0, 72);
  sub_2AA0((unsigned int *)&v134, &v133);
  v137 = _mm_load_si128(&v134);
  v138 = _mm_load_si128(&v135);
  v139 = _mm_load_si128(&v136);
  if ( v136.m128i_i8[7] )
  {
    v57 = v134.m128i_u32[0];
    v58 = v134.m128i_i32[1];
    if ( v134.m128i_i32[0] > 0x400000u )
      v57 = 0x400000;
    v8 = sub_1760(a1, v2, v57, 128);
    sub_1900(v58, (char *)v2, v59, v60, v61, v62);
    sub_1320(0x6000u, 0x8000, "cx4", v63, v64, v65);
  }
  else if ( v136.m128i_i8[6] )
  {
    v6 = v134.m128i_u32[0];
    v7 = v134.m128i_i32[1];
    if ( v134.m128i_i32[0] > 0x100000u )
      v6 = 0x100000;
    v8 = sub_1430(a1, v2, v6, 192, 0);
    sub_15E0(v7, nullptr, v9, v10, v11, v12);
    sub_1320(0x4800u, 18496, "spc7110", v13, v14, v15);
    sub_1320(0x500000u, 6291456, "decomprom", v16, v17, v18);
  }
  else if ( v136.m128i_i8[5] )
  {
    v114 = v134.m128i_i32[0];
    v115 = 0x200000;
    v116 = v134.m128i_i32[1];
    if ( v134.m128i_i32[0] <= 0x200000u )
      v115 = v134.m128i_u32[0];
    v8 = sub_1760(a1, v2, v115, 128);
    v117 = 0x400000;
    if ( v114 <= 0x400000 )
      v117 = v114;
    sub_1430(a1, v2, v117, 192, 0);
    sub_1900(v116, (char *)v2, v118, v119, v120, v121);
    sub_1320(0x4800u, 18440, "sdd1", v122, v123, v124);
  }
  else
  {
    switch ( v135.m128i_i32[2] )
    {
      case 0:
        v91 = v134.m128i_u32[0];
        v92 = v134.m128i_i32[1];
        if ( v134.m128i_i32[0] > 0x400000u )
          v91 = 0x400000;
        v8 = sub_1760(a1, v2, v91, 128);
        sub_1900(v92, (char *)v2, v93, v94, v95, v96);
        goto LABEL_8;
      case 1:
        v113 = v134.m128i_u32[0];
        v82 = v134.m128i_i32[1];
        if ( v134.m128i_i32[0] > 0x400000u )
          v113 = 0x400000;
        v8 = sub_1430(a1, v2, v113, 192, 0);
        goto LABEL_46;
      case 2:
        v83 = v134.m128i_i32[0];
        v84 = 0x200000;
        v85 = v134.m128i_i32[1];
        if ( v134.m128i_i32[0] <= 0x200000u )
          v84 = v134.m128i_u32[0];
        v8 = sub_1760(a1, v2, v84, 128);
        v86 = 0x400000;
        if ( v83 <= 0x400000 )
          v86 = v83;
        sub_1430(a1, v2, v86, 64, 0);
        sub_1900(v85, (char *)v2, v87, v88, v89, v90);
        goto LABEL_8;
      case 3:
        v81 = v134.m128i_u32[0];
        v82 = v134.m128i_i32[1];
        v8 = -1;
        if ( v134.m128i_i32[0] > 0x400000u )
        {
          v8 = sub_1430(a1, v2, (unsigned int)(v134.m128i_i32[0] - 0x400000), 64, 0x400000);
          sub_1430(a1, v2, 0x400000, 192, 0);
        }
LABEL_46:
        sub_15E0(v82, (char *)&qword_20, v81, v3, v4, v5);
        goto LABEL_8;
      case 4:
        v66 = v134.m128i_i32[0];
        v67 = v134.m128i_i32[1];
        if ( v134.m128i_i32[0] > 0x200000u )
          v66 = 0x200000;
        v68 = v2;
        v130 = sub_1760(a1, v2, v66, 0);
        sub_1430(a1, v2, v66, 192, 0);
        v73 = (unsigned int)(v67 + 0xFFFF) >> 16;
        if ( !v73 )
          goto LABEL_23;
        v74 = v73 + 112;
        v75 = 112;
        HIDWORD(v128) = v74;
        v76 = -1;
        v127 = "BANK_RAM";
        do
        {
          v150 = -4294967284LL;
          selector = 0;
          v142 = v76;
          v143 = v76;
          v144 = v76;
          v145 = v76;
          v146 = v76;
          v147 = v76;
          v148 = v76;
          v149 = v76;
          selector = allocate_selector(
                       (unsigned __int64)(unsigned int)(v75 << 16) >> 4,
                       v68,
                       v69,
                       v70,
                       v71,
                       v72,
                       v126,
                       v127,
                       v128,
                       v130,
                       v132,
                       v133,
                       v134.m128i_i64[0],
                       v134.m128i_i64[1],
                       v135.m128i_i64[0],
                       v135.m128i_i64[1],
                       v136.m128i_i64[0],
                       v136.m128i_i64[1],
                       v137.m128i_i64[0],
                       v137.m128i_i64[1],
                       v138.m128i_i64[0],
                       v138.m128i_i64[1],
                       v139.m128i_i64[0],
                       v139.m128i_i64[1],
                       (unsigned int)(v75 << 16),
                       (unsigned int)(v75 << 16) + 0x10000LL,
                       0,
                       0,
                       0,
                       0);
          qsnprintf(v151, 16, ".%02X", v75);
          v68 = (unsigned __int64)v151;
          v76 = -1;
          if ( !(unsigned __int8)add_segm_ex(&v140, v151, v127, 33) )
            goto LABEL_54;
          ++v75;
        }
        while ( v75 != HIDWORD(v128) );
LABEL_23:
        v142 = -1;
        v143 = -1;
        v144 = -1;
        v145 = -1;
        v146 = -1;
        v147 = -1;
        v148 = -1;
        v149 = -1;
        si128 = _mm_load_si128((const __m128i *)&xmmword_5500);
        v150 = -4294967284LL;
        selector = 0;
        selector = allocate_selector(
                     1536,
                     v68,
                     v69,
                     v70,
                     v71,
                     v72,
                     v126,
                     v127,
                     v128,
                     v130,
                     v132,
                     v133,
                     v134.m128i_i64[0],
                     v134.m128i_i64[1],
                     v135.m128i_i64[0],
                     v135.m128i_i64[1],
                     v136.m128i_i64[0],
                     v136.m128i_i64[1],
                     v137.m128i_i64[0],
                     v137.m128i_i64[1],
                     v138.m128i_i64[0],
                     v138.m128i_i64[1],
                     v139.m128i_i64[0],
                     v139.m128i_i64[1],
                     si128.m128i_i64[0],
                     si128.m128i_i64[1],
                     0,
                     0,
                     0,
                     0);
        qsnprintf(v151, 16, "sfxram");
        if ( !(unsigned __int8)add_segm_ex(&v140, v151, 0, 33) )
          goto LABEL_54;
        sub_1320(0x3000u, 13568, "superfx", v78, v79, v80);
        v8 = v129;
        goto LABEL_8;
      case 5:
        v97 = v134.m128i_i32[0];
        v98 = 0x200000;
        v99 = v134.m128i_i32[1];
        if ( v134.m128i_i32[0] <= 0x200000u )
          v98 = v134.m128i_u32[0];
        v100 = v2;
        v131 = sub_1760(a1, v2, v98, 0);
        sub_1430(a1, v2, v97, 192, 0);
        v105 = (unsigned int)(v99 + 0xFFFF) >> 16;
        if ( !v105 )
          goto LABEL_41;
        v106 = v105 + 64;
        v107 = 64;
        HIDWORD(v128) = v106;
        v108 = -1;
        v127 = "BANK_RAM";
        break;
      default:
        switch ( v135.m128i_i32[2] )
        {
          case 6:
            v125 = "SPC7110ROM";
            break;
          case 7:
            v125 = "BSCLoROM";
            break;
          case 8:
            v125 = "BSCHiROM";
            break;
          case 9:
            v125 = "BSXROM";
            break;
          case 0xA:
            v125 = "STROM";
            break;
          default:
            v125 = nullptr;
            break;
        }
        sub_1270((__int64)"Unsupported mapper: %s", v125);
    }
    do
    {
      v150 = -4294967284LL;
      selector = 0;
      v142 = v108;
      v143 = v108;
      v144 = v108;
      v145 = v108;
      v146 = v108;
      v147 = v108;
      v148 = v108;
      v149 = v108;
      selector = allocate_selector(
                   (unsigned __int64)(unsigned int)(v107 << 16) >> 4,
                   v100,
                   v101,
                   v102,
                   v103,
                   v104,
                   v126,
                   v127,
                   v128,
                   v131,
                   v132,
                   v133,
                   v134.m128i_i64[0],
                   v134.m128i_i64[1],
                   v135.m128i_i64[0],
                   v135.m128i_i64[1],
                   v136.m128i_i64[0],
                   v136.m128i_i64[1],
                   v137.m128i_i64[0],
                   v137.m128i_i64[1],
                   v138.m128i_i64[0],
                   v138.m128i_i64[1],
                   v139.m128i_i64[0],
                   v139.m128i_i64[1],
                   (unsigned int)(v107 << 16),
                   (unsigned int)(v107 << 16) + 0x10000LL,
                   0,
                   0,
                   0,
                   0);
      qsnprintf(v151, 16, ".%02X", v107);
      v100 = (unsigned __int64)v151;
      v108 = -1;
      if ( !(unsigned __int8)add_segm_ex(&v140, v151, v127, 33) )
        goto LABEL_54;
      ++v107;
    }
    while ( v107 != HIDWORD(v128) );
LABEL_41:
    v142 = -1;
    v143 = -1;
    v144 = -1;
    v145 = -1;
    v146 = -1;
    v147 = -1;
    v148 = -1;
    v149 = -1;
    v109 = _mm_load_si128((const __m128i *)&xmmword_5510);
    v150 = -4294967284LL;
    selector = 0;
    selector = allocate_selector(
                 768,
                 v100,
                 v101,
                 v102,
                 v103,
                 v104,
                 v126,
                 v127,
                 v128,
                 v131,
                 v132,
                 v133,
                 v134.m128i_i64[0],
                 v134.m128i_i64[1],
                 v135.m128i_i64[0],
                 v135.m128i_i64[1],
                 v136.m128i_i64[0],
                 v136.m128i_i64[1],
                 v137.m128i_i64[0],
                 v137.m128i_i64[1],
                 v138.m128i_i64[0],
                 v138.m128i_i64[1],
                 v139.m128i_i64[0],
                 v139.m128i_i64[1],
                 v109.m128i_i64[0],
                 v109.m128i_i64[1],
                 0,
                 0,
                 0,
                 0);
    qsnprintf(v151, 16, "iram");
    if ( !(unsigned __int8)add_segm_ex(&v140, v151, 0, 33) )
LABEL_54:
      sub_1270((__int64)"Failed adding %s segment\n", v151);
    sub_1320(0x2200u, 9216, "sa1", v110, v111, v112);
    v8 = v129;
  }
LABEL_8:
  setinf(14, v8);
  sub_1320(0x2100u, 8512, "ppu", v19, v20, v21);
  sub_1320(0x2140u, 8516, "apu", v22, v23, v24);
  sub_1320(0x2180u, 8580, "wramrw", v25, v26, v27);
  sub_1320(0x4016u, 16408, "joypad", v28, v29, v30);
  sub_1320(0x4200u, 16928, "misc", v31, v32, v33);
  sub_1320(0x4300u, 17280, "dma", v34, v35, v36);
  v142 = -1;
  v143 = -1;
  v144 = -1;
  v145 = -1;
  v146 = -1;
  v147 = -1;
  v148 = -1;
  v149 = -1;
  v37 = _mm_load_si128((const __m128i *)&xmmword_5520);
  v150 = -4294967284LL;
  selector = 0;
  selector = allocate_selector(
               516096,
               17280,
               v38,
               v39,
               v40,
               v41,
               v126,
               v127,
               v128,
               v129,
               v132,
               v133,
               v134.m128i_i64[0],
               v134.m128i_i64[1],
               v135.m128i_i64[0],
               v135.m128i_i64[1],
               v136.m128i_i64[0],
               v136.m128i_i64[1],
               v137.m128i_i64[0],
               v137.m128i_i64[1],
               v138.m128i_i64[0],
               v138.m128i_i64[1],
               v139.m128i_i64[0],
               v139.m128i_i64[1],
               v37.m128i_i64[0],
               v37.m128i_i64[1],
               0,
               0,
               0,
               0);
  qsnprintf(v151, 16, "wram");
  if ( !(unsigned __int8)add_segm_ex(&v140, v151, 0, 33) )
    goto LABEL_54;
  if ( v136.m128i_i8[3] )
    sub_1320(0x2800u, 10242, "sharprtc", v42, v43, v44);
  if ( v136.m128i_i8[4] )
    sub_1320(0x4840u, 18499, "epsonrtc", v42, v43, v44);
  v45 = sub_3040((__int64)&v137, 0xFFFCu);
  word = get_word(v45);
  v47 = sub_3040((__int64)&v137, word);
  setinf(15, v47);
  sub_3720((__int64)&v137, 0xFFFCu, (__int64)"Emulation-mode RESET", 1);
  sub_3720((__int64)&v137, 0xFFEAu, (__int64)"Native-mode NMI", 1);
  sub_3720((__int64)&v137, 0xFFEEu, (__int64)"Native-mode IRQ", 1);
  sub_3720((__int64)&v137, 0xFFFEu, (__int64)"Emulation-mode IRQ", 1);
  sub_3720((__int64)&v137, 0xFFE4u, (__int64)"Native-mode COP", 0);
  sub_3720((__int64)&v137, 0xFFE6u, (__int64)"Native-mode BRK", 0);
  sub_3720((__int64)&v137, 0xFFE8u, (__int64)"Native-mode ABORT", 0);
  sub_3720((__int64)&v137, 0xFFECu, (__int64)"Native-mode RESET", 0);
  sub_3720((__int64)&v137, 0xFFF4u, (__int64)"Emulation-mode COP", 0);
  sub_3720((__int64)&v137, 0xFFF8u, (__int64)"Emulation-mode ABORT", 0);
  sub_3720((__int64)&v137, 0xFFFAu, (__int64)"Emulation-mode NMI", 0);
  v48 = sub_3040((__int64)&v137, 0xFFE0u);
  create_data(v48, 0x10000000, 2, -1);
  v49 = sub_3040((__int64)&v137, 0xFFE2u);
  create_data(v49, 0x10000000, 2, -1);
  v50 = sub_3040((__int64)&v137, 0xFFF0u);
  create_data(v50, 0x10000000, 2, -1);
  v51 = sub_3040((__int64)&v137, 0xFFF2u);
  create_data(v51, 0x10000000, 2, -1);
  v52 = sub_3040((__int64)&v137, 0xFFF6u);
  create_data(v52, 0x10000000, 2, -1);
  v53 = sub_3040((__int64)&v137, 0xFFC0u);
  set_name(v53, "snes_header", 0);
  create_strlit(v53, 21, 0);
  set_cmt(v53, "Game Title", 0);
  create_data(v53 + 21, 0, 1, -1);
  set_cmt(v53 + 21, "ROM Makeup / ROM Speed and Map Mode", 0);
  create_data(v53 + 22, 0, 1, -1);
  set_cmt(v53 + 22, "Chipset", 0);
  create_data(v53 + 23, 0, 1, -1);
  set_cmt(v53 + 23, "ROM Size", 0);
  create_data(v53 + 24, 0, 1, -1);
  set_cmt(v53 + 24, "RAM Size", 0);
  create_data(v53 + 25, 0, 1, -1);
  set_cmt(v53 + 25, "Country", 0);
  create_data(v53 + 26, 0, 1, -1);
  set_cmt(v53 + 26, "Developer ID", 0);
  create_data(v53 + 27, 0, 1, -1);
  set_cmt(v53 + 27, "ROM Version", 0);
  v54 = v53 + 28;
  v55 = v53 + 28;
  v53 += 30;
  create_data(v55, 0x10000000, 2, -1);
  set_cmt(v54, "Checksum Complement", 0);
  create_data(v53, 0x10000000, 2, -1);
  set_cmt(v53, "Checksum", 0);
  return v152 - __readfsqword(0x28u);
}
