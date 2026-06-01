__int64 __fastcall sub_2662B0(__int64 a1, __int64 a2, unsigned int a3, _QWORD **a4, __int64 a5)
{
  unsigned int v5; // r12d
  __int64 v7; // rcx
  __int64 v8; // r14
  int v11; // eax
  int v12; // r11d
  __int64 v13; // r10
  int v15; // r12d
  int v16; // eax
  __int64 v17; // rdi
  unsigned int v18; // edx
  unsigned int v19; // eax
  unsigned __int64 v20; // rbp
  char *v21; // rcx
  __int64 v22; // r13
  int v23; // eax
  const char *v24; // r13
  int v25; // eax
  unsigned int v26; // eax
  __int64 v27; // rdx
  char v28; // r8
  __int64 v29; // rcx
  bool v30; // zf
  __int64 v31; // rdx
  char v32; // r15
  int v33; // r12d
  int v34; // r12d
  int v35; // eax
  char *v36; // rsi
  __int64 *v37; // r15
  char v38; // al
  char *v39; // rax
  bool v40; // al
  int v41; // r12d
  int v42; // eax
  int v43; // r12d
  int v44; // ebp
  int v45; // eax
  char *v46; // rsi
  __int64 v47; // r13
  __int64 v48; // r14
  unsigned __int64 v49; // r15
  char *v50; // rsi
  char *v51; // r13
  __int64 v52; // rdx
  int v53; // eax
  char *v54; // r15
  unsigned __int64 v55; // rsi
  unsigned __int8 v56; // bp
  _QWORD *v57; // rax
  __int64 v58; // r13
  const char *v59; // rsi
  char *v60; // rdi
  char *v61; // r8
  int v62; // eax
  const char *v63; // rdx
  __int64 v64; // rdx
  int v65; // eax
  int v66; // eax
  __int64 v67; // r15
  int v68; // eax
  __int64 v69; // r13
  __int64 v70; // r8
  unsigned __int64 v71; // r15
  char *v72; // rsi
  char *v73; // r13
  __int64 v74; // r13
  __int64 v75; // r14
  unsigned __int64 v76; // r15
  char *v77; // rsi
  char *v78; // r13
  const void *v79; // r15
  __int64 v80; // r13
  size_t v81; // rax
  size_t v82; // r14
  size_t v83; // r9
  char *v84; // rsi
  __int64 v85; // rdx
  __int64 v86; // r13
  unsigned __int64 v87; // r15
  char *v88; // rsi
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // r13
  int v92; // eax
  __int64 item_end; // rax
  int v94; // edx
  char v95; // r15
  char *v96; // r13
  char tinfo_property; // al
  __int64 v98; // r10
  __int64 v99; // r15
  __int64 ea_name; // rax
  char *v101; // rax
  __m128i v102; // xmm0
  __int64 v103; // rdi
  int v104; // r13d
  __int64 v105; // rax
  char v106; // al
  void (__fastcall *v107)(_QWORD **, _QWORD, void *, _QWORD); // r13
  __int64 tinfo_size; // rax
  char *v109; // rsi
  __int64 v110; // r13
  size_t v111; // r15
  __int64 v112; // r14
  size_t v113; // r15
  size_t v114; // r13
  size_t v115; // r14
  __int64 v116; // rdx
  int v117; // eax
  char v118; // al
  char v119; // al
  bool v120; // [rsp+7h] [rbp-A1h]
  char *v121; // [rsp+8h] [rbp-A0h]
  char *v122; // [rsp+8h] [rbp-A0h]
  __int64 v123; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v124; // [rsp+8h] [rbp-A0h]
  __int64 v125; // [rsp+8h] [rbp-A0h]
  __int64 v126; // [rsp+8h] [rbp-A0h]
  __int64 v127; // [rsp+8h] [rbp-A0h]
  __int64 v128; // [rsp+8h] [rbp-A0h]
  __int64 v129; // [rsp+8h] [rbp-A0h]
  __int64 v130; // [rsp+8h] [rbp-A0h]
  __int64 v131; // [rsp+10h] [rbp-98h]
  __int64 v132; // [rsp+10h] [rbp-98h]
  size_t v133; // [rsp+10h] [rbp-98h]
  __int64 v134; // [rsp+18h] [rbp-90h]
  __int64 v135; // [rsp+18h] [rbp-90h]
  char v136; // [rsp+27h] [rbp-81h] BYREF
  __int64 v137; // [rsp+28h] [rbp-80h]
  char *s; // [rsp+30h] [rbp-78h] BYREF
  __m128i v139; // [rsp+38h] [rbp-70h] BYREF
  char *s1; // [rsp+50h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+58h] [rbp-50h]
  unsigned __int64 v142; // [rsp+68h] [rbp-40h]

  v5 = a3;
  v7 = *(int *)(a1 + 8);
  v142 = __readfsqword(0x28u);
  if ( (unsigned int)v7 > 0x45 )
    return ((unsigned int (*)(_QWORD **, _QWORD, const char *, ...))**a4)(a4, 0, "?op%d", v7) + a3;
  v8 = a1;
  if ( *((_BYTE *)&off_4E0320 + 16 * v7 + 10) == 2 )
    sub_2655A0((void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *))a4);
  if ( *(_DWORD *)(a1 + 12) != -1 )
    sub_264E20(a1, a2, a4);
  v11 = sub_269460(a1, a2, 0, a4);
  if ( v11 )
  {
    v5 += v11;
    return v5;
  }
  v120 = sub_25F3C0(a1, *(_DWORD *)(a1 + 8), a5);
  if ( v120 )
  {
    ++v5;
    ((void (__fastcall *)(_QWORD **, _QWORD, void *))**a4)(a4, 0, &unk_41919E);
    v12 = *(_DWORD *)(a1 + 8);
  }
  v13 = *(_QWORD *)(a2 + 112);
  s = nullptr;
  v139 = 0;
  switch ( v12 )
  {
    case 0:
      goto LABEL_18;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
      v15 = sub_267810(*(_QWORD *)(a1 + 24), a2, v5, (__int64)a4, a1, 0);
      v16 = sub_2622C0(
              a1,
              *(_DWORD *)(a1 + 8) != 1,
              (void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *))a4,
              1u);
      v17 = *(_QWORD *)(a1 + 32);
      v18 = v15 + v16;
      goto LABEL_13;
    case 16:
      v41 = sub_267810(*(_QWORD *)(a1 + 24), a2, v5, (__int64)a4, a1, 0);
      v42 = sub_2622C0(a1, 1u, (void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *))a4, 1u);
      v43 = sub_267810(*(_QWORD *)(a1 + 32), a2, v41 + v42, (__int64)a4, a1, 0);
      ((void (__fastcall *)(_QWORD **, _QWORD, void *, void *))**a4)(a4, 0, &unk_4190BD, &unk_4191BB);
      v17 = *(_QWORD *)(a1 + 40);
      v18 = v43 + 3;
      goto LABEL_13;
    case 46:
    case 47:
    case 49:
    case 50:
    case 51:
    case 55:
    case 56:
      goto LABEL_31;
    case 48:
      v64 = *(_QWORD *)(a1 + 24);
      v65 = *(_DWORD *)(v64 + 8);
      if ( v65 != 61 )
        goto LABEL_96;
      v103 = *(_QWORD *)(v64 + 24);
      v129 = v13;
      v104 = *(char *)(v103 + 15);
      v105 = sub_255A30((__int64 *)v103);
      v106 = sub_2612E0((__int64 *)&s, v8 + 48, 0, v105, v104, 1);
      v13 = v129;
      if ( v106 )
        goto LABEL_46;
      v65 = *(_DWORD *)(*(_QWORD *)(v8 + 24) + 8LL);
LABEL_96:
      if ( v65 != 63 )
        goto LABEL_97;
      v127 = v13;
      tinfo_property = get_tinfo_property();
      v13 = v127;
      if ( (tinfo_property & 0xF) != 0xA )
        goto LABEL_97;
      s1 = nullptr;
      s1 = (char *)get_tinfo_property();
      set_tinfo_property();
      v98 = v127;
      v99 = a2 + 376;
      do
      {
        v128 = v98;
        if ( !(unsigned int)lexcompare_tinfo() )
        {
          clear_tinfo_t();
          v107 = (void (__fastcall *)(_QWORD **, _QWORD, void *, _QWORD))**a4;
          tinfo_size = get_tinfo_size();
          v107(a4, 0, &unk_4191B1, 9 * (unsigned int)(tinfo_size == 4) + 76);
          ++v5;
          goto LABEL_105;
        }
        v99 += 8;
        v98 = v128;
      }
      while ( v99 != a2 + 408 );
      clear_tinfo_t();
      v13 = v128;
LABEL_97:
      v66 = *(_DWORD *)(*(_QWORD *)(v13 + 96) + 604LL);
      if ( (v66 & 2) == 0 )
        goto LABEL_105;
      if ( (v66 & 0x800) != 0 || (*(_BYTE *)(v8 + 48) & 0xF) != 0xA )
        goto LABEL_103;
      v67 = *(_QWORD *)(v8 + 24);
      v68 = *(_DWORD *)(v67 + 8);
      if ( v68 == 52 )
      {
        v67 = *(_QWORD *)(v67 + 24);
        v68 = *(_DWORD *)(v67 + 8);
      }
      if ( v68 != 64 || !(unsigned __int8)sub_261AA0(v13, *(_QWORD *)(v67 + 24), 1) )
        goto LABEL_103;
      s1 = nullptr;
      s1 = (char *)get_tinfo_property();
      v117 = get_str_type() & 3;
      if ( v117 == 1 )
      {
        v119 = (unsigned __int8)s1 & 0x3F;
        if ( ((unsigned __int8)s1 & 0x3F) != 0x13 && v119 != 35 && v119 != 3 )
          goto LABEL_188;
      }
      else if ( v117 == 2
             || (v118 = (unsigned __int8)s1 & 0x3F, ((unsigned __int8)s1 & 0x3F) != 0x22) && v118 != 50 && v118 != 18 )
      {
LABEL_188:
        clear_tinfo_t();
LABEL_103:
        s1 = nullptr;
        *(_OWORD *)n = 0;
        sub_261FB0((__int64 *)&s1, v8 + 48);
        ((void (__fastcall *)(_QWORD **, _QWORD, void *, char *))**a4)(a4, 0, &unk_41916E, s1);
        v5 += tag_strlen() + 2;
        if ( s1 )
        {
          n[0] = 0;
          qfree((__int64)s1);
        }
LABEL_105:
        v19 = sub_267810(*(_QWORD *)(v8 + 24), a2, v5, (__int64)a4, v8, 0);
LABEL_14:
        v20 = v139.m128i_i64[0];
        v5 = v19;
        goto LABEL_15;
      }
      clear_tinfo_t();
      goto LABEL_105;
    case 52:
      v22 = *(_QWORD *)(a1 + 24);
      *(_OWORD *)n = 0;
      v23 = *(_DWORD *)(v22 + 8);
      if ( v23 == 58 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v22 + 24) + 8LL) != 64 )
          goto LABEL_30;
        v89 = *(_QWORD *)(v22 + 32);
        if ( *(_DWORD *)(v89 + 8) != 61 )
          goto LABEL_30;
        v123 = v13;
        v135 = sub_255A30(*(__int64 **)(v89 + 24));
        v13 = v123;
        if ( v135 > 0 )
        {
          v90 = *(_QWORD *)(v22 + 24);
          if ( (*(_BYTE *)(v90 + 56) & 0x10) != 0 )
          {
            v91 = *(_QWORD *)(v90 + 24);
            v92 = get_tinfo_property();
            v13 = v123;
            if ( v92 != -1 )
            {
              v132 = v123;
              v124 = v92 * v135;
              item_end = get_item_end();
              v13 = v132;
              if ( v124 < item_end - v91 )
              {
                s1 = nullptr;
                v94 = sub_261BF0(v132, (__int64 *)&s1, v91, v124, nullptr);
                v13 = v132;
                v121 = s1;
                if ( v94 )
                {
LABEL_136:
                  v54 = v121;
                  s1 = v121;
                  v5 = sub_25F4D0(
                         v5,
                         (void (__fastcall ***)(_QWORD, _QWORD, void *, const char *))a4,
                         v94,
                         (__int64)&s1,
                         1,
                         0.0);
                  if ( !v121 )
                    goto LABEL_46;
                  goto LABEL_137;
                }
                v22 = *(_QWORD *)(a1 + 24);
                if ( *(_DWORD *)(v22 + 8) != 64 )
                  goto LABEL_28;
LABEL_27:
                v134 = v13;
                v131 = *(_QWORD *)(v22 + 24);
                if ( !(unsigned __int8)sub_261870(v13, v131, nullptr, nullptr)
                  || (s1 = v121, v94 = sub_261BF0(v134, (__int64 *)&s1, v131, 0, nullptr), v121 = s1, !v94) )
                {
LABEL_28:
                  if ( v121 )
                    qfree((__int64)v121);
                  goto LABEL_30;
                }
                goto LABEL_136;
              }
            }
          }
        }
        v22 = *(_QWORD *)(a1 + 24);
        if ( *(_DWORD *)(v22 + 8) != 64 )
        {
LABEL_30:
          v12 = *(_DWORD *)(a1 + 8);
LABEL_31:
          v24 = (const char *)*(&off_4E0320 + 2 * v12);
          ((void (__fastcall *)(_QWORD **, _QWORD, void *, const char *))**a4)(a4, 0, &unk_4191B4, v24);
          v25 = strlen(v24);
          v17 = *(_QWORD *)(a1 + 24);
          v18 = v5 + v25;
LABEL_13:
          v19 = sub_267810(v17, a2, v18, (__int64)a4, v8, 0);
          goto LABEL_14;
        }
      }
      else if ( v23 != 64 )
      {
        goto LABEL_31;
      }
      v121 = nullptr;
      goto LABEL_27;
    case 53:
    case 54:
      v33 = sub_267810(*(_QWORD *)(a1 + 24), a2, v5, (__int64)a4, a1, 0);
      v20 = v139.m128i_i64[0];
      v5 = sub_2622C0(a1, 0, (void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *))a4, 0) + v33;
      goto LABEL_15;
    case 57:
      v44 = sub_267810(*(_QWORD *)(a1 + 24), a2, v5, (__int64)a4, a1, 0);
      v45 = sub_2622C0(a1, 0, (void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *))a4, 0);
      v46 = s;
      v5 = sub_2676C0(*(__int64 **)(a1 + 32), v44 + v45, a4);
      if ( v139.m128i_i64[1] <= 5uLL )
      {
        s = (char *)qvector_reserve((__int64)&s, (__int64)s, 6, 1);
        v46 = s;
      }
      v139.m128i_i64[0] = 6;
      *(_DWORD *)v46 = 36243713;
      v46[4] = 9;
      s[5] = 0;
      v20 = v139.m128i_i64[0];
      goto LABEL_15;
    case 58:
      v34 = sub_267810(*(_QWORD *)(a1 + 24), a2, v5, (__int64)a4, a1, 0);
      v35 = sub_2622C0(a1, 0, (void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *))a4, 0);
      v36 = s;
      v5 = sub_267810(*(_QWORD *)(a1 + 32), a2, v34 + v35, (__int64)a4, 0, 0);
      if ( v139.m128i_i64[1] <= 5uLL )
      {
        s = (char *)qvector_reserve((__int64)&s, (__int64)s, 6, 1);
        v36 = s;
      }
      v139.m128i_i64[0] = 6;
      *(_DWORD *)v36 = 39651585;
      v36[4] = 9;
      s[5] = 0;
      v20 = v139.m128i_i64[0];
      goto LABEL_15;
    case 59:
    case 60:
      v26 = sub_267810(*(_QWORD *)(a1 + 24), a2, v5, (__int64)a4, a1, 0);
      v27 = *(_QWORD *)(a1 + 24);
      v5 = v26;
      if ( (unsigned int)(*(_DWORD *)(v27 + 8) - 59) > 1 )
        goto LABEL_38;
      v28 = 1;
      if ( a1 )
        v28 = (unsigned int)(*(_DWORD *)(a1 + 8) - 59) > 1;
      v29 = *(unsigned int *)(v27 + 32);
      v30 = (*(_BYTE *)(v27 + 57) & 1) == 0;
      v31 = *(_QWORD *)(v27 + 24);
      if ( !v30 )
        v28 |= 2u;
      if ( (unsigned __int8)sub_263470(nullptr, nullptr, v31 + 48, v29, v28) )
LABEL_38:
        v5 += sub_2622C0(a1, 0, (void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *))a4, 0);
      else
        sub_2655A0((void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *))a4);
      v32 = 1;
      if ( a5 )
        v32 = (unsigned int)(*(_DWORD *)(a5 + 8) - 59) > 1;
      if ( (*(_BYTE *)(a1 + 57) & 1) != 0 )
        v32 |= 2u;
      if ( !(unsigned __int8)sub_263470(
                               (__int64 *)&s,
                               &v136,
                               *(_QWORD *)(a1 + 24) + 48LL,
                               *(unsigned int *)(a1 + 32),
                               v32) )
      {
        if ( (v32 & 1) != 0 )
          sub_6B870((__int64 *)&s);
        goto LABEL_46;
      }
      v126 = 0;
      if ( (unsigned int)(*(_DWORD *)(a1 + 8) - 59) <= 1 )
      {
        do
        {
          s1 = nullptr;
          s1 = (char *)get_tinfo_property();
          v95 = get_tinfo_property();
          clear_tinfo_t();
          if ( (v95 & 0x3F) == 0xD )
            v126 += *(unsigned int *)(v8 + 32);
          v8 = *(_QWORD *)(v8 + 24);
        }
        while ( (unsigned int)(*(_DWORD *)(v8 + 8) - 59) <= 1 );
      }
      s1 = nullptr;
      *(_OWORD *)n = 0;
      v137 = 0;
      v137 = get_tinfo_property();
      if ( !(unsigned __int8)name_requires_qualifier() || n[0] <= 1 )
        goto LABEL_145;
      v109 = s;
      if ( v139.m128i_i64[0] )
      {
        v110 = v139.m128i_i64[0] + 2;
        v111 = v139.m128i_i64[0] - 1;
        v112 = v139.m128i_i64[0] + 1;
        if ( v139.m128i_i64[1] >= (unsigned __int64)(v139.m128i_i64[0] + 2) )
          goto LABEL_169;
      }
      else
      {
        if ( v139.m128i_i64[1] > 2uLL )
        {
          v139.m128i_i64[0] = 3;
          s[2] = 0;
          goto LABEL_171;
        }
        v111 = 0;
        v110 = 3;
        v112 = 2;
      }
      s = (char *)qvector_reserve((__int64)&s, (__int64)s, v110, 1);
      v109 = s;
LABEL_169:
      v139.m128i_i64[0] = v110;
      v109[v112] = 0;
      if ( v111 )
        memmove(s + 2, s, v111);
LABEL_171:
      *(_WORD *)s = 14906;
      v113 = n[0];
      v114 = (v139.m128i_i64[0] == 0) + v139.m128i_i64[0] - 1;
      v115 = v114;
      if ( n[0] )
      {
        v113 = n[0] - 1;
        v115 = n[0] - 1 + v114;
      }
      v116 = v115 + 1;
      if ( v139.m128i_i64[1] < v115 + 1 )
      {
        s = (char *)qvector_reserve((__int64)&s, (__int64)s, v116, 1);
        v116 = v115 + 1;
      }
      v139.m128i_i64[0] = v116;
      s[v115] = 0;
      if ( v114 )
        memmove(&s[v113], s, v114);
      memcpy(s, s1, v113);
LABEL_145:
      clear_tinfo_t();
      if ( s1 )
      {
        n[0] = 0;
        qfree((__int64)s1);
      }
      v96 = s;
      s = nullptr;
      v139 = 0;
      if ( *v96 )
        sub_25F780((__int64 *)&s, v136, v96);
      if ( v96 )
        qfree((__int64)v96);
      goto LABEL_46;
    case 61:
      v37 = *(__int64 **)(a1 + 24);
      if ( !(unsigned __int8)sub_265AA0((__int64)v37, (__int64 *)&s, (_QWORD *)(a1 + 48), nullptr, 0.0) )
        sub_261630(v37, (__int64 *)&s);
      if ( a5 && *(_DWORD *)(a5 + 8) == 47 && *(_BYTE *)tag_skipcodes() == 45 )
        ((void (__fastcall *)(_QWORD **, _QWORD, void *))**a4)(a4, 0, &unk_419206);
      v38 = is_enum();
      v20 = v139.m128i_i64[0];
      if ( !v38 )
        goto LABEL_15;
      if ( !v139.m128i_i64[0] )
        goto LABEL_18;
      v122 = s;
      v39 = strchr(s, 124);
      if ( !v39 || v39 - v122 == -1 )
        goto LABEL_15;
      v40 = sub_25F3C0(0, 19, a5);
      v21 = v122;
      v120 = v40;
      if ( v40 )
      {
        ((void (__fastcall *)(_QWORD **, _QWORD, void *))**a4)(a4, 0, &unk_41919E);
        ++v5;
        if ( v139.m128i_i64[0] > 1uLL )
          goto LABEL_16;
        goto LABEL_19;
      }
      if ( v20 != 1 )
        goto LABEL_17;
      goto LABEL_21;
    case 62:
      sub_11C210(*(_QWORD *)(a1 + 24), (__int64 *)&s, 0.0);
      goto LABEL_46;
    case 63:
      v5 += sub_2622C0(a1, 0, (void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *))a4, 0);
      sub_32AA00((__int64 *)&s, 25);
      v79 = *(const void **)(a1 + 24);
      if ( v79 )
      {
        v80 = v139.m128i_i64[0];
        v81 = strlen(*(const char **)(a1 + 24));
        v82 = v81;
        v83 = v81;
        if ( v80 )
        {
          --v80;
          v83 = v81 + v80;
        }
        v84 = s;
        v85 = v83 + 1;
        if ( v139.m128i_i64[1] < v83 + 1 )
        {
          v133 = v83;
          v130 = v83 + 1;
          s = (char *)qvector_reserve((__int64)&s, (__int64)s, v85, 1);
          v83 = v133;
          v84 = s;
          v85 = v130;
        }
        v139.m128i_i64[0] = v85;
        v84[v83] = 0;
        memmove(&s[v80], v79, v82);
      }
      v86 = v139.m128i_i64[0];
      v87 = 2;
      if ( v139.m128i_i64[0] )
      {
        v87 = v139.m128i_i64[0] + 1;
        v86 = v139.m128i_i64[0] - 1;
      }
      v88 = s;
      if ( v139.m128i_i64[1] < v87 )
      {
        s = (char *)qvector_reserve((__int64)&s, (__int64)s, v87, 1);
        v88 = s;
      }
      v139.m128i_i64[0] = v87;
      v88[v86] = 34;
      s[v86 + 1] = 0;
      sub_32AAE0((__int64 *)&s, 25);
      goto LABEL_46;
    case 64:
      if ( (*(_BYTE *)(a1 + 56) & 0x10) == 0 || a5 && *(_DWORD *)(a5 + 8) == 58 )
        goto LABEL_79;
      v52 = *(_QWORD *)(a1 + 24);
      s1 = nullptr;
      *(_OWORD *)n = 0;
      v53 = sub_261BF0(v13, (__int64 *)&s1, v52, 0, nullptr);
      v54 = s1;
      if ( !v53 )
      {
        if ( s1 )
          qfree((__int64)s1);
LABEL_79:
        v55 = *(_QWORD *)(a1 + 24);
        s1 = nullptr;
        *(_OWORD *)n = 0;
        sub_3749C0(a2, v55);
        v56 = sub_263730((__int64 *)&s1);
        v57 = a4[5];
        if ( !v57 )
          goto LABEL_87;
        v58 = v57[1];
        if ( *(char *)v58 >= 0 )
        {
LABEL_85:
          if ( sub_213140(v58, s1, 4) )
          {
            ((void (__fastcall *)(_QWORD **, _QWORD, void *))**a4)(a4, 0, &unk_4191A4);
            v5 += 2;
          }
LABEL_87:
          v61 = s1;
LABEL_88:
          ((void (__fastcall *)(_QWORD **, _QWORD, void *, _QWORD, char *, _QWORD))**a4)(
            a4,
            0,
            &unk_4191AB,
            v56,
            v61,
            v56);
          v62 = 0;
          if ( n[0] )
            v62 = LODWORD(n[0]) - 1;
          v5 += v62;
          if ( s1 )
          {
            n[0] = 0;
            qfree((__int64)s1);
          }
          goto LABEL_46;
        }
        if ( *(_QWORD *)(v58 + 416) )
        {
          v59 = *(const char **)(v58 + 408);
          v60 = (char *)::s1;
          if ( !n[0] )
            goto LABEL_84;
        }
        else
        {
          v59 = ::s1;
          if ( !n[0] )
            goto LABEL_157;
        }
        v60 = s1;
LABEL_84:
        if ( strcmp(v60, v59) )
          goto LABEL_85;
LABEL_157:
        ea_name = get_ea_name();
        v61 = s1;
        if ( ea_name > 0 )
        {
          v101 = s;
          v102 = _mm_loadu_si128(&v139);
          s = s1;
          v139.m128i_i64[0] = 0;
          s1 = v101;
          v61 = v101;
          v139.m128i_i64[1] = n[1];
          *(__m128i *)n = v102;
        }
        goto LABEL_88;
      }
      v5 = sub_25F4D0(v5, (void (__fastcall ***)(_QWORD, _QWORD, void *, const char *))a4, v53, (__int64)&s1, 1, 0.0);
      if ( !v54 )
        goto LABEL_46;
LABEL_137:
      qfree((__int64)v54);
LABEL_46:
      v20 = v139.m128i_i64[0];
LABEL_15:
      if ( v20 > 1 )
      {
LABEL_16:
        v21 = s;
LABEL_17:
        ((void (__fastcall *)(_QWORD **, _QWORD, void *, char *))**a4)(a4, 0, &unk_4190BD, v21);
        v5 += tag_strlen();
      }
LABEL_18:
      if ( v120 )
      {
LABEL_19:
        ((void (__fastcall *)(_QWORD **, _QWORD, char *))**a4)(a4, 0, byte_419175);
        ++v5;
      }
      v21 = s;
LABEL_21:
      if ( v21 )
      {
        v139.m128i_i64[0] = 0;
        qfree((__int64)v21);
      }
      return v5;
    case 65:
      sub_262430((int *)(a1 + 24), (__int64 *)&s, (*(_BYTE *)(a1 + 56) & 0x40) != 0, 0.0);
      goto LABEL_46;
    case 66:
      v5 += sub_2622C0(a1, 0, (void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *))a4, 0);
      sub_2696A0(*(_QWORD *)(a1 + 24), (__int64)&s, (__int64)a4[5]);
      v47 = v139.m128i_i64[0];
      if ( v139.m128i_i64[0] )
      {
        v48 = v139.m128i_i64[0] + 6;
        v49 = v139.m128i_i64[0] + 7;
        v47 = v139.m128i_i64[0] - 1;
      }
      else
      {
        v49 = 8;
        v48 = 7;
      }
      v50 = s;
      if ( v139.m128i_i64[1] < v49 )
      {
        s = (char *)qvector_reserve((__int64)&s, (__int64)s, v49, 1);
        v50 = s;
      }
      v139.m128i_i64[0] = v49;
      v50[v48] = 0;
      v51 = &s[v47];
      *(_DWORD *)v51 = 151061508;
      *(_DWORD *)(v51 + 3) = 151158025;
      v20 = v139.m128i_i64[0];
      goto LABEL_15;
    case 67:
      v69 = v139.m128i_i64[0];
      v5 += sub_2622C0(a1, 0, (void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *))a4, 0);
      if ( v139.m128i_i64[0] )
      {
        v70 = v139.m128i_i64[0] + 4;
        v71 = v139.m128i_i64[0] + 5;
        v69 = v139.m128i_i64[0] - 1;
      }
      else
      {
        v71 = 6;
        v70 = 5;
      }
      v72 = s;
      if ( v139.m128i_i64[1] < v71 )
      {
        v125 = v70;
        s = (char *)qvector_reserve((__int64)&s, (__int64)s, v71, 1);
        v70 = v125;
        v72 = s;
      }
      v139.m128i_i64[0] = v71;
      v72[v70] = 0;
      v73 = &s[v69];
      *(_DWORD *)v73 = 36178177;
      v73[4] = 9;
      sub_267FE0(*(_QWORD *)(a1 + 24), (__int64)&s, (__int64)a4[5]);
      v74 = v139.m128i_i64[0];
      if ( v139.m128i_i64[0] )
      {
        v75 = v139.m128i_i64[0] + 4;
        v76 = v139.m128i_i64[0] + 5;
        v74 = v139.m128i_i64[0] - 1;
      }
      else
      {
        v76 = 6;
        v75 = 5;
      }
      v77 = s;
      if ( v139.m128i_i64[1] < v76 )
      {
        s = (char *)qvector_reserve((__int64)&s, (__int64)s, v76, 1);
        v77 = s;
      }
      v139.m128i_i64[0] = v76;
      v77[v75] = 0;
      v78 = &s[v74];
      *(_DWORD *)v78 = 36243713;
      v78[4] = 9;
      v20 = v139.m128i_i64[0];
      goto LABEL_15;
    case 68:
      v63 = *(const char **)(a1 + 24);
      if ( !*v63 )
        goto LABEL_18;
      sub_25F780((__int64 *)&s, (*(_DWORD *)(a1 + 56) & 0x80) == 0 ? 8 : 18, v63);
      goto LABEL_46;
    case 69:
      sub_261FB0((__int64 *)&s, a1 + 48);
      goto LABEL_46;
    default:
      if ( !under_debugger )
        sub_383060(0xC3CCu, 0.0);
      BUG();
  }
}

