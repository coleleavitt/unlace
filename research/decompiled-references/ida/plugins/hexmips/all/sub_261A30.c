__int64 __fastcall sub_261A30(__int64 a1, __int64 a2, unsigned int a3, _QWORD **a4, __int64 a5)
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
  __int64 v18; // rdx
  unsigned int v19; // eax
  unsigned __int64 v20; // rbp
  char *v21; // rcx
  __int64 v22; // r13
  int v23; // eax
  const char *v24; // r13
  int v25; // eax
  unsigned int v26; // eax
  __int64 v27; // rdx
  unsigned int v28; // r8d
  __int64 v29; // rcx
  bool v30; // zf
  __int64 v31; // rdx
  unsigned int v32; // r15d
  int v33; // r12d
  int v34; // r12d
  int v35; // eax
  char *v36; // rsi
  __int64 *v37; // r15
  char v38; // al
  char *v39; // rax
  char v40; // al
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
  __int64 v55; // rsi
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
  __int64 v79; // rdx
  __int64 v80; // rcx
  const void *v81; // r15
  __int64 v82; // r13
  size_t v83; // rax
  size_t v84; // r14
  size_t v85; // r9
  char *v86; // rsi
  __int64 v87; // rdx
  __int64 v88; // r13
  unsigned __int64 v89; // r15
  char *v90; // rsi
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // r13
  int v94; // eax
  __int64 item_end; // rax
  int v96; // edx
  char v97; // r15
  char *v98; // r13
  char tinfo_property; // al
  __int64 v100; // r10
  __int64 v101; // r15
  __int64 ea_name; // rax
  char *v103; // rax
  __m128i v104; // xmm0
  __int64 v105; // rdi
  unsigned int v106; // r13d
  __int64 v107; // rax
  char v108; // al
  void (__fastcall *v109)(_QWORD **, _QWORD, void *, _QWORD); // r13
  __int64 tinfo_size; // rax
  char *v111; // rsi
  __int64 v112; // r13
  size_t v113; // r15
  __int64 v114; // r14
  size_t v115; // r15
  size_t v116; // r13
  size_t v117; // r14
  __int64 v118; // rdx
  int v119; // eax
  char v120; // al
  char v121; // al
  char v122; // [rsp+7h] [rbp-A1h]
  char *v123; // [rsp+8h] [rbp-A0h]
  char *v124; // [rsp+8h] [rbp-A0h]
  __int64 v125; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v126; // [rsp+8h] [rbp-A0h]
  __int64 v127; // [rsp+8h] [rbp-A0h]
  __int64 v128; // [rsp+8h] [rbp-A0h]
  __int64 v129; // [rsp+8h] [rbp-A0h]
  __int64 v130; // [rsp+8h] [rbp-A0h]
  __int64 v131; // [rsp+8h] [rbp-A0h]
  __int64 v132; // [rsp+8h] [rbp-A0h]
  __int64 v133; // [rsp+10h] [rbp-98h]
  __int64 v134; // [rsp+10h] [rbp-98h]
  size_t v135; // [rsp+10h] [rbp-98h]
  __int64 v136; // [rsp+18h] [rbp-90h]
  __int64 v137; // [rsp+18h] [rbp-90h]
  char v138; // [rsp+27h] [rbp-81h] BYREF
  __int64 v139; // [rsp+28h] [rbp-80h]
  char *s; // [rsp+30h] [rbp-78h] BYREF
  __m128i v141; // [rsp+38h] [rbp-70h] BYREF
  char *s1; // [rsp+50h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+58h] [rbp-50h]
  unsigned __int64 v144; // [rsp+68h] [rbp-40h]

  v5 = a3;
  v7 = *(int *)(a1 + 8);
  v144 = __readfsqword(0x28u);
  if ( (unsigned int)v7 > 0x45 )
    return ((unsigned int (*)(_QWORD **, _QWORD, const char *, ...))**a4)(a4, 0, "?op%d", v7) + a3;
  v8 = a1;
  if ( *((_BYTE *)&off_4C0A60 + 16 * v7 + 10) == 2 )
    sub_260D20((void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *))a4, a1);
  if ( *(_DWORD *)(a1 + 12) != -1 )
    sub_2605A0(a1, a2, a4);
  v11 = sub_264BE0(a1, a2, 0, a4);
  if ( v11 )
  {
    v5 += v11;
    return v5;
  }
  v122 = sub_25AB40(a1, *(_DWORD *)(a1 + 8), a5);
  if ( v122 )
  {
    ++v5;
    ((void (__fastcall *)(_QWORD **, _QWORD, void *))**a4)(a4, 0, &unk_3FD1B3);
    v12 = *(_DWORD *)(a1 + 8);
  }
  v13 = *(_QWORD *)(a2 + 112);
  s = nullptr;
  v141 = 0;
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
      v15 = sub_262F90(*(_QWORD *)(a1 + 24), a2, v5, a4, a1, 0);
      v16 = sub_25DA40(
              a1,
              *(_DWORD *)(a1 + 8) != 1,
              (void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *))a4,
              1u);
      v17 = *(_QWORD *)(a1 + 32);
      v18 = (unsigned int)(v15 + v16);
      goto LABEL_13;
    case 16:
      v41 = sub_262F90(*(_QWORD *)(a1 + 24), a2, v5, a4, a1, 0);
      v42 = sub_25DA40(a1, 1u, (void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *))a4, 1u);
      v43 = sub_262F90(*(_QWORD *)(a1 + 32), a2, (unsigned int)(v41 + v42), a4, a1, 0);
      ((void (__fastcall *)(_QWORD **, _QWORD, void *, void *))**a4)(a4, 0, &unk_3FD0D2, &unk_3FD1D0);
      v17 = *(_QWORD *)(a1 + 40);
      v18 = (unsigned int)(v43 + 3);
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
      v105 = *(_QWORD *)(v64 + 24);
      v131 = v13;
      v106 = *(char *)(v105 + 15);
      v107 = sub_2511B0((__int64 *)v105);
      v108 = sub_25CA60((__int64 *)&s, v8 + 48, 0, v107, v106, 1);
      v13 = v131;
      if ( v108 )
        goto LABEL_46;
      v65 = *(_DWORD *)(*(_QWORD *)(v8 + 24) + 8LL);
LABEL_96:
      if ( v65 != 63 )
        goto LABEL_97;
      v129 = v13;
      tinfo_property = get_tinfo_property();
      v13 = v129;
      if ( (tinfo_property & 0xF) != 0xA )
        goto LABEL_97;
      s1 = nullptr;
      s1 = (char *)get_tinfo_property();
      set_tinfo_property();
      v100 = v129;
      v101 = a2 + 376;
      do
      {
        v130 = v100;
        if ( !(unsigned int)lexcompare_tinfo() )
        {
          clear_tinfo_t();
          v109 = (void (__fastcall *)(_QWORD **, _QWORD, void *, _QWORD))**a4;
          tinfo_size = get_tinfo_size();
          v109(a4, 0, &unk_3FD1C6, 9 * (unsigned int)(tinfo_size == 4) + 76);
          ++v5;
          goto LABEL_105;
        }
        v101 += 8;
        v100 = v130;
      }
      while ( v101 != a2 + 408 );
      clear_tinfo_t();
      v13 = v130;
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
      if ( v68 != 64 || !(unsigned __int8)sub_25D220(v13, *(_QWORD *)(v67 + 24), 1) )
        goto LABEL_103;
      s1 = nullptr;
      s1 = (char *)get_tinfo_property();
      v119 = get_str_type() & 3;
      if ( v119 == 1 )
      {
        v121 = (unsigned __int8)s1 & 0x3F;
        if ( ((unsigned __int8)s1 & 0x3F) != 0x13 && v121 != 35 && v121 != 3 )
          goto LABEL_188;
      }
      else if ( v119 == 2
             || (v120 = (unsigned __int8)s1 & 0x3F, ((unsigned __int8)s1 & 0x3F) != 0x22) && v120 != 50 && v120 != 18 )
      {
LABEL_188:
        clear_tinfo_t();
LABEL_103:
        s1 = nullptr;
        *(_OWORD *)n = 0;
        sub_25D730((__int64 *)&s1, v8 + 48);
        ((void (__fastcall *)(_QWORD **, _QWORD, void *, char *))**a4)(a4, 0, &unk_3FD183, s1);
        v5 += tag_strlen() + 2;
        if ( s1 )
        {
          n[0] = 0;
          qfree();
        }
LABEL_105:
        v19 = sub_262F90(*(_QWORD *)(v8 + 24), a2, v5, a4, v8, 0);
LABEL_14:
        v20 = v141.m128i_i64[0];
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
        v91 = *(_QWORD *)(v22 + 32);
        if ( *(_DWORD *)(v91 + 8) != 61 )
          goto LABEL_30;
        v125 = v13;
        v137 = sub_2511B0(*(__int64 **)(v91 + 24));
        v13 = v125;
        if ( v137 > 0 )
        {
          v92 = *(_QWORD *)(v22 + 24);
          if ( (*(_BYTE *)(v92 + 56) & 0x10) != 0 )
          {
            v93 = *(_QWORD *)(v92 + 24);
            v94 = get_tinfo_property();
            v13 = v125;
            if ( v94 != -1 )
            {
              v134 = v125;
              v126 = v94 * v137;
              item_end = get_item_end();
              v13 = v134;
              if ( v126 < item_end - v93 )
              {
                s1 = nullptr;
                v96 = sub_25D370(v134, (__int64 *)&s1, v93, v126, nullptr);
                v13 = v134;
                v123 = s1;
                if ( v96 )
                {
LABEL_136:
                  s1 = v123;
                  v5 = sub_25AC50(
                         v5,
                         (void (__fastcall ***)(_QWORD, _QWORD, void *, const char *))a4,
                         v96,
                         (__int64)&s1,
                         1);
                  if ( !v123 )
                    goto LABEL_46;
                  goto LABEL_137;
                }
                v22 = *(_QWORD *)(a1 + 24);
                if ( *(_DWORD *)(v22 + 8) != 64 )
                  goto LABEL_28;
LABEL_27:
                v136 = v13;
                v133 = *(_QWORD *)(v22 + 24);
                if ( !(unsigned __int8)sub_25CFF0(v13, v133, nullptr, nullptr)
                  || (s1 = v123, v96 = sub_25D370(v136, (__int64 *)&s1, v133, 0, nullptr), v123 = s1, !v96) )
                {
LABEL_28:
                  if ( v123 )
                    qfree();
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
          v24 = (const char *)*(&off_4C0A60 + 2 * v12);
          ((void (__fastcall *)(_QWORD **, _QWORD, void *, const char *))**a4)(a4, 0, &unk_3FD1C9, v24);
          v25 = strlen(v24);
          v17 = *(_QWORD *)(a1 + 24);
          v18 = v5 + v25;
LABEL_13:
          v19 = sub_262F90(v17, a2, v18, a4, v8, 0);
          goto LABEL_14;
        }
      }
      else if ( v23 != 64 )
      {
        goto LABEL_31;
      }
      v123 = nullptr;
      goto LABEL_27;
    case 53:
    case 54:
      v33 = sub_262F90(*(_QWORD *)(a1 + 24), a2, v5, a4, a1, 0);
      v20 = v141.m128i_i64[0];
      v5 = sub_25DA40(a1, 0, (void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *))a4, 0) + v33;
      goto LABEL_15;
    case 57:
      v44 = sub_262F90(*(_QWORD *)(a1 + 24), a2, v5, a4, a1, 0);
      v45 = sub_25DA40(a1, 0, (void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *))a4, 0);
      v46 = s;
      v5 = sub_262E40(*(_QWORD *)(a1 + 32), (unsigned int)(v44 + v45), a4);
      if ( v141.m128i_i64[1] <= 5uLL )
      {
        s = (char *)qvector_reserve();
        v46 = s;
      }
      v141.m128i_i64[0] = 6;
      *(_DWORD *)v46 = 36243713;
      v46[4] = 9;
      s[5] = 0;
      v20 = v141.m128i_i64[0];
      goto LABEL_15;
    case 58:
      v34 = sub_262F90(*(_QWORD *)(a1 + 24), a2, v5, a4, a1, 0);
      v35 = sub_25DA40(a1, 0, (void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *))a4, 0);
      v36 = s;
      v5 = sub_262F90(*(_QWORD *)(a1 + 32), a2, (unsigned int)(v34 + v35), a4, 0, 0);
      if ( v141.m128i_i64[1] <= 5uLL )
      {
        s = (char *)qvector_reserve();
        v36 = s;
      }
      v141.m128i_i64[0] = 6;
      *(_DWORD *)v36 = 39651585;
      v36[4] = 9;
      s[5] = 0;
      v20 = v141.m128i_i64[0];
      goto LABEL_15;
    case 59:
    case 60:
      v26 = sub_262F90(*(_QWORD *)(a1 + 24), a2, v5, a4, a1, 0);
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
      if ( (unsigned __int8)sub_25EBF0(nullptr, nullptr, v31 + 48, v29, v28) )
LABEL_38:
        v5 += sub_25DA40(a1, 0, (void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *))a4, 0);
      else
        sub_260D20((void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *))a4, a1);
      v32 = 1;
      if ( a5 )
        v32 = (unsigned int)(*(_DWORD *)(a5 + 8) - 59) > 1;
      if ( (*(_BYTE *)(a1 + 57) & 1) != 0 )
        v32 |= 2u;
      if ( !(unsigned __int8)sub_25EBF0(
                               (__int64 *)&s,
                               &v138,
                               *(_QWORD *)(a1 + 24) + 48LL,
                               *(unsigned int *)(a1 + 32),
                               v32) )
      {
        if ( (v32 & 1) != 0 )
          sub_67670((__int64 *)&s);
        goto LABEL_46;
      }
      v128 = 0;
      if ( (unsigned int)(*(_DWORD *)(a1 + 8) - 59) <= 1 )
      {
        do
        {
          s1 = nullptr;
          s1 = (char *)get_tinfo_property();
          v97 = get_tinfo_property();
          clear_tinfo_t();
          if ( (v97 & 0x3F) == 0xD )
            v128 += *(unsigned int *)(v8 + 32);
          v8 = *(_QWORD *)(v8 + 24);
        }
        while ( (unsigned int)(*(_DWORD *)(v8 + 8) - 59) <= 1 );
      }
      s1 = nullptr;
      *(_OWORD *)n = 0;
      v139 = 0;
      v139 = get_tinfo_property();
      if ( !(unsigned __int8)name_requires_qualifier() || n[0] <= 1 )
        goto LABEL_145;
      v111 = s;
      if ( v141.m128i_i64[0] )
      {
        v112 = v141.m128i_i64[0] + 2;
        v113 = v141.m128i_i64[0] - 1;
        v114 = v141.m128i_i64[0] + 1;
        if ( v141.m128i_i64[1] >= (unsigned __int64)(v141.m128i_i64[0] + 2) )
          goto LABEL_169;
      }
      else
      {
        if ( v141.m128i_i64[1] > 2uLL )
        {
          v141.m128i_i64[0] = 3;
          s[2] = 0;
          goto LABEL_171;
        }
        v113 = 0;
        v112 = 3;
        v114 = 2;
      }
      s = (char *)qvector_reserve();
      v111 = s;
LABEL_169:
      v141.m128i_i64[0] = v112;
      v111[v114] = 0;
      if ( v113 )
        memmove(s + 2, s, v113);
LABEL_171:
      *(_WORD *)s = 14906;
      v115 = n[0];
      v116 = (v141.m128i_i64[0] == 0) + v141.m128i_i64[0] - 1;
      v117 = v116;
      if ( n[0] )
      {
        v115 = n[0] - 1;
        v117 = n[0] - 1 + v116;
      }
      v118 = v117 + 1;
      if ( v141.m128i_i64[1] < v117 + 1 )
      {
        s = (char *)qvector_reserve();
        v118 = v117 + 1;
      }
      v141.m128i_i64[0] = v118;
      s[v117] = 0;
      if ( v116 )
        memmove(&s[v115], s, v116);
      memcpy(s, s1, v115);
LABEL_145:
      clear_tinfo_t();
      if ( s1 )
      {
        n[0] = 0;
        qfree();
      }
      v98 = s;
      s = nullptr;
      v141 = 0;
      if ( *v98 )
        sub_25AF00((__int64 *)&s, v138, v98);
      if ( v98 )
        qfree();
      goto LABEL_46;
    case 61:
      v37 = *(__int64 **)(a1 + 24);
      if ( !(unsigned __int8)sub_261220((__int64)v37, (__int64 *)&s, a1 + 48, nullptr) )
        sub_25CDB0(v37, (__int64 *)&s);
      if ( a5 && *(_DWORD *)(a5 + 8) == 47 && *(_BYTE *)tag_skipcodes() == 45 )
        ((void (__fastcall *)(_QWORD **, _QWORD, void *))**a4)(a4, 0, &unk_3FD21B);
      v38 = is_enum();
      v20 = v141.m128i_i64[0];
      if ( !v38 )
        goto LABEL_15;
      if ( !v141.m128i_i64[0] )
        goto LABEL_18;
      v124 = s;
      v39 = strchr(s, 124);
      if ( !v39 || v39 - v124 == -1 )
        goto LABEL_15;
      v40 = sub_25AB40(0, 19, a5);
      v21 = v124;
      v122 = v40;
      if ( v40 )
      {
        ((void (__fastcall *)(_QWORD **, _QWORD, void *))**a4)(a4, 0, &unk_3FD1B3);
        ++v5;
        if ( v141.m128i_i64[0] > 1uLL )
          goto LABEL_16;
        goto LABEL_19;
      }
      if ( v20 != 1 )
        goto LABEL_17;
      goto LABEL_21;
    case 62:
      sub_118010(*(_QWORD *)(a1 + 24), (__int64 *)&s);
      goto LABEL_46;
    case 63:
      v5 += sub_25DA40(a1, 0, (void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *))a4, 0);
      sub_325AD0(&s, 25, v79, v80);
      v81 = *(const void **)(a1 + 24);
      if ( v81 )
      {
        v82 = v141.m128i_i64[0];
        v83 = strlen(*(const char **)(a1 + 24));
        v84 = v83;
        v85 = v83;
        if ( v82 )
        {
          --v82;
          v85 = v83 + v82;
        }
        v86 = s;
        v87 = v85 + 1;
        if ( v141.m128i_i64[1] < v85 + 1 )
        {
          v135 = v85;
          v132 = v85 + 1;
          s = (char *)qvector_reserve();
          v85 = v135;
          v86 = s;
          v87 = v132;
        }
        v141.m128i_i64[0] = v87;
        v86[v85] = 0;
        memmove(&s[v82], v81, v84);
      }
      v88 = v141.m128i_i64[0];
      v89 = 2;
      if ( v141.m128i_i64[0] )
      {
        v89 = v141.m128i_i64[0] + 1;
        v88 = v141.m128i_i64[0] - 1;
      }
      v90 = s;
      if ( v141.m128i_i64[1] < v89 )
      {
        s = (char *)qvector_reserve();
        v90 = s;
      }
      v141.m128i_i64[0] = v89;
      v90[v88] = 34;
      s[v88 + 1] = 0;
      sub_325BB0(&s, 25);
      goto LABEL_46;
    case 64:
      if ( (*(_BYTE *)(a1 + 56) & 0x10) == 0 || a5 && *(_DWORD *)(a5 + 8) == 58 )
        goto LABEL_79;
      v52 = *(_QWORD *)(a1 + 24);
      s1 = nullptr;
      *(_OWORD *)n = 0;
      v53 = sub_25D370(v13, (__int64 *)&s1, v52, 0, nullptr);
      v54 = s1;
      if ( !v53 )
      {
        if ( s1 )
          qfree();
LABEL_79:
        v55 = *(_QWORD *)(a1 + 24);
        s1 = nullptr;
        *(_OWORD *)n = 0;
        sub_36FAC0(a2, v55);
        v56 = sub_25EEB0((__int64 *)&s1);
        v57 = a4[5];
        if ( !v57 )
          goto LABEL_87;
        v58 = v57[1];
        if ( *(char *)v58 >= 0 )
        {
LABEL_85:
          if ( sub_20E8C0(v58, s1, 4) )
          {
            ((void (__fastcall *)(_QWORD **, _QWORD, void *))**a4)(a4, 0, &unk_3FD1B9);
            v5 += 2;
          }
LABEL_87:
          v61 = s1;
LABEL_88:
          ((void (__fastcall *)(_QWORD **, _QWORD, void *, _QWORD, char *, _QWORD))**a4)(
            a4,
            0,
            &unk_3FD1C0,
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
            qfree();
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
          v103 = s;
          v104 = _mm_loadu_si128(&v141);
          s = s1;
          v141.m128i_i64[0] = 0;
          s1 = v103;
          v61 = v103;
          v141.m128i_i64[1] = n[1];
          *(__m128i *)n = v104;
        }
        goto LABEL_88;
      }
      v5 = sub_25AC50(v5, (void (__fastcall ***)(_QWORD, _QWORD, void *, const char *))a4, v53, (__int64)&s1, 1);
      if ( !v54 )
        goto LABEL_46;
LABEL_137:
      qfree();
LABEL_46:
      v20 = v141.m128i_i64[0];
LABEL_15:
      if ( v20 > 1 )
      {
LABEL_16:
        v21 = s;
LABEL_17:
        ((void (__fastcall *)(_QWORD **, _QWORD, void *, char *))**a4)(a4, 0, &unk_3FD0D2, v21);
        v5 += tag_strlen();
      }
LABEL_18:
      if ( v122 )
      {
LABEL_19:
        ((void (__fastcall *)(_QWORD **, _QWORD, void *))**a4)(a4, 0, &unk_3FD18A);
        ++v5;
      }
      v21 = s;
LABEL_21:
      if ( v21 )
      {
        v141.m128i_i64[0] = 0;
        qfree();
      }
      return v5;
    case 65:
      sub_25DBB0((int *)(a1 + 24), (__int64 *)&s, (*(_BYTE *)(a1 + 56) & 0x40) != 0);
      goto LABEL_46;
    case 66:
      v5 += sub_25DA40(a1, 0, (void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *))a4, 0);
      sub_264E20(*(_QWORD *)(a1 + 24), &s, a4[5]);
      v47 = v141.m128i_i64[0];
      if ( v141.m128i_i64[0] )
      {
        v48 = v141.m128i_i64[0] + 6;
        v49 = v141.m128i_i64[0] + 7;
        v47 = v141.m128i_i64[0] - 1;
      }
      else
      {
        v49 = 8;
        v48 = 7;
      }
      v50 = s;
      if ( v141.m128i_i64[1] < v49 )
      {
        s = (char *)qvector_reserve();
        v50 = s;
      }
      v141.m128i_i64[0] = v49;
      v50[v48] = 0;
      v51 = &s[v47];
      *(_DWORD *)v51 = 151061508;
      *(_DWORD *)(v51 + 3) = 151158025;
      v20 = v141.m128i_i64[0];
      goto LABEL_15;
    case 67:
      v69 = v141.m128i_i64[0];
      v5 += sub_25DA40(a1, 0, (void (__fastcall ***)(_QWORD, _QWORD, void *, _BYTE *, const char *, void *))a4, 0);
      if ( v141.m128i_i64[0] )
      {
        v70 = v141.m128i_i64[0] + 4;
        v71 = v141.m128i_i64[0] + 5;
        v69 = v141.m128i_i64[0] - 1;
      }
      else
      {
        v71 = 6;
        v70 = 5;
      }
      v72 = s;
      if ( v141.m128i_i64[1] < v71 )
      {
        v127 = v70;
        s = (char *)qvector_reserve();
        v70 = v127;
        v72 = s;
      }
      v141.m128i_i64[0] = v71;
      v72[v70] = 0;
      v73 = &s[v69];
      *(_DWORD *)v73 = 36178177;
      v73[4] = 9;
      sub_263760(*(_QWORD *)(a1 + 24), &s, a4[5]);
      v74 = v141.m128i_i64[0];
      if ( v141.m128i_i64[0] )
      {
        v75 = v141.m128i_i64[0] + 4;
        v76 = v141.m128i_i64[0] + 5;
        v74 = v141.m128i_i64[0] - 1;
      }
      else
      {
        v76 = 6;
        v75 = 5;
      }
      v77 = s;
      if ( v141.m128i_i64[1] < v76 )
      {
        s = (char *)qvector_reserve();
        v77 = s;
      }
      v141.m128i_i64[0] = v76;
      v77[v75] = 0;
      v78 = &s[v74];
      *(_DWORD *)v78 = 36243713;
      v78[4] = 9;
      v20 = v141.m128i_i64[0];
      goto LABEL_15;
    case 68:
      v63 = *(const char **)(a1 + 24);
      if ( !*v63 )
        goto LABEL_18;
      sub_25AF00((__int64 *)&s, (*(_DWORD *)(a1 + 56) & 0x80) == 0 ? 8 : 18, v63);
      goto LABEL_46;
    case 69:
      sub_25D730((__int64 *)&s, a1 + 48);
      goto LABEL_46;
    default:
      if ( !under_debugger )
        sub_37E160(50124);
      BUG();
  }
}

