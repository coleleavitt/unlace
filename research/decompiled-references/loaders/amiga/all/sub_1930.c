unsigned __int64 __fastcall sub_1930(__int64 a1, double a2, double a3)
{
  __int64 v3; // rbx
  int v4; // eax
  unsigned __int32 v5; // eax
  bool v6; // dl
  char v7; // dl
  int v8; // esi
  char v9; // r14
  char v10; // r15
  unsigned __int16 v11; // bx
  unsigned __int32 v12; // r13d
  __int64 v13; // rsi
  __int64 v14; // r13
  __int64 free_chunk; // rax
  __int64 v16; // r15
  __int64 v17; // r14
  const char *v18; // rdx
  __int64 v19; // rax
  char *v20; // r14
  signed __int32 v21; // r13d
  unsigned __int64 v22; // r13
  signed __int32 v23; // r14d
  unsigned __int64 v25; // r13
  signed __int32 v26; // r13d
  unsigned int v27; // r13d
  unsigned __int32 v28; // eax
  char *v29; // r15
  unsigned int v30; // eax
  unsigned __int64 v31; // r14
  unsigned __int8 v32; // r13
  unsigned __int32 v33; // eax
  unsigned int v34; // eax
  int v35; // eax
  unsigned __int64 v36; // r15
  char v37; // dl
  unsigned __int32 v38; // eax
  int v39; // r15d
  __int64 *segm_by_sel; // r13
  __int64 *v41; // rax
  unsigned __int64 v42; // rbx
  __int64 v43; // rbp
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int64 *v46; // rax
  unsigned __int32 v47; // ebp
  unsigned __int32 v48; // ebx
  __int64 v49; // r15
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // r15
  __int16 v53; // ax
  const char *v54; // rcx
  const char *v55; // rsi
  signed __int32 v56; // eax
  unsigned __int64 v57; // rbx
  char *v58; // rax
  signed __int32 v59; // ebx
  signed __int32 v60; // eax
  unsigned __int64 v61; // rbx
  char *v62; // rax
  unsigned __int8 v63; // r15
  unsigned __int32 v64; // r13d
  __int64 v65; // r13
  int v66; // ecx
  __int64 v67; // rsi
  unsigned __int32 v68; // eax
  char *v69; // rdx
  unsigned int v70; // eax
  unsigned __int64 v71; // rbx
  unsigned int v72; // ebx
  _QWORD *v73; // rax
  unsigned __int64 v74; // rbx
  signed __int32 v75; // ebx
  unsigned int v76; // ebx
  const char *v77; // rdx
  unsigned __int32 v78; // r13d
  unsigned __int64 v79; // r13
  unsigned __int64 v80; // r13
  unsigned __int64 v81; // r13
  unsigned __int64 v82; // r13
  int v83; // ecx
  unsigned __int64 v84; // r13
  __int64 v85; // [rsp+0h] [rbp-578h]
  __int64 v86; // [rsp+0h] [rbp-578h]
  char v87; // [rsp+0h] [rbp-578h]
  int v88; // [rsp+0h] [rbp-578h]
  __int64 v89; // [rsp+8h] [rbp-570h]
  __int64 v90; // [rsp+8h] [rbp-570h]
  char *v91; // [rsp+10h] [rbp-568h]
  __int64 v92; // [rsp+10h] [rbp-568h]
  char v93; // [rsp+23h] [rbp-555h]
  unsigned __int32 v94; // [rsp+24h] [rbp-554h]
  int i; // [rsp+28h] [rbp-550h]
  int v96; // [rsp+2Ch] [rbp-54Ch]
  unsigned int v97; // [rsp+3Ch] [rbp-53Ch] BYREF
  unsigned int v98[2]; // [rsp+40h] [rbp-538h] BYREF
  __int64 v99; // [rsp+48h] [rbp-530h]
  __int64 v100; // [rsp+50h] [rbp-528h]
  __int64 v101; // [rsp+58h] [rbp-520h]
  __int64 v102; // [rsp+60h] [rbp-518h]
  _OWORD v103[2]; // [rsp+70h] [rbp-508h] BYREF
  __int64 v104; // [rsp+90h] [rbp-4E8h]
  __int64 v105; // [rsp+98h] [rbp-4E0h]
  __int64 v106; // [rsp+A0h] [rbp-4D8h]
  __int128 v107; // [rsp+A8h] [rbp-4D0h]
  __int128 v108; // [rsp+B8h] [rbp-4C0h]
  __int128 v109; // [rsp+C8h] [rbp-4B0h]
  __int128 v110; // [rsp+D8h] [rbp-4A0h]
  __int128 v111; // [rsp+E8h] [rbp-490h]
  __int128 v112; // [rsp+F8h] [rbp-480h]
  __int128 v113; // [rsp+108h] [rbp-470h]
  __int128 v114; // [rsp+118h] [rbp-460h]
  unsigned __int64 v115; // [rsp+128h] [rbp-450h]
  char v116[1032]; // [rsp+130h] [rbp-448h] BYREF
  unsigned __int64 v117; // [rsp+538h] [rbp-40h]

  v117 = __readfsqword(0x28u);
  set_processor_type("68040", 1);
  v89 = 16 * getinf(12);
  v3 = qlsize(a1);
  qlseek(a1, 0, 0);
  v93 = 0;
  while ( 1 )
  {
LABEL_2:
    v4 = qlread(a1, &v97, 4);
    if ( v4 != 4 )
    {
      if ( v4 )
      {
        v54 = "s";
        v55 = (const char *)&unk_3003;
        if ( v4 == 1 )
        {
          v54 = "";
          v55 = (const char *)&unk_3000;
        }
        sub_16E0((__int64)"There %s %u extra byte%s at end of file.", v55, v4, v54);
      }
      qlseek(a1, 0, 0);
      for ( i = 0; ; ++i )
      {
        while ( 1 )
        {
LABEL_87:
          if ( (unsigned int)qlread(a1, &v97, 4) != 4 )
          {
            create_filename_cmt();
            return v117 - __readfsqword(0x28u);
          }
          v37 = v93 & (v97 == -150798336);
          v38 = _byteswap_ulong(v97);
          v97 = v38;
          v87 = v37;
          if ( !v37 )
            break;
          v97 = 1023;
LABEL_93:
          v87 = 1;
LABEL_94:
          v39 = 0;
          while ( 1 )
          {
            if ( !v87 )
            {
              lread(a1, v98, 4);
              v94 = _byteswap_ulong(v98[0]);
              if ( !v98[0] )
                goto LABEL_87;
              lread(a1, v98, 4);
              v92 = _byteswap_ulong(v98[0]) + 1;
              segm_by_sel = (__int64 *)get_segm_by_sel(v92);
              v46 = (__int64 *)get_segm_by_sel(i);
              if ( v46 )
              {
                v42 = 4;
                v90 = *v46;
              }
              else
              {
                v90 = -1;
                segm_by_sel = nullptr;
                v42 = 4;
              }
              goto LABEL_99;
            }
            lread(a1, v98, 2);
            v94 = (unsigned __int16)__ROL2__(v98[0], 8);
            if ( !(_WORD)v94 )
              break;
            lread(a1, v98, 2);
            v92 = (unsigned __int16)__ROL2__(v98[0], 8) + 1LL;
            segm_by_sel = (__int64 *)get_segm_by_sel(v92);
            v41 = (__int64 *)get_segm_by_sel(i);
            if ( v41 )
            {
              v42 = 2;
              v90 = *v41;
            }
            else
            {
              v90 = -1;
              segm_by_sel = nullptr;
              v42 = 2;
            }
LABEL_99:
            v43 = qlseek(a1, 0, 1);
            v44 = qlsize(a1) - v43;
            if ( ((v44 | v43) & 0x8000000000000000LL) != 0LL )
            {
              LODWORD(v45) = 0;
LABEL_102:
              sub_1880((__int64)"%s is incorrect, maximum possible value is %u%s", "Number of relocations", v45, "");
            }
            if ( v44 < v42 * v94 )
            {
              v45 = v44 / v42;
              goto LABEL_102;
            }
            v96 = v39;
            v47 = v94;
            while ( 2 )
            {
              if ( v87 )
              {
                while ( 1 )
                {
                  lread(a1, v98, 2);
                  if ( segm_by_sel )
                    break;
                  sub_1610((__int64)"This file contains some untested records");
                  if ( !--v47 )
                    goto LABEL_127;
                }
                v48 = (unsigned __int16)__ROL2__(v98[0], 8);
LABEL_112:
                v49 = *segm_by_sel;
                v50 = v90 + v48;
                if ( (v97 & 0xFC00) == 0 )
                {
                  if ( (unsigned __int16)v97 <= 0x3EBu )
                    goto LABEL_119;
                  v51 = 1LL << ((unsigned __int8)v97 + 20);
                  if ( (v51 & 0xB0801) != 0 )
                  {
                    v52 = (unsigned int)get_dword(v50) + v49;
                    put_dword(v50);
                    v53 = 4;
                  }
                  else if ( (v51 & 0x41002) != 0 )
                  {
LABEL_124:
                    v52 = (unsigned __int16)get_word(v50) + v49;
                    put_word(v50);
                    v53 = 1;
                  }
                  else
                  {
                    if ( (v51 & 0x2004) == 0 )
                      goto LABEL_119;
                    v52 = (unsigned __int8)get_byte(v50) + v49;
                    put_byte(v50);
                    v53 = 13;
                  }
                  LOWORD(v98[0]) = v53;
                  v98[1] = 0;
                  v99 = 0;
                  v102 = 0;
                  v100 = v92;
                  v101 = v52;
                  set_fixup(v50, v98);
                  goto LABEL_119;
                }
                if ( (unsigned __int16)v97 == 1260 )
                  goto LABEL_124;
LABEL_119:
                if ( --v47 )
                  continue;
LABEL_127:
                v39 = v94 + v96;
              }
              else
              {
                do
                {
                  lread(a1, v98, 4);
                  if ( segm_by_sel )
                  {
                    v48 = _byteswap_ulong(v98[0]);
                    goto LABEL_112;
                  }
                  sub_1610((__int64)"This file contains some untested records");
                  --v47;
                }
                while ( v47 );
                v39 = v94 + v96;
              }
              break;
            }
          }
          if ( (v39 & 1) == 0 && qlseek(a1, 2, 1) == -1 )
LABEL_34:
            sub_1880((__int64)"Truncated file");
        }
        v8 = (unsigned __int16)v38;
        if ( (v38 & 0xFC00) == 0 )
        {
          if ( (unsigned __int16)v38 > 0x3E6u )
          {
            switch ( (__int16)v38 )
            {
              case 999:
                lread(a1, v98, 4);
                v56 = _byteswap_ulong(v98[0]);
                if ( v56 )
                {
                  v57 = 4LL * v56;
                  if ( v57 > 0x3FF )
                    v57 = 1023;
                  lread(a1, v116, v57);
                  v58 = &v116[v57];
                }
                else
                {
                  v58 = v116;
                }
                *v58 = 0;
                sub_1540((__int64)"Unit: %s", v116);
                goto LABEL_87;
              case 1000:
                lread(a1, v98, 4);
                v60 = _byteswap_ulong(v98[0]);
                if ( v60 )
                {
                  v61 = 4LL * v60;
                  if ( v61 > 0x3FF )
                    v61 = 1023;
                  lread(a1, v116, v61);
                  v62 = &v116[v61];
                }
                else
                {
                  v62 = v116;
                }
                *v62 = 0;
                sub_1540((__int64)"Title: %s", v116);
                goto LABEL_87;
              case 1001:
              case 1002:
              case 1003:
                goto LABEL_132;
              case 1004:
              case 1005:
              case 1006:
              case 1015:
              case 1016:
              case 1017:
              case 1021:
              case 1022:
                goto LABEL_94;
              case 1007:
                sub_1610((__int64)"This file contains some untested records");
                break;
              case 1008:
                while ( 1 )
                {
                  lread(a1, v98, 4);
                  v68 = _byteswap_ulong(v98[0]);
                  if ( !v98[0] )
                    break;
                  v69 = v116;
                  v70 = v68 & 0xFFFFFF;
                  if ( v70 )
                  {
                    v71 = 4LL * v70;
                    if ( v71 > 0x3FF )
                      v71 = 1023;
                    lread(a1, v116, v71);
                    v69 = &v116[v71];
                  }
                  *v69 = 0;
                  lread(a1, v98, 4);
                  v72 = v98[0];
                  v73 = (_QWORD *)get_segm_by_sel(i);
                  if ( v73 )
                    set_name(*v73 + _byteswap_ulong(v72), v116, 1281);
                  else
                    sub_1610((__int64)"This file contains some untested records");
                }
                goto LABEL_87;
              case 1009:
              case 1019:
                lread(a1, v98, 4);
                if ( qlseek(a1, 4LL * _byteswap_ulong(v98[0]), 1) == -1 )
                  goto LABEL_34;
                goto LABEL_87;
              case 1010:
              case 1014:
                goto LABEL_87;
              case 1011:
                while ( 1 )
                {
                  lread(a1, v98, 4);
                  v75 = _byteswap_ulong(v98[0]);
                  if ( !v98[0] )
                    break;
                  v74 = 4LL * v75;
                  if ( v74 > 0x3FF )
                    v74 = 1023;
                  lread(a1, v116, v74);
                  v116[v74] = 0;
                }
                lread(a1, v98, 4);
                lread(a1, v98, 4);
                v76 = v98[0];
                lread(a1, v98, 4);
                if ( qlseek(a1, 4LL * (int)(_byteswap_ulong(v98[0]) + 1 - _byteswap_ulong(v76)), 1) == -1 )
                  goto LABEL_34;
                v93 = 1;
                goto LABEL_87;
              case 1013:
                lread(a1, v98, 4);
                v59 = _byteswap_ulong(v98[0]);
                if ( !v59 )
                  goto LABEL_152;
                lread(a1, v98, 4);
                if ( qlseek(a1, 4LL * v59, 1) == -1 )
                  goto LABEL_34;
                lread(a1, v98, 4);
                if ( _byteswap_ulong(v98[0]) - 999 <= 0x17 )
                  qlseek(a1, -4, 1);
                goto LABEL_87;
              case 1018:
LABEL_152:
                lread(a1, v98, 4);
                goto LABEL_87;
              case 1020:
              case 1023:
                goto LABEL_93;
              default:
LABEL_78:
                v8 = 1012;
                goto LABEL_43;
            }
            while ( 2 )
            {
              lread(a1, v98, 4);
              v63 = v98[0];
              v64 = _byteswap_ulong(v98[0]);
              if ( !v98[0] )
                goto LABEL_87;
              v65 = v64 & 0xFFFFFF;
              if ( LOBYTE(v98[0]) == 129 )
              {
                sub_17B0((__int64)"  EXT_REF32");
                if ( !(_DWORD)v65 )
                  goto LABEL_186;
                goto LABEL_201;
              }
              if ( LOBYTE(v98[0]) > 0x81u )
              {
                if ( LOBYTE(v98[0]) != 131 )
                {
                  if ( LOBYTE(v98[0]) == 132 )
                  {
                    sub_17B0((__int64)"  EXT_REF8");
                    v66 = 132;
                    if ( (_DWORD)v65 )
                      goto LABEL_190;
                  }
                  else if ( LOBYTE(v98[0]) == 130 )
                  {
                    sub_17B0((__int64)"  EXT_COMMON");
                    v66 = 130;
                    if ( !(_DWORD)v65 )
                      goto LABEL_168;
LABEL_190:
                    v79 = 4 * v65;
                    v88 = v66;
                    if ( v79 > 0x3FF )
                      v79 = 1023;
                    lread(a1, v116, v79);
                    v116[v79] = 0;
                    sub_17B0((__int64)" %s", v116);
                    if ( v88 != 132 )
                    {
LABEL_168:
                      lread(a1, v98, 4);
                      sub_17B0((__int64)" Size = %u bytes", 4 * _byteswap_ulong(v98[0]));
                      lread(a1, v98, 4);
                      v67 = _byteswap_ulong(v98[0]);
LABEL_169:
                      if ( qlseek(a1, 4 * v67, 1) == -1 )
                        goto LABEL_34;
LABEL_160:
                      sub_17B0((__int64)"\n");
                      continue;
                    }
                  }
                  else
                  {
                    sub_17B0((__int64)"  EXT_??? (%02x)\n", LOBYTE(v98[0]));
                    v83 = v63;
                    if ( !(_DWORD)v65 )
                      goto LABEL_213;
                    v84 = 4 * v65;
                    if ( v84 > 0x3FF )
                      v84 = 1023;
                    lread(a1, v116, v84);
                    v116[v84] = 0;
                    sub_17B0((__int64)" %s", v116);
                    v83 = v63;
                    if ( (v63 & 0xFD) != 0x81 )
                    {
LABEL_213:
                      if ( v83 != 229 )
                        goto LABEL_160;
                    }
                  }
LABEL_186:
                  lread(a1, v98, 4);
                  v77 = "ies";
                  if ( v98[0] == 0x1000000 )
                    v77 = "y";
                  v78 = _byteswap_ulong(v98[0]);
                  sub_17B0((__int64)"= %u entr%s", v78, v77);
                  v67 = v78;
                  goto LABEL_169;
                }
                sub_17B0((__int64)"  EXT_REF16");
                if ( !(_DWORD)v65 )
                  goto LABEL_186;
LABEL_201:
                v81 = 4 * v65;
                if ( v81 > 0x3FF )
                  v81 = 1023;
                lread(a1, v116, v81);
                v116[v81] = 0;
                sub_17B0((__int64)" %s", v116);
                goto LABEL_186;
              }
              break;
            }
            switch ( LOBYTE(v98[0]) )
            {
              case 2u:
                sub_17B0((__int64)"  EXT_ABS");
                if ( !(_DWORD)v65 )
                  goto LABEL_158;
                break;
              case 3u:
                sub_17B0((__int64)"  EXT_RES");
                if ( !(_DWORD)v65 )
                  goto LABEL_158;
                break;
              case 1u:
                sub_17B0((__int64)"  EXT_DEF");
                if ( !(_DWORD)v65 )
                {
LABEL_158:
                  sub_17B0((__int64)" ???");
LABEL_159:
                  lread(a1, v98, 4);
                  sub_17B0((__int64)"%08X", _byteswap_ulong(v98[0]));
                  goto LABEL_160;
                }
                break;
              default:
                sub_17B0((__int64)"  EXT_??? (%02x)\n", LOBYTE(v98[0]));
                if ( (_DWORD)v65 )
                {
                  v82 = 4 * v65;
                  if ( v82 > 0x3FF )
                    v82 = 1023;
                  lread(a1, v116, v82);
                  v116[v82] = 0;
                  sub_17B0((__int64)" %s", v116);
                }
                goto LABEL_160;
            }
            v80 = 4 * v65;
            if ( v80 > 0x3FF )
              v80 = 1023;
            lread(a1, v116, v80);
            v116[v80] = 0;
            sub_17B0((__int64)" %s", v116);
            goto LABEL_159;
          }
          goto LABEL_43;
        }
        if ( (unsigned __int16)v38 != 1257 )
        {
          if ( (unsigned __int16)v38 != 1260 )
            goto LABEL_43;
          goto LABEL_94;
        }
LABEL_132:
        lread(a1, v98, 4);
        if ( (_WORD)v97 != 1003 && qlseek(a1, (4 * _byteswap_ulong(v98[0])) & 0x7FFFFFFC, 1) == -1 )
          goto LABEL_34;
      }
    }
    v5 = _byteswap_ulong(v97);
    v6 = v97 == -150798336;
    v97 = v5;
    v7 = v93 & v6;
    if ( !v7 )
      break;
    v97 = 1023;
LABEL_8:
    v7 = 1;
LABEL_9:
    v85 = v3;
    v9 = 0;
    v10 = v7;
    while ( 1 )
    {
      if ( v85 <= qlseek(a1, 0, 1) )
        goto LABEL_34;
      if ( v10 )
        break;
      lread(a1, v98, 4);
      v12 = _byteswap_ulong(v98[0]);
      if ( !v98[0] )
      {
        v3 = v85;
        goto LABEL_2;
      }
      lread(a1, v98, 4);
      v13 = 4LL * v12;
LABEL_12:
      if ( qlseek(a1, v13, 1) == -1 )
        goto LABEL_34;
      v9 += v12;
    }
    lread(a1, v98, 2);
    v11 = __ROL2__(v98[0], 8);
    LOBYTE(v12) = v11;
    if ( v11 )
    {
      lread(a1, v98, 2);
      v13 = 2LL * v11;
      goto LABEL_12;
    }
    v3 = v85;
    if ( (v9 & 1) == 0 && qlseek(a1, 2, 1) == -1 )
      goto LABEL_34;
  }
  v8 = (unsigned __int16)v5;
  if ( (v5 & 0xFC00) != 0 )
  {
    if ( (unsigned __int16)v5 == 1257 )
    {
LABEL_18:
      lread(a1, v98, 4);
      v14 = (4 * _byteswap_ulong(v98[0])) & 0x7FFFFFFC;
      free_chunk = find_free_chunk(v89, v14, 15);
      v16 = free_chunk + (unsigned int)v14;
      v17 = free_chunk;
      v89 = v16;
      if ( __CFADD__(free_chunk, (unsigned int)v14) )
        sub_1880((__int64)"Segment address overlow: %a..%a", a2, a3);
      v86 = (int)(get_segm_qty() + 1);
      set_selector(v86, 0);
      if ( (unsigned __int16)v97 == 1003 )
      {
        v91 = "BSS";
        goto LABEL_27;
      }
      if ( (unsigned __int16)v97 > 0x3EBu )
      {
        if ( (unsigned __int16)v97 != 1257 )
        {
          v91 = nullptr;
          goto LABEL_25;
        }
        set_processor_type("ppc", 1);
        v35 = (unsigned __int16)v97;
        v91 = "PPC_CODE";
      }
      else
      {
        if ( (unsigned __int16)v97 != 1001 )
        {
          v18 = nullptr;
          if ( (unsigned __int16)v97 == 1002 )
            v18 = "DATA";
          v91 = (char *)v18;
LABEL_25:
          if ( v3 - qlseek(a1, 0, 1) < (unsigned __int64)(unsigned int)v14 )
            sub_1880((__int64)"Too big segment %a..%a", a2, a3);
          v19 = qlseek(a1, 0, 1);
          file2base(a1, v19, v17, v16, 1);
LABEL_27:
          v104 = 0;
          memset(v103, 0, sizeof(v103));
          a2 = NAN;
          v105 = 0;
          v106 = 0;
          v115 = 0xFFFFFFFF00000000LL;
          v107 = -1;
          v108 = -1;
          v109 = -1;
          v110 = -1;
          v111 = -1;
          v112 = -1;
          v113 = -1;
          v114 = -1;
          v106 = setup_selector(v86);
          *(_QWORD *)&v103[0] = v17;
          *((_QWORD *)&v103[0] + 1) = v16;
          LOWORD(v105) = 513;
          BYTE3(v105) = 1;
          add_segm_ex(v103, v91, v91, 33);
          goto LABEL_2;
        }
        if ( getinf(14) == -1 )
        {
          setinf(14, v86);
          setinf(15, v17);
        }
        v35 = (unsigned __int16)v97;
        v91 = "CODE";
      }
      if ( v35 != 1003 )
        goto LABEL_25;
      goto LABEL_27;
    }
    if ( (unsigned __int16)v5 != 1260 )
      goto LABEL_43;
    goto LABEL_9;
  }
  if ( (unsigned __int16)v5 > 0x3E6u )
  {
    switch ( (__int16)v5 )
    {
      case 999:
      case 1000:
        v20 = v116;
        lread(a1, v98, 4);
        v21 = _byteswap_ulong(v98[0]);
        if ( v21 )
        {
          v22 = 4LL * v21;
          if ( v22 > 0x3FF )
            v22 = 1023;
          v20 = &v116[v22];
          lread(a1, v116, v22);
        }
        *v20 = 0;
        goto LABEL_2;
      case 1001:
      case 1002:
      case 1003:
        goto LABEL_18;
      case 1004:
      case 1005:
      case 1006:
      case 1015:
      case 1016:
      case 1017:
      case 1021:
      case 1022:
        goto LABEL_9;
      case 1007:
        goto LABEL_65;
      case 1008:
        while ( 2 )
        {
          if ( v3 <= qlseek(a1, 0, 1) )
            goto LABEL_34;
          lread(a1, v98, 4);
          v28 = _byteswap_ulong(v98[0]);
          if ( v98[0] )
          {
            v29 = v116;
            v30 = v28 & 0xFFFFFF;
            if ( v30 )
            {
              v31 = 4LL * v30;
              if ( v31 > 0x3FF )
                v31 = 1023;
              v29 = &v116[v31];
              lread(a1, v116, v31);
            }
            *v29 = 0;
            lread(a1, v98, 4);
            continue;
          }
          goto LABEL_2;
        }
      case 1009:
      case 1019:
        lread(a1, v98, 4);
        if ( qlseek(a1, 4LL * _byteswap_ulong(v98[0]), 1) == -1 )
          goto LABEL_34;
        goto LABEL_2;
      case 1010:
      case 1014:
        goto LABEL_2;
      case 1011:
        while ( 2 )
        {
          if ( v3 <= qlseek(a1, 0, 1) )
            goto LABEL_34;
          lread(a1, v98, 4);
          v26 = _byteswap_ulong(v98[0]);
          if ( v98[0] )
          {
            v25 = 4LL * v26;
            if ( v25 > 0x3FF )
              v25 = 1023;
            lread(a1, v116, v25);
            v116[v25] = 0;
            continue;
          }
          break;
        }
        lread(a1, v98, 4);
        lread(a1, v98, 4);
        v27 = v98[0];
        lread(a1, v98, 4);
        if ( qlseek(a1, 4LL * (int)(_byteswap_ulong(v98[0]) + 1 - _byteswap_ulong(v27)), 1) == -1 )
          goto LABEL_34;
        v93 = 1;
        goto LABEL_2;
      case 1013:
        lread(a1, v98, 4);
        v23 = _byteswap_ulong(v98[0]);
        if ( v23 )
        {
          lread(a1, v98, 4);
          if ( qlseek(a1, 4LL * v23, 1) == -1 )
            goto LABEL_34;
          lread(a1, v98, 4);
          if ( _byteswap_ulong(v98[0]) - 999 <= 0x17 )
            qlseek(a1, -4, 1);
        }
        else
        {
          lread(a1, v98, 4);
        }
        goto LABEL_2;
      case 1018:
        if ( qlseek(a1, 4, 1) == -1 )
          goto LABEL_34;
        goto LABEL_2;
      case 1020:
      case 1023:
        goto LABEL_8;
      default:
        goto LABEL_78;
    }
    while ( 1 )
    {
LABEL_65:
      if ( v3 <= qlseek(a1, 0, 1) )
        goto LABEL_34;
      lread(a1, v98, 4);
      v32 = v98[0];
      v33 = _byteswap_ulong(v98[0]);
      if ( !v98[0] )
        goto LABEL_2;
      v34 = v33 & 0xFFFFFF;
      if ( v34 )
      {
        v36 = 4LL * v34;
        if ( v36 > 0x3FF )
          v36 = 1023;
        lread(a1, v116, v36);
        v116[v36] = 0;
      }
      if ( (unsigned int)v32 - 1 <= 2 )
      {
        lread(a1, v98, 4);
        continue;
      }
      if ( (unsigned int)v32 - 131 > 1 && v32 != 129 && v32 != 229 )
      {
        if ( v32 != 130 )
          continue;
        lread(a1, v98, 4);
      }
      lread(a1, v98, 4);
      if ( qlseek(a1, 4LL * _byteswap_ulong(v98[0]), 1) == -1 )
        goto LABEL_34;
    }
  }
LABEL_43:
  sub_16E0((__int64)"Unknown hunk type %04X - Aborting!", v8);
  return v117 - __readfsqword(0x28u);
}
