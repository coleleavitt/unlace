char __fastcall sub_F2720(__int64 a1, __int64 a2, int a3)
{
  int v3; // r10d
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v9; // rbx
  __int64 v10; // r14
  int v11; // eax
  int v12; // eax
  __int64 v13; // rsi
  signed int *v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // r10d
  __int64 v19; // rcx
  int v20; // r9d
  int v21; // eax
  char v22; // al
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  char v27; // al
  unsigned int v28; // r11d
  char v29; // al
  int v30; // ecx
  char v31; // al
  int v32; // ecx
  int v33; // eax
  int v34; // eax
  int v35; // r10d
  int v36; // ecx
  char v37; // al
  int v38; // ecx
  __int64 v39; // r15
  signed int v40; // ebp
  signed int v41; // r9d
  char v42; // al
  unsigned int v43; // r13d
  __int64 v44; // rbx
  int v45; // eax
  unsigned int tinfo_size; // eax
  char v47; // al
  int v48; // eax
  int v49; // eax
  __int64 v50; // rdx
  unsigned int v51; // eax
  unsigned int v52; // eax
  __int64 v53; // rax
  char v54; // al
  signed int v55; // eax
  int v56; // eax
  unsigned int v57; // eax
  unsigned int v58; // eax
  int v59; // eax
  int v61; // [rsp+8h] [rbp-70h]
  int v62; // [rsp+8h] [rbp-70h]
  unsigned int v63; // [rsp+Ch] [rbp-6Ch]
  signed int v64; // [rsp+Ch] [rbp-6Ch]
  signed int v65; // [rsp+Ch] [rbp-6Ch]
  int v66; // [rsp+Ch] [rbp-6Ch]
  unsigned int v67; // [rsp+10h] [rbp-68h]
  int v68; // [rsp+10h] [rbp-68h]
  int v69; // [rsp+10h] [rbp-68h]
  int v70; // [rsp+10h] [rbp-68h]
  int v71; // [rsp+10h] [rbp-68h]
  signed int v72; // [rsp+10h] [rbp-68h]
  __int64 v73; // [rsp+10h] [rbp-68h]
  int v74; // [rsp+10h] [rbp-68h]
  int v75; // [rsp+10h] [rbp-68h]
  unsigned int v76; // [rsp+10h] [rbp-68h]
  int v77; // [rsp+10h] [rbp-68h]
  int v78; // [rsp+18h] [rbp-60h]
  int v79; // [rsp+18h] [rbp-60h]
  __int64 v80; // [rsp+18h] [rbp-60h]
  __int64 v81; // [rsp+18h] [rbp-60h]
  signed int v82; // [rsp+18h] [rbp-60h]
  int v83; // [rsp+18h] [rbp-60h]
  int v84; // [rsp+18h] [rbp-60h]
  int v85; // [rsp+18h] [rbp-60h]
  __int64 v86; // [rsp+18h] [rbp-60h]
  __int64 v87; // [rsp+18h] [rbp-60h]
  int v88; // [rsp+18h] [rbp-60h]
  int v89; // [rsp+18h] [rbp-60h]
  int v90; // [rsp+18h] [rbp-60h]
  int v91; // [rsp+20h] [rbp-58h]
  int v92; // [rsp+20h] [rbp-58h]
  int v93; // [rsp+20h] [rbp-58h]
  int v94; // [rsp+20h] [rbp-58h]
  int v95; // [rsp+20h] [rbp-58h]
  int v96; // [rsp+20h] [rbp-58h]
  int v97; // [rsp+20h] [rbp-58h]
  int v98; // [rsp+20h] [rbp-58h]
  int v99; // [rsp+20h] [rbp-58h]
  int v100; // [rsp+20h] [rbp-58h]
  int v101; // [rsp+20h] [rbp-58h]
  int v102; // [rsp+20h] [rbp-58h]
  int v103; // [rsp+20h] [rbp-58h]
  signed int v104; // [rsp+20h] [rbp-58h]
  signed int v105; // [rsp+20h] [rbp-58h]
  signed int v106; // [rsp+20h] [rbp-58h]
  int v107; // [rsp+24h] [rbp-54h]
  int v108; // [rsp+24h] [rbp-54h]
  int v109; // [rsp+24h] [rbp-54h]
  int v110; // [rsp+24h] [rbp-54h]
  int v111; // [rsp+24h] [rbp-54h]
  int v112; // [rsp+24h] [rbp-54h]
  int v113; // [rsp+24h] [rbp-54h]
  int v114; // [rsp+28h] [rbp-50h]
  unsigned int v115; // [rsp+28h] [rbp-50h]
  unsigned int v116; // [rsp+2Ch] [rbp-4Ch]
  int v117; // [rsp+2Ch] [rbp-4Ch]
  int v118; // [rsp+30h] [rbp-48h] BYREF
  signed int v119; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v120; // [rsp+38h] [rbp-40h]

  v120 = __readfsqword(0x28u);
  v3 = a3 + 1;
  if ( a3 + 1 == *(_QWORD *)(a2 + 32) )
    goto LABEL_17;
  v5 = *(_QWORD *)(a2 + 24);
  v6 = 80LL * v3;
  v9 = v5 + 80LL * a3;
  v10 = v6 + v5;
  v11 = *(_DWORD *)(v9 + 56);
  if ( (unsigned int)(v11 - 3) <= 1 )
  {
    v62 = a3 + 1;
    v22 = sub_60500((_QWORD *)(a1 + 200));
    v3 = v62;
    if ( v22 )
    {
      v23 = *(_QWORD *)(a1 + 256);
      if ( v23 && a3 == *(_DWORD *)(*(_QWORD *)(a1 + 248) + 4 * v23 - 4) )
      {
        if ( *(_DWORD *)(a1 + 64) != 3 )
        {
          *(_QWORD *)(a1 + 256) = v23 - 1;
          goto LABEL_17;
        }
        if ( v23 == *(_QWORD *)(a1 + 280) )
        {
LABEL_129:
          v53 = v23 - 1;
          *(_QWORD *)(a1 + 256) = v53;
          *(_QWORD *)(a1 + 280) = v53;
          goto LABEL_17;
        }
LABEL_135:
        sub_F0F50();
      }
      v50 = *(_QWORD *)(a1 + 280);
      if ( v50 && a3 == *(_DWORD *)(*(_QWORD *)(a1 + 272) + 4 * v50 - 4) )
      {
        if ( *(_DWORD *)(a1 + 64) != 3 )
        {
          *(_QWORD *)(a1 + 280) = v50 - 1;
          goto LABEL_17;
        }
        if ( v23 == v50 )
          goto LABEL_129;
        goto LABEL_135;
      }
LABEL_75:
      v45 = *(_DWORD *)(v9 + 56);
      if ( *(_DWORD *)(v10 + 56) != v45 )
        goto LABEL_4;
      if ( (unsigned int)(v45 - 3) <= 1 )
      {
        tinfo_size = get_tinfo_size();
        return (unsigned int)sub_D1EA0(a1 + 64, (int *)(v9 + 56), tinfo_size, v119, 1) ^ 1;
      }
LABEL_5:
      v13 = *(_QWORD *)(v10 + 24);
      v14 = &v118;
      v91 = v3;
      v15 = *(_DWORD *)(a1 + 136);
      v118 = 0;
      v63 = v15;
      v61 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL) + 80LL);
      get_tinfo_size();
      v17 = (unsigned int)v118;
      v18 = v91;
      v19 = (unsigned int)(v118 - 1);
      if ( (v118 & (unsigned int)v19) != 0 )
        goto LABEL_177;
      v20 = 2 * v61;
      if ( v118 <= 2 * v61 )
      {
        v21 = v63;
        if ( v61 > v118 )
        {
          if ( v63 > 0x10 )
          {
LABEL_9:
            if ( v21 != 176 && v21 != 256 )
              goto LABEL_11;
LABEL_84:
            v19 = (unsigned int)(v17 - 1);
            v28 = *(_DWORD *)(a1 + 136);
            v16 = *(_QWORD *)(v9 + 64);
            if ( ((unsigned int)v17 & (unsigned int)v19) != 0 )
              goto LABEL_177;
            if ( v20 >= (int)v17 )
            {
              if ( v61 > (int)v17 )
              {
                if ( v28 > 0x10 )
                {
LABEL_88:
                  v30 = v17 - 1;
                  if ( v28 == 176 || v28 == 256 )
                    goto LABEL_39;
                  goto LABEL_37;
                }
LABEL_110:
                v113 = v20;
                v87 = v16;
                v75 = v17;
                v100 = v18;
                v52 = getinf();
                v20 = v113;
                v16 = v87;
                LODWORD(v17) = v75;
                v18 = v100;
                v28 = v52;
                goto LABEL_88;
              }
              if ( v28 > 0x10 )
                goto LABEL_92;
              goto LABEL_108;
            }
LABEL_31:
            if ( v28 <= 0x10 )
            {
              v85 = v20;
              v73 = v16;
              v98 = v18;
              v117 = v19;
              v115 = v28;
              v111 = v17;
              v49 = getinf();
              v18 = v98;
              v16 = v73;
              v20 = v85;
              if ( v49 == 176 || v49 == 256 )
              {
                if ( v61 > v85 )
                {
LABEL_109:
                  LODWORD(v17) = v20;
                  goto LABEL_110;
                }
LABEL_107:
                LODWORD(v17) = v20;
LABEL_108:
                v112 = v20;
                v86 = v16;
                v74 = v17;
                v99 = v18;
                v51 = getinf();
                v20 = v112;
                v16 = v86;
                LODWORD(v17) = v74;
                v18 = v99;
                v28 = v51;
LABEL_92:
                if ( v28 == 176 || v28 == 256 )
                {
LABEL_95:
                  LODWORD(v17) = v61;
                  v30 = v61 - 1;
                  goto LABEL_39;
                }
                goto LABEL_94;
              }
              LODWORD(v17) = v111;
              v28 = v115;
              LODWORD(v19) = v117;
            }
            else if ( v28 == 256 || v28 == 176 )
            {
              LODWORD(v17) = v61;
              if ( v61 > v20 )
                LODWORD(v17) = v20;
              v30 = v17 - 1;
LABEL_39:
              if ( *(_QWORD *)(v10 + 64) != ((v16 + v30) & -(int)v17) )
              {
                v32 = a3 + 2;
                if ( a3 + 2 == *(_QWORD *)(a2 + 32) || *(_DWORD *)(v9 + 4) > v61 || *(_DWORD *)(v10 + 4) != v61 )
                  goto LABEL_4;
                v33 = v63;
                if ( v63 <= 0x10 )
                {
                  v90 = v20;
                  v103 = v18;
                  v33 = getinf();
                  v20 = v90;
                  v32 = a3 + 2;
                  v18 = v103;
                }
                v82 = v20;
                v71 = v32;
                v96 = v18;
                if ( v33 == 176 )
                  goto LABEL_4;
                if ( v33 == 256 )
                  goto LABEL_4;
                if ( !(unsigned __int8)getinf_flag() )
                  goto LABEL_4;
                v34 = *(_DWORD *)(a2 + 8);
                v35 = v96;
                v36 = v71;
                if ( (*(_BYTE *)(a2 + 281) & 1) != 0 && a3 >= v34 )
                  goto LABEL_4;
                v72 = v82;
                v97 = v36;
                if ( v36 == v34 )
                  goto LABEL_4;
                v83 = v35;
                if ( v35 == v34 )
                  goto LABEL_4;
                v37 = sub_118790(v10, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL), 0);
                v38 = v97;
                if ( v37 )
                  v38 = v83;
                if ( !(unsigned __int8)sub_EE950(a2, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), v38) )
                  goto LABEL_4;
                v39 = *(_QWORD *)(a2 + 24) + v6;
                if ( *(_DWORD *)(v39 + 4) != v72 )
                  goto LABEL_4;
                v13 = *(_QWORD *)(v39 + 24);
                v14 = &v119;
                v119 = 0;
                get_tinfo_size();
                v40 = v119;
                if ( (v119 & (v119 - 1)) != 0 )
                  goto LABEL_177;
                v41 = v72;
                if ( v72 >= v119 )
                {
                  if ( v61 > v119 )
                  {
                    if ( v63 > 0x10 )
                    {
LABEL_60:
                      if ( v63 != 176 && v63 != 256 )
                        goto LABEL_62;
LABEL_65:
                      v43 = *(_DWORD *)(a1 + 136);
                      v44 = *(_QWORD *)(v9 + 64);
                      if ( (v40 & (v40 - 1)) == 0 )
                      {
                        if ( v41 >= v40 )
                        {
                          if ( v61 > v40 )
                          {
                            if ( v43 > 0x10 )
                            {
LABEL_69:
                              if ( v43 != 176 && v43 != 256 )
                                goto LABEL_71;
                              goto LABEL_148;
                            }
LABEL_169:
                            v43 = getinf();
                            goto LABEL_69;
                          }
                          if ( v43 > 0x10 )
                          {
LABEL_154:
                            if ( v43 != 176 && v43 != 256 )
                              goto LABEL_71;
LABEL_74:
                            LOBYTE(v12) = ((v44 + v61 - 1) & -v61) == *(_QWORD *)(v39 + 64);
                            return v12;
                          }
LABEL_176:
                          v43 = getinf();
                          goto LABEL_154;
                        }
LABEL_141:
                        if ( v43 <= 0x10 )
                        {
                          v66 = v41;
                          v59 = getinf();
                          v41 = v66;
                          if ( v59 == 176 || v59 == 256 )
                          {
                            if ( v61 > v66 )
                              goto LABEL_168;
                            goto LABEL_175;
                          }
                        }
                        else if ( v43 == 176 || v43 == 256 )
                        {
                          if ( v61 <= v41 )
                            v41 = v61;
                          v61 = v41;
                          goto LABEL_74;
                        }
                        v65 = v41;
                        if ( (unsigned __int8)getinf_flag() )
                        {
LABEL_148:
                          v61 = v40;
                          goto LABEL_74;
                        }
                        v41 = v65;
                        if ( v61 > v65 )
                        {
                          if ( v43 > 0x10 )
                          {
                            v40 = v65;
LABEL_71:
                            if ( !(unsigned __int8)getinf_flag() )
                              v40 = v61;
                            v61 = v40;
                            goto LABEL_74;
                          }
LABEL_168:
                          v40 = v41;
                          goto LABEL_169;
                        }
                        if ( v43 > 0x10 )
                        {
                          v40 = v65;
                          goto LABEL_71;
                        }
LABEL_175:
                        v40 = v41;
                        goto LABEL_176;
                      }
LABEL_177:
                      sub_F0F30(v14, v13, v17, v19, v16);
                    }
LABEL_171:
                    v14 = (_DWORD *)(&qword_60 + 3);
                    v106 = v41;
                    v58 = getinf();
                    v41 = v106;
                    v63 = v58;
                    goto LABEL_60;
                  }
                  if ( v63 > 0x10 )
                    goto LABEL_150;
                  goto LABEL_167;
                }
                if ( v63 <= 0x10 )
                {
                  v56 = getinf();
                  v41 = v72;
                  if ( v56 == 176 || v56 == 256 )
                  {
                    if ( v61 > v72 )
                    {
LABEL_170:
                      v40 = v41;
                      goto LABEL_171;
                    }
LABEL_166:
                    v40 = v41;
LABEL_167:
                    v14 = (_DWORD *)(&qword_60 + 3);
                    v105 = v41;
                    v57 = getinf();
                    v41 = v105;
                    v63 = v57;
LABEL_150:
                    if ( v63 == 176 || v63 == 256 )
                    {
LABEL_64:
                      v40 = v61;
                      goto LABEL_65;
                    }
                    goto LABEL_152;
                  }
                }
                else if ( v63 == 176 || v63 == 256 )
                {
                  v55 = v61;
                  if ( v61 > v72 )
                    v55 = v72;
                  v40 = v55;
                  goto LABEL_65;
                }
                v13 = 512;
                v104 = v41;
                v54 = getinf_flag();
                v41 = v104;
                if ( v54 )
                {
                  v43 = *(_DWORD *)(a1 + 136);
                  v44 = *(_QWORD *)(v9 + 64);
                  goto LABEL_141;
                }
                if ( v61 > v104 )
                {
                  if ( v63 > 0x10 )
                  {
                    v40 = v104;
LABEL_62:
                    v64 = v41;
                    v13 = 2;
                    goto LABEL_63;
                  }
                  goto LABEL_170;
                }
                if ( v63 > 0x10 )
                {
                  v40 = v104;
LABEL_152:
                  v64 = v41;
                  v13 = 4;
LABEL_63:
                  v14 = &dword_40 + 3;
                  v42 = getinf_flag();
                  v41 = v64;
                  if ( v42 )
                    goto LABEL_65;
                  goto LABEL_64;
                }
                goto LABEL_166;
              }
LABEL_17:
              LOBYTE(v12) = 1;
              return v12;
            }
            v114 = v19;
            v108 = v20;
            v80 = v16;
            v69 = v17;
            v94 = v18;
            v116 = v28;
            v29 = getinf_flag();
            v18 = v94;
            LODWORD(v17) = v69;
            v16 = v80;
            v20 = v108;
            v30 = v114;
            if ( v29 )
              goto LABEL_39;
            if ( v61 > v108 )
            {
              LODWORD(v17) = v108;
              if ( v116 > 0x10 )
              {
LABEL_37:
                v109 = v20;
                v81 = v16;
                v70 = v17;
                v95 = v18;
                goto LABEL_38;
              }
              goto LABEL_109;
            }
            LODWORD(v17) = v108;
            if ( v116 > 0x10 )
            {
LABEL_94:
              v109 = v20;
              v81 = v16;
              v70 = v17;
              v95 = v18;
LABEL_38:
              v31 = getinf_flag();
              LODWORD(v17) = v70;
              v18 = v95;
              v16 = v81;
              v20 = v109;
              v30 = v70 - 1;
              if ( v31 )
                goto LABEL_39;
              goto LABEL_95;
            }
            goto LABEL_107;
          }
LABEL_114:
          v14 = (_DWORD *)(&qword_60 + 3);
          v88 = v20;
          v76 = v17;
          v101 = v18;
          v21 = getinf();
          v20 = v88;
          v17 = v76;
          v18 = v101;
          goto LABEL_9;
        }
        if ( v63 > 0x10 )
          goto LABEL_79;
        goto LABEL_117;
      }
      if ( v63 <= 0x10 )
      {
        v110 = v118 - 1;
        v84 = v118;
        v48 = getinf();
        v18 = v91;
        v20 = 2 * v61;
        if ( v48 == 176 || v48 == 256 )
        {
          if ( v61 > v20 )
          {
LABEL_113:
            LODWORD(v17) = v20;
            goto LABEL_114;
          }
LABEL_116:
          LODWORD(v17) = v20;
LABEL_117:
          v14 = (_DWORD *)(&qword_60 + 3);
          v89 = v20;
          v77 = v17;
          v102 = v18;
          v21 = getinf();
          v20 = v89;
          LODWORD(v17) = v77;
          v18 = v102;
LABEL_79:
          if ( v21 == 176 || v21 == 256 )
          {
LABEL_83:
            v17 = (unsigned int)v61;
            goto LABEL_84;
          }
          goto LABEL_81;
        }
        LODWORD(v17) = v84;
        LODWORD(v19) = v110;
      }
      else if ( v63 == 176 || v63 == 256 )
      {
        v17 = (unsigned int)v61;
        if ( v61 > v20 )
          v17 = (unsigned int)v20;
        goto LABEL_84;
      }
      v13 = 512;
      v107 = v19;
      v79 = v20;
      v68 = v17;
      v93 = v18;
      v27 = getinf_flag();
      v18 = v93;
      LODWORD(v17) = v68;
      v20 = v79;
      LODWORD(v19) = v107;
      if ( v27 )
      {
        v28 = *(_DWORD *)(a1 + 136);
        v16 = *(_QWORD *)(v9 + 64);
        goto LABEL_31;
      }
      if ( v61 > v79 )
      {
        LODWORD(v17) = v79;
        if ( v63 > 0x10 )
        {
LABEL_11:
          v78 = v20;
          v13 = 2;
          v67 = v17;
          v92 = v18;
          goto LABEL_82;
        }
        goto LABEL_113;
      }
      LODWORD(v17) = v79;
      if ( v63 > 0x10 )
      {
LABEL_81:
        v78 = v20;
        v13 = 4;
        v67 = v17;
        v92 = v18;
LABEL_82:
        v14 = &dword_40 + 3;
        v47 = getinf_flag();
        v18 = v92;
        v17 = v67;
        v20 = v78;
        if ( v47 )
          goto LABEL_84;
        goto LABEL_83;
      }
      goto LABEL_116;
    }
    if ( (*(_DWORD *)(a1 + 64) & 0xFFFFFFFB) != 2 )
      goto LABEL_75;
    v24 = *(_QWORD *)(a1 + 80);
    if ( !v24 )
      goto LABEL_75;
    v25 = *(_QWORD *)(a1 + 256);
    v26 = *(_QWORD *)(a1 + 280);
    if ( v24 == v25 && *(_DWORD *)(*(_QWORD *)(a1 + 248) + 4 * v24 - 4) != -1 )
    {
      if ( !v26 )
        goto LABEL_75;
      if ( a3 == *(_DWORD *)(*(_QWORD *)(a1 + 272) + 4 * v26 - 4) )
      {
        *(_QWORD *)(a1 + 280) = v26 - 1;
        goto LABEL_17;
      }
    }
    if ( v24 == v26
      && *(_DWORD *)(*(_QWORD *)(a1 + 272) + 4 * v24 - 4) != -1
      && v25
      && a3 == *(_DWORD *)(*(_QWORD *)(a1 + 248) + 4 * v25 - 4) )
    {
      *(_QWORD *)(a1 + 256) = v25 - 1;
      goto LABEL_17;
    }
    goto LABEL_75;
  }
  if ( v11 == *(_DWORD *)(v10 + 56) )
    goto LABEL_5;
LABEL_4:
  LOBYTE(v12) = 0;
  return v12;
}

