__int64 __fastcall sub_3D0D0(__int64 a1)
{
  char v2; // bl
  unsigned __int64 i; // r15
  __int64 v4; // rax
  __int64 v5; // r12
  unsigned __int8 v6; // al
  __int64 result; // rax
  __int64 v8; // rdi
  unsigned __int8 v9; // al
  char tinfo_property; // al
  __int64 v11; // rdi
  char v12; // al
  __int64 v13; // rdi
  __int64 v14; // r12
  __int64 v15; // r15
  _QWORD *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 *v19; // rax
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  const char *v23; // rdx
  const char *v24; // rbx
  __int64 *v25; // rax
  __int64 *v26; // rax
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  const char *v30; // rsi
  __int64 *v31; // rax
  const char *v32; // rbx
  __int64 *v33; // rax
  int v34; // ecx
  int v35; // r8d
  int v36; // r9d
  const char *v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rdx
  unsigned __int64 v40; // r13
  __int64 v41; // rax
  unsigned __int64 v42; // r12
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rsi
  __int64 v46; // r15
  void *v47; // rax
  unsigned int v48; // eax
  int v49; // edx
  char v50; // al
  char v51; // al
  __int64 *v52; // rax
  int v53; // edx
  int v54; // ecx
  int v55; // r8d
  int v56; // r9d
  const char *v57; // rsi
  unsigned int v58; // eax
  int v59; // edx
  int v60; // ecx
  int v61; // r8d
  int v62; // r9d
  unsigned __int64 v63; // r15
  __int64 *v64; // rax
  int v65; // ecx
  int v66; // r8d
  int v67; // r9d
  const char *v68; // rdx
  __int64 *v69; // rax
  const char *v70; // rbx
  __int64 *v71; // rax
  int v72; // ecx
  int v73; // r8d
  int v74; // r9d
  const char *v75; // rsi
  __int64 v76; // rsi
  __int64 v77; // rax
  int v78; // r12d
  __int64 v79; // r13
  __int64 v80; // rax
  __int64 v81; // rdi
  __int64 v82; // rax
  __int64 v83; // r13
  const char *v84; // rdx
  char *v85; // rdx
  char *v86; // r9
  __int64 v87; // r8
  char *v88; // r11
  void *v89; // rsi
  unsigned __int64 v90; // rdx
  size_t v91; // r9
  __int64 v92; // r8
  size_t v93; // r11
  _BYTE *v94; // rsi
  char *v95; // rsi
  int v96; // r13d
  void *v97; // rax
  size_t v98; // r8
  char *v99; // r15
  const char *v100; // rdx
  char *v101; // rdi
  void *v102; // r13
  void *v103; // r12
  char *v104; // r15
  __int64 v105; // rdi
  __int64 v106; // rdi
  char *v107; // r13
  char *v108; // r12
  size_t v109; // rax
  size_t v110; // r13
  size_t v111; // r15
  unsigned __int64 v112; // r15
  char *v113; // rax
  char v114; // r12
  char *v115; // rax
  signed __int64 v116; // rdx
  unsigned __int64 v117; // rax
  unsigned __int64 v118; // rdx
  unsigned __int64 v119; // r15
  unsigned __int64 v120; // rdx
  char *v121; // rdx
  int tinfo_size; // eax
  unsigned int v123; // r15d
  unsigned int v124; // eax
  int v125; // ecx
  int v126; // r8d
  int v127; // r9d
  unsigned __int64 v128; // rdx
  __int64 j; // r15
  __int64 v130; // [rsp+8h] [rbp-188h]
  __int64 v131; // [rsp+8h] [rbp-188h]
  size_t v132; // [rsp+10h] [rbp-180h]
  char *v133; // [rsp+10h] [rbp-180h]
  unsigned __int64 v134; // [rsp+18h] [rbp-178h]
  size_t v135; // [rsp+18h] [rbp-178h]
  char *v136; // [rsp+18h] [rbp-178h]
  int v137; // [rsp+20h] [rbp-170h]
  size_t v138; // [rsp+20h] [rbp-170h]
  char v139; // [rsp+28h] [rbp-168h]
  unsigned __int64 v140; // [rsp+28h] [rbp-168h]
  char *v141; // [rsp+28h] [rbp-168h]
  int v142; // [rsp+34h] [rbp-15Ch]
  size_t n; // [rsp+38h] [rbp-158h]
  size_t na; // [rsp+38h] [rbp-158h]
  void *src; // [rsp+48h] [rbp-148h]
  char v146; // [rsp+58h] [rbp-138h]
  unsigned __int8 v147; // [rsp+58h] [rbp-138h]
  unsigned __int8 v148; // [rsp+58h] [rbp-138h]
  __int64 v149; // [rsp+58h] [rbp-138h]
  __int64 v150; // [rsp+60h] [rbp-130h] BYREF
  __int64 v151; // [rsp+68h] [rbp-128h] BYREF
  void *dest; // [rsp+70h] [rbp-120h] BYREF
  __int128 v153; // [rsp+78h] [rbp-118h]
  char *s1; // [rsp+90h] [rbp-100h] BYREF
  __int128 v155; // [rsp+98h] [rbp-F8h]
  void *v156[3]; // [rsp+B0h] [rbp-E0h] BYREF
  __int128 v157; // [rsp+C8h] [rbp-C8h]
  __int64 v158; // [rsp+D8h] [rbp-B8h]
  int v159; // [rsp+E0h] [rbp-B0h]
  __int64 v160; // [rsp+F0h] [rbp-A0h] BYREF
  __int128 v161; // [rsp+F8h] [rbp-98h]
  __int64 v162; // [rsp+108h] [rbp-88h]
  __int64 v163; // [rsp+110h] [rbp-80h] BYREF
  __int64 v164; // [rsp+118h] [rbp-78h] BYREF
  __int128 v165; // [rsp+120h] [rbp-70h]
  __int64 v166; // [rsp+130h] [rbp-60h]
  __int128 v167; // [rsp+138h] [rbp-58h]
  char v168; // [rsp+148h] [rbp-48h]
  unsigned __int64 v169; // [rsp+158h] [rbp-38h]

  v2 = 3;
  v169 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 152) )
  {
    for ( i = 0; i < *(_QWORD *)(a1 + 152); ++i )
    {
      v4 = *(_QWORD *)(a1 + 144);
      v5 = *(_QWORD *)(v4 + 8 * i);
      if ( (debug & 0x400000) != 0 )
      {
        v19 = sub_34340(*(_QWORD *)(v4 + 8 * i));
        v23 = ::src;
        if ( v19[1] )
          v23 = (const char *)*v19;
        sub_88B80((unsigned int)"param #%zu: %s\n", i, (_DWORD)v23, v20, v21, v22);
      }
      v6 = *(_BYTE *)(v5 + 142);
      if ( v6 > 2u )
      {
        if ( v6 == 5 )
        {
          if ( (debug & 0x400000) != 0 )
          {
            v24 = ::src;
            v25 = sub_34340(v5);
            if ( v25[1] )
              v24 = (const char *)*v25;
            v26 = sub_34340(a1);
            v30 = ::src;
            if ( v26[1] )
              v30 = (const char *)*v26;
            sub_88B80(
              (unsigned int)"Error subroutine DIE %s dependency DIE %s processing error\n",
              (_DWORD)v30,
              (_DWORD)v24,
              v27,
              v28,
              v29);
          }
          return 5;
        }
      }
      else
      {
        if ( !v6 )
          return 0;
        v2 = 1;
      }
    }
  }
  v8 = *(_QWORD *)(a1 + 88);
  if ( v8 != a1 )
  {
    v9 = *(_BYTE *)(v8 + 142);
    if ( v9 > 2u )
    {
      if ( v9 == 5 )
      {
        if ( (debug & 0x400000) != 0 )
        {
          v31 = sub_34340(v8);
          v32 = ::src;
          if ( v31[1] )
            v32 = (const char *)*v31;
          v33 = sub_34340(a1);
          v37 = ::src;
          if ( v33[1] )
            v37 = (const char *)*v33;
          sub_88B80(
            (unsigned int)"Error subroutine DIE %s return type DIE %s processing error\n",
            (_DWORD)v37,
            (_DWORD)v32,
            v34,
            v35,
            v36);
        }
        return 5;
      }
    }
    else
    {
      if ( !v9 )
        return 0;
      v2 = 1;
    }
  }
  result = *(unsigned __int8 *)(a1 + 142);
  if ( v2 != (_BYTE)result )
  {
    v163 = 0;
    v160 = 0;
    v162 = 0;
    v164 = 0;
    v166 = 0;
    v168 = 16;
    v161 = 0;
    v165 = 0;
    v167 = 0;
    if ( v8 == a1 )
    {
      create_tinfo(&v163, 1, 7, 0);
    }
    else
    {
      tinfo_property = get_tinfo_property(*(_QWORD *)(v8 + 8), 2);
      v11 = *(_QWORD *)(a1 + 88);
      if ( (tinfo_property & 0xF) == 0xD && *(_BYTE *)(v11 + 142) == 3 && !*(_QWORD *)(v11 + 64) )
      {
        if ( !(unsigned __int8)tinfo_t__build_anon_type_name(v11 + 40, v11 + 8) && (debug & 0x400000) != 0 )
        {
          v123 = (unsigned int)sub_34570(*(_QWORD *)(a1 + 88));
          v124 = (unsigned int)sub_34570(a1);
          sub_88B80(
            (unsigned int)"Error subroutine DIE %s serializing return type from DIE %s\n",
            v124,
            v123,
            v125,
            v126,
            v127);
        }
        sub_34B90(*(_QWORD *)(a1 + 88));
        v11 = *(_QWORD *)(a1 + 88);
      }
      if ( !(unsigned __int8)sub_350A0(v11, (__int64)&v163) )
      {
        if ( (debug & 0x400000) != 0 )
        {
          v69 = sub_34340(*(_QWORD *)(a1 + 88));
          v70 = ::src;
          if ( v69[1] )
            v70 = (const char *)*v69;
          v71 = sub_34340(a1);
          v75 = ::src;
          if ( v71[1] )
            v75 = (const char *)*v71;
          sub_88B80(
            (unsigned int)"Error subroutine DIE %s propagating return type from DIE %s\n",
            (_DWORD)v75,
            (_DWORD)v70,
            v72,
            v73,
            v74);
        }
        goto LABEL_23;
      }
      if ( (get_tinfo_property(v163, 2) & 0xF) == 0xB )
      {
        s1 = nullptr;
        *(_QWORD *)&v155 = 0;
        if ( (unsigned __int8)get_tinfo_details(v163, 11, &s1) )
        {
          dest = nullptr;
          v151 = 0;
          *(_OWORD *)v156 = 0;
          copy_tinfo_t(&v156[1], &v151);
          v156[2] = nullptr;
          copy_tinfo_t(&v156[2], &dest);
          LODWORD(v157) = 0;
          WORD2(v157) = 0;
          clear_tinfo_t(&v151);
          clear_tinfo_t(&dest);
          v121 = s1;
          s1 = (char *)v156[0];
          v156[0] = v121;
          create_tinfo(&v163, 10, 10, v156);
          clear_tinfo_t(&v156[2]);
          clear_tinfo_t(&v156[1]);
          clear_tinfo_t(v156);
          clear_tinfo_t(&s1);
        }
        else
        {
          clear_tinfo_t(&s1);
          if ( (debug & 0x400000) != 0 )
          {
            v58 = (unsigned int)sub_34570(a1);
            sub_88B80(
              (unsigned int)"Error subroutine DIE %s unable to convert array to pointer\n",
              v58,
              v59,
              v60,
              v61,
              v62);
          }
        }
      }
    }
    v38 = *(_QWORD *)(a1 + 80);
    v39 = *(_QWORD *)(a1 + 104);
    ++dword_CB400;
    if ( !(unsigned int)sub_28770(&v150, *(_QWORD *)(v38 + 144), v39, (__int64)&v151) )
    {
      sub_34340(a1);
      sub_17110((__int64)"%d:%s: subroutine: %s\n");
    }
    if ( *(_QWORD *)(a1 + 152) )
    {
      v40 = 0;
      do
      {
        v44 = v161;
        v45 = v160;
        v46 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v40);
        if ( *((_QWORD *)&v161 + 1) < (unsigned __int64)(v161 + 1) )
        {
          v160 = qvector_reserve(&v160, v160, v161 + 1, 80);
          v44 = v161;
          v45 = v160;
        }
        v41 = v45 + 80 * v44;
        *(_DWORD *)v41 = 0;
        *(_QWORD *)(v41 + 8) = 0;
        v149 = v41;
        *(_QWORD *)(v41 + 16) = 0;
        *(_QWORD *)(v41 + 40) = 0;
        *(_QWORD *)(v41 + 64) = 0;
        *(_DWORD *)(v41 + 72) = 0;
        *(_OWORD *)(v41 + 24) = 0;
        *(_OWORD *)(v41 + 48) = 0;
        *(_QWORD *)&v161 = v161 + 1;
        if ( v41 + 16 != v46 + 40 )
        {
          v42 = *(_QWORD *)(v46 + 48);
          if ( v42 > 1 )
          {
            src = *(void **)(v46 + 40);
            v47 = (void *)qvector_reserve(v41 + 16, 0, *(_QWORD *)(v46 + 48), 1);
            *(_QWORD *)(v149 + 16) = v47;
            *(_QWORD *)(v149 + 24) = v42;
            memmove(v47, src, v42 - 1);
            *(_BYTE *)(*(_QWORD *)(v149 + 16) + v42 - 1) = 0;
          }
        }
        sub_350A0(v46, v149 + 64);
        v43 = *(_QWORD *)(a1 + 152);
        ++v40;
      }
      while ( v40 < v43 );
      v142 = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 164LL);
      if ( v142 != 22 && *(_DWORD *)(a1 + 168) == 64 )
      {
LABEL_66:
        if ( (get_tinfo_property(v163, 2) & 0x3F) != 1 || !(_QWORD)v161 )
          goto LABEL_73;
        if ( v142 != 22 )
        {
          v48 = *(_DWORD *)(a1 + 168);
          if ( v48 <= 0x10 )
            v48 = getinf(99);
          if ( v48 != 256 && v48 != 176 )
            goto LABEL_73;
        }
        v76 = *(_QWORD *)(a1 + 152);
        v77 = *(_QWORD *)(a1 + 144);
        dest = nullptr;
        v153 = 0;
        v78 = 0;
        v137 = v76;
        v79 = v77 + 8 * v76;
        if ( v79 != v77 )
        {
          do
          {
            v80 = *(_QWORD *)(v79 - 8);
            v81 = *(_QWORD *)(v80 + 104);
            v82 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v80 + 80) + 144LL) + 88LL);
            LODWORD(s1) = 0;
            if ( (*(unsigned int (__fastcall **)(__int64, __int64, char **, void **))(v82 + 112))(v81, 75, &s1, v156) )
              break;
            if ( !(_DWORD)s1 )
              break;
            v79 -= 8;
            ++v78;
          }
          while ( v79 != *(_QWORD *)(a1 + 144) );
          if ( v78 )
          {
            if ( (int)v76 - v78 < (int)v76 )
            {
              v83 = 80LL * ((int)v76 - v78);
              n = 80 * ((int)v76 - v78 + (unsigned __int64)(unsigned int)(v78 - 1) + 1);
              do
              {
                v84 = ::src;
                s1 = nullptr;
                v155 = 0;
                if ( *(_QWORD *)(v83 + v160 + 24) )
                  v84 = *(const char **)(v83 + v160 + 16);
                print_tinfo(&s1, 0, 0, 0, 0, v83 + v160 + 64, v84);
                if ( (unsigned __int64)v153 > 1 )
                {
                  memset(v156, 0, sizeof(v156));
                  v156[0] = (void *)qvector_reserve(v156, 0, 3, 1);
                  v156[1] = &dword_0 + 3;
                  strcpy((char *)v156[0], ", ");
                  v85 = (char *)v156[1];
                  if ( v156[1] )
                  {
                    v86 = (char *)v156[1] - 1;
                    if ( v156[1] != (char *)&dword_0 + 1 )
                    {
                      v87 = v153;
                      v88 = (char *)v156[1] - 1;
                      if ( (_QWORD)v153 )
                      {
                        v87 = v153 - 1;
                        v88 = &v86[v153 - 1];
                        v85 = (char *)v156[1] + v153 - 1;
                      }
                      v89 = dest;
                      if ( *((_QWORD *)&v153 + 1) < (unsigned __int64)v85 )
                      {
                        v131 = v87;
                        v133 = (char *)v156[1] - 1;
                        v136 = v88;
                        v141 = v85;
                        dest = (void *)qvector_reserve(&dest, dest, v85, 1);
                        v87 = v131;
                        v89 = dest;
                        v86 = v133;
                        v88 = v136;
                        v85 = v141;
                      }
                      *(_QWORD *)&v153 = v85;
                      v88[(_QWORD)v89] = 0;
                      memcpy((char *)dest + v87, v156[0], (size_t)v86);
                    }
                  }
                  if ( v156[0] )
                  {
                    v156[1] = nullptr;
                    qfree(v156[0]);
                  }
                }
                v90 = v155;
                if ( (_QWORD)v155 )
                {
                  v91 = v155 - 1;
                  if ( (_QWORD)v155 != 1 )
                  {
                    v92 = v153;
                    v93 = v155 - 1;
                    if ( (_QWORD)v153 )
                    {
                      v92 = v153 - 1;
                      v93 = v91 + v153 - 1;
                      v90 = v155 + v153 - 1;
                    }
                    v94 = dest;
                    if ( *((_QWORD *)&v153 + 1) < v90 )
                    {
                      v130 = v92;
                      v132 = v155 - 1;
                      v135 = v93;
                      v140 = v90;
                      dest = (void *)qvector_reserve(&dest, dest, v90, 1);
                      v92 = v130;
                      v94 = dest;
                      v91 = v132;
                      v93 = v135;
                      v90 = v140;
                    }
                    *(_QWORD *)&v153 = v90;
                    v94[v93] = 0;
                    memcpy((char *)dest + v92, s1, v91);
                  }
                }
                if ( s1 )
                {
                  *(_QWORD *)&v155 = 0;
                  qfree(s1);
                }
                v83 += 80;
              }
              while ( n != v83 );
            }
            v139 = 0;
LABEL_138:
            memset(v156, 0, sizeof(v156));
            v158 = 0;
            v159 = 1;
            v157 = 0;
            v156[0] = (void *)qvector_reserve(v156, 0, v78, 144);
            v95 = (char *)v156[0];
            v134 = v137 - v78;
            if ( v137 > v137 - v78 )
            {
              v96 = 0;
              na = 80LL * (v137 - v78);
              while ( 1 )
              {
                v97 = v156[1];
                v98 = v160 + na;
                if ( v156[2] < (char *)v156[1] + 1 )
                {
                  v138 = v160 + na;
                  v156[0] = (void *)qvector_reserve(v156, v95, (char *)v156[1] + 1, 144);
                  v95 = (char *)v156[0];
                  v98 = v138;
                  v97 = v156[1];
                }
                v99 = &v95[144 * (_QWORD)v97];
                *((_QWORD *)v99 + 2) = 0;
                *((_QWORD *)v99 + 5) = 0;
                *((_QWORD *)v99 + 14) = 1;
                *((_DWORD *)v99 + 30) = -1;
                *((_QWORD *)v99 + 16) = 0;
                v99[136] = 0;
                *(_OWORD *)v99 = 0;
                *(_OWORD *)(v99 + 24) = 0;
                *((_OWORD *)v99 + 3) = 0;
                *((_OWORD *)v99 + 4) = 0;
                ++v156[1];
                s1 = nullptr;
                if ( v139 )
                  s1 = (char *)get_tinfo_property(*(_QWORD *)(v98 + 64), 10);
                else
                  copy_tinfo_t(&s1, v98 + 64);
                copy_tinfo_t(v99 + 64, &s1);
                clear_tinfo_t(&s1);
                sub_20160((__int64 *)v99 + 2, (__int64)"_r%d", v96++);
                na += 80LL;
                if ( v96 == v78 )
                  break;
                v95 = (char *)v156[0];
              }
            }
            sub_3CD70(&v160, v134);
            validate_name(&dest, 8, 524289);
            v100 = ::src;
            if ( (_QWORD)v153 )
              v100 = (const char *)dest;
            sub_76DF0(&v160, v156, v100);
            v101 = (char *)v156[0];
            if ( v156[0] )
            {
              v102 = v156[1];
              v103 = nullptr;
              if ( v156[1] )
              {
                do
                {
                  v104 = &v101[144 * (_QWORD)v103];
                  clear_tinfo_t(v104 + 64);
                  v105 = *((_QWORD *)v104 + 5);
                  if ( v105 )
                  {
                    *((_QWORD *)v104 + 6) = 0;
                    qfree(v105);
                  }
                  v106 = *((_QWORD *)v104 + 2);
                  if ( v106 )
                  {
                    *((_QWORD *)v104 + 3) = 0;
                    qfree(v106);
                  }
                  v103 = (char *)v103 + 1;
                  v101 = (char *)v156[0];
                }
                while ( v102 != v103 );
              }
              v156[1] = nullptr;
              qfree(v101);
            }
            goto LABEL_160;
          }
        }
        if ( (get_tinfo_property(*(_QWORD *)(v160 + 80 * v161 - 16), 2) & 0xF) != 0xA
          || (unsigned int)sub_28770(
                             &s1,
                             *(_QWORD *)(*(_QWORD *)(a1 + 80) + 144LL),
                             *(_QWORD *)(a1 + 104),
                             (__int64)v156)
          || (v108 = s1, strncmp(s1, "func(", 5u))
          || !v108
          || (v109 = strlen(v108), (v110 = v109) == 0) )
        {
LABEL_160:
          v107 = (char *)dest;
          goto LABEL_161;
        }
        v111 = v109 + 1;
        if ( *((_QWORD *)&v153 + 1) < v109 + 1 )
          dest = (void *)qvector_reserve(&dest, dest, v109 + 1, 1);
        *(_QWORD *)&v153 = v111;
        memmove(dest, v108, v110);
        *((_BYTE *)dest + v110) = 0;
        v107 = (char *)dest;
        v112 = v153;
        v113 = (char *)dest;
        if ( (unsigned __int64)v153 <= 1 )
        {
          v114 = 0;
        }
        else
        {
          v114 = *((char *)dest + v153 - 2);
          if ( v114 != 41 )
          {
LABEL_172:
            v115 = strrchr(v107, 41);
            if ( v115 )
            {
              v116 = v115 - v107;
              if ( v115 - v107 != -1 && v116 + 1 < v112 && v115[1] == 32 )
              {
                v117 = v112 - 1;
                v118 = v116 + 2;
                v119 = 0;
                if ( v118 < v117 )
                {
                  v119 = v117 - v118;
                  memmove(v107, &v107[v118], v117 - v118);
                  v107 = (char *)dest;
                }
                v120 = v119 + 1;
                if ( *((_QWORD *)&v153 + 1) < v119 + 1 )
                {
                  dest = (void *)qvector_reserve(&dest, v107, v120, 1);
                  v120 = v119 + 1;
                  v107 = (char *)dest;
                }
                *(_QWORD *)&v153 = v120;
                v107[v119] = 0;
                if ( v114 == 41 )
                {
                  v78 = 1;
                  for ( j = sub_33B90((__int64)&dest, 44, 0); j != -1; j = sub_33B90((__int64)&dest, 44, j + 1) )
                  {
                    if ( (get_tinfo_property(*(_QWORD *)(v160 + 80LL * v78 + 64), 2) & 0xF) != 0xA )
                      goto LABEL_160;
                    ++v78;
                  }
                  v107 = (char *)dest;
                  if ( !v78 )
                    goto LABEL_161;
                  v139 = 1;
                }
                else
                {
                  v139 = 1;
                  v78 = 1;
                }
                goto LABEL_138;
              }
            }
LABEL_161:
            if ( v107 )
            {
              *(_QWORD *)&v153 = 0;
              qfree(v107);
            }
LABEL_73:
            v49 = *(_DWORD *)(a1 + 168);
            LODWORD(v162) = 0;
            v50 = v168 & 0xF;
            if ( (v49 & 0xFFFFFF0F) != 0 || v49 == 192 )
            {
              v51 = v50 | 0xC0;
            }
            else
            {
              v51 = v49 | v50;
              v49 = 0;
            }
            v168 = v51;
            HIDWORD(v162) = v49;
            if ( (unsigned __int8)create_tinfo(a1 + 8, 12, 12, &v160) )
            {
              if ( (unsigned __int8)sub_2C6A0(*(_QWORD *)(a1 + 80), *(_QWORD *)(a1 + 104), 0x2900u, &s1)
                && s1 == (_BYTE *)&word_12 + 1 )
              {
                if ( (get_tinfo_property(*(_QWORD *)(a1 + 8), 2) & 0xF) == 0xC && v142 == 22 )
                  sub_2DFC0(a1 + 8, a1 + 8, 0, 0xAu);
                sub_30CA0(a1);
                tinfo_size = get_tinfo_size(0, *(_QWORD *)(a1 + 8), 0);
                sub_345A0(a1, tinfo_size);
              }
              v156[0] = (void *)0x11571537E323156DLL;
              sub_856E0(v156, a1 + 64);
              sub_856E0(v156, *(_QWORD *)(a1 + 88) + 72LL);
              if ( *(_QWORD *)(a1 + 152) )
              {
                v63 = 0;
                do
                {
                  if ( dword_D08E4 && (debug & 0x400000) != 0 )
                  {
                    v64 = sub_34340(*(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v63));
                    v68 = ::src;
                    if ( v64[1] )
                      v68 = (const char *)*v64;
                    sub_88B80((unsigned int)"param #%zu (%s)\n", v63, (_DWORD)v68, v65, v66, v67);
                  }
                  sub_856E0(v156, *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v63++) + 72LL);
                }
                while ( v63 < *(_QWORD *)(a1 + 152) );
              }
              sub_349E0(a1, (__int64 *)v156);
              v12 = v2;
              goto LABEL_24;
            }
            if ( (debug & 0x400000) != 0 )
            {
              v52 = sub_34340(a1);
              v57 = ::src;
              if ( v52[1] )
                v57 = (const char *)*v52;
              sub_88B80(
                (unsigned int)"Error subroutine DIE %s creating function type\n",
                (_DWORD)v57,
                v53,
                v54,
                v55,
                v56);
            }
LABEL_23:
            v12 = 5;
LABEL_24:
            if ( v166 )
            {
              v146 = v12;
              *(_QWORD *)&v167 = 0;
              qfree(v166);
              v12 = v146;
            }
            v147 = v12;
            cleanup_argloc(&v164);
            clear_tinfo_t(&v163);
            v13 = v160;
            result = v147;
            if ( v160 )
            {
              v14 = v161;
              if ( (_QWORD)v161 )
              {
                v15 = 0;
                do
                {
                  v16 = (_QWORD *)(v13 + 80 * v15);
                  clear_tinfo_t(v16 + 8);
                  v17 = v16[5];
                  if ( v17 )
                  {
                    v16[6] = 0;
                    qfree(v17);
                  }
                  v18 = v16[2];
                  if ( v18 )
                  {
                    v16[3] = 0;
                    qfree(v18);
                  }
                  cleanup_argloc(v16);
                  v13 = v160;
                  ++v15;
                }
                while ( v14 != v15 );
                LOBYTE(result) = v147;
              }
              v148 = result;
              *(_QWORD *)&v161 = 0;
              qfree(v13);
              return v148;
            }
            return result;
          }
          v128 = v153 - 1;
          if ( (__int64)v153 - 1 <= 1 )
          {
            if ( !dest )
              goto LABEL_172;
            *(_QWORD *)&v153 = 0;
            qfree(dest);
            v112 = v153;
            v107 = nullptr;
            dest = nullptr;
            *((_QWORD *)&v153 + 1) = 0;
          }
          else
          {
            if ( *((_QWORD *)&v153 + 1) < v128 )
            {
              v113 = (char *)qvector_reserve(&dest, dest, v128, 1);
              dest = v113;
              v128 = v112 - 1;
            }
            *(_QWORD *)&v153 = v128;
            v113[v112 - 2] = 0;
            v112 = v153;
            v107 = (char *)dest;
          }
        }
        if ( !v112 )
          goto LABEL_161;
        goto LABEL_172;
      }
      if ( v43 )
      {
        *(_DWORD *)(a1 + 168) = 16;
        goto LABEL_66;
      }
    }
    else
    {
      v142 = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 164LL);
      if ( v142 != 22 && *(_DWORD *)(a1 + 168) == 64 )
        goto LABEL_66;
    }
    *(_DWORD *)(a1 + 168) = 32;
    goto LABEL_66;
  }
  return result;
}
