unsigned __int64 __fastcall sub_1910(__int64 a1)
{
  unsigned __int64 v2; // rbp
  unsigned int *v3; // rcx
  __int64 v4; // rax
  unsigned __int16 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // r12
  unsigned __int8 default_reftype; // al
  int word; // eax
  __int64 v13; // rdi
  int v14; // ebp
  unsigned __int64 v15; // r12
  __int64 v16; // rax
  unsigned __int64 v17; // r12
  __int64 v18; // r15
  int v19; // r12d
  __int64 v20; // rax
  int v21; // r13d
  _WORD *v22; // r14
  __int64 v23; // rbp
  __int64 v24; // rax
  unsigned __int16 v26; // r12
  __int64 v27; // rax
  __int64 v28; // r13
  __int64 v29; // rax
  int v30; // r14d
  unsigned __int16 v31; // r15
  int v32; // r11d
  int v33; // r8d
  int v34; // eax
  int v35; // edx
  unsigned int v36; // eax
  unsigned int v37; // r13d
  int v38; // ebp
  __int64 v39; // rcx
  unsigned int v40; // ebp
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rsi
  unsigned __int64 v45; // rax
  __int64 v46; // rsi
  _QWORD *v47; // r15
  __int64 v48; // rax
  __int16 v49; // ax
  __int64 v50; // rax
  int v51; // r13d
  __int64 v52; // rbp
  __int64 v53; // rdi
  __int64 v54; // r12
  __int64 v55; // rbp
  __int64 v56; // rax
  int v57; // r14d
  __int64 v58; // rax
  __int64 v59; // rdi
  int v60; // r12d
  __int64 v61; // rax
  char *v62; // r14
  int v63; // ecx
  __int64 v64; // rax
  __int64 segm_base; // rbx
  unsigned __int8 v66; // al
  unsigned int v67; // eax
  __int64 v68; // rbx
  __int64 v69; // rax
  int v70; // [rsp+18h] [rbp-1C0h]
  __int64 v71; // [rsp+18h] [rbp-1C0h]
  __int64 v72; // [rsp+20h] [rbp-1B8h]
  int v73; // [rsp+28h] [rbp-1B0h]
  unsigned __int16 v74; // [rsp+2Ch] [rbp-1ACh]
  unsigned __int16 v75; // [rsp+2Eh] [rbp-1AAh]
  __int64 v76; // [rsp+58h] [rbp-180h]
  unsigned __int16 v77; // [rsp+66h] [rbp-172h] BYREF
  unsigned __int16 v78; // [rsp+68h] [rbp-170h] BYREF
  unsigned __int16 v79; // [rsp+6Ah] [rbp-16Eh] BYREF
  unsigned __int16 v80; // [rsp+6Ch] [rbp-16Ch] BYREF
  unsigned __int16 v81; // [rsp+6Eh] [rbp-16Ah] BYREF
  unsigned __int16 v82; // [rsp+70h] [rbp-168h] BYREF
  _BYTE v83[2]; // [rsp+72h] [rbp-166h] BYREF
  unsigned __int16 v84; // [rsp+74h] [rbp-164h] BYREF
  unsigned __int16 v85; // [rsp+76h] [rbp-162h] BYREF
  unsigned int *v86; // [rsp+78h] [rbp-160h] BYREF
  _QWORD *v87; // [rsp+80h] [rbp-158h] BYREF
  __int64 v88; // [rsp+88h] [rbp-150h] BYREF
  char *s1; // [rsp+90h] [rbp-148h] BYREF
  __int128 v90; // [rsp+98h] [rbp-140h]
  _OWORD v91[2]; // [rsp+B0h] [rbp-128h] BYREF
  __int64 v92; // [rsp+D0h] [rbp-108h]
  __int64 v93; // [rsp+D8h] [rbp-100h]
  __int64 selector; // [rsp+E0h] [rbp-F8h]
  __int128 v95; // [rsp+E8h] [rbp-F0h]
  __int128 v96; // [rsp+F8h] [rbp-E0h]
  __int128 v97; // [rsp+108h] [rbp-D0h]
  __int128 v98; // [rsp+118h] [rbp-C0h]
  __int128 v99; // [rsp+128h] [rbp-B0h]
  __int128 v100; // [rsp+138h] [rbp-A0h]
  __int128 v101; // [rsp+148h] [rbp-90h]
  __int128 v102; // [rsp+158h] [rbp-80h]
  unsigned __int64 v103; // [rsp+168h] [rbp-70h]
  __int64 v104; // [rsp+178h] [rbp-60h] BYREF
  char s2[8]; // [rsp+180h] [rbp-58h] BYREF
  __int64 v106; // [rsp+188h] [rbp-50h] BYREF
  char v107; // [rsp+190h] [rbp-48h]
  unsigned __int64 v108; // [rsp+198h] [rbp-40h]

  v108 = __readfsqword(0x28u);
  set_processor_type("pdp11", 1);
  v86 = nullptr;
  v87 = nullptr;
  if ( sub_1850(0xBB8u, &v86, &v87) || !v86 || !v87 )
    sub_1600((__int64)"Internal error in loader<->module link");
  v92 = 0;
  memset(v91, 0, sizeof(v91));
  v95 = -1;
  v96 = -1;
  v97 = -1;
  v98 = -1;
  v99 = -1;
  v100 = -1;
  v101 = -1;
  v102 = -1;
  v93 = 0;
  selector = 0;
  v103 = 0xFFFFFFFF00000000LL;
  *(_QWORD *)&v91[0] = 16 * getinf(12);
  qlseek(a1, 32, 0);
  lread(a1, &v77, 2);
  lread(a1, v86 + 2, 2);
  if ( v77 <= 0xFFu || (v77 & 1) != 0 )
    v77 = 0;
  else
    setinf(15);
  qlseek(a1, 40, 0);
  lread(a1, &v78, 2);
  v2 = v78;
  if ( (v78 & 1) != 0 )
  {
    v3 = v86;
LABEL_9:
    v78 = 0;
LABEL_10:
    v4 = 512;
    v5 = 512;
    *((_WORD *)v3 + 4) = 512;
    goto LABEL_11;
  }
  v45 = qlsize(a1);
  v3 = v86;
  if ( v45 < v2 )
    goto LABEL_9;
  if ( v78 <= 0x200u )
    goto LABEL_10;
  v46 = *((unsigned __int16 *)v86 + 4);
  v4 = v46;
  if ( (int)v46 >= v78 - 512 || (unsigned __int16)v46 <= 0x100u )
    goto LABEL_10;
  v5 = 512;
  if ( (unsigned __int16)v46 <= 0x200u )
    v5 = *((_WORD *)v86 + 4);
LABEL_11:
  if ( v77 && v77 < (unsigned __int16)v4 )
  {
    v5 = 512;
    if ( v77 <= 0x200u )
      v5 = v77;
    v6 = *(_QWORD *)&v91[0] + v5;
  }
  else
  {
    v6 = *(_QWORD *)&v91[0] + v4;
  }
  *((_QWORD *)&v91[0] + 1) = v6;
  getinf(12);
  setinf(14);
  file2base(a1, 0, *(_QWORD *)&v91[0], *((_QWORD *)&v91[0] + 1), 1);
  LOBYTE(v103) = 12;
  v7 = getinf(12);
  selector = find_selector(v7);
  add_segm_ex(v91, "asect", 0, 1);
  v8 = getinf(15);
  v9 = *(_QWORD *)&v91[0];
  v10 = *(_QWORD *)&v91[0] + 32LL;
  if ( v8 == -1 )
  {
    create_data(*(_QWORD *)&v91[0] + 32LL, 0x10000000, 2, -1);
  }
  else
  {
    default_reftype = get_default_reftype(*(_QWORD *)&v91[0] + 32LL);
    op_offset(v10, 0, default_reftype, -1, v9, 0);
  }
  create_data(*(_QWORD *)&v91[0] + 34LL, 0x10000000, 2, -1);
  create_data(*(_QWORD *)&v91[0] + 36LL, 0x10000000, 2, -1);
  create_data(*(_QWORD *)&v91[0] + 38LL, 0x10000000, 2, -1);
  create_data(*(_QWORD *)&v91[0] + 40LL, 0x10000000, 2, -1);
  word = get_word(*(_QWORD *)&v91[0] + 52LL);
  v13 = *(_QWORD *)&v91[0];
  v14 = word;
  v15 = *(_QWORD *)&v91[0];
  if ( *(_QWORD *)&v91[0] <= 0xFFFFFFFFFFFFFFDFLL )
  {
    do
    {
      if ( (unsigned __int16)get_word(v15) )
      {
        create_data(v15, 0x10000000, 2, -1);
      }
      else
      {
        del_value(v15);
        del_value(v15 + 1);
      }
      v13 = *(_QWORD *)&v91[0];
      v15 += 2LL;
    }
    while ( v15 < *(_QWORD *)&v91[0] + 32LL );
  }
  v16 = *((_QWORD *)&v91[0] + 1);
  v17 = v13 + 42;
  if ( (unsigned __int64)(v13 + 42) < *((_QWORD *)&v91[0] + 1) )
  {
    do
    {
      if ( (unsigned __int16)get_word(v17) )
      {
        create_data(v17, 0x10000000, 2, -1);
      }
      else
      {
        del_value(v17);
        del_value(v17 + 1);
      }
      v16 = *((_QWORD *)&v91[0] + 1);
      v17 += 2LL;
    }
    while ( v17 < *((_QWORD *)&v91[0] + 1) );
    v13 = *(_QWORD *)&v91[0];
  }
  v18 = *((unsigned __int16 *)v86 + 4);
  v19 = *((unsigned __int16 *)v86 + 4);
  if ( v13 + v18 != v16 )
  {
    v20 = getinf(12);
    sub_13B0(a1, *((__int64 *)&v91[0] + 1), *((unsigned __int16 *)v86 + 4) - v5, v20, v5, (__int64)"USER");
    v13 = *(_QWORD *)&v91[0];
    *((_QWORD *)&v91[0] + 1) += *((unsigned __int16 *)v86 + 4) - v5;
    *((_WORD *)v86 + 4) = v5;
  }
  v21 = (unsigned __int16)v19;
  if ( (get_word(v13 + 36) & 0x200) == 0 )
    goto LABEL_37;
  if ( (_WORD)v14 )
  {
    qlseek(a1, (unsigned __int16)v14, 0);
  }
  else
  {
    v22 = &unk_3118;
    qlseek(a1, v18, 0);
    do
    {
      lread(a1, &s1, 2);
      if ( *v22 != (_WORD)s1 )
        goto LABEL_36;
      ++v22;
    }
    while ( v22 != (_WORD *)&unk_3124 );
    lread(a1, &s1, 2);
    if ( (unsigned __int16)s1 != (unsigned __int16)v19 + 62
      || (qlseek(a1, (unsigned __int16)v19 + 64, 0), lread(a1, &s1, 2), (_WORD)s1 != 0x88FE)
      || (lread(a1, &s1, 2), (_WORD)s1 != 0xFB00) )
    {
LABEL_36:
      sub_16B0((__int64)"OLD-style overlay not implemented.");
LABEL_37:
      v23 = getinf(12);
      v24 = qlsize(a1);
      sub_13B0(a1, *((__int64 *)&v91[0] + 1), v24 - v18, v23, v21, (__int64)"CODE");
      goto LABEL_38;
    }
    v14 = v19 + 68;
    sub_16B0((__int64)"Loader overlay v3 is not fully tested.");
  }
  lread(a1, &v79, 2);
  if ( !v79 || (v26 = v79 & 1, (v79 & 1) != 0) || v79 >= v78 )
  {
    sub_16B0((__int64)"Illegal overlay structure. Not implemented.");
    goto LABEL_37;
  }
  sub_1780((__int64)"loading overlay program...\n");
  v88 = -1;
  netnode_check(&v88, 0, 0, 1);
  getinf(12);
  setinf(14);
  v27 = getinf(14);
  *((_QWORD *)&v91[0] + 1) += 32LL;
  sub_13B0(a1, *((__int64 *)&v91[0] + 1), v79 - v21, v27, v21, (__int64)"ROOT");
  v28 = getinf(12);
  v29 = getinf(14);
  add_segment_translation(16 * v29, 16 * v28);
  v104 = 30319;
  v80 = v79;
  if ( v79 == 2399 )
  {
    v74 = 0;
    *((_WORD *)v86 + 2) = v14;
  }
  else
  {
    v30 = 6;
    v76 = v18;
    v31 = v79;
    v32 = v14 + 6;
    v74 = 0;
    v75 = 0;
    while ( 1 )
    {
      if ( v31 == v26 )
      {
        v33 = ++v74;
        v70 = v74;
      }
      else
      {
        ++v75;
        v33 = 1;
        v70 = 1;
        v74 = 1;
      }
      v73 = v32;
      qsnprintf((char *)&v104 + 2, 6, "%02d_%02d", v75, v33);
      lread(a1, &v81, 2);
      lread(a1, &v82, 2);
      v82 *= 2;
      v34 = getinf(20);
      v35 = v80;
      LOWORD(v35) = v80 >> 4;
      v36 = (v80 & 0xF) + (v34 & 0xFFFFFFF0);
      v37 = v36 + 16;
      v72 = v36 + 18;
      v38 = ((v36 + 16) >> 4) - v35;
      v39 = (unsigned __int16)v38;
      v40 = (16 * v38) & 0xFFFF0;
      sub_13B0(a1, v72, v82 - 2, v39, (v81 << 9) + 2, (__int64)"OVR");
      v41 = getinf(12);
      add_segment_translation(v40, 16 * v41);
      v42 = getinf(14);
      add_segment_translation(v40, 16 * v42);
      v43 = getseg(v72);
      v26 = v31;
      *(_QWORD *)(v43 + 32) = v70 | (v75 << 16);
      set_segm_name(v43, &v104, 0);
      v44 = v30;
      v30 += 6;
      s1 = (char *)(v37 - v80);
      netnode_supset(v88, v44, &s1, 8, 65);
      lread(a1, &v80, 2);
      if ( v80 == 2399 )
        break;
      v32 = v73 + 6;
      v31 = v80;
    }
    v18 = v76;
    v14 = v73;
    *((_WORD *)v86 + 2) = v73;
  }
  v71 = v18;
  do
  {
    lread(a1, v83, 2);
    lread(a1, &v84, 2);
    lread(a1, &v85, 2);
    v47 = v87;
    v48 = netnode_altval(v88, v84, 65);
    s1 = (char *)(v48 + v85);
    netnode_supset(*v47, (unsigned __int16)v14, &s1, 8, 65);
    lread(a1, &v80, 2);
    v49 = v14;
    v14 += 8;
  }
  while ( v80 == 2399 );
  *((_WORD *)v86 + 3) = v49;
  netnode_kill(&v88);
  v50 = *((unsigned __int16 *)v86 + 2);
  v51 = *((unsigned __int16 *)v86 + 3) + 8 - v50;
  v52 = *((_QWORD *)&v91[0] + 1) + v50 - v71;
  set_segm_start(*((_QWORD *)&v91[0] + 1), v51 + v52, 1);
  v53 = v51 + v52;
  v54 = v52 - 16;
  v55 = v52 - 10;
  v56 = getseg(v53);
  set_segm_name(v56, "main", 0);
  v57 = *((unsigned __int16 *)v86 + 2);
  v58 = getinf(12);
  sub_13B0(a1, v54, v51, v58 + 1, v57, (__int64)"TBL");
  v59 = v54;
  v60 = 0;
  *v86 = 16 * (getinf(12) + 1);
  v61 = getseg(v59);
  set_segm_name(v61, "ov_call", 0);
  v107 = 0;
  *(_QWORD *)s2 = 6253667;
  v106 = 0;
  if ( v51 > 0 )
  {
    do
    {
      v67 = netnode_altval(*v87, v60 + *((unsigned __int16 *)v86 + 2), 65);
      s1 = nullptr;
      v68 = v67;
      v90 = 0;
      v69 = getseg(v67);
      get_segm_name(&s1, v69, 0);
      BYTE2(v106) = 0;
      if ( (_QWORD)v90 )
      {
        v62 = s1;
        if ( !strcmp(s1, &s2[3]) )
        {
LABEL_80:
          v63 = ++v74;
          goto LABEL_75;
        }
      }
      else
      {
        v62 = (char *)&unk_3114;
        if ( !s2[3] )
          goto LABEL_80;
      }
      qstrncpy(&s2[3], v62, 14);
      v63 = 1;
      v74 = 1;
LABEL_75:
      qsnprintf((char *)&v106 + 2, 7, "_en%02d", v63);
      auto_mark_range(v68, v68 + 1, 20);
      set_name(v68, &s2[3], 1024);
      set_name(v55 - 6, s2, 1024);
      create_data(v55 - 6, 0x10000000, 6, -1);
      v64 = getseg(v68);
      segm_base = get_segm_base(v64);
      v66 = get_default_reftype(v55);
      op_offset(v55, 0, v66, -1, segm_base, 0);
      if ( s1 )
      {
        *(_QWORD *)&v90 = 0;
        qfree();
      }
      v60 += 8;
      v55 += 8;
    }
    while ( v51 > v60 );
  }
LABEL_38:
  s1 = (char *)*((unsigned __int16 *)v86 + 4);
  netnode_supset(*v87, -1, &s1, 8, 65);
  s1 = (char *)*((unsigned __int16 *)v86 + 2);
  netnode_supset(*v87, -2, &s1, 8, 65);
  s1 = (char *)*((unsigned __int16 *)v86 + 3);
  netnode_supset(*v87, -3, &s1, 8, 65);
  s1 = nullptr;
  netnode_supset(*v87, -4, &s1, 8, 65);
  s1 = (char *)*v86;
  netnode_supset(*v87, -5, &s1, 8, 65);
  return v108 - __readfsqword(0x28u);
}
