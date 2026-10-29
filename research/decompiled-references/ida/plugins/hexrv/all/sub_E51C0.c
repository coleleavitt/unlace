unsigned __int64 __fastcall sub_E51C0(_QWORD *a1, __int64 a2, char a3)
{
  _QWORD *v4; // r12
  __int64 v5; // rax
  char op_tinfo; // r13
  char v9; // al
  __int64 v10; // r13
  __int64 v11; // rsi
  __int64 flags; // rax
  unsigned __int64 v13; // rax
  char *v14; // rdx
  int v15; // eax
  int v16; // edx
  __int64 v17; // rcx
  char does_return; // al
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  bool v23; // zf
  char v24; // al
  int v25; // eax
  __int64 v26; // rsi
  __int64 v27; // rdi
  int v28; // r8d
  int v29; // r9d
  _BYTE *v30; // rsi
  int v31; // eax
  __int64 v32; // rax
  _QWORD *v33; // rbx
  __int64 v34; // r15
  int v35; // r9d
  unsigned __int64 v36; // r13
  char *v37; // rsi
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  char *v40; // r15
  unsigned int v41; // eax
  int v42; // edx
  char v43; // al
  int v44; // edx
  char v45; // al
  __int64 v46; // rax
  int v47; // ecx
  int v48; // r9d
  __int64 v49; // r12
  int v50; // r13d
  __int64 v51; // rsi
  int v52; // ecx
  char *v53; // r15
  int aflags; // eax
  __int64 v55; // rax
  int v56; // eax
  int v57; // edx
  __int64 v58; // r13
  __int64 v59; // rbx
  _QWORD *v60; // r12
  const char *v61; // r8
  __int64 (*v62)(); // rdx
  __int64 (*v63)(); // rax
  char *v64; // rdi
  __int64 v65; // r12
  __int64 v66; // r14
  char *v67; // rbx
  char *v68; // rdi
  __int64 v69; // r12
  __int64 v70; // rbx
  char *v71; // r15
  char v72; // dl
  __int64 v73; // rax
  char v74; // al
  unsigned __int64 v75; // rcx
  const char *v76; // r13
  _BYTE *v77; // rsi
  size_t v78; // r9
  __int64 v79; // r8
  char *v80; // rax
  __int64 first_dref_from; // rax
  void **p_src; // [rsp+0h] [rbp-100h]
  __int64 v83; // [rsp+8h] [rbp-F8h]
  char v84; // [rsp+23h] [rbp-DDh]
  int v85; // [rsp+24h] [rbp-DCh]
  __int64 v86; // [rsp+28h] [rbp-D8h]
  __int64 v87; // [rsp+28h] [rbp-D8h]
  int v88; // [rsp+30h] [rbp-D0h]
  size_t v89; // [rsp+30h] [rbp-D0h]
  int v91; // [rsp+38h] [rbp-C8h]
  __int64 v92; // [rsp+38h] [rbp-C8h]
  char v93[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v94; // [rsp+48h] [rbp-B8h] BYREF
  char v95[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 tinfo_property; // [rsp+58h] [rbp-A8h] BYREF
  void *src; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v98; // [rsp+68h] [rbp-98h]
  __int64 v99; // [rsp+78h] [rbp-88h]
  __int64 v100; // [rsp+80h] [rbp-80h]
  __int64 v101; // [rsp+88h] [rbp-78h]
  __int128 v102; // [rsp+90h] [rbp-70h]
  __int64 v103; // [rsp+A0h] [rbp-60h]
  __int128 v104; // [rsp+A8h] [rbp-58h]
  char v105; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v106; // [rsp+C8h] [rbp-38h]

  v4 = a1 + 37;
  v5 = *(_QWORD *)(a2 + 24);
  v106 = __readfsqword(0x28u);
  a1[38] = v5;
  clear_tinfo_t();
  if ( !(unsigned __int8)sub_E2C70(a1[2], a1 + 40, a2, a3) )
    return v106 - __readfsqword(0x28u);
  get_ea_name();
  v88 = *(_DWORD *)a2;
  v84 = *(_DWORD *)a2 != 56;
  op_tinfo = get_op_tinfo();
  v9 = 0;
  if ( !op_tinfo )
  {
    if ( !(unsigned __int8)sub_37BE20(a1[2], a1[40], v4, 2) )
    {
LABEL_10:
      if ( (*((_BYTE *)a1 + 356) & 2) == 0 )
        return v106 - __readfsqword(0x28u);
      if ( v88 == 56 )
      {
        v26 = a1[1];
        if ( *(_QWORD *)(a2 + 24) != *(_QWORD *)(v26 + 40) || *(char *)v26 >= 0 || !*(_BYTE *)(v26 + 328) )
          goto LABEL_18;
      }
      else
      {
        if ( (getinf() & 0xF) == 1 )
          *((_BYTE *)a1 + 365) = 1;
        v11 = a1[1];
        if ( *(_QWORD *)(v11 + 40) != *(_QWORD *)(a2 + 24) || *(char *)v11 >= 0 || !*(_BYTE *)(v11 + 328) )
        {
          flags = get_flags_ex();
          if ( (flags & 0x600) == 0x400 && (flags & 0xF00000) == 0x500000 )
          {
            first_dref_from = get_first_dref_from();
            if ( (unsigned __int8)sub_37BE20(a1[2], first_dref_from, v4, 2) )
              goto LABEL_53;
          }
LABEL_18:
          v13 = a1[4];
          if ( v13 <= 1 )
            goto LABEL_19;
          src = nullptr;
          v98 = 0;
          if ( (int)demangle_name() <= 0 )
          {
LABEL_183:
            v13 = a1[4];
LABEL_19:
            v14 = (char *)s1;
            if ( v13 )
              v14 = (char *)a1[3];
            v15 = sub_DDAC0(a1, *(_QWORD *)(*a1 + 56LL), v14);
            v16 = *((_DWORD *)a1 + 87);
            *((_DWORD *)a1 + 90) = v15;
            if ( v16 < 0 || (v17 = a1[2], v16 >= *(_DWORD *)(v17 + 656)) )
            {
              *((_DWORD *)a1 + 90) = 0;
            }
            else if ( v15 )
            {
              BYTE4(v83) = 0;
              if ( a1[40] != -1 )
              {
                does_return = func_does_return();
                v17 = a1[2];
                BYTE4(v83) = does_return ^ 1;
              }
              sub_326FC0(v93, *(_QWORD *)(v17 + 112), *(unsigned int *)(*(_QWORD *)(v17 + 112) + 80LL));
              if ( !a1[26] )
                goto LABEL_72;
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[21] + 112LL) + 200LL))(
                     *(_QWORD *)(a1[21] + 112LL),
                     *(unsigned int *)a1[25]) )
              {
                v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[21] + 112LL) + 32LL))(
                        *(_QWORD *)(a1[21] + 112LL),
                        *(unsigned int *)a1[25]);
                if ( a1[26] <= 1u || *(_DWORD *)(a1[25] + 4LL) - *(_DWORD *)a1[25] >= (unsigned int)v19 )
                {
LABEL_31:
                  if ( v19 > 4 )
                    goto LABEL_72;
                  v20 = a1[21];
                  if ( *(_DWORD *)(*(_QWORD *)(v20 + 8) + 4LL) == 13 || !a1[26] )
                    goto LABEL_37;
                  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v20 + 112) + 200LL))(
                         *(_QWORD *)(v20 + 112),
                         *(unsigned int *)a1[25]) )
                  {
                    v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[21] + 112LL) + 32LL))(
                            *(_QWORD *)(a1[21] + 112LL),
                            *(unsigned int *)a1[25]);
                    if ( a1[26] <= 1u || *(_DWORD *)(a1[25] + 4LL) - *(_DWORD *)a1[25] >= (unsigned int)v31 )
                    {
LABEL_71:
                      if ( v31 > 7 )
                      {
LABEL_37:
                        v21 = 9;
LABEL_73:
                        v94 = v21;
                        if ( (a1[11] & 0xFFFFFFFB) != 2 )
                          goto LABEL_74;
                        v72 = sub_60500(a1 + 31);
                        v73 = 0;
                        if ( !v72 )
                          v73 = (int)(sub_60880(a1 + 31) + 1);
                        if ( a1[16] == v73 )
                        {
                          v33 = a1 + 29;
                          v74 = sub_60500(a1 + 29);
                          v75 = 0;
                          if ( !v74 )
                            v75 = (int)(sub_60880(a1 + 29) + 1);
                          v32 = a1[21];
                          if ( v75 < a1[13] )
                          {
                            sub_326EA0(v95, *(_QWORD *)(v32 + 112), *(unsigned int *)(*(_QWORD *)(v32 + 112) + 80LL));
LABEL_76:
                            v91 = 0;
                            if ( !(unsigned __int8)sub_60500(v33) )
                              v91 = sub_60880(v33) + 1;
                            v34 = 0;
                            if ( !(unsigned __int8)sub_60500(v33) )
                              v34 = (int)(sub_60880(v33) + 1);
                            if ( !(unsigned __int8)sub_60500(a1 + 31) )
                              v34 += (int)(sub_60880(a1 + 31) + 1);
                            v35 = *((_DWORD *)a1 + 87);
                            v85 = v34;
                            src = nullptr;
                            v99 = 0;
                            v100 = 0;
                            v101 = 0;
                            v103 = 0;
                            v105 = 16;
                            v98 = 0;
                            v102 = 0;
                            v104 = 0;
                            if ( v35 <= 0 )
                            {
                              v43 = 0;
                            }
                            else
                            {
                              v36 = 0;
                              v37 = nullptr;
                              v38 = 0;
                              v39 = 0;
                              while ( 1 )
                              {
                                if ( v38 < v39 + 1 )
                                {
                                  src = (void *)qvector_reserve();
                                  v37 = (char *)src;
                                  v39 = v98;
                                }
                                v40 = &v37[80 * v39];
                                *(_DWORD *)v40 = 0;
                                *((_QWORD *)v40 + 1) = 0;
                                *((_QWORD *)v40 + 2) = 0;
                                *((_QWORD *)v40 + 5) = 0;
                                *((_QWORD *)v40 + 8) = 0;
                                *((_DWORD *)v40 + 18) = 0;
                                *(_OWORD *)(v40 + 24) = 0;
                                *((_OWORD *)v40 + 3) = 0;
                                *(_QWORD *)&v98 = v98 + 1;
                                copy_tinfo_t();
                                if ( v36 < a1[13] && *(_DWORD *)(a1[12] + 4 * v36) == *((_DWORD *)a1 + 72) )
                                {
                                  if ( BYTE4(v83) )
                                  {
                                    if ( *((_BYTE *)a1 + 292) )
                                    {
                                      v41 = a1[45] & 0xFFFFFFF0;
                                      if ( v41 == 64 || (v42 = 240, v41 == 208) )
                                        v42 = 208;
                                      *((_DWORD *)a1 + 90) = v42;
                                    }
                                  }
                                  else
                                  {
                                    *((_DWORD *)v40 + 18) |= 2u;
                                    sub_327290(&tinfo_property, *(_QWORD *)(a1[2] + 112LL), v40 + 64);
                                    copy_tinfo_t();
                                    clear_tinfo_t();
                                  }
                                }
                                if ( *((_DWORD *)a1 + 87) <= (int)++v36 )
                                  break;
                                v38 = *((_QWORD *)&v98 + 1);
                                v39 = v98;
                                v37 = (char *)src;
                              }
                              v43 = v105 & 0xF;
                            }
                            v44 = *((_DWORD *)a1 + 90);
                            if ( (v44 & 0xFFFFFF0F) != 0 || v44 == 192 )
                            {
                              v45 = v43 | 0xC0;
                            }
                            else
                            {
                              v45 = v44 | v43;
                              v44 = 0;
                            }
                            v105 = v45;
                            v46 = *a1;
                            HIDWORD(v99) = v44;
                            v86 = *(_QWORD *)(*(_QWORD *)(v46 + 480) + 112LL);
                            if ( BYTE4(v83) )
                            {
                              LODWORD(v99) = v99 | 2;
                              tinfo_property = 1;
                              copy_tinfo_t();
                              clear_tinfo_t();
                              if ( (unsigned int)(*((_DWORD *)a1 + 90) - 208) <= 0x2F && *((int *)a1 + 87) > 0 )
                              {
                                v49 = 0;
                                v50 = 0;
                                LODWORD(v83) = 0;
                                p_src = &src;
                                do
                                {
                                  v53 = (char *)src + 80 * v49;
                                  if ( v85 <= (int)v49 )
                                  {
                                    cleanup_argloc();
                                    *(_DWORD *)v53 = 1;
                                    *((_QWORD *)v53 + 1) = 0;
                                  }
                                  else
                                  {
                                    if ( (int)v49 < v91 )
                                    {
                                      v51 = v50++;
                                      v52 = *(_DWORD *)(a1[12] + 4 * v51);
                                    }
                                    else
                                    {
                                      v52 = *(_DWORD *)(a1[15] + 4LL * (int)v83);
                                      LODWORD(v83) = v83 + 1;
                                    }
                                    HIDWORD(v83) = v52;
                                    cleanup_argloc();
                                    v47 = HIDWORD(v83);
                                    *(_DWORD *)v53 = 3;
                                    *((_DWORD *)v53 + 2) = HIDWORD(v83);
                                  }
                                  ++v49;
                                }
                                while ( *((_DWORD *)a1 + 87) > (int)v49 );
                              }
                            }
                            else
                            {
                              aflags = get_aflags();
                              sub_E2B60((__int64)a1, (__int64)&src, (aflags & 0x4000000) != 0);
                            }
                            v55 = a1[21];
                            if ( *(_DWORD *)(*(_QWORD *)(v55 + 8) + 4LL) == 13 || !a1[26] )
                              goto LABEL_124;
                            if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v55 + 112) + 200LL))(
                                   *(_QWORD *)(v55 + 112),
                                   *(unsigned int *)a1[25]) )
                            {
                              v56 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[21] + 112LL) + 32LL))(
                                      *(_QWORD *)(a1[21] + 112LL),
                                      *(unsigned int *)a1[25]);
                              if ( a1[26] <= 1u || *(_DWORD *)(a1[25] + 4LL) - *(_DWORD *)a1[25] >= (unsigned int)v56 )
                              {
LABEL_116:
                                if ( v56 <= 7 )
                                {
                                  v47 = v91;
                                  v57 = v85 - v91 + ((((_BYTE)v85 - (_BYTE)v91) & 1) == 0) - 2;
                                  if ( v57 > 0 )
                                  {
                                    v58 = 80LL * v57;
                                    v59 = v58
                                        - 160
                                        - 160LL
                                        * ((v85 - v91 + (unsigned int)((((_BYTE)v85 - (_BYTE)v91) & 1) == 0) - 3) >> 1);
                                    do
                                    {
                                      v60 = (char *)src + v58;
                                      clear_tinfo_t();
                                      if ( v60[5] )
                                      {
                                        v60[6] = 0;
                                        qfree();
                                      }
                                      if ( v60[2] )
                                      {
                                        v60[3] = 0;
                                        qfree();
                                      }
                                      v58 -= 160;
                                      cleanup_argloc();
                                      memmove(v60, v60 + 10, (_BYTE *)src + 80 * v98 - (_BYTE *)v60 - 80);
                                      *(_QWORD *)&v98 = v98 - 1;
                                    }
                                    while ( v59 != v58 );
                                  }
                                }
                                goto LABEL_124;
                              }
                            }
                            else if ( a1[26] <= 1u || (unsigned int)(*(_DWORD *)(a1[25] + 4LL) - *(_DWORD *)a1[25]) > 7 )
                            {
LABEL_124:
                              v61 = s1;
                              if ( a1[4] )
                                v61 = (const char *)a1[3];
                              v62 = sub_DF330;
                              v63 = *(__int64 (**)())(*(_QWORD *)v86 + 128LL);
                              if ( v63 != sub_DF330
                                && !((unsigned __int8 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, const char *, void **, char *))v63)(
                                      v86,
                                      *a1,
                                      *(_QWORD *)(*a1 + 56LL),
                                      a1[40],
                                      v61,
                                      &src,
                                      (char *)a1 + 348)
                                || (unsigned __int64)v98 >= *(int *)(a1[2] + 656LL) )
                              {
                                if ( v103 )
                                {
                                  *(_QWORD *)&v104 = 0;
                                  qfree();
                                }
                                cleanup_argloc();
                                clear_tinfo_t();
                                v64 = (char *)src;
                                if ( src )
                                {
                                  v65 = v98;
                                  if ( (_QWORD)v98 )
                                  {
                                    v66 = 0;
                                    do
                                    {
                                      v67 = &v64[80 * v66];
                                      clear_tinfo_t();
                                      if ( *((_QWORD *)v67 + 5) )
                                      {
                                        *((_QWORD *)v67 + 6) = 0;
                                        qfree();
                                      }
                                      if ( *((_QWORD *)v67 + 2) )
                                      {
                                        *((_QWORD *)v67 + 3) = 0;
                                        qfree();
                                      }
                                      cleanup_argloc();
                                      v64 = (char *)src;
                                      ++v66;
                                    }
                                    while ( v65 != v66 );
                                  }
                                  *(_QWORD *)&v98 = 0;
                                  qfree();
                                }
                                clear_tinfo_t();
                                clear_tinfo_t();
                                clear_tinfo_t();
                                return v106 - __readfsqword(0x28u);
                              }
                              sub_EDB80(
                                (_DWORD)a1,
                                (unsigned int)&src,
                                (_DWORD)v62,
                                v47,
                                (_DWORD)v61,
                                v48,
                                (__int64)p_src,
                                v83,
                                (__int64)&v94,
                                (unsigned int)v95);
                              if ( v103 )
                              {
                                *(_QWORD *)&v104 = 0;
                                qfree();
                              }
                              cleanup_argloc();
                              clear_tinfo_t();
                              v68 = (char *)src;
                              if ( src )
                              {
                                v69 = v98;
                                if ( (_QWORD)v98 )
                                {
                                  v70 = 0;
                                  do
                                  {
                                    v71 = &v68[80 * v70];
                                    clear_tinfo_t();
                                    if ( *((_QWORD *)v71 + 5) )
                                    {
                                      *((_QWORD *)v71 + 6) = 0;
                                      qfree();
                                    }
                                    if ( *((_QWORD *)v71 + 2) )
                                    {
                                      *((_QWORD *)v71 + 3) = 0;
                                      qfree();
                                    }
                                    ++v70;
                                    cleanup_argloc();
                                    v68 = (char *)src;
                                  }
                                  while ( v69 != v70 );
                                }
                                *(_QWORD *)&v98 = 0;
                                qfree();
                              }
                              clear_tinfo_t();
                              clear_tinfo_t();
                              clear_tinfo_t();
                              goto LABEL_53;
                            }
                            v56 = round_down_power2();
                            goto LABEL_116;
                          }
                        }
                        else
                        {
LABEL_74:
                          v32 = a1[21];
                        }
                        sub_326FC0(v95, *(_QWORD *)(v32 + 112), *(unsigned int *)(*(_QWORD *)(v32 + 112) + 80LL));
                        v33 = a1 + 29;
                        goto LABEL_76;
                      }
LABEL_72:
                      v21 = 25;
                      goto LABEL_73;
                    }
                  }
                  else if ( a1[26] <= 1u || (unsigned int)(*(_DWORD *)(a1[25] + 4LL) - *(_DWORD *)a1[25]) > 7 )
                  {
                    goto LABEL_37;
                  }
                  v31 = round_down_power2();
                  goto LABEL_71;
                }
              }
              else if ( a1[26] <= 1u || (unsigned int)(*(_DWORD *)(a1[25] + 4LL) - *(_DWORD *)a1[25]) > 7 )
              {
                goto LABEL_72;
              }
              v19 = round_down_power2();
              goto LABEL_31;
            }
            return v106 - __readfsqword(0x28u);
          }
          tinfo_property = 0;
          if ( (unsigned __int8)parse_decl() )
            goto LABEL_180;
          v76 = "_QWORD ";
          if ( !*(_BYTE *)(a1[2] + 144LL) )
            v76 = "_DWORD ";
          v77 = src;
          if ( (_QWORD)v98 )
          {
            v78 = v98 - 1;
            v92 = v98 + 7;
            v79 = v98 + 6;
            if ( *((_QWORD *)&v98 + 1) >= (unsigned __int64)(v98 + 7) )
              goto LABEL_177;
          }
          else
          {
            if ( *((_QWORD *)&v98 + 1) > 7u )
            {
              *(_QWORD *)&v98 = 8;
              *((_BYTE *)src + 7) = 0;
LABEL_179:
              v80 = (char *)src;
              *(_DWORD *)src = *(_DWORD *)v76;
              *(_DWORD *)(v80 + 3) = *(_DWORD *)(v76 + 3);
              parse_decl();
LABEL_180:
              if ( !(_BYTE)tinfo_property
                || !sub_DC090(&tinfo_property, v84)
                || !(unsigned __int8)sub_3278C0(&tinfo_property, a1[2], a1[40]) )
              {
                clear_tinfo_t();
                if ( src )
                {
                  *(_QWORD *)&v98 = 0;
                  qfree();
                }
                goto LABEL_183;
              }
              copy_tinfo_t();
              clear_tinfo_t();
              if ( src )
              {
                *(_QWORD *)&v98 = 0;
                qfree();
              }
LABEL_53:
              *((_BYTE *)a1 + 366) = 1;
              return sub_E2DA0((__int64)a1, v84, 0);
            }
            v92 = 8;
            v78 = 0;
            v79 = 7;
          }
          v87 = v79;
          v89 = v78;
          src = (void *)qvector_reserve();
          v79 = v87;
          v77 = src;
          v78 = v89;
LABEL_177:
          *(_QWORD *)&v98 = v92;
          v77[v79] = 0;
          if ( v78 )
            memmove((char *)src + 7, src, v78);
          goto LABEL_179;
        }
      }
      copy_tinfo_t();
      goto LABEL_53;
    }
    v9 = sub_36FA60(a1[2], a1[40], 2);
  }
  *((_BYTE *)a1 + 366) = v9;
  if ( v88 != 56 && !(unsigned __int8)sub_32F670(v4, 0, 0) )
    clear_tinfo_t();
  if ( (get_tinfo_property() & 0xF) == 0xA )
  {
    v27 = a1[37];
    src = nullptr;
    v98 = 0;
    if ( (v27 & 0x100) != 0 && get_tinfo_pdata() && stristr() )
      *((_BYTE *)a1 + 365) = 1;
    tinfo_property = get_tinfo_property();
    copy_tinfo_t();
    clear_tinfo_t();
    if ( src )
    {
      *(_QWORD *)&v98 = 0;
      qfree();
    }
  }
  if ( op_tinfo )
  {
    if ( (get_tinfo_property() & 0xF) == 0xC && (unsigned __int8)sub_3278C0(v4, a1[2], a1[40]) )
      goto LABEL_39;
    v10 = a1[38];
    if ( (unsigned __int8)sub_36EFA0(a1[2], v10) )
    {
LABEL_9:
      clear_tinfo_t();
      goto LABEL_10;
    }
LABEL_63:
    v98 = 0;
    src = nullptr;
    if ( !(unsigned __int8)print_type() )
    {
      v30 = src;
      if ( *((_QWORD *)&v98 + 1) <= 1u )
      {
        src = (void *)qvector_reserve();
        v30 = src;
      }
      *(_QWORD *)&v98 = 2;
      *v30 = 63;
      *((_BYTE *)src + 1) = 0;
    }
    sub_32BE10(a1[1], v10, 2, (_DWORD)src, v28, v29);
    if ( src )
    {
      *(_QWORD *)&v98 = 0;
      qfree();
    }
    goto LABEL_9;
  }
  sub_E42D0((__int64)a1, *(_QWORD *)(*a1 + 56LL), v84);
  if ( (get_tinfo_property() & 0xF) != 0xC || !(unsigned __int8)sub_3278C0(v4, a1[2], a1[40]) )
  {
    v10 = a1[40];
    if ( (unsigned __int8)sub_36EFA0(a1[2], v10) )
      goto LABEL_9;
    goto LABEL_63;
  }
LABEL_39:
  v22 = get_tinfo_property();
  *((_DWORD *)a1 + 87) = v22;
  v23 = v22 == 0;
  if ( v22 < 0 )
    goto LABEL_9;
  v24 = *((_BYTE *)a1 + 366);
  if ( !v23 )
  {
    if ( !v24 )
      goto LABEL_42;
    if ( (unsigned __int8)sub_E4C60(a1) )
      sub_E2DA0((__int64)a1, v84, 0);
    v24 = *((_BYTE *)a1 + 366);
  }
  if ( v24 && *((int *)a1 + 87) <= 0 )
    goto LABEL_9;
LABEL_42:
  v25 = get_tinfo_property();
  *((_DWORD *)a1 + 90) = v25;
  if ( !v25 )
    goto LABEL_9;
  if ( !*((_BYTE *)a1 + 366) )
    *((_DWORD *)a1 + 88) |= 4u;
  if ( v88 == 56 )
    a1[39] = a1[40];
  return get_tinfo_attrs();
}

