unsigned __int64 __fastcall sub_E9680(_QWORD *a1, __int64 a2, char a3, double a4)
{
  __int64 *v5; // r12
  __int64 v6; // rax
  char op_tinfo; // r13
  char v10; // al
  unsigned __int64 v11; // r13
  __int64 v12; // rsi
  __int64 flags; // rax
  unsigned __int64 v14; // rax
  char *v15; // rdx
  int v16; // eax
  int v17; // edx
  __int64 v18; // rcx
  char does_return; // al
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // eax
  bool v24; // zf
  char v25; // al
  int v26; // eax
  __int64 v27; // rsi
  __int64 v28; // rdi
  _BYTE *v29; // rsi
  int v30; // eax
  __int64 v31; // rax
  _QWORD *v32; // rbx
  __int64 v33; // r15
  int v34; // r9d
  unsigned __int64 v35; // r13
  char *v36; // rsi
  unsigned __int64 v37; // rcx
  __int64 v38; // rax
  char *v39; // r15
  int v40; // eax
  int v41; // edx
  char v42; // al
  int v43; // edx
  char v44; // al
  __int64 v45; // rax
  int v46; // ecx
  int v47; // r9d
  __int64 v48; // r12
  int v49; // r13d
  __int64 v50; // rsi
  int v51; // ecx
  char *v52; // r15
  int aflags; // eax
  __int64 v54; // rax
  int v55; // eax
  int v56; // edx
  __int64 v57; // r13
  __int64 v58; // rbx
  _QWORD *v59; // r12
  __int64 v60; // rdi
  __int64 v61; // rdi
  const char *v62; // r8
  __int64 (*v63)(); // rdx
  __int64 (*v64)(); // rax
  char *v65; // rdi
  __int64 v66; // r12
  __int64 v67; // r14
  char *v68; // rbx
  __int64 v69; // rdi
  __int64 v70; // rdi
  char *v71; // rdi
  __int64 v72; // r12
  __int64 v73; // rbx
  char *v74; // r15
  __int64 v75; // rdi
  __int64 v76; // rdi
  char v77; // dl
  __int64 v78; // rax
  char v79; // al
  unsigned __int64 v80; // rcx
  const char *v81; // r13
  _BYTE *v82; // rsi
  size_t v83; // r9
  __int64 v84; // r8
  char *v85; // rax
  unsigned __int64 first_dref_from; // rax
  void **p_src; // [rsp+0h] [rbp-100h]
  __int64 v88; // [rsp+8h] [rbp-F8h]
  char v89; // [rsp+23h] [rbp-DDh]
  int v90; // [rsp+24h] [rbp-DCh]
  __int64 v91; // [rsp+28h] [rbp-D8h]
  __int64 v92; // [rsp+28h] [rbp-D8h]
  int v93; // [rsp+30h] [rbp-D0h]
  size_t v94; // [rsp+30h] [rbp-D0h]
  int v96; // [rsp+38h] [rbp-C8h]
  __int64 v97; // [rsp+38h] [rbp-C8h]
  char v98[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v99; // [rsp+48h] [rbp-B8h] BYREF
  char v100[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 tinfo_property; // [rsp+58h] [rbp-A8h] BYREF
  void *src; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v103; // [rsp+68h] [rbp-98h]
  __int64 v104; // [rsp+78h] [rbp-88h]
  __int64 v105; // [rsp+80h] [rbp-80h]
  __int64 v106; // [rsp+88h] [rbp-78h]
  __int128 v107; // [rsp+90h] [rbp-70h]
  __int64 v108; // [rsp+A0h] [rbp-60h]
  __int128 v109; // [rsp+A8h] [rbp-58h]
  char v110; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v111; // [rsp+C8h] [rbp-38h]

  v5 = a1 + 37;
  v6 = *(_QWORD *)(a2 + 24);
  v111 = __readfsqword(0x28u);
  a1[38] = v6;
  clear_tinfo_t();
  if ( !(unsigned __int8)sub_E7130(a1[2], a1 + 40, a2, a3, a4) )
    return v111 - __readfsqword(0x28u);
  get_ea_name();
  v93 = *(_DWORD *)a2;
  v89 = *(_DWORD *)a2 != 56;
  op_tinfo = get_op_tinfo();
  v10 = 0;
  if ( !op_tinfo )
  {
    if ( !(unsigned __int8)sub_3810A0(a1[2], a1[40], (__int64)v5, 2) )
    {
LABEL_10:
      if ( (*((_BYTE *)a1 + 356) & 2) == 0 )
        return v111 - __readfsqword(0x28u);
      if ( v93 == 56 )
      {
        v27 = a1[1];
        if ( *(_QWORD *)(a2 + 24) != *(_QWORD *)(v27 + 40) || *(char *)v27 >= 0 || !*(_BYTE *)(v27 + 328) )
          goto LABEL_18;
      }
      else
      {
        if ( (getinf() & 0xF) == 1 )
          *((_BYTE *)a1 + 365) = 1;
        v12 = a1[1];
        if ( *(_QWORD *)(v12 + 40) != *(_QWORD *)(a2 + 24) || *(char *)v12 >= 0 || !*(_BYTE *)(v12 + 328) )
        {
          flags = get_flags_ex();
          if ( (flags & 0x600) == 0x400 && (flags & 0xF00000) == 0x500000 )
          {
            first_dref_from = get_first_dref_from();
            if ( (unsigned __int8)sub_3810A0(a1[2], first_dref_from, (__int64)v5, 2) )
              goto LABEL_53;
          }
LABEL_18:
          v14 = a1[4];
          if ( v14 <= 1 )
            goto LABEL_19;
          a4 = 0.0;
          src = nullptr;
          v103 = 0;
          if ( (int)demangle_name() <= 0 )
          {
            if ( src )
            {
              *(_QWORD *)&v103 = 0;
              qfree((__int64)src);
              v14 = a1[4];
              goto LABEL_19;
            }
LABEL_184:
            v14 = a1[4];
LABEL_19:
            v15 = (char *)s1;
            if ( v14 )
              v15 = (char *)a1[3];
            v16 = sub_E1F80(a1, *(_QWORD *)(*a1 + 56LL), v15);
            v17 = *((_DWORD *)a1 + 87);
            *((_DWORD *)a1 + 90) = v16;
            if ( v17 < 0 || (v18 = a1[2], v17 >= *(_DWORD *)(v18 + 656)) )
            {
              *((_DWORD *)a1 + 90) = 0;
            }
            else if ( v16 )
            {
              BYTE4(v88) = 0;
              if ( a1[40] != -1 )
              {
                does_return = func_does_return();
                v18 = a1[2];
                BYTE4(v88) = does_return ^ 1;
              }
              sub_32C270(v98, *(_QWORD *)(v18 + 112), *(_DWORD *)(*(_QWORD *)(v18 + 112) + 80LL));
              if ( !a1[26] )
                goto LABEL_72;
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[21] + 112LL) + 200LL))(
                     *(_QWORD *)(a1[21] + 112LL),
                     *(unsigned int *)a1[25]) )
              {
                v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[21] + 112LL) + 32LL))(
                        *(_QWORD *)(a1[21] + 112LL),
                        *(unsigned int *)a1[25]);
                if ( a1[26] <= 1u || *(_DWORD *)(a1[25] + 4LL) - *(_DWORD *)a1[25] >= (unsigned int)v20 )
                {
LABEL_31:
                  if ( v20 > 4 )
                    goto LABEL_72;
                  v21 = a1[21];
                  if ( *(_DWORD *)(*(_QWORD *)(v21 + 8) + 4LL) == 13 || !a1[26] )
                    goto LABEL_37;
                  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v21 + 112) + 200LL))(
                         *(_QWORD *)(v21 + 112),
                         *(unsigned int *)a1[25]) )
                  {
                    v30 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[21] + 112LL) + 32LL))(
                            *(_QWORD *)(a1[21] + 112LL),
                            *(unsigned int *)a1[25]);
                    if ( a1[26] <= 1u || *(_DWORD *)(a1[25] + 4LL) - *(_DWORD *)a1[25] >= (unsigned int)v30 )
                    {
LABEL_71:
                      if ( v30 > 7 )
                      {
LABEL_37:
                        v22 = 9;
LABEL_73:
                        v99 = v22;
                        if ( (a1[11] & 0xFFFFFFFB) != 2 )
                          goto LABEL_74;
                        v77 = sub_64880(a1 + 31);
                        v78 = 0;
                        if ( !v77 )
                          v78 = (int)(sub_64C00(a1 + 31) + 1);
                        if ( a1[16] == v78 )
                        {
                          v32 = a1 + 29;
                          v79 = sub_64880(a1 + 29);
                          v80 = 0;
                          if ( !v79 )
                            v80 = (int)(sub_64C00(a1 + 29) + 1);
                          v31 = a1[21];
                          if ( v80 < a1[13] )
                          {
                            sub_32C150(v100, *(_QWORD *)(v31 + 112), *(_DWORD *)(*(_QWORD *)(v31 + 112) + 80LL));
LABEL_76:
                            v96 = 0;
                            if ( !(unsigned __int8)sub_64880(v32) )
                              v96 = sub_64C00(v32) + 1;
                            v33 = 0;
                            if ( !(unsigned __int8)sub_64880(v32) )
                              v33 = (int)(sub_64C00(v32) + 1);
                            if ( !(unsigned __int8)sub_64880(a1 + 31) )
                              v33 += (int)(sub_64C00(a1 + 31) + 1);
                            v34 = *((_DWORD *)a1 + 87);
                            a4 = 0.0;
                            v90 = v33;
                            src = nullptr;
                            v104 = 0;
                            v105 = 0;
                            v106 = 0;
                            v108 = 0;
                            v110 = 16;
                            v103 = 0;
                            v107 = 0;
                            v109 = 0;
                            if ( v34 <= 0 )
                            {
                              v42 = 0;
                            }
                            else
                            {
                              v35 = 0;
                              v36 = nullptr;
                              v37 = 0;
                              v38 = 0;
                              while ( 1 )
                              {
                                if ( v37 < v38 + 1 )
                                {
                                  src = (void *)qvector_reserve((__int64)&src, (__int64)v36, v38 + 1, 80);
                                  v36 = (char *)src;
                                  v38 = v103;
                                }
                                a4 = 0.0;
                                v39 = &v36[80 * v38];
                                *(_DWORD *)v39 = 0;
                                *((_QWORD *)v39 + 1) = 0;
                                *((_QWORD *)v39 + 2) = 0;
                                *((_QWORD *)v39 + 5) = 0;
                                *((_QWORD *)v39 + 8) = 0;
                                *((_DWORD *)v39 + 18) = 0;
                                *(_OWORD *)(v39 + 24) = 0;
                                *((_OWORD *)v39 + 3) = 0;
                                *(_QWORD *)&v103 = v103 + 1;
                                copy_tinfo_t();
                                if ( v35 < a1[13] && *(_DWORD *)(a1[12] + 4 * v35) == *((_DWORD *)a1 + 72) )
                                {
                                  if ( BYTE4(v88) )
                                  {
                                    if ( *((_BYTE *)a1 + 292) )
                                    {
                                      v40 = a1[45] & 0xFFFFFFF0;
                                      if ( v40 == 64 || (v41 = 240, v40 == 208) )
                                        v41 = 208;
                                      *((_DWORD *)a1 + 90) = v41;
                                    }
                                  }
                                  else
                                  {
                                    *((_DWORD *)v39 + 18) |= 2u;
                                    sub_32C540(&tinfo_property, *(_QWORD *)(a1[2] + 112LL), (_QWORD *)v39 + 8);
                                    copy_tinfo_t();
                                    clear_tinfo_t();
                                  }
                                }
                                if ( *((_DWORD *)a1 + 87) <= (int)++v35 )
                                  break;
                                v37 = *((_QWORD *)&v103 + 1);
                                v38 = v103;
                                v36 = (char *)src;
                              }
                              v42 = v110 & 0xF;
                            }
                            v43 = *((_DWORD *)a1 + 90);
                            if ( (v43 & 0xFFFFFF0F) != 0 || v43 == 192 )
                            {
                              v44 = v42 | 0xC0;
                            }
                            else
                            {
                              v44 = v43 | v42;
                              v43 = 0;
                            }
                            v110 = v44;
                            v45 = *a1;
                            HIDWORD(v104) = v43;
                            v91 = *(_QWORD *)(*(_QWORD *)(v45 + 480) + 112LL);
                            if ( BYTE4(v88) )
                            {
                              LODWORD(v104) = v104 | 2;
                              tinfo_property = 1;
                              copy_tinfo_t();
                              clear_tinfo_t();
                              if ( (unsigned int)(*((_DWORD *)a1 + 90) - 208) <= 0x2F && *((int *)a1 + 87) > 0 )
                              {
                                v48 = 0;
                                v49 = 0;
                                LODWORD(v88) = 0;
                                p_src = &src;
                                do
                                {
                                  v52 = (char *)src + 80 * v48;
                                  if ( v90 <= (int)v48 )
                                  {
                                    cleanup_argloc();
                                    *(_DWORD *)v52 = 1;
                                    *((_QWORD *)v52 + 1) = 0;
                                  }
                                  else
                                  {
                                    if ( (int)v48 < v96 )
                                    {
                                      v50 = v49++;
                                      v51 = *(_DWORD *)(a1[12] + 4 * v50);
                                    }
                                    else
                                    {
                                      v51 = *(_DWORD *)(a1[15] + 4LL * (int)v88);
                                      LODWORD(v88) = v88 + 1;
                                    }
                                    HIDWORD(v88) = v51;
                                    cleanup_argloc();
                                    v46 = HIDWORD(v88);
                                    *(_DWORD *)v52 = 3;
                                    *((_DWORD *)v52 + 2) = HIDWORD(v88);
                                  }
                                  ++v48;
                                }
                                while ( *((_DWORD *)a1 + 87) > (int)v48 );
                              }
                            }
                            else
                            {
                              aflags = get_aflags();
                              sub_E7020((__int64)a1, (__int64)&src, (aflags & 0x4000000) != 0, 0.0);
                            }
                            v54 = a1[21];
                            if ( *(_DWORD *)(*(_QWORD *)(v54 + 8) + 4LL) == 13 || !a1[26] )
                              goto LABEL_124;
                            if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v54 + 112) + 200LL))(
                                   *(_QWORD *)(v54 + 112),
                                   *(unsigned int *)a1[25]) )
                            {
                              v55 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[21] + 112LL) + 32LL))(
                                      *(_QWORD *)(a1[21] + 112LL),
                                      *(unsigned int *)a1[25]);
                              if ( a1[26] <= 1u || *(_DWORD *)(a1[25] + 4LL) - *(_DWORD *)a1[25] >= (unsigned int)v55 )
                              {
LABEL_116:
                                if ( v55 <= 7 )
                                {
                                  v46 = v96;
                                  v56 = v90 - v96 + ((((_BYTE)v90 - (_BYTE)v96) & 1) == 0) - 2;
                                  if ( v56 > 0 )
                                  {
                                    v57 = 80LL * v56;
                                    v58 = v57
                                        - 160
                                        - 160LL
                                        * ((v90 - v96 + (unsigned int)((((_BYTE)v90 - (_BYTE)v96) & 1) == 0) - 3) >> 1);
                                    do
                                    {
                                      v59 = (char *)src + v57;
                                      clear_tinfo_t();
                                      v60 = v59[5];
                                      if ( v60 )
                                      {
                                        v59[6] = 0;
                                        qfree(v60);
                                      }
                                      v61 = v59[2];
                                      if ( v61 )
                                      {
                                        v59[3] = 0;
                                        qfree(v61);
                                      }
                                      v57 -= 160;
                                      cleanup_argloc();
                                      memmove(v59, v59 + 10, (_BYTE *)src + 80 * v103 - (_BYTE *)v59 - 80);
                                      *(_QWORD *)&v103 = v103 - 1;
                                    }
                                    while ( v58 != v57 );
                                  }
                                }
                                goto LABEL_124;
                              }
                            }
                            else if ( a1[26] <= 1u || (unsigned int)(*(_DWORD *)(a1[25] + 4LL) - *(_DWORD *)a1[25]) > 7 )
                            {
LABEL_124:
                              v62 = s1;
                              if ( a1[4] )
                                v62 = (const char *)a1[3];
                              v63 = sub_E37F0;
                              v64 = *(__int64 (**)())(*(_QWORD *)v91 + 128LL);
                              if ( v64 != sub_E37F0
                                && !((unsigned __int8 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, const char *, void **, char *))v64)(
                                      v91,
                                      *a1,
                                      *(_QWORD *)(*a1 + 56LL),
                                      a1[40],
                                      v62,
                                      &src,
                                      (char *)a1 + 348)
                                || (unsigned __int64)v103 >= *(int *)(a1[2] + 656LL) )
                              {
                                if ( v108 )
                                {
                                  *(_QWORD *)&v109 = 0;
                                  qfree(v108);
                                }
                                cleanup_argloc();
                                clear_tinfo_t();
                                v65 = (char *)src;
                                if ( src )
                                {
                                  v66 = v103;
                                  if ( (_QWORD)v103 )
                                  {
                                    v67 = 0;
                                    do
                                    {
                                      v68 = &v65[80 * v67];
                                      clear_tinfo_t();
                                      v69 = *((_QWORD *)v68 + 5);
                                      if ( v69 )
                                      {
                                        *((_QWORD *)v68 + 6) = 0;
                                        qfree(v69);
                                      }
                                      v70 = *((_QWORD *)v68 + 2);
                                      if ( v70 )
                                      {
                                        *((_QWORD *)v68 + 3) = 0;
                                        qfree(v70);
                                      }
                                      cleanup_argloc();
                                      v65 = (char *)src;
                                      ++v67;
                                    }
                                    while ( v66 != v67 );
                                  }
                                  *(_QWORD *)&v103 = 0;
                                  qfree((__int64)v65);
                                }
                                clear_tinfo_t();
                                clear_tinfo_t();
                                clear_tinfo_t();
                                return v111 - __readfsqword(0x28u);
                              }
                              sub_F2040(
                                a1,
                                (__int64)&src,
                                (_DWORD)v63,
                                v46,
                                (_DWORD)v62,
                                v47,
                                (__int64)p_src,
                                v88,
                                (__int64)&v99,
                                (int)v100);
                              if ( v108 )
                              {
                                *(_QWORD *)&v109 = 0;
                                qfree(v108);
                              }
                              cleanup_argloc();
                              clear_tinfo_t();
                              v71 = (char *)src;
                              if ( src )
                              {
                                v72 = v103;
                                if ( (_QWORD)v103 )
                                {
                                  v73 = 0;
                                  do
                                  {
                                    v74 = &v71[80 * v73];
                                    clear_tinfo_t();
                                    v75 = *((_QWORD *)v74 + 5);
                                    if ( v75 )
                                    {
                                      *((_QWORD *)v74 + 6) = 0;
                                      qfree(v75);
                                    }
                                    v76 = *((_QWORD *)v74 + 2);
                                    if ( v76 )
                                    {
                                      *((_QWORD *)v74 + 3) = 0;
                                      qfree(v76);
                                    }
                                    ++v73;
                                    cleanup_argloc();
                                    v71 = (char *)src;
                                  }
                                  while ( v72 != v73 );
                                }
                                *(_QWORD *)&v103 = 0;
                                qfree((__int64)v71);
                              }
                              clear_tinfo_t();
                              clear_tinfo_t();
                              clear_tinfo_t();
                              goto LABEL_53;
                            }
                            v55 = round_down_power2();
                            goto LABEL_116;
                          }
                        }
                        else
                        {
LABEL_74:
                          v31 = a1[21];
                        }
                        sub_32C270(v100, *(_QWORD *)(v31 + 112), *(_DWORD *)(*(_QWORD *)(v31 + 112) + 80LL));
                        v32 = a1 + 29;
                        goto LABEL_76;
                      }
LABEL_72:
                      v22 = 25;
                      goto LABEL_73;
                    }
                  }
                  else if ( a1[26] <= 1u || (unsigned int)(*(_DWORD *)(a1[25] + 4LL) - *(_DWORD *)a1[25]) > 7 )
                  {
                    goto LABEL_37;
                  }
                  v30 = round_down_power2();
                  goto LABEL_71;
                }
              }
              else if ( a1[26] <= 1u || (unsigned int)(*(_DWORD *)(a1[25] + 4LL) - *(_DWORD *)a1[25]) > 7 )
              {
                goto LABEL_72;
              }
              v20 = round_down_power2();
              goto LABEL_31;
            }
            return v111 - __readfsqword(0x28u);
          }
          tinfo_property = 0;
          if ( (unsigned __int8)parse_decl() )
            goto LABEL_181;
          v81 = "_QWORD ";
          if ( !*(_BYTE *)(a1[2] + 144LL) )
            v81 = "_DWORD ";
          v82 = src;
          if ( (_QWORD)v103 )
          {
            v83 = v103 - 1;
            v97 = v103 + 7;
            v84 = v103 + 6;
            if ( *((_QWORD *)&v103 + 1) >= (unsigned __int64)(v103 + 7) )
              goto LABEL_178;
          }
          else
          {
            if ( *((_QWORD *)&v103 + 1) > 7u )
            {
              *(_QWORD *)&v103 = 8;
              *((_BYTE *)src + 7) = 0;
LABEL_180:
              v85 = (char *)src;
              *(_DWORD *)src = *(_DWORD *)v81;
              *(_DWORD *)(v85 + 3) = *(_DWORD *)(v81 + 3);
              parse_decl();
LABEL_181:
              if ( !(_BYTE)tinfo_property || !sub_E0550(&tinfo_property, v89) || !sub_32CB80(&tinfo_property, a1[2]) )
              {
                clear_tinfo_t();
                if ( src )
                {
                  *(_QWORD *)&v103 = 0;
                  qfree((__int64)src);
                }
                goto LABEL_184;
              }
              copy_tinfo_t();
              clear_tinfo_t();
              if ( src )
              {
                *(_QWORD *)&v103 = 0;
                qfree((__int64)src);
              }
LABEL_53:
              *((_BYTE *)a1 + 366) = 1;
              return sub_E7260((__int64)a1, v89, 0, a4);
            }
            v97 = 8;
            v83 = 0;
            v84 = 7;
          }
          v92 = v84;
          v94 = v83;
          src = (void *)qvector_reserve((__int64)&src, (__int64)src, v97, 1);
          v84 = v92;
          v82 = src;
          v83 = v94;
LABEL_178:
          *(_QWORD *)&v103 = v97;
          v82[v84] = 0;
          if ( v83 )
            memmove((char *)src + 7, src, v83);
          goto LABEL_180;
        }
      }
      copy_tinfo_t();
      goto LABEL_53;
    }
    v10 = sub_374CE0(a1[2], a1[40], 2);
  }
  *((_BYTE *)a1 + 366) = v10;
  if ( v93 != 56 && !(unsigned __int8)sub_334C10(v5, 0, 0) )
    clear_tinfo_t();
  if ( (get_tinfo_property() & 0xF) == 0xA )
  {
    v28 = a1[37];
    a4 = 0.0;
    src = nullptr;
    v103 = 0;
    if ( (v28 & 0x100) != 0 && get_tinfo_pdata() && stristr() )
      *((_BYTE *)a1 + 365) = 1;
    tinfo_property = get_tinfo_property();
    copy_tinfo_t();
    clear_tinfo_t();
    if ( src )
    {
      *(_QWORD *)&v103 = 0;
      qfree((__int64)src);
    }
  }
  if ( op_tinfo )
  {
    if ( (get_tinfo_property() & 0xF) == 0xC && sub_32CB80(v5, a1[2]) )
      goto LABEL_39;
    v11 = a1[38];
    if ( sub_374220(a1[2], v11) )
    {
LABEL_9:
      clear_tinfo_t();
      goto LABEL_10;
    }
LABEL_63:
    a4 = 0.0;
    v103 = 0;
    src = nullptr;
    if ( !(unsigned __int8)print_type() )
    {
      v29 = src;
      if ( *((_QWORD *)&v103 + 1) <= 1u )
      {
        src = (void *)qvector_reserve((__int64)&src, (__int64)src, 2, 1);
        v29 = src;
      }
      *(_QWORD *)&v103 = 2;
      *v29 = 63;
      *((_BYTE *)src + 1) = 0;
    }
    sub_3311F0((_QWORD *)a1[1], v11, 2u, src);
    if ( src )
    {
      *(_QWORD *)&v103 = 0;
      qfree((__int64)src);
    }
    goto LABEL_9;
  }
  sub_E8790((__int64)a1, *(_QWORD *)(*a1 + 56LL), v89);
  if ( (get_tinfo_property() & 0xF) != 0xC || !sub_32CB80(v5, a1[2]) )
  {
    v11 = a1[40];
    if ( sub_374220(a1[2], v11) )
      goto LABEL_9;
    goto LABEL_63;
  }
LABEL_39:
  v23 = get_tinfo_property();
  *((_DWORD *)a1 + 87) = v23;
  v24 = v23 == 0;
  if ( v23 < 0 )
    goto LABEL_9;
  v25 = *((_BYTE *)a1 + 366);
  if ( !v24 )
  {
    if ( !v25 )
      goto LABEL_42;
    if ( (unsigned __int8)sub_E9120(a1) )
      sub_E7260((__int64)a1, v89, 0, a4);
    v25 = *((_BYTE *)a1 + 366);
  }
  if ( v25 && *((int *)a1 + 87) <= 0 )
    goto LABEL_9;
LABEL_42:
  v26 = get_tinfo_property();
  *((_DWORD *)a1 + 90) = v26;
  if ( !v26 )
    goto LABEL_9;
  if ( !*((_BYTE *)a1 + 366) )
    *((_DWORD *)a1 + 88) |= 4u;
  if ( v93 == 56 )
    a1[39] = a1[40];
  return get_tinfo_attrs();
}

