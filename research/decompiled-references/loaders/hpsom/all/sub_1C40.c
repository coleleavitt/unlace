unsigned __int64 __fastcall sub_1C40(__int64 a1, double a2, double a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rsi
  int v7; // r14d
  int v8; // r14d
  __int64 v9; // rbx
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r12
  int v15; // r13d
  __int64 v16; // rbp
  int v17; // r14d
  __int64 v18; // r12
  unsigned __int8 v19; // al
  __int64 v20; // rdi
  int v21; // ecx
  __int64 v23; // rbp
  int v24; // r13d
  char *p_s1; // rdx
  __int64 v26; // rbp
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // rax
  unsigned __int8 default_reftype; // al
  __int64 dword; // rbp
  __int64 v31; // rdi
  __int64 func; // rax
  __int64 v33; // r12
  int v34; // ebp
  __int64 v35; // r13
  char *v36; // rax
  const char *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // r14
  __int64 v40; // rbp
  int i; // ebp
  __int64 v42; // rbp
  __int64 v43; // r8
  int v44; // ebp
  char v45; // cl
  __int64 v46; // r12
  int haystack; // [rsp+0h] [rbp-1368h]
  const char *v48; // [rsp+18h] [rbp-1350h]
  unsigned int v49; // [rsp+28h] [rbp-1340h] BYREF
  unsigned int v50[4]; // [rsp+30h] [rbp-1338h] BYREF
  int v51; // [rsp+40h] [rbp-1328h]
  int v52; // [rsp+44h] [rbp-1324h]
  int v53; // [rsp+50h] [rbp-1318h]
  int v54; // [rsp+54h] [rbp-1314h]
  int v55; // [rsp+58h] [rbp-1310h]
  int v56; // [rsp+5Ch] [rbp-130Ch]
  int v57; // [rsp+64h] [rbp-1304h]
  int v58; // [rsp+68h] [rbp-1300h]
  int v59; // [rsp+6Ch] [rbp-12FCh]
  int v60; // [rsp+70h] [rbp-12F8h]
  unsigned int v61[7]; // [rsp+A0h] [rbp-12C8h] BYREF
  int v62; // [rsp+BCh] [rbp-12ACh]
  unsigned int v63; // [rsp+C0h] [rbp-12A8h]
  unsigned int v64; // [rsp+C8h] [rbp-12A0h]
  int v65; // [rsp+CCh] [rbp-129Ch]
  int v66; // [rsp+D0h] [rbp-1298h]
  unsigned int v67; // [rsp+D4h] [rbp-1294h]
  int v68; // [rsp+D8h] [rbp-1290h]
  int v69; // [rsp+E4h] [rbp-1284h]
  unsigned int v70; // [rsp+E8h] [rbp-1280h]
  int v71; // [rsp+FCh] [rbp-126Ch]
  int v72; // [rsp+100h] [rbp-1268h]
  int v73; // [rsp+10Ch] [rbp-125Ch]
  unsigned int v74; // [rsp+110h] [rbp-1258h]
  __int64 v75; // [rsp+120h] [rbp-1248h] BYREF
  __int64 v76; // [rsp+128h] [rbp-1240h]
  __int64 v77; // [rsp+130h] [rbp-1238h]
  __int64 v78; // [rsp+138h] [rbp-1230h]
  __int64 v79; // [rsp+140h] [rbp-1228h]
  __int16 v80; // [rsp+148h] [rbp-1220h]
  __int128 v81; // [rsp+150h] [rbp-1218h]
  __int64 v82; // [rsp+160h] [rbp-1208h]
  __int64 v83; // [rsp+168h] [rbp-1200h]
  int v84; // [rsp+170h] [rbp-11F8h]
  __int64 v85; // [rsp+178h] [rbp-11F0h]
  int v86; // [rsp+180h] [rbp-11E8h]
  __int64 v87; // [rsp+188h] [rbp-11E0h]
  int v88; // [rsp+190h] [rbp-11D8h]
  __int64 v89; // [rsp+198h] [rbp-11D0h]
  int v90; // [rsp+1A0h] [rbp-11C8h]
  __int64 v91; // [rsp+1A8h] [rbp-11C0h]
  __int128 v92; // [rsp+1B0h] [rbp-11B8h] BYREF
  __int128 v93; // [rsp+1C0h] [rbp-11A8h]
  __int64 v94; // [rsp+1D0h] [rbp-1198h]
  __int64 v95; // [rsp+1D8h] [rbp-1190h] BYREF
  __int64 v96; // [rsp+1E0h] [rbp-1188h]
  __int128 v97; // [rsp+1E8h] [rbp-1180h]
  __int128 v98; // [rsp+1F8h] [rbp-1170h]
  __int128 v99; // [rsp+208h] [rbp-1160h]
  __int128 v100; // [rsp+218h] [rbp-1150h]
  __int128 v101; // [rsp+228h] [rbp-1140h]
  __int128 v102; // [rsp+238h] [rbp-1130h]
  __int128 v103; // [rsp+248h] [rbp-1120h]
  __int128 v104; // [rsp+258h] [rbp-1110h]
  unsigned __int64 v105; // [rsp+268h] [rbp-1100h]
  char v106[8]; // [rsp+318h] [rbp-1050h] BYREF
  char s1; // [rsp+320h] [rbp-1048h] BYREF
  char v108; // [rsp+321h] [rbp-1047h] BYREF
  __int16 v109; // [rsp+322h] [rbp-1046h]
  unsigned int v110; // [rsp+324h] [rbp-1044h]
  char v111[16]; // [rsp+328h] [rbp-1040h] BYREF
  int v112; // [rsp+338h] [rbp-1030h]
  int v113; // [rsp+344h] [rbp-1024h]
  unsigned __int64 v114; // [rsp+1328h] [rbp-40h]

  v114 = __readfsqword(0x28u);
  set_processor_type("hppa", 1);
  qlseek(a1, 0, 0);
  lread(a1, v61, 128);
  sub_1760(v61);
  setinf(12, 0);
  v4 = qlsize(a1);
  v5 = v63;
  qword_5180 = v4;
  if ( v63 )
  {
    if ( v63 >= (unsigned __int64)(v4 - v62) )
      sub_16A0((__int64)"Wrong header::aux_header_size");
    qlseek(a1, v62, 0);
    while ( 1 )
    {
      lread(a1, &s1, 8);
      v109 = __ROL2__(v109, 8);
      v110 = _byteswap_ulong(v110);
      v6 = v110 + 8LL;
      if ( v110 > 0xFF7uLL )
        sub_16A0((__int64)"Wrong aux_header size %zu", v6);
      if ( v5 < v6 )
        break;
      v5 -= v6;
      lread(a1, v111, v110);
      if ( v109 == 4 )
      {
        sub_1870((__int64)&s1);
        setinf(14, 0);
        setinf(15, v113);
        qword_5188 = v112;
        if ( !v5 )
          break;
      }
      else if ( !v5 )
      {
        break;
      }
    }
  }
  v7 = v66;
  if ( v66 )
  {
    v40 = v65;
    qlseek(a1, v65, 0);
    sub_1B50(a1, v7, 0x24u, "Number of spaces", v40, -1);
    if ( v7 > 0 )
    {
      for ( i = 0; i != v7; ++i )
      {
        lread(a1, &v75, 36);
        sub_1900((unsigned int *)&v75);
        if ( (int)v75 >= (unsigned __int64)v70 )
          s1 = 0;
        else
          sub_1380(a1, v69, v75, (__int64)&s1);
        if ( !strcmp(&s1, "$TEXT$") )
          dword_5174 = HIDWORD(v76);
      }
    }
  }
  if ( v68 )
  {
    v33 = v67;
    v34 = 0;
    haystack = v68;
    v35 = 0;
    sub_1B50(a1, v68, 0x28u, "Number of subspaces", v67, -1);
    if ( haystack > 0 )
    {
      do
      {
        qlseek(a1, v33, 0);
        lread(a1, &v75, 40);
        sub_1940((unsigned int *)&v75);
        if ( (v75 & 0x200000000000LL) != 0 && HIDWORD(v77) )
        {
          if ( HIDWORD(v79) && !byte_5179 )
          {
            sub_1440((__int64)"The input file contains relocation information.\n"
                              "Currently IDA doesn't handle relocation information,\n"
                              "so it will be skipped");
            byte_5179 = 1;
          }
          v39 = (unsigned int)v77;
          if ( (int)v76 > qword_5180 || qword_5180 - (int)v76 < (unsigned __int64)HIDWORD(v76) )
            sub_16A0((__int64)"Wrong segment size %a..%a", a2, a3);
          file2base(a1, (int)v76, (unsigned int)v77, (unsigned int)v77 + (unsigned __int64)HIDWORD(v76), 1);
          if ( SHIDWORD(v78) >= (unsigned __int64)v70 )
            s1 = 0;
          else
            sub_1380(a1, v69, SHIDWORD(v78), (__int64)&s1);
          set_selector(v35, 0);
          v36 = strstr(&s1, "CODE");
          v37 = "CODE";
          v92 = 0;
          if ( !v36 )
            v37 = "DATA";
          v93 = 0;
          a2 = NAN;
          v105 = 0xFFFFFFFF00000000LL;
          v48 = v37;
          v94 = 0;
          v95 = 0;
          v96 = 0;
          v97 = -1;
          v98 = -1;
          v99 = -1;
          v100 = -1;
          v101 = -1;
          v102 = -1;
          v103 = -1;
          v104 = -1;
          v38 = setup_selector(v35);
          *(_QWORD *)&v92 = v39;
          v96 = v38;
          LOWORD(v95) = 513;
          BYTE3(v95) = 1;
          *((_QWORD *)&v92 + 1) = v39 + HIDWORD(v77);
          if ( !(unsigned __int8)add_segm_ex(&v92, &s1, v48, 33) )
            sub_16A0((__int64)"Failed to create segment %a..%a", NAN, a3);
          if ( dword_5174 == v34 )
            dword_5170 = v76;
        }
        ++v34;
        v33 += 40;
        ++v35;
      }
      while ( haystack != v34 );
    }
  }
  v8 = v72;
  if ( v72 )
  {
    v42 = v71;
    qlseek(a1, v71, 0);
    v43 = v42;
    v44 = 0;
    sub_1B50(a1, v8, 0x14u, "Number of symbols", v43, -1);
    if ( v8 > 0 )
    {
      do
      {
        lread(a1, &v75, 20);
        sub_19A0((unsigned int *)&v75);
        if ( BYTE1(v75) >> 4 )
        {
          if ( SHIDWORD(v75) >= (unsigned __int64)v74 )
            s1 = 0;
          else
            sub_1380(a1, v73, SHIDWORD(v75), (__int64)&s1);
          v45 = v75 & 0x3F;
          v46 = (unsigned int)v77 & 0xFFFFFFFC;
          if ( ((1LL << (v75 & 0x3F)) & 0x9048) == 0 )
          {
            if ( v45 != 8 )
            {
              if ( v45 == 2 )
                set_name((unsigned int)v77 & 0xFFFFFFFC, &s1, 7168);
              goto LABEL_95;
            }
            append_cmt((unsigned int)v77 & 0xFFFFFFFC, "STUB", 0);
          }
          add_entry(v46, v46, &s1, 1, 1);
          add_entry(v46, v46, &s1, 1, 1);
        }
LABEL_95:
        ++v44;
      }
      while ( v8 != v44 );
    }
  }
  if ( dword_5170 == -1 )
    goto LABEL_22;
  qlseek(a1, dword_5170, 0);
  lread(a1, v50, 112);
  sub_19E0(v50);
  if ( v50[0] != 89060912 && v50[0] != 93092112 )
    sub_15D0((__int64)"Unknown DL header version, skipping...\n");
  if ( v56 )
  {
    v26 = v55 + dword_5170;
    qlseek(a1, v26, 0);
    v27 = v56;
    qword_5190 = v56;
    if ( v26 == -1 )
      v26 = qlseek(a1, 0, 1);
    v28 = qlsize(a1) - v26;
    if ( ((v28 | v26) & 0x8000000000000000LL) == 0LL )
    {
      if ( v28 >= v27 )
      {
        qword_5198 = qalloc(qword_5190);
        if ( !qword_5198 )
          sub_1510((__int64)"dl_strings", 0);
        lread(a1, qword_5198, qword_5190);
        if ( !v57 )
          goto LABEL_19;
        goto LABEL_18;
      }
    }
    else
    {
      LODWORD(v28) = 0;
    }
    sub_16A0((__int64)"%s is incorrect, maximum possible value is %u%s", "String table size", v28, "");
  }
  if ( !v57 )
    goto LABEL_19;
LABEL_18:
  if ( !byte_5179 )
  {
    sub_1440((__int64)"The input file contains relocation information.\n"
                      "Currently IDA doesn't handle relocation information,\n"
                      "so it will be skipped");
    byte_5179 = 1;
    if ( !v52 )
      goto LABEL_20;
    goto LABEL_34;
  }
LABEL_19:
  if ( !v52 )
    goto LABEL_20;
LABEL_34:
  v14 = v51 + dword_5170;
  qlseek(a1, v14, 0);
  v15 = v60;
  v16 = qword_5188 + v58;
  sub_1B50(a1, v52, 8u, "Number of imports", v14, -1);
  v17 = v15;
  if ( v52 > 0 )
  {
    do
    {
      lread(a1, &v49, 8);
      v21 = _byteswap_ulong(v49);
      v49 = v21;
      if ( v17-- == 0 )
      {
        s1 = 46;
        v16 = qword_5188 + v59;
        if ( v21 == -1 )
        {
          v18 = qword_5188 + v59;
          set_name(v18, &s1, 7168);
          create_data(v16, 0x20000000, 4, -1);
          default_reftype = get_default_reftype(v16);
          op_offset(v16, 0, default_reftype, -1, 0, 0);
LABEL_60:
          dword = (unsigned int)get_dword(v18);
          set_name(dword, &v108, 7168);
          v81 = 0;
          v80 = 0;
          v75 = dword;
          v76 = -1;
          v77 = 512;
          v78 = -1;
          v79 = 0;
          v82 = 0xFFFFFFFFLL;
          v83 = 0;
          v84 = 0;
          v85 = 0;
          v86 = 0;
          v87 = 0;
          v88 = 0;
          v89 = 0;
          v90 = 0;
          v91 = 0;
          add_func_ex(&v75);
          v31 = dword;
          v16 = v18 + 8;
          func = get_func(v31);
          set_func_cmt(func, "THUNK", 0);
          create_data(v18 + 4, 0x20000000, 4, -1);
          continue;
        }
      }
      else
      {
        s1 = 46;
        if ( v21 == -1 )
          goto LABEL_40;
      }
      if ( v21 >= 0 && (unsigned int)v21 < (unsigned __int64)qword_5190 )
        qstrncpy(&v108, qword_5198 + (unsigned int)v21, 1023);
      else
        qsnprintf(&v108, 1023, "0x%08X", v21);
LABEL_40:
      v18 = v16;
      set_name(v16, &s1, 7168);
      create_data(v16, 0x20000000, 4, -1);
      v19 = get_default_reftype(v16);
      v20 = v16;
      v16 += 4;
      op_offset(v20, 0, v19, -1, 0, 0);
      if ( v17 <= 0 )
        goto LABEL_60;
    }
    while ( v52 > v15 - v17 );
  }
LABEL_20:
  if ( v54 )
  {
    v23 = v53 + dword_5170;
    v24 = 0;
    qlseek(a1, v23, 0);
    sub_1B50(a1, v54, 0x14u, "Number of exports", v23, -1);
    if ( v54 > 0 )
    {
      do
      {
        lread(a1, &v75, 20);
        sub_1B10((__int64)&v75);
        if ( HIDWORD(v75) == -1 )
        {
          p_s1 = nullptr;
        }
        else
        {
          if ( v75 < 0 || SHIDWORD(v75) >= (unsigned __int64)qword_5190 )
            qsnprintf(&s1, 1024, "0x%08X", HIDWORD(v75));
          else
            qstrncpy(&s1, qword_5198 + SHIDWORD(v75), 1024);
          p_s1 = &s1;
        }
        ++v24;
        add_entry((int)v76, (int)v76, p_s1, (_BYTE)v77 == 3, 1);
      }
      while ( v24 < v54 );
    }
  }
  qfree(qword_5198);
  qword_5198 = 0;
LABEL_22:
  create_filename_cmt();
  v9 = v64;
  if ( v64 )
    goto LABEL_23;
  v93 = 0xFFFFFFFFFFFFFFFFLL;
  v11 = &v95;
  v94 = 0;
  v92 = -1;
  do
  {
    *(_WORD *)v11 = 0;
    v11 += 5;
    *((_WORD *)v11 - 19) = 0;
    *((_WORD *)v11 - 18) = 0;
    *((_DWORD *)v11 - 2) = 0;
    *((_WORD *)v11 - 17) = 0;
    *((_OWORD *)v11 - 2) = 0;
    *(v11 - 2) = 0;
  }
  while ( v11 != (__int64 *)v106 );
  v12 = getinf(15, 0, v106, 0.0);
  if ( (int)decode_insn(&v92, v12) > 0 && BYTE1(v95) == 5 && BYTE9(v98) == 1 )
  {
    v13 = v96;
    if ( (unsigned int)decode_insn(&v92, v93 + 4) )
    {
      if ( BYTE1(v95) == 4 )
      {
        v9 = v97 + v13;
        if ( v9 )
        {
LABEL_23:
          *(_QWORD *)v50 = -1;
          netnode_check(v50, "$ got", 0, 1);
          v75 = ea2node(v9) + 1;
          netnode_supset(*(_QWORD *)v50, 0, &v75, 8, 65);
        }
      }
    }
  }
  add_til("hpux", 0);
  return v114 - __readfsqword(0x28u);
}
