unsigned __int64 __fastcall sub_E9C0(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // r10d
  int *v7; // r15
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // rbp
  const char *v11; // rsi
  const char *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v18; // r14
  const char *v19; // rcx
  __int64 v20; // rax
  const char *v21; // rdx
  bool v22; // zf
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // rax
  int v26; // ebx
  _QWORD *v27; // r9
  __int64 v28; // r13
  int v29; // r15d
  __int64 v30; // r12
  __int64 v31; // rax
  const char *v32; // rdi
  const char *v33; // rax
  int v34; // r11d
  int *v35; // r12
  __int64 v36; // r15
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rbx
  int *v40; // rdx
  __int64 v41; // rax
  int v42; // r15d
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  const char *v46; // rcx
  __int64 v47; // rax
  const char *v48; // rdx
  int *v49; // r12
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rbp
  __int64 v53; // r11
  int v54; // ebx
  int *v55; // rax
  int v56; // r14d
  __int64 v57; // rdi
  __int64 v58; // rsi
  int v59; // r15d
  __int64 v60; // r14
  int v61; // ebx
  __int64 v62; // r12
  const char *v63; // rsi
  const char *v64; // rdi
  int v65; // ebp
  int v66; // ebx
  int v67; // ebx
  const char *v68; // rdi
  int v69; // r12d
  const char *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rbx
  int v75; // r10d
  __int64 v76; // r9
  __int64 v77; // rbx
  __int64 v78; // r14
  int v79; // [rsp+0h] [rbp-10E8h]
  int v80; // [rsp+0h] [rbp-10E8h]
  int v81; // [rsp+0h] [rbp-10E8h]
  int v82; // [rsp+0h] [rbp-10E8h]
  int v83; // [rsp+0h] [rbp-10E8h]
  int v84; // [rsp+0h] [rbp-10E8h]
  int v85; // [rsp+8h] [rbp-10E0h]
  int v86; // [rsp+8h] [rbp-10E0h]
  __int64 v87; // [rsp+8h] [rbp-10E0h]
  __int64 v88; // [rsp+8h] [rbp-10E0h]
  int v89; // [rsp+10h] [rbp-10D8h]
  _QWORD *v90; // [rsp+10h] [rbp-10D8h]
  __int64 v91; // [rsp+10h] [rbp-10D8h]
  int *v92; // [rsp+18h] [rbp-10D0h]
  __int64 v93; // [rsp+20h] [rbp-10C8h]
  __int64 v94; // [rsp+28h] [rbp-10C0h]
  __int64 v95; // [rsp+30h] [rbp-10B8h]
  __int64 v96; // [rsp+38h] [rbp-10B0h]
  __int64 v97; // [rsp+40h] [rbp-10A8h]
  int *v98; // [rsp+48h] [rbp-10A0h]
  int v99; // [rsp+50h] [rbp-1098h]
  __int64 v100; // [rsp+58h] [rbp-1090h]
  int v103; // [rsp+70h] [rbp-1078h]
  __int64 v104; // [rsp+78h] [rbp-1070h]
  __int64 v106; // [rsp+88h] [rbp-1060h]
  __int64 v107; // [rsp+90h] [rbp-1058h]
  int v108; // [rsp+98h] [rbp-1050h]
  _BYTE v109[4104]; // [rsp+A0h] [rbp-1048h] BYREF
  unsigned __int64 v110; // [rsp+10A8h] [rbp-40h]

  v110 = __readfsqword(0x28u);
  v3 = a3[1];
  if ( dword_21868 != (_DWORD)v3 )
    sub_E890((__int64)"internal error in append_to_exclude_file(): plen=%d, patlen=%d", v3, dword_21868);
  set_file_ext(v109, 4097, qword_21870, "exc");
  v4 = qfopen(v109, "a");
  v97 = v4;
  if ( v4 )
  {
    if ( dword_20388 )
    {
      v24 = v4;
      echsize(v4, qword_21808);
      qfclose(v24);
      v25 = qfopen(v109, "a");
      v97 = v25;
      if ( !byte_21858 )
        sub_B430(
          v25,
          (__int64)";--------- (delete these lines to allow sigmake to read this file)\n"
                   "; add '+' at the start of a line to select a module\n"
                   "; add '-' if you are not sure about the selection\n"
                   "; do nothing if you want to exclude all modules\n");
      dword_20388 = 0;
    }
    sub_B430(v97, (__int64)"\n");
    v5 = a2[1];
    v103 = v5;
    v6 = v5;
    if ( byte_21859 )
    {
      v80 = v5;
      sub_B430(v97, (__int64)"\n\n\n");
      sub_B430(v97, (__int64)";;; ==================================================================================\n");
      sub_B430(v97, (__int64)";;; Pattern: ");
      sub_B4F0(v97, a3);
      sub_B430(v97, (__int64)"\n");
      sub_B430(v97, (__int64)";;; ==================================================================================\n");
      sub_B430(v97, (__int64)";;; Summary of _all_ the leaves for this pattern:\n");
      if ( v103 <= 0 )
      {
        sub_B430(v97, (__int64)"\n");
        goto LABEL_16;
      }
      v18 = 0;
      do
      {
        v19 = "not in ";
        v20 = *(_QWORD *)a1[3] + 208LL * *(unsigned int *)(*a1 + 4LL * *(int *)(*a2 + v18));
        v21 = s1;
        v22 = (*(_BYTE *)(v20 + 200) & 1) == 0;
        v23 = *(_QWORD *)(v20 + 8);
        if ( !v22 )
          v19 = "";
        if ( *(_QWORD *)(v23 + 8) )
          v21 = *(const char **)v23;
        v18 += 4;
        sub_B430(v97, (__int64)";;;   %-50s\t(%scollision)\n", v21, v19);
      }
      while ( 4LL * (unsigned int)(v103 - 1) + 4 != v18 );
      sub_B430(v97, (__int64)"\n");
      v6 = v80;
      if ( v103 != 1 )
        goto LABEL_6;
      goto LABEL_31;
    }
    if ( (int)v5 > 1 )
    {
LABEL_6:
      v89 = v6;
      v7 = (int *)*a2;
      v8 = 1;
      v9 = *(_QWORD *)a1[3];
      v10 = *a1;
      while ( 1 )
      {
        v79 = v8;
        v13 = v9 + 208LL * *(unsigned int *)(v10 + 4LL * v7[v8]);
        if ( (*(_BYTE *)(v13 + 200) & 1) == 0 )
          goto LABEL_9;
        v14 = *(_QWORD *)(v13 + 8);
        v15 = *(unsigned int *)(v10 + 4LL * *v7);
        v16 = *(_QWORD *)(v9 + 208 * v15 + 8);
        if ( *(_QWORD *)(v14 + 8) )
        {
          v11 = *(const char **)v14;
          v12 = s1;
          if ( !*(_QWORD *)(v16 + 8) )
            goto LABEL_8;
          goto LABEL_14;
        }
        if ( !*(_QWORD *)(v16 + 8) )
          break;
        v11 = s1;
LABEL_14:
        v12 = *(const char **)v16;
LABEL_8:
        if ( !strcmp(v12, v11) )
          break;
LABEL_9:
        if ( (unsigned int)(v103 - 2) + 2LL == ++v8 )
        {
          v6 = v89;
          v26 = v79 + 1;
          goto LABEL_30;
        }
      }
      v34 = v8;
      v35 = v7;
      v36 = v15;
      v37 = v9;
      v38 = v10;
      v39 = 1;
      v104 = (unsigned int)(v103 - 1);
      v40 = v35;
      v41 = v36;
      v42 = v34;
      while ( 1 )
      {
        v44 = v37 + 208 * v41;
        if ( (*(_BYTE *)(v44 + 200) & 1) != 0 )
        {
          v45 = *(_QWORD *)(v44 + 176);
          v46 = s1;
          if ( *(_QWORD *)(v45 + 8) )
            v46 = *(const char **)v45;
          v47 = *(_QWORD *)(v44 + 8);
          v48 = s1;
          if ( *(_QWORD *)(v47 + 8) )
            v48 = *(const char **)v47;
          sub_B430(v97, (__int64)";%s (%s)\n", v48, v46);
          v38 = *a1;
          v40 = (int *)*a2;
          v37 = *(_QWORD *)a1[3];
        }
        if ( v103 == v39 )
          break;
        v43 = v40[v39++];
        v41 = *(unsigned int *)(v38 + 4 * v43);
      }
      v108 = v42;
      v6 = v89;
      v49 = v40;
      v50 = 0;
LABEL_50:
      v52 = v37 + 208LL * *(unsigned int *)(v38 + 4LL * v49[v50]);
      if ( (*(_BYTE *)(v52 + 200) & 1) == 0 )
      {
LABEL_48:
        v51 = v50 + 1;
        if ( v104 == v50 )
          goto LABEL_76;
        goto LABEL_49;
      }
      v107 = *(_QWORD *)(v52 + 16);
      v106 = *(_QWORD *)(v52 + 8);
      if ( (int)v107 <= 1 )
      {
        v66 = 1;
        goto LABEL_79;
      }
      v100 = v37 + 208LL * *(unsigned int *)(v38 + 4LL * v49[v50]);
      v53 = *(_QWORD *)(v52 + 8) + 64LL;
      v54 = 1;
      v98 = v49 + 1;
      while ( 2 )
      {
        v99 = v54;
        v55 = v98;
        v56 = 1;
        v96 = v53;
LABEL_55:
        if ( v56 != (_DWORD)v50 )
        {
          v57 = v37 + 208LL * *(unsigned int *)(v38 + 4LL * *v55);
          if ( (*(_BYTE *)(v57 + 200) & 1) != 0 )
          {
            v58 = *(_QWORD *)(v57 + 16);
            v59 = v58;
            if ( (int)v58 > 0 )
            {
              v86 = v56;
              v82 = v6;
              v60 = *(_QWORD *)(v57 + 8);
              v91 = v50;
              v61 = 0;
              v62 = *(_QWORD *)(v96 + 8);
              v92 = v55;
              v93 = v37;
              v94 = v38;
              v95 = *(_QWORD *)(v57 + 16);
              while ( *(_QWORD *)(v60 + 8) )
              {
                v63 = *(const char **)v60;
                v64 = s1;
                if ( v62 )
                  goto LABEL_65;
LABEL_60:
                if ( !strcmp(v64, v63) )
                  goto LABEL_66;
                ++v61;
                v60 += 64;
                if ( v59 == v61 )
                {
                  v6 = v82;
                  v50 = v91;
                  v56 = v86 + 1;
                  v37 = v93;
                  v38 = v94;
                  v55 = v92 + 1;
                  if ( v82 == v86 + 1 )
                  {
LABEL_78:
                    v66 = v99;
                    v52 = v100;
LABEL_79:
                    if ( (_DWORD)v107 != v66 )
                      v106 += (__int64)v66 << 6;
LABEL_71:
                    v67 = *(unsigned __int16 *)(v52 + 96);
                    v68 = s1;
                    v69 = *(unsigned __int8 *)(v52 + 188);
                    if ( *(_QWORD *)(v106 + 8) )
                      v68 = *(const char **)v106;
                    v87 = v50;
                    v83 = v6;
                    v70 = sub_9190(v68);
                    sub_B430(v97, (__int64)"%-50s\t%02X %04X ", v70, v69, v67);
                    sub_B4F0(v97, a3);
                    v74 = *(_QWORD *)(v52 + 112);
                    v75 = v83;
                    v76 = v87;
                    if ( (int)v74 > 0 )
                    {
                      v77 = (unsigned int)(v74 - 1);
                      v78 = 0;
                      sub_B430(v97, (__int64)" (", v71, v72, v73, v87);
                      while ( 1 )
                      {
                        if ( v78 )
                          sub_B430(v97, (__int64)",");
                        sub_B430(
                          v97,
                          (__int64)"%04X:%02X",
                          *(_DWORD *)(*(_QWORD *)(v52 + 104) + 8 * v78),
                          *(unsigned __int8 *)(*(_QWORD *)(v52 + 104) + 8 * v78 + 4));
                        if ( v77 == v78 )
                          break;
                        ++v78;
                      }
                      sub_B430(v97, (__int64)")");
                      v75 = v83;
                      v76 = v87;
                    }
                    v88 = v76;
                    v84 = v75;
                    sub_B430(v97, (__int64)"\n");
                    v6 = v84;
                    v50 = v88;
                    if ( !byte_21859 )
                      goto LABEL_48;
                    sub_B580(v97, v52);
                    v6 = v84;
                    v51 = v88 + 1;
                    if ( v104 == v88 )
                    {
LABEL_76:
                      v26 = v108;
                      goto LABEL_30;
                    }
LABEL_49:
                    v50 = v51;
                    v49 = (int *)*a2;
                    v38 = *a1;
                    v37 = *(_QWORD *)a1[3];
                    goto LABEL_50;
                  }
                  goto LABEL_55;
                }
              }
              if ( !v62 )
              {
LABEL_66:
                v6 = v82;
                v56 = v86;
                v65 = v61;
                v50 = v91;
                v55 = v92;
                v37 = v93;
                v38 = v94;
                LODWORD(v58) = v95;
                goto LABEL_67;
              }
              v63 = s1;
LABEL_65:
              v64 = *(const char **)v96;
              goto LABEL_60;
            }
            v65 = 0;
LABEL_67:
            if ( (_DWORD)v58 != v65 )
            {
              v66 = v99;
              if ( v6 == v56 )
              {
                v52 = v100;
                goto LABEL_79;
              }
              v54 = v99 + 1;
              v53 = v96 + 64;
              if ( (_DWORD)v107 == v99 + 1 )
              {
                v52 = v100;
                goto LABEL_71;
              }
              continue;
            }
          }
        }
        break;
      }
      ++v56;
      ++v55;
      if ( v6 == v56 )
        goto LABEL_78;
      goto LABEL_55;
    }
    v26 = 1;
LABEL_30:
    if ( v103 == v26 )
    {
LABEL_31:
      v27 = a2;
      v28 = 0;
      v29 = v6;
      do
      {
        v30 = *(_QWORD *)a1[3] + 208LL * *(unsigned int *)(*a1 + 4LL * *(int *)(*v27 + 4 * v28));
        if ( (*(_BYTE *)(v30 + 200) & 1) != 0 )
        {
          v31 = *(_QWORD *)(v30 + 8);
          v32 = s1;
          if ( *(_QWORD *)(v31 + 8) )
            v32 = *(const char **)v31;
          v90 = v27;
          v85 = *(unsigned __int8 *)(v30 + 188);
          v81 = *(unsigned __int16 *)(v30 + 96);
          v33 = sub_9190(v32);
          sub_B430(v97, (__int64)"%-50s\t%02X %04X ", v33, v85, v81);
          sub_B4F0(v97, a3);
          sub_B430(v97, (__int64)"\n");
          v27 = v90;
          if ( byte_21859 )
          {
            sub_B580(v97, v30);
            v27 = v90;
          }
        }
        ++v28;
      }
      while ( v29 > (int)v28 );
    }
  }
LABEL_16:
  qfclose(v97);
  return v110 - __readfsqword(0x28u);
}

