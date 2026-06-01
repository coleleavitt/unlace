char __fastcall sub_F6BE0(__int64 a1, __int64 a2, int a3, double a4)
{
  int v4; // r10d
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // r14
  int v10; // eax
  int v11; // eax
  int v12; // edx
  int v13; // r10d
  int v14; // r9d
  int v15; // eax
  char v16; // al
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  char v21; // al
  int v22; // ecx
  unsigned int v23; // r11d
  __int64 v24; // r8
  char v25; // al
  int v26; // ecx
  char v27; // al
  int v28; // ecx
  int v29; // eax
  int v30; // eax
  int v31; // r10d
  int v32; // ecx
  char v33; // al
  int v34; // ecx
  __int64 v35; // r15
  int v36; // ebp
  int v37; // r9d
  char v38; // al
  unsigned int v39; // r13d
  __int64 v40; // rbx
  int v41; // eax
  unsigned int tinfo_size; // eax
  char v43; // al
  int v44; // eax
  int v45; // eax
  __int64 v46; // rdx
  unsigned int v47; // eax
  unsigned int v48; // eax
  __int64 v49; // rax
  char v50; // al
  int v51; // eax
  int v52; // eax
  unsigned int v53; // eax
  unsigned int v54; // eax
  int v55; // eax
  int v57; // [rsp+8h] [rbp-70h]
  int v58; // [rsp+8h] [rbp-70h]
  unsigned int v59; // [rsp+Ch] [rbp-6Ch]
  int v60; // [rsp+Ch] [rbp-6Ch]
  int v61; // [rsp+Ch] [rbp-6Ch]
  int v62; // [rsp+Ch] [rbp-6Ch]
  int v63; // [rsp+10h] [rbp-68h]
  int v64; // [rsp+10h] [rbp-68h]
  int v65; // [rsp+10h] [rbp-68h]
  int v66; // [rsp+10h] [rbp-68h]
  int v67; // [rsp+10h] [rbp-68h]
  __int64 v68; // [rsp+10h] [rbp-68h]
  int v69; // [rsp+10h] [rbp-68h]
  int v70; // [rsp+10h] [rbp-68h]
  int v71; // [rsp+10h] [rbp-68h]
  int v72; // [rsp+10h] [rbp-68h]
  int v73; // [rsp+18h] [rbp-60h]
  int v74; // [rsp+18h] [rbp-60h]
  __int64 v75; // [rsp+18h] [rbp-60h]
  __int64 v76; // [rsp+18h] [rbp-60h]
  int v77; // [rsp+18h] [rbp-60h]
  int v78; // [rsp+18h] [rbp-60h]
  int v79; // [rsp+18h] [rbp-60h]
  __int64 v80; // [rsp+18h] [rbp-60h]
  __int64 v81; // [rsp+18h] [rbp-60h]
  int v82; // [rsp+18h] [rbp-60h]
  int v83; // [rsp+18h] [rbp-60h]
  int v84; // [rsp+18h] [rbp-60h]
  int v85; // [rsp+20h] [rbp-58h]
  int v86; // [rsp+20h] [rbp-58h]
  int v87; // [rsp+20h] [rbp-58h]
  int v88; // [rsp+20h] [rbp-58h]
  int v89; // [rsp+20h] [rbp-58h]
  int v90; // [rsp+20h] [rbp-58h]
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
  int v101; // [rsp+24h] [rbp-54h]
  int v102; // [rsp+24h] [rbp-54h]
  int v103; // [rsp+24h] [rbp-54h]
  int v104; // [rsp+24h] [rbp-54h]
  int v105; // [rsp+24h] [rbp-54h]
  int v106; // [rsp+28h] [rbp-50h]
  unsigned int v107; // [rsp+28h] [rbp-50h]
  unsigned int v108; // [rsp+2Ch] [rbp-4Ch]
  int v109; // [rsp+2Ch] [rbp-4Ch]
  signed int v110; // [rsp+34h] [rbp-44h]

  v4 = a3 + 1;
  if ( a3 + 1 == *(_QWORD *)(a2 + 32) )
    goto LABEL_16;
  v6 = *(_QWORD *)(a2 + 24);
  v7 = 80LL * v4;
  v8 = v6 + 80LL * a3;
  v9 = v7 + v6;
  v10 = *(_DWORD *)(v8 + 56);
  if ( (unsigned int)(v10 - 3) <= 1 )
  {
    v58 = a3 + 1;
    v16 = sub_64880((_QWORD *)(a1 + 200));
    v4 = v58;
    if ( v16 )
    {
      v17 = *(_QWORD *)(a1 + 256);
      if ( v17 && a3 == *(_DWORD *)(*(_QWORD *)(a1 + 248) + 4 * v17 - 4) )
      {
        if ( *(_DWORD *)(a1 + 64) != 3 )
        {
          *(_QWORD *)(a1 + 256) = v17 - 1;
          goto LABEL_16;
        }
        if ( v17 == *(_QWORD *)(a1 + 280) )
        {
LABEL_127:
          v49 = v17 - 1;
          *(_QWORD *)(a1 + 256) = v49;
          *(_QWORD *)(a1 + 280) = v49;
          goto LABEL_16;
        }
LABEL_133:
        sub_F5410(a4);
      }
      v46 = *(_QWORD *)(a1 + 280);
      if ( v46 && a3 == *(_DWORD *)(*(_QWORD *)(a1 + 272) + 4 * v46 - 4) )
      {
        if ( *(_DWORD *)(a1 + 64) != 3 )
        {
          *(_QWORD *)(a1 + 280) = v46 - 1;
          goto LABEL_16;
        }
        if ( v17 == v46 )
          goto LABEL_127;
        goto LABEL_133;
      }
LABEL_73:
      v41 = *(_DWORD *)(v8 + 56);
      if ( *(_DWORD *)(v9 + 56) != v41 )
        goto LABEL_4;
      if ( (unsigned int)(v41 - 3) <= 1 )
      {
        tinfo_size = get_tinfo_size();
        return (unsigned int)sub_D6360(a1 + 64, (int *)(v8 + 56), tinfo_size, v110, 1) ^ 1;
      }
LABEL_5:
      v85 = v4;
      v59 = *(_DWORD *)(a1 + 136);
      v57 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL) + 80LL);
      get_tinfo_size();
      v12 = 0;
      v13 = v85;
      v14 = 2 * v57;
      if ( (v57 & 0x40000000) == 0 )
      {
        v15 = v59;
        if ( v57 > 0 )
        {
          if ( v59 > 0x10 )
          {
LABEL_8:
            if ( v15 != 176 && v15 != 256 )
              goto LABEL_10;
LABEL_82:
            v22 = v12 - 1;
            v23 = *(_DWORD *)(a1 + 136);
            v24 = *(_QWORD *)(v8 + 64);
            if ( (v12 & (v12 - 1)) != 0 )
              goto LABEL_175;
            if ( v14 >= v12 )
            {
              if ( v57 > v12 )
              {
                if ( v23 > 0x10 )
                {
LABEL_86:
                  v26 = v12 - 1;
                  if ( v23 == 176 || v23 == 256 )
                    goto LABEL_38;
                  goto LABEL_36;
                }
LABEL_108:
                v105 = v14;
                v81 = v24;
                v70 = v12;
                v94 = v13;
                v48 = getinf();
                v14 = v105;
                v24 = v81;
                v12 = v70;
                v13 = v94;
                v23 = v48;
                goto LABEL_86;
              }
              if ( v23 > 0x10 )
                goto LABEL_90;
              goto LABEL_106;
            }
LABEL_30:
            if ( v23 <= 0x10 )
            {
              v79 = v14;
              v68 = v24;
              v92 = v13;
              v109 = v22;
              v107 = v23;
              v103 = v12;
              v45 = getinf();
              v13 = v92;
              v24 = v68;
              v14 = v79;
              if ( v45 == 176 || v45 == 256 )
              {
                if ( v57 > v79 )
                {
LABEL_107:
                  v12 = v14;
                  goto LABEL_108;
                }
LABEL_105:
                v12 = v14;
LABEL_106:
                v104 = v14;
                v80 = v24;
                v69 = v12;
                v93 = v13;
                v47 = getinf();
                v14 = v104;
                v24 = v80;
                v12 = v69;
                v13 = v93;
                v23 = v47;
LABEL_90:
                if ( v23 == 176 || v23 == 256 )
                {
LABEL_93:
                  v12 = v57;
                  v26 = v57 - 1;
                  goto LABEL_38;
                }
                goto LABEL_92;
              }
              v12 = v103;
              v23 = v107;
              v22 = v109;
            }
            else if ( v23 == 256 || v23 == 176 )
            {
              v12 = v57;
              if ( v57 > v14 )
                v12 = v14;
              v26 = v12 - 1;
LABEL_38:
              if ( *(_QWORD *)(v9 + 64) != ((v24 + v26) & -v12) )
              {
                v28 = a3 + 2;
                if ( a3 + 2 == *(_QWORD *)(a2 + 32) || *(_DWORD *)(v8 + 4) > v57 || *(_DWORD *)(v9 + 4) != v57 )
                  goto LABEL_4;
                v29 = v59;
                if ( v59 <= 0x10 )
                {
                  v84 = v14;
                  v97 = v13;
                  v29 = getinf();
                  v14 = v84;
                  v28 = a3 + 2;
                  v13 = v97;
                }
                v77 = v14;
                v66 = v28;
                v90 = v13;
                if ( v29 == 176 )
                  goto LABEL_4;
                if ( v29 == 256 )
                  goto LABEL_4;
                if ( !(unsigned __int8)getinf_flag() )
                  goto LABEL_4;
                v30 = *(_DWORD *)(a2 + 8);
                v31 = v90;
                v32 = v66;
                if ( (*(_BYTE *)(a2 + 281) & 1) != 0 && a3 >= v30 )
                  goto LABEL_4;
                v67 = v77;
                v91 = v32;
                if ( v32 == v30 )
                  goto LABEL_4;
                v78 = v31;
                if ( v31 == v30 )
                  goto LABEL_4;
                v33 = sub_11CC50((unsigned __int8 *)v9, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL));
                v34 = v91;
                if ( v33 )
                  v34 = v78;
                if ( !(unsigned __int8)sub_F2E10(a2, *(const __m128i **)(a1 + 16), *(_QWORD *)(a1 + 24), v34) )
                  goto LABEL_4;
                v35 = *(_QWORD *)(a2 + 24) + v7;
                if ( *(_DWORD *)(v35 + 4) != v67 )
                  goto LABEL_4;
                get_tinfo_size();
                v36 = 0;
                v37 = v67;
                if ( v67 >= 0 )
                {
                  if ( v57 > 0 )
                  {
                    if ( v59 > 0x10 )
                    {
LABEL_58:
                      if ( v59 != 176 && v59 != 256 )
                        goto LABEL_60;
LABEL_63:
                      v39 = *(_DWORD *)(a1 + 136);
                      v40 = *(_QWORD *)(v8 + 64);
                      if ( (v36 & (v36 - 1)) == 0 )
                      {
                        if ( v37 >= v36 )
                        {
                          if ( v57 > v36 )
                          {
                            if ( v39 > 0x10 )
                            {
LABEL_67:
                              if ( v39 != 176 && v39 != 256 )
                                goto LABEL_69;
                              goto LABEL_146;
                            }
LABEL_167:
                            v39 = getinf();
                            goto LABEL_67;
                          }
                          if ( v39 > 0x10 )
                          {
LABEL_152:
                            if ( v39 != 176 && v39 != 256 )
                              goto LABEL_69;
LABEL_72:
                            LOBYTE(v11) = ((v40 + v57 - 1) & -v57) == *(_QWORD *)(v35 + 64);
                            return v11;
                          }
LABEL_174:
                          v39 = getinf();
                          goto LABEL_152;
                        }
LABEL_139:
                        if ( v39 <= 0x10 )
                        {
                          v62 = v37;
                          v55 = getinf();
                          v37 = v62;
                          if ( v55 == 176 || v55 == 256 )
                          {
                            if ( v57 > v62 )
                              goto LABEL_166;
                            goto LABEL_173;
                          }
                        }
                        else if ( v39 == 176 || v39 == 256 )
                        {
                          if ( v57 <= v37 )
                            v37 = v57;
                          v57 = v37;
                          goto LABEL_72;
                        }
                        v61 = v37;
                        if ( (unsigned __int8)getinf_flag() )
                        {
LABEL_146:
                          v57 = v36;
                          goto LABEL_72;
                        }
                        v37 = v61;
                        if ( v57 > v61 )
                        {
                          if ( v39 > 0x10 )
                          {
                            v36 = v61;
LABEL_69:
                            if ( !(unsigned __int8)getinf_flag() )
                              v36 = v57;
                            v57 = v36;
                            goto LABEL_72;
                          }
LABEL_166:
                          v36 = v37;
                          goto LABEL_167;
                        }
                        if ( v39 > 0x10 )
                        {
                          v36 = v61;
                          goto LABEL_69;
                        }
LABEL_173:
                        v36 = v37;
                        goto LABEL_174;
                      }
LABEL_175:
                      sub_F53F0();
                    }
LABEL_169:
                    v100 = v37;
                    v54 = getinf();
                    v37 = v100;
                    v59 = v54;
                    goto LABEL_58;
                  }
                  if ( v59 > 0x10 )
                    goto LABEL_148;
                  goto LABEL_165;
                }
                if ( v59 <= 0x10 )
                {
                  v52 = getinf();
                  v37 = v67;
                  if ( v52 == 176 || v52 == 256 )
                  {
                    if ( v57 > v67 )
                    {
LABEL_168:
                      v36 = v37;
                      goto LABEL_169;
                    }
LABEL_164:
                    v36 = v37;
LABEL_165:
                    v99 = v37;
                    v53 = getinf();
                    v37 = v99;
                    v59 = v53;
LABEL_148:
                    if ( v59 == 176 || v59 == 256 )
                    {
LABEL_62:
                      v36 = v57;
                      goto LABEL_63;
                    }
                    goto LABEL_150;
                  }
                }
                else if ( v59 == 176 || v59 == 256 )
                {
                  v51 = v57;
                  if ( v57 > v67 )
                    v51 = v67;
                  v36 = v51;
                  goto LABEL_63;
                }
                v98 = v37;
                v50 = getinf_flag();
                v37 = v98;
                if ( v50 )
                {
                  v39 = *(_DWORD *)(a1 + 136);
                  v40 = *(_QWORD *)(v8 + 64);
                  goto LABEL_139;
                }
                if ( v57 > v98 )
                {
                  if ( v59 > 0x10 )
                  {
                    v36 = v98;
LABEL_60:
                    v60 = v37;
                    goto LABEL_61;
                  }
                  goto LABEL_168;
                }
                if ( v59 > 0x10 )
                {
                  v36 = v98;
LABEL_150:
                  v60 = v37;
LABEL_61:
                  v38 = getinf_flag();
                  v37 = v60;
                  if ( v38 )
                    goto LABEL_63;
                  goto LABEL_62;
                }
                goto LABEL_164;
              }
LABEL_16:
              LOBYTE(v11) = 1;
              return v11;
            }
            v106 = v22;
            v101 = v14;
            v75 = v24;
            v64 = v12;
            v88 = v13;
            v108 = v23;
            v25 = getinf_flag();
            v13 = v88;
            v12 = v64;
            v24 = v75;
            v14 = v101;
            v26 = v106;
            if ( v25 )
              goto LABEL_38;
            if ( v57 > v101 )
            {
              v12 = v101;
              if ( v108 > 0x10 )
              {
LABEL_36:
                v102 = v14;
                v76 = v24;
                v65 = v12;
                v89 = v13;
                goto LABEL_37;
              }
              goto LABEL_107;
            }
            v12 = v101;
            if ( v108 > 0x10 )
            {
LABEL_92:
              v102 = v14;
              v76 = v24;
              v65 = v12;
              v89 = v13;
LABEL_37:
              v27 = getinf_flag();
              v12 = v65;
              v13 = v89;
              v24 = v76;
              v14 = v102;
              v26 = v65 - 1;
              if ( v27 )
                goto LABEL_38;
              goto LABEL_93;
            }
            goto LABEL_105;
          }
LABEL_112:
          v82 = v14;
          v71 = v12;
          v95 = v13;
          v15 = getinf();
          v14 = v82;
          v12 = v71;
          v13 = v95;
          goto LABEL_8;
        }
        if ( v59 > 0x10 )
          goto LABEL_77;
        goto LABEL_115;
      }
      if ( v59 <= 0x10 )
      {
        v44 = getinf();
        v13 = v85;
        v14 = 2 * v57;
        if ( v44 == 176 || v44 == 256 )
        {
          if ( v57 > v14 )
          {
LABEL_111:
            v12 = v14;
            goto LABEL_112;
          }
LABEL_114:
          v12 = v14;
LABEL_115:
          v83 = v14;
          v72 = v12;
          v96 = v13;
          v15 = getinf();
          v14 = v83;
          v12 = v72;
          v13 = v96;
LABEL_77:
          if ( v15 == 176 || v15 == 256 )
          {
LABEL_81:
            v12 = v57;
            goto LABEL_82;
          }
          goto LABEL_79;
        }
      }
      else if ( v59 == 176 || v59 == 256 )
      {
        v12 = v57;
        if ( v57 > v14 )
          v12 = 2 * v57;
        goto LABEL_82;
      }
      v74 = v14;
      v87 = v13;
      v21 = getinf_flag();
      v13 = v87;
      v12 = 0;
      v14 = v74;
      v22 = -1;
      if ( v21 )
      {
        v23 = *(_DWORD *)(a1 + 136);
        v24 = *(_QWORD *)(v8 + 64);
        goto LABEL_30;
      }
      if ( v57 > v74 )
      {
        v12 = v74;
        if ( v59 > 0x10 )
        {
LABEL_10:
          v73 = v14;
          v63 = v12;
          v86 = v13;
          goto LABEL_80;
        }
        goto LABEL_111;
      }
      v12 = v74;
      if ( v59 > 0x10 )
      {
LABEL_79:
        v73 = v14;
        v63 = v12;
        v86 = v13;
LABEL_80:
        v43 = getinf_flag();
        v13 = v86;
        v12 = v63;
        v14 = v73;
        if ( v43 )
          goto LABEL_82;
        goto LABEL_81;
      }
      goto LABEL_114;
    }
    if ( (*(_DWORD *)(a1 + 64) & 0xFFFFFFFB) != 2 )
      goto LABEL_73;
    v18 = *(_QWORD *)(a1 + 80);
    if ( !v18 )
      goto LABEL_73;
    v19 = *(_QWORD *)(a1 + 256);
    v20 = *(_QWORD *)(a1 + 280);
    if ( v18 == v19 && *(_DWORD *)(*(_QWORD *)(a1 + 248) + 4 * v18 - 4) != -1 )
    {
      if ( !v20 )
        goto LABEL_73;
      if ( a3 == *(_DWORD *)(*(_QWORD *)(a1 + 272) + 4 * v20 - 4) )
      {
        *(_QWORD *)(a1 + 280) = v20 - 1;
        goto LABEL_16;
      }
    }
    if ( v18 == v20
      && *(_DWORD *)(*(_QWORD *)(a1 + 272) + 4 * v18 - 4) != -1
      && v19
      && a3 == *(_DWORD *)(*(_QWORD *)(a1 + 248) + 4 * v19 - 4) )
    {
      *(_QWORD *)(a1 + 256) = v19 - 1;
      goto LABEL_16;
    }
    goto LABEL_73;
  }
  if ( v10 == *(_DWORD *)(v9 + 56) )
    goto LABEL_5;
LABEL_4:
  LOBYTE(v11) = 0;
  return v11;
}

