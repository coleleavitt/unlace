__int64 __fastcall sub_4CB40(__int64 *a1, __int64 a2, const char *a3, __int64 **a4, __int64 a5, int a6)
{
  __int64 (__fastcall *v9)(__int64, __int128 *); // rax
  char *v10; // rax
  char v11; // bl
  unsigned __int8 v12; // bl
  __int64 (__fastcall *v13)(__int64, __int128 *); // rax
  char *v14; // rax
  char v15; // al
  __int64 *v16; // rax
  __int64 (__fastcall *v17)(__int64, __int64 *); // rax
  __int64 *v18; // rdi
  __int64 v19; // rsi
  __int64 *v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned int v23; // r13d
  char v24; // r12
  int v26; // eax
  char v27; // al
  __int64 v28; // rax
  __int64 (__fastcall *v29)(__int64, char **); // rax
  int *v30; // rax
  int v31; // eax
  char v32; // r13
  __int64 v33; // rdi
  __int64 v34; // rax
  char *v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // r15
  __int64 v38; // rbx
  __int64 v39; // r14
  __int64 *v40; // r12
  __int64 v41; // rdi
  __int64 v42; // rdi
  __int64 (__fastcall *v43)(__int64, __int128 *); // rax
  int *v44; // rax
  int v45; // edx
  __int64 idati; // rax
  unsigned __int8 scalar_bt; // al
  __int64 (__fastcall *v48)(__int64, unsigned int *); // rax
  unsigned int *v49; // rax
  __int64 v50; // rsi
  unsigned int v51; // r8d
  char *v52; // r14
  char *v53; // rcx
  char v54; // al
  bool v55; // zf
  int v56; // eax
  char *v57; // r15
  char *v58; // rbx
  __int64 v59; // rdi
  __int64 v60; // rdi
  char *v61; // rdi
  char *v62; // rdx
  __int64 v63; // rsi
  unsigned __int64 tinfo_size; // rax
  int v65; // edx
  int v66; // eax
  unsigned int v67; // r13d
  __int64 v68; // r14
  _QWORD *v69; // r12
  __int64 v70; // rdi
  __int64 v71; // rdi
  __int64 v72; // rsi
  __int64 tinfo_pdata; // rax
  void *v74; // r12
  const char *v75; // rsi
  char *v76; // rdi
  char *v77; // rdi
  __int64 v78; // r12
  __int64 v79; // r15
  char *v80; // rbx
  __int64 v81; // rdi
  __int64 v82; // rdi
  __int64 v83; // rdi
  __int64 v84; // r13
  __int64 v85; // r12
  __int64 v86; // r15
  __int64 *v87; // rbx
  __int64 v88; // rdi
  __int64 v89; // rdi
  char v90; // al
  char v91; // al
  char *v92; // rdi
  __int64 v93; // r14
  __int64 v94; // r13
  char *v95; // r12
  __int64 v96; // rdi
  __int64 v97; // rdi
  _DWORD *v98; // rsi
  __int64 v99; // rdi
  char v100; // r15
  int v101; // eax
  int v102; // r15d
  __int64 v103; // rdx
  char *v104; // rax
  __int64 v105; // [rsp+0h] [rbp-200h]
  int v106; // [rsp+24h] [rbp-1DCh]
  unsigned __int8 v107; // [rsp+38h] [rbp-1C8h]
  char *v108; // [rsp+38h] [rbp-1C8h]
  __int64 v109; // [rsp+38h] [rbp-1C8h]
  unsigned __int8 v112; // [rsp+50h] [rbp-1B0h]
  char *v113; // [rsp+50h] [rbp-1B0h]
  unsigned int v115; // [rsp+64h] [rbp-19Ch] BYREF
  __int64 v116; // [rsp+68h] [rbp-198h] BYREF
  __int64 v117; // [rsp+70h] [rbp-190h] BYREF
  __int64 v118; // [rsp+78h] [rbp-188h] BYREF
  __int64 v119; // [rsp+80h] [rbp-180h] BYREF
  _QWORD v120[3]; // [rsp+88h] [rbp-178h] BYREF
  char *s1; // [rsp+A0h] [rbp-160h] BYREF
  __int128 v122; // [rsp+A8h] [rbp-158h] BYREF
  __int128 v123; // [rsp+B8h] [rbp-148h]
  __int64 v124; // [rsp+C8h] [rbp-138h]
  __int128 v125; // [rsp+D0h] [rbp-130h]
  __int64 v126; // [rsp+E0h] [rbp-120h] BYREF
  int v127; // [rsp+E8h] [rbp-118h]
  void *dest; // [rsp+F0h] [rbp-110h] BYREF
  __int128 v129; // [rsp+F8h] [rbp-108h] BYREF
  __int64 v130; // [rsp+108h] [rbp-F8h]
  __int64 v131; // [rsp+110h] [rbp-F0h] BYREF
  __int64 v132; // [rsp+118h] [rbp-E8h] BYREF
  __int128 v133; // [rsp+120h] [rbp-E0h]
  __int64 v134; // [rsp+130h] [rbp-D0h]
  __int128 v135; // [rsp+138h] [rbp-C8h]
  char v136; // [rsp+148h] [rbp-B8h]
  __int128 v137; // [rsp+150h] [rbp-B0h] BYREF
  __int64 v138; // [rsp+160h] [rbp-A0h] BYREF
  _BYTE v139[56]; // [rsp+168h] [rbp-98h] BYREF
  _QWORD v140[3]; // [rsp+1A0h] [rbp-60h] BYREF
  char v141; // [rsp+1B8h] [rbp-48h]
  unsigned __int64 v142; // [rsp+1C8h] [rbp-38h]

  v142 = __readfsqword(0x28u);
  v9 = (__int64 (__fastcall *)(__int64, __int128 *))(*a4)[7];
  if ( (char *)v9 == (char *)sub_2DBC0 )
  {
    v10 = (char *)sub_2CEC0(a4[2], 1, 1u, 512);
    if ( v10 )
    {
      v11 = *v10;
      LOBYTE(v137) = *v10;
LABEL_4:
      v12 = v11 << 6;
      goto LABEL_5;
    }
  }
  else if ( !(unsigned int)v9((__int64)a4, &v137) )
  {
    v11 = v137;
    goto LABEL_4;
  }
  v12 = 0;
LABEL_5:
  v13 = (__int64 (__fastcall *)(__int64, __int128 *))(*a4)[29];
  if ( (char *)v13 == (char *)sub_2DC00 )
  {
    v14 = (char *)sub_2CEC0(a4[2], 8, 1u, 512);
    if ( !v14 )
      goto LABEL_9;
    v15 = *v14;
    goto LABEL_8;
  }
  if ( !(unsigned int)v13((__int64)a4, &v137) )
  {
    v15 = v137;
LABEL_8:
    v12 |= v15 << 7;
  }
LABEL_9:
  v16 = *a4;
  v116 = 0;
  v17 = (__int64 (__fastcall *)(__int64, __int64 *))v16[14];
  if ( v17 == sub_2D0F0 )
  {
    v18 = a4[2];
    v19 = 0x8000000;
    v20 = (__int64 *)sub_2CEC0(v18, 0x8000000, 0x8000000u, 0x8000000);
    if ( v20 )
      v116 = *v20;
    v21 = (unsigned int)(a6 - 5);
  }
  else
  {
    v19 = (__int64)&v116;
    v18 = (__int64 *)a4;
    v17((__int64)a4, &v116);
    v21 = (unsigned int)(a6 - 5);
    if ( (unsigned int)v21 > 0x14 )
    {
LABEL_17:
      if ( (debug & 0x400000) != 0 )
        sub_29350();
      return 0;
    }
  }
  switch ( v21 )
  {
    case 0LL:
    case 2LL:
    case 12LL:
    case 15LL:
      if ( !(unsigned __int8)sub_4F630(a1, a2, a4, 0) )
        return 0;
      v22 = *(_QWORD *)(a2 + 8);
      if ( (*(_BYTE *)(a2 + 8) & 0x3F) != 0x3D )
        goto LABEL_78;
      v23 = 2;
      if ( !v12 )
        return v23;
      goto LABEL_29;
    case 6LL:
    case 13LL:
      v23 = sub_4B830(a1, a2 + 8, a4, v116);
      v24 = v23 != 0;
      goto LABEL_26;
    case 7LL:
      *((_QWORD *)&v137 + 1) = 0;
      *(_QWORD *)&v137 = off_A9E40;
      v138 = (__int64)a1;
      memset(v139, 0, 52);
      v139[52] = 0x80;
      if ( (unsigned __int64)(v116 - 1) <= 0x3F
        && (unsigned int)v116 <= 8
        && ((unsigned int)v116 & ((_DWORD)v116 - 1)) == 0 )
      {
        v139[52] = (log2ceil() + 1) | v139[52] & 0xF8;
      }
      v33 = a1[40];
      *((_QWORD *)&v137 + 1) = a4;
      if ( (*(int (__fastcall **)(__int64, __int64 **, _QWORD, __int128 *))(*(_QWORD *)v33 + 16LL))(v33, a4, 0, &v137) >= 0 )
      {
        v34 = *a1;
        v122 = 0;
        s1 = nullptr;
        v119 = 0;
        (*(void (__fastcall **)(__int64 *, __int64 **, char **))(v34 + 40))(a1, a4, &s1);
        v35 = (char *)src;
        if ( (_QWORD)v122 )
          v35 = s1;
        if ( (unsigned int)get_named_type(a1[39], v35, 1, &v119, 0, 0, 0, 0, 0) != 1 )
        {
          create_tinfo(a2 + 8, 45, 45, v139);
          v23 = 1;
LABEL_51:
          if ( s1 )
          {
            *(_QWORD *)&v122 = 0;
            qfree(s1);
          }
          goto LABEL_53;
        }
        if ( !(unsigned __int8)deserialize_tinfo(a2 + 8, a1[39], &v119, 0, 0, 0) )
        {
          if ( !under_debugger )
            interr(30407);
          BUG();
        }
        v23 = 1;
        dest = nullptr;
        v129 = 0;
        v72 = *(_QWORD *)(a2 + 8);
        if ( (v72 & 0x100) == 0 )
          goto LABEL_51;
        tinfo_pdata = get_tinfo_pdata(&dest, v72, 0);
        v74 = dest;
        if ( tinfo_pdata )
        {
          if ( (_QWORD)v129 )
          {
            v75 = (const char *)dest;
            v76 = (char *)src;
            if ( !(_QWORD)v122 )
            {
LABEL_134:
              v23 = (strcmp(v76, v75) == 0) + 1;
              goto LABEL_135;
            }
LABEL_133:
            v76 = s1;
            goto LABEL_134;
          }
          v23 = 2;
          v75 = src;
          if ( (_QWORD)v122 )
            goto LABEL_133;
        }
LABEL_135:
        if ( v74 )
        {
          *(_QWORD *)&v129 = 0;
          qfree(v74);
        }
        goto LABEL_51;
      }
      if ( *(_QWORD *)&v139[8] )
      {
        v23 = 1;
        if ( *(_QWORD *)(*(_QWORD *)v139 + 56LL * *(_QWORD *)&v139[8] - 48) > 1u )
        {
LABEL_53:
          *(_QWORD *)&v137 = off_A9E40;
          if ( *(_QWORD *)&v139[24] )
          {
            *(_QWORD *)&v139[32] = 0;
            qfree(*(_QWORD *)&v139[24]);
          }
          v36 = *(_QWORD *)v139;
          if ( *(_QWORD *)v139 )
          {
            if ( *(_QWORD *)&v139[8] )
            {
              v112 = v12;
              v37 = 0;
              v38 = 0;
              v39 = *(_QWORD *)&v139[8];
              do
              {
                v40 = (__int64 *)(v36 + v37);
                v41 = *(_QWORD *)(v36 + v37 + 24);
                if ( v41 )
                {
                  v40[4] = 0;
                  qfree(v41);
                }
                v42 = *v40;
                if ( *v40 )
                {
                  v40[1] = 0;
                  qfree(v42);
                }
                ++v38;
                v36 = *(_QWORD *)v139;
                v37 += 56;
              }
              while ( v39 != v38 );
              v12 = v112;
            }
            *(_QWORD *)&v139[8] = 0;
            qfree(v36);
          }
          v24 = 1;
          goto LABEL_26;
        }
      }
      *(_QWORD *)&v137 = off_A9E40;
      if ( *(_QWORD *)&v139[24] )
      {
        *(_QWORD *)&v139[32] = 0;
        qfree(*(_QWORD *)&v139[24]);
      }
      v83 = *(_QWORD *)v139;
      if ( *(_QWORD *)v139 )
      {
        v84 = *(_QWORD *)&v139[8];
        if ( *(_QWORD *)&v139[8] )
        {
          v85 = 0;
          v86 = 0;
          do
          {
            v87 = (__int64 *)(v83 + v85);
            v88 = *(_QWORD *)(v83 + v85 + 24);
            if ( v88 )
            {
              v87[4] = 0;
              qfree(v88);
            }
            v89 = *v87;
            if ( *v87 )
            {
              v87[1] = 0;
              qfree(v89);
            }
            v83 = *(_QWORD *)v139;
            v85 += 56;
            ++v86;
          }
          while ( v84 != v86 );
        }
        *(_QWORD *)&v139[8] = 0;
        qfree(v83);
      }
      return 0;
    case 8LL:
      v119 = 1;
      v120[0] = 0;
      v120[1] = 0;
      if ( !(unsigned __int8)sub_4F630(a1, &v119, a4, 0) )
        goto LABEL_71;
      dest = nullptr;
      v130 = 0;
      v131 = 0;
      v132 = 0;
      v134 = 0;
      v136 = 16;
      v129 = 0;
      v133 = 0;
      v135 = 0;
      copy_tinfo_t(&v131, v120);
      if ( (get_tinfo_property(v131, 2) & 0xF) != 0xB )
      {
        v48 = (__int64 (__fastcall *)(__int64, unsigned int *))(*a4)[3];
        if ( v48 == sub_2DE70 )
        {
          v49 = (unsigned int *)sub_2CEC0(a4[2], 0x2000, 0x400u, 0x4000000);
          if ( v49 )
          {
            v50 = *v49;
            v115 = *v49;
LABEL_87:
            v51 = sub_31810((__int64)a1, v50);
            goto LABEL_88;
          }
        }
        else if ( !(unsigned int)v48((__int64)a4, &v115) )
        {
          v50 = v115;
          goto LABEL_87;
        }
        v51 = 16;
LABEL_88:
        v106 = sub_312A0((__int64)a1, (__int64)a4, (__int64 *)&dest, a5, v51);
        v52 = (char *)dest;
        v53 = (char *)dest + 80 * v129;
        if ( 80LL * (_QWORD)v129 )
        {
          while ( v52[64] )
          {
            v52 += 80;
            if ( v52 == v53 )
              goto LABEL_106;
          }
          if ( v106 == 48 )
          {
            v106 = 64;
          }
          else
          {
            v54 = getinf_flag(3, 4);
            v53 = (char *)dest + 80 * v129;
            if ( v106 == 112 )
            {
              v55 = v54 == 0;
              v56 = 64;
              if ( v55 )
                v56 = 112;
              v106 = v56;
            }
          }
          if ( v53 == v52 )
          {
            v62 = nullptr;
          }
          else
          {
            v107 = v12;
            v57 = v53;
            v58 = v52;
            do
            {
              clear_tinfo_t(v58 + 64);
              v59 = *((_QWORD *)v58 + 5);
              if ( v59 )
              {
                *((_QWORD *)v58 + 6) = 0;
                qfree(v59);
              }
              v60 = *((_QWORD *)v58 + 2);
              if ( v60 )
              {
                *((_QWORD *)v58 + 3) = 0;
                qfree(v60);
              }
              v61 = v58;
              v58 += 80;
              cleanup_argloc(v61);
            }
            while ( v58 != v57 );
            v12 = v107;
            v53 = v57;
            v62 = (char *)((_BYTE *)dest + 80 * v129 - v57);
          }
          v108 = v53;
          memmove(v52, v53, (size_t)v62);
          *(_QWORD *)&v129 = v129 - 0xCCCCCCCCCCCCCCCDLL * ((v108 - v52) >> 4);
        }
LABEL_106:
        if ( (unsigned __int8)sub_36FD0((__int64)a1, (__int64)a4) )
        {
          v118 = 0;
          s1 = nullptr;
          v137 = 0;
          copy_tinfo_t((char *)&v137 + 8, &s1);
          v138 = 0;
          copy_tinfo_t(&v138, &v118);
          *(_DWORD *)v139 = 0;
          *(_WORD *)&v139[4] = 0;
          clear_tinfo_t(&s1);
          clear_tinfo_t(&v118);
          copy_tinfo_t(&v137, &v131);
          create_tinfo(&v131, 10, 10, &v137);
          clear_tinfo_t(&v138);
          clear_tinfo_t((char *)&v137 + 8);
          clear_tinfo_t(&v137);
          LODWORD(v137) = 0;
          *((_QWORD *)&v137 + 1) = 0;
          v138 = 0;
          memset(v139, 0, 52);
          copy_tinfo_t(&v139[40], &v131);
          v63 = v138;
          if ( *(_QWORD *)&v139[8] <= 6u )
          {
            v138 = qvector_reserve(&v138, v138, 7, 1);
            v63 = v138;
          }
          *(_QWORD *)v139 = 7;
          *(_DWORD *)v63 = 1970496882;
          *(_WORD *)(v63 + 4) = 29804;
          *(_BYTE *)(v138 + 6) = 0;
          sub_334B0((__int64 *)&dest, (char *)dest, (__int64)&v137);
          clear_tinfo_t(&v139[40]);
          if ( *(_QWORD *)&v139[16] )
          {
            *(_QWORD *)&v139[24] = 0;
            qfree(*(_QWORD *)&v139[16]);
          }
          if ( v138 )
          {
            *(_QWORD *)v139 = 0;
            qfree(v138);
          }
          cleanup_argloc(&v137);
        }
        v117 = 0;
        if ( !(unsigned __int8)sub_50A80(a1, &v117, a4, a5) )
        {
LABEL_115:
          if ( (unsigned int)(v106 - 208) <= 0x2F )
          {
            tinfo_size = get_tinfo_size(0, v131, 0);
            if ( tinfo_size <= 1 )
            {
              v65 = 3;
              v66 = 16;
            }
            else if ( tinfo_size <= 4 )
            {
              v65 = 3;
              v66 = 0;
            }
            else
            {
              v65 = 4;
              v66 = 0x20000;
            }
            LODWORD(v132) = v65;
            LODWORD(v133) = v66;
            v67 = v129 - 1;
            if ( (int)v129 - 1 >= 0 )
            {
              v68 = 80LL * v67;
              do
              {
                v69 = (char *)dest + v68;
                if ( !*(_DWORD *)((char *)dest + v68) )
                {
                  clear_tinfo_t(v69 + 8);
                  v70 = v69[5];
                  if ( v70 )
                  {
                    v69[6] = 0;
                    qfree(v70);
                  }
                  v71 = v69[2];
                  if ( v71 )
                  {
                    v69[3] = 0;
                    qfree(v71);
                  }
                  cleanup_argloc(v69);
                  memmove(v69, v69 + 10, (_BYTE *)dest + 80 * v129 - (_BYTE *)v69 - 80);
                  *(_QWORD *)&v129 = v129 - 1;
                }
                --v67;
                v68 -= 80;
              }
              while ( v67 != -1 );
            }
          }
          clear_tinfo_t(&v117);
          v90 = v136 & 0xF;
          if ( (v106 & 0xFFFFFF0F) != 0 || v106 == 192 )
          {
            v91 = v90 | 0xC0;
          }
          else
          {
            v91 = v106 | v90;
            v106 = 0;
          }
          v136 = v91;
          HIDWORD(v130) = v106;
          create_tinfo(a2 + 8, 12, 12, &dest);
          if ( v134 )
          {
            *(_QWORD *)&v135 = 0;
            qfree(v134);
          }
          cleanup_argloc(&v132);
          clear_tinfo_t(&v131);
          v92 = (char *)dest;
          if ( dest )
          {
            v93 = v129;
            if ( (_QWORD)v129 )
            {
              v94 = 0;
              do
              {
                v95 = &v92[80 * v94];
                clear_tinfo_t(v95 + 64);
                v96 = *((_QWORD *)v95 + 5);
                if ( v96 )
                {
                  *((_QWORD *)v95 + 6) = 0;
                  qfree(v96);
                }
                v97 = *((_QWORD *)v95 + 2);
                if ( v97 )
                {
                  *((_QWORD *)v95 + 3) = 0;
                  qfree(v97);
                }
                ++v94;
                cleanup_argloc(v95);
                v92 = (char *)dest;
              }
              while ( v93 != v94 );
            }
            *(_QWORD *)&v129 = 0;
            qfree(v92);
          }
          clear_tinfo_t(v120);
          goto LABEL_78;
        }
        v118 = 0;
        s1 = nullptr;
        v137 = 0;
        copy_tinfo_t((char *)&v137 + 8, &s1);
        v138 = 0;
        copy_tinfo_t(&v138, &v118);
        *(_DWORD *)v139 = 0;
        *(_WORD *)&v139[4] = 0;
        clear_tinfo_t(&s1);
        clear_tinfo_t(&v118);
        copy_tinfo_t(&v137, &v117);
        create_tinfo(&v117, 10, 10, &v137);
        clear_tinfo_t(&v138);
        clear_tinfo_t((char *)&v137 + 8);
        clear_tinfo_t(&v137);
        LODWORD(s1) = 0;
        v122 = 0u;
        v124 = 0;
        v126 = 0;
        v127 = 0;
        v123 = 0;
        v125 = 0;
        copy_tinfo_t(&v126, &v117);
        v98 = *((_DWORD **)&v122 + 1);
        if ( *((_QWORD *)&v123 + 1) <= 4u )
        {
          *((_QWORD *)&v122 + 1) = qvector_reserve((char *)&v122 + 8, *((_QWORD *)&v122 + 1), 5, 1);
          v98 = *((_DWORD **)&v122 + 1);
        }
        *(_QWORD *)&v123 = 5;
        *v98 = 1936287860;
        *(_BYTE *)(*((_QWORD *)&v122 + 1) + 4LL) = 0;
        if ( !a5 )
          goto LABEL_203;
        v99 = a1[40];
        *(_QWORD *)&v137 = off_A9E18;
        v140[1] = 0;
        LODWORD(v138) = 0;
        memset(v139, 0, sizeof(v139));
        v140[0] = 0;
        v140[2] = a1;
        v141 = 0;
        *((_QWORD *)&v137 + 1) = a5;
        (*(void (__fastcall **)(__int64, __int64, __int64, __int128 *))(*(_QWORD *)v99 + 16LL))(v99, a5, 7, &v137);
        copy_argloc(&s1, &v138);
        if ( (_DWORD)s1 == 1 )
        {
          v101 = get_tinfo_size(0, v126, 0);
          if ( (_QWORD)v129 )
          {
            v102 = 0;
            v103 = 0;
            v105 = v101;
            do
            {
              v104 = (char *)dest + 80 * v103;
              if ( *(_DWORD *)v104 == 1 )
              {
                v113 = (char *)dest + 80 * v103;
                v109 = *((_QWORD *)v104 + 1) + v105;
                cleanup_argloc(v113);
                *(_DWORD *)v113 = 1;
                *((_QWORD *)v113 + 1) = v109;
              }
              v103 = ++v102;
            }
            while ( v102 < (unsigned __int64)v129 );
          }
        }
        v100 = v141;
        *(_QWORD *)&v137 = off_A9E18;
        clear_tinfo_t(v140);
        if ( *(_QWORD *)&v139[32] )
        {
          *(_QWORD *)&v139[40] = 0;
          qfree(*(_QWORD *)&v139[32]);
        }
        if ( *(_QWORD *)&v139[8] )
        {
          *(_QWORD *)&v139[16] = 0;
          qfree(*(_QWORD *)&v139[8]);
        }
        cleanup_argloc(&v138);
        if ( v100 )
        {
LABEL_203:
          sub_334B0((__int64 *)&dest, (char *)dest, (__int64)&s1);
        }
        else if ( v106 != 128 )
        {
LABEL_196:
          clear_tinfo_t(&v126);
          if ( v124 )
          {
            *(_QWORD *)&v125 = 0;
            qfree(v124);
          }
          if ( *((_QWORD *)&v122 + 1) )
          {
            *(_QWORD *)&v123 = 0;
            qfree(*((_QWORD *)&v122 + 1));
          }
          cleanup_argloc(&s1);
          goto LABEL_115;
        }
        sub_36500((__int64)a1, (__int64 *)&dest, a3, (__int64)a4);
        goto LABEL_196;
      }
      if ( v134 )
      {
        *(_QWORD *)&v135 = 0;
        qfree(v134);
      }
      cleanup_argloc(&v132);
      clear_tinfo_t(&v131);
      v77 = (char *)dest;
      if ( dest )
      {
        v78 = v129;
        if ( (_QWORD)v129 )
        {
          v79 = 0;
          do
          {
            v80 = &v77[80 * v79];
            clear_tinfo_t(v80 + 64);
            v81 = *((_QWORD *)v80 + 5);
            if ( v81 )
            {
              *((_QWORD *)v80 + 6) = 0;
              qfree(v81);
            }
            v82 = *((_QWORD *)v80 + 2);
            if ( v82 )
            {
              *((_QWORD *)v80 + 3) = 0;
              qfree(v82);
            }
            cleanup_argloc(v80);
            v77 = (char *)dest;
            ++v79;
          }
          while ( v78 != v79 );
        }
        *(_QWORD *)&v129 = 0;
        qfree(v77);
      }
LABEL_71:
      clear_tinfo_t(v120);
      break;
    case 9LL:
      dest = &dword_0 + 1;
      v129 = 0u;
      if ( !(unsigned __int8)sub_4F630(a1, &dest, a4, 0) )
        goto LABEL_82;
      v118 = 0;
      v119 = 0;
      s1 = nullptr;
      v137 = 0;
      copy_tinfo_t((char *)&v137 + 8, &s1);
      v138 = 0;
      copy_tinfo_t(&v138, &v119);
      *(_DWORD *)v139 = 0;
      *(_WORD *)&v139[4] = 0;
      clear_tinfo_t(&s1);
      clear_tinfo_t(&v119);
      copy_tinfo_t(&v137, &v129);
      create_tinfo(&v118, 10, 10, &v137);
      clear_tinfo_t(&v138);
      clear_tinfo_t((char *)&v137 + 8);
      clear_tinfo_t(&v137);
      v26 = get_tinfo_size(0, v118, 0);
      if ( v26 == v116 )
        goto LABEL_38;
      if ( ((v116 - 4) & 0xFFFFFFFFFFFFFFFBLL) != 0 )
      {
        scalar_bt = get_scalar_bt(v116);
        if ( !scalar_bt )
        {
          clear_tinfo_t(&v118);
LABEL_82:
          clear_tinfo_t(&v129);
          return 0;
        }
        *(_QWORD *)&v137 = scalar_bt;
        copy_tinfo_t(&v118, &v137);
        clear_tinfo_t(&v137);
      }
      else
      {
        s1 = nullptr;
        v119 = 0;
        v137 = 0;
        copy_tinfo_t((char *)&v137 + 8, &v119);
        v138 = 0;
        copy_tinfo_t(&v138, &s1);
        *(_DWORD *)v139 = 0;
        *(_WORD *)&v139[4] = 0;
        clear_tinfo_t(&v119);
        clear_tinfo_t(&s1);
        copy_tinfo_t(&v137, &v129);
        v27 = 64;
        if ( v116 == 4 )
          v27 = 32;
        v139[5] = v27;
        create_tinfo(&v118, 10, 10, &v137);
        clear_tinfo_t(&v138);
        clear_tinfo_t((char *)&v137 + 8);
        clear_tinfo_t(&v137);
      }
LABEL_38:
      v28 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)(a2 + 8) = v118;
      v118 = v28;
      clear_tinfo_t(&v118);
      clear_tinfo_t(&v129);
LABEL_78:
      v24 = 1;
      v23 = 1;
      goto LABEL_26;
    case 10LL:
      v137 = 1u;
      v138 = 0;
      if ( !(unsigned __int8)sub_4F630(a1, &v137, a4, 0) )
        goto LABEL_79;
      v29 = (__int64 (__fastcall *)(__int64, char **))(*a4)[8];
      if ( (char *)v29 == (char *)sub_2DE40 )
      {
        v30 = (int *)sub_2CEC0(a4[2], 0x4000, 0x400u, 0x4000000);
        if ( !v30 )
          goto LABEL_79;
        v31 = *v30;
        LODWORD(s1) = v31;
      }
      else
      {
        if ( (unsigned int)v29((__int64)a4, &s1) )
          goto LABEL_79;
        v31 = (int)s1;
      }
      LODWORD(v129) = 0;
      dest = nullptr;
      v32 = BYTE8(v137);
      DWORD1(v129) = v31;
      copy_tinfo_t(&dest, (char *)&v137 + 8);
      v24 = create_tinfo(a2 + 8, 11, 11, &dest);
      clear_tinfo_t(&dest);
      if ( v24 )
      {
        clear_tinfo_t((char *)&v137 + 8);
        v12 |= v32 & 0xC0;
        v23 = 1;
        goto LABEL_26;
      }
LABEL_79:
      clear_tinfo_t((char *)&v137 + 8);
      return 0;
    case 11LL:
      v43 = (__int64 (__fastcall *)(__int64, __int128 *))(*a4)[1];
      if ( (char *)v43 == (char *)sub_2DE10 )
      {
        v44 = (int *)sub_2CEC0(a4[2], 2048, 0x400u, 0x4000000);
        if ( !v44 )
          return 0;
        v45 = *v44;
        LODWORD(v137) = *v44;
      }
      else
      {
        if ( (unsigned int)v43((__int64)a4, &v137) )
          return 0;
        v45 = v137;
      }
      v23 = sub_30F60((__int64)a1, a2, v45, v116);
      v24 = v23 != 0;
LABEL_26:
      if ( v12 )
      {
        if ( v24 )
        {
          v22 = *(_QWORD *)(a2 + 8);
          if ( (_BYTE)v22 )
          {
LABEL_29:
            LOBYTE(v22) = v22 & 0x3F;
            *(_QWORD *)(a2 + 8) = v12 | v22;
          }
        }
      }
      return v23;
    case 20LL:
      if ( !a5 || (v19 = a2 + 8, v18 = a1, !sub_32BE0((__int64)a1, a2 + 8, a5)) )
      {
        idati = a1[39];
        LOWORD(v138) = 0;
        *((_QWORD *)&v137 + 1) = "$vt";
        if ( !idati )
          idati = get_idati(v18, v19);
        *(_QWORD *)&v137 = idati;
        create_tinfo(a2 + 8, 61, 61, &v137);
      }
      goto LABEL_78;
    default:
      goto LABEL_17;
  }
  return 0;
}

