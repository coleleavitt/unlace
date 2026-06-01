__int64 __fastcall sub_276380(__int64 a1, __int64 a2, double a3)
{
  char v4; // bl
  __int64 v6; // rax
  __int64 v7; // r15
  int v8; // eax
  __int64 v9; // r13
  unsigned __int64 v10; // r12
  const __m128i *v11; // r9
  __m128i *v12; // r13
  __int64 v13; // r12
  __int64 tinfo_size; // r12
  __int64 v15; // rax
  char v16; // r8
  int v17; // ecx
  char v18; // r13
  unsigned __int8 v19; // si
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r12
  char v27; // r12
  int v28; // eax
  int v29; // eax
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  unsigned int v32; // r12d
  __int64 v33; // rdx
  __int64 v34; // rcx
  char v35; // al
  __int64 *v36; // rax
  __int64 v37; // r9
  bool v38; // zf
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // rdi
  char *v42; // rdi
  char tinfo_property; // al
  char v44; // dl
  __int64 v45; // rdx
  int v46; // eax
  int v47; // eax
  char v48; // al
  __int64 v49; // r12
  int v50; // eax
  _QWORD *v51; // r9
  char *v52; // rax
  char *v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rdi
  __int64 v56; // rcx
  __int64 v57; // rsi
  char *v58; // rdi
  __int64 v59; // r13
  __int64 v60; // r12
  __int64 v61; // rdi
  __int64 v62; // rdi
  char v63; // bl
  __int64 *v64; // r13
  int v65; // eax
  unsigned int v66; // r12d
  int v67; // ecx
  __int64 v68; // r13
  char *v69; // rdi
  char v70; // al
  __int64 v71; // r13
  __int64 v72; // rax
  __int64 v73; // rax
  int v74; // r13d
  int v75; // eax
  char v76; // al
  bool v77; // r13
  int v78; // r12d
  char v79; // r13
  __int64 v80; // rdx
  __int64 v81; // [rsp+8h] [rbp-2B8h]
  char v82; // [rsp+10h] [rbp-2B0h]
  __int64 v83; // [rsp+10h] [rbp-2B0h]
  const __m128i *v84; // [rsp+18h] [rbp-2A8h]
  __int64 v85; // [rsp+18h] [rbp-2A8h]
  char v86; // [rsp+18h] [rbp-2A8h]
  __int64 v87; // [rsp+20h] [rbp-2A0h]
  char v88; // [rsp+28h] [rbp-298h]
  char v89; // [rsp+28h] [rbp-298h]
  int v90; // [rsp+28h] [rbp-298h]
  __int64 v91; // [rsp+28h] [rbp-298h]
  __int64 v92; // [rsp+38h] [rbp-288h]
  __int64 v93; // [rsp+38h] [rbp-288h]
  char *v94; // [rsp+38h] [rbp-288h]
  __int64 v95; // [rsp+50h] [rbp-270h] BYREF
  __int64 v96; // [rsp+58h] [rbp-268h] BYREF
  char *s1; // [rsp+60h] [rbp-260h] BYREF
  __int128 v98; // [rsp+68h] [rbp-258h]
  __int128 v99; // [rsp+78h] [rbp-248h]
  __int64 v100; // [rsp+88h] [rbp-238h]
  __int128 v101; // [rsp+90h] [rbp-230h]
  __int64 v102; // [rsp+A0h] [rbp-220h]
  __int128 v103; // [rsp+A8h] [rbp-218h]
  char v104; // [rsp+B8h] [rbp-208h]
  __m128i v105; // [rsp+C0h] [rbp-200h] BYREF
  __int64 v106; // [rsp+D0h] [rbp-1F0h]
  __int64 v107; // [rsp+D8h] [rbp-1E8h]
  __int64 v108; // [rsp+E0h] [rbp-1E0h]
  __int64 v109; // [rsp+E8h] [rbp-1D8h]
  __int64 v110; // [rsp+F0h] [rbp-1D0h]
  __int64 v111; // [rsp+F8h] [rbp-1C8h]
  __int128 v112; // [rsp+100h] [rbp-1C0h]
  __int64 v113; // [rsp+110h] [rbp-1B0h]
  __int128 v114; // [rsp+118h] [rbp-1A8h]
  __int64 v115; // [rsp+128h] [rbp-198h]
  int v116; // [rsp+130h] [rbp-190h]
  __int64 v117; // [rsp+138h] [rbp-188h]
  __int64 v118; // [rsp+140h] [rbp-180h]
  __int64 v119; // [rsp+148h] [rbp-178h]
  __int64 v120; // [rsp+150h] [rbp-170h]
  __int64 v121; // [rsp+158h] [rbp-168h]
  __int128 v122; // [rsp+160h] [rbp-160h]
  __int64 v123; // [rsp+170h] [rbp-150h]
  int v124; // [rsp+270h] [rbp-50h]
  int v125; // [rsp+274h] [rbp-4Ch]
  __int64 v126; // [rsp+278h] [rbp-48h]
  char v127; // [rsp+280h] [rbp-40h]
  char v128; // [rsp+281h] [rbp-3Fh]
  int v129; // [rsp+282h] [rbp-3Eh]
  unsigned __int64 v130; // [rsp+288h] [rbp-38h]

  v130 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 56) & 1) != 0 )
    return 0;
  v92 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
  v4 = *(_DWORD *)(v92 + 8) == 59 || *(_DWORD *)(v92 + 8) == 52;
  if ( v4 )
    return 0;
  v6 = *(_QWORD *)(a1 + 72);
  v7 = a2;
  v96 = 0;
  v87 = v6;
  v8 = *(_DWORD *)(a2 + 8);
  if ( v8 == 48 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL) != 52 )
      goto LABEL_6;
    tinfo_size = get_tinfo_size();
    if ( tinfo_size == get_tinfo_size() )
    {
      s1 = (char *)get_tinfo_property();
      copy_tinfo_t();
      clear_tinfo_t();
      v88 = 1;
      v9 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 24LL);
      goto LABEL_7;
    }
    v8 = *(_DWORD *)(a2 + 8);
  }
  if ( v8 == 52 )
  {
    v88 = 1;
    v9 = *(_QWORD *)(a2 + 24);
    goto LABEL_7;
  }
LABEL_6:
  v88 = 0;
  v9 = a2;
LABEL_7:
  v10 = sub_26B3D0(v9);
  if ( v10 != -1 && (get_tinfo_property() & 0xF) != 0xB )
  {
    copy_tinfo_t();
    if ( get_tinfo_size() == -1 )
      clear_tinfo_t();
    if ( v88 )
    {
      if ( *(_DWORD *)(v92 + 8) == 57 )
      {
        v36 = *(__int64 **)(v92 + 32);
        v37 = *v36;
        v38 = 72 * v36[1] == 0;
        v39 = *v36 + 72 * v36[1];
        if ( !v38 )
        {
          v40 = v37;
          while ( a2 != v40 )
          {
            v40 += 72;
            if ( v40 == v39 )
              goto LABEL_12;
          }
          v41 = *(_QWORD *)(v92 + 24);
          a3 = 0.0;
          v81 = v37;
          v83 = v40;
          s1 = nullptr;
          v85 = v41 + 48;
          v98 = 0;
          if ( !(unsigned __int8)sub_254DF0(v41, (__int64 *)&s1, v41 + 48, 0) )
          {
            v42 = s1;
            if ( !s1 )
              goto LABEL_64;
            goto LABEL_63;
          }
          v69 = (char *)::s1;
          if ( (_QWORD)v98 )
            v69 = s1;
          v70 = sub_F8190(v69, v85, 954437177 * (unsigned int)((v83 - v81) >> 3));
          v42 = s1;
          if ( !v70 )
          {
            if ( !s1 )
            {
LABEL_64:
              v82 = 1;
              if ( (get_tinfo_property() & 0xF) == 0xA )
              {
                s1 = nullptr;
                s1 = (char *)get_tinfo_property();
                tinfo_property = get_tinfo_property();
                v44 = 0;
                if ( (tinfo_property & 0xF) != 0xA )
                  v44 = sub_29CC80(&s1) ^ 1;
                v86 = v44;
                clear_tinfo_t();
                v82 = v86;
              }
              goto LABEL_13;
            }
LABEL_63:
            *(_QWORD *)&v98 = 0;
            qfree((__int64)v42);
            goto LABEL_64;
          }
          if ( s1 )
          {
            *(_QWORD *)&v98 = 0;
            qfree((__int64)s1);
          }
        }
      }
    }
LABEL_12:
    v82 = 0;
LABEL_13:
    v11 = nullptr;
    if ( *(_DWORD *)(v9 + 8) == 65 )
      v11 = (const __m128i *)(v9 + 24);
    v84 = v11;
    v12 = *(__m128i **)(v87 + 808);
    s1 = nullptr;
    copy_tinfo_t();
    sub_27E790(v12, v10, 0, 0, &s1, v84, v82);
    clear_tinfo_t();
  }
  clear_tinfo_t();
  switch ( *(_DWORD *)(a2 + 8) )
  {
    case 2:
      if ( (unsigned __int8)sub_248660(a2, *(_QWORD *)(a1 + 72), 1u, a3) )
        goto LABEL_79;
      goto LABEL_18;
    case 6:
    case 7:
      if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 1u )
        goto LABEL_18;
      v13 = *(_QWORD *)(a2 + 24);
      v15 = *(_QWORD *)(a2 + 32);
      v16 = 0;
      v17 = 0;
      v18 = 1;
      goto LABEL_26;
    case 0x23:
      v13 = sub_26BDF0(a2, 0);
      if ( !v13 )
      {
        v13 = sub_26BDF0(a2, 1);
        if ( !v13 )
          goto LABEL_18;
      }
      v15 = *(_QWORD *)(a2 + 24);
      if ( v13 == v15 )
        v15 = *(_QWORD *)(a2 + 32);
      v16 = 0;
      v18 = 0;
      v19 = 0;
      v17 = 0;
      goto LABEL_28;
    case 0x24:
      sub_254FE0(*(_QWORD *)(a2 + 24));
      if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 1u )
        goto LABEL_18;
      sub_254FE0(*(_QWORD *)(a2 + 32));
      v48 = get_tinfo_property();
      v13 = *(_QWORD *)(a2 + 24);
      if ( (unsigned __int8)((v48 & 0xF) - 10) <= 1u )
      {
        if ( (int)get_tinfo_property() > 1 )
          sub_246B40(*(_QWORD *)(a2 + 24), *(_QWORD *)(a1 + 72), (_QWORD *)(*(_QWORD *)(a1 + 72) + 200LL), a3);
        if ( (int)get_tinfo_property() > 1
          || !sub_245650(*(_QWORD *)(a1 + 72), *(_QWORD *)(a2 + 24), *(_QWORD *)(a2 + 32), 0) )
        {
          sub_246B40(*(_QWORD *)(a2 + 32), *(_QWORD *)(a1 + 72), (_QWORD *)(*(_QWORD *)(a2 + 24) + 48LL), a3);
        }
        sub_2441C0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0, a3);
LABEL_79:
        v4 = sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL));
        v28 = *(_DWORD *)(v92 + 8);
LABEL_40:
        if ( v28 > 69 )
          goto LABEL_54;
        goto LABEL_41;
      }
      v15 = *(_QWORD *)(a2 + 32);
      v16 = 0;
      v18 = 0;
      v17 = 0;
      goto LABEL_26;
    case 0x30:
      if ( !(unsigned __int8)sub_26C6D0(a1, (__int64 *)a2, a3) )
      {
        v46 = *(_DWORD *)(v92 + 8);
        if ( v46 != 51 && v46 != 57 )
        {
LABEL_103:
          if ( v46 <= 69 )
            goto LABEL_41;
LABEL_19:
          *(_DWORD *)(a2 + 56) |= 1u;
          return 0;
        }
        v96 = get_tinfo_property();
        if ( !(_BYTE)v96 )
        {
LABEL_156:
          clear_tinfo_t();
          if ( *(int *)(v92 + 8) <= 69 )
            goto LABEL_41;
          goto LABEL_19;
        }
        s1 = nullptr;
        s1 = (char *)get_tinfo_property();
        if ( !(_BYTE)s1 || (get_tinfo_property() & 0x2F) != 0xD || (v18 = compare_tinfo()) != 0 )
        {
          clear_tinfo_t();
          goto LABEL_156;
        }
        v13 = *(_QWORD *)(a2 + 24);
        clear_tinfo_t();
        clear_tinfo_t();
        v16 = 0;
        v17 = 0;
        v15 = 0;
        goto LABEL_26;
      }
      if ( !(unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
        return 0;
      goto LABEL_140;
    case 0x33:
      v49 = *(_QWORD *)(a2 + 24);
      v50 = *(_DWORD *)(v49 + 8);
      if ( v50 != 52 )
      {
        if ( v50 == 48 && *(_DWORD *)(*(_QWORD *)(v49 + 24) + 8LL) == 52 )
        {
          v95 = 0;
          v91 = *(_QWORD *)(a1 + 64);
          v95 = get_tinfo_property();
          v96 = get_tinfo_property();
          v68 = get_tinfo_size();
          if ( v68 == get_tinfo_size() )
          {
            v77 = (get_tinfo_property() & 0xF) == 9;
            if ( v77 == ((get_tinfo_property() & 0xF) == 9) )
            {
              if ( (unsigned __int8)sub_323990(v91, v92, a2) )
              {
                sub_255850((__int64 *)a2, *(_QWORD *)(a2 + 24), a3);
                s1 = nullptr;
                s1 = (char *)get_tinfo_property();
                copy_tinfo_t();
                clear_tinfo_t();
                sub_255850(*(__int64 **)(a2 + 24), *(_QWORD *)(*(_QWORD *)(a2 + 24) + 24LL), a3);
                if ( (unsigned int)(*(_DWORD *)(v92 + 8) - 2) > 0xD || !(unsigned __int8)sub_245010(v92, a2) )
                {
                  v78 = get_tinfo_property();
                  if ( v78 == -1 )
                  {
LABEL_214:
                    clear_tinfo_t();
                    clear_tinfo_t();
                    goto LABEL_171;
                  }
                  sub_26B390((__int64 *)&s1);
                  v79 = (char)s1;
                  if ( ((unsigned __int8)s1 & 0xE) != 0 )
                  {
                    clear_tinfo_t();
                    goto LABEL_214;
                  }
                  clear_tinfo_t();
                  if ( (v79 & 0x30) == 0 || v78 != (unsigned int)get_tinfo_property() )
                    goto LABEL_214;
                }
                sub_255850((__int64 *)a2, *(_QWORD *)(a2 + 24), a3);
                goto LABEL_214;
              }
            }
          }
          clear_tinfo_t();
          clear_tinfo_t();
        }
        v18 = 0;
LABEL_95:
        v13 = sub_254FC0(v49);
        if ( (get_tinfo_property() & 0xF) != 0xA )
        {
LABEL_18:
          if ( *(int *)(v92 + 8) > 69 )
            goto LABEL_19;
LABEL_41:
          if ( (get_tinfo_property() & 0x2F) != 0xD )
            goto LABEL_54;
          v29 = *(_DWORD *)(v92 + 8);
          if ( (unsigned int)(v29 - 1) <= 1 || v29 > 69 )
          {
            if ( get_tinfo_property() || (v29 = *(_DWORD *)(v92 + 8), (unsigned int)(v29 - 2) <= 0xD) )
            {
              if ( (unsigned __int8)sub_25A100(*(_QWORD *)(a1 + 64), v92) )
                goto LABEL_54;
              v29 = *(_DWORD *)(v92 + 8);
            }
          }
          if ( v29 == 57 )
          {
            sub_284360(v92, v7, nullptr);
            if ( !(unsigned __int8)sub_32A510(*(_QWORD *)(a1 + 72)) )
              goto LABEL_46;
          }
          else if ( v29 != 59 )
          {
LABEL_46:
            v30 = (unsigned int)(*(_DWORD *)(v7 + 8) - 51);
            if ( (unsigned int)v30 <= 0xE && (v31 = 25473, _bittest64(&v31, v30)) )
            {
              v32 = get_tinfo_size();
              v93 = sub_247510(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v7, v33, v34, a3);
              v35 = get_tinfo_property();
              sub_32C2C0((__int64 *)&s1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v32, (v35 & 0xF) == 9);
              if ( (unsigned __int8)sub_246B40(v93, *(_QWORD *)(a1 + 72), &s1, a3) )
              {
                v72 = sub_244320(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v93, v32, 0, a3);
                sub_244EE0((_QWORD *)v7, v72);
              }
              else
              {
                *(_QWORD *)(v93 + 24) = 0;
                if ( v93 )
                {
                  sub_255630(v93, a3);
                  clear_tinfo_t();
                  j__qfree(v93);
                }
              }
              sub_2441C0(v7, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 1, a3);
              if ( (unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
              {
                clear_tinfo_t();
                *(_DWORD *)(v7 + 56) |= 1u;
LABEL_55:
                *(_DWORD *)(a1 + 8) |= 8u;
                return 1;
              }
              clear_tinfo_t();
            }
            else if ( !(unsigned __int8)sub_323990(*(_QWORD *)(a1 + 64), v92, v7) )
            {
              v66 = get_tinfo_size();
              v67 = sub_255000(*(_DWORD *)(v92 + 8));
              if ( !v67 )
                v67 = 1;
              sub_32C430((__int64 *)&s1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v66, v67);
              sub_246B40(v7, *(_QWORD *)(a1 + 72), &s1, a3);
              clear_tinfo_t();
            }
          }
LABEL_54:
          *(_DWORD *)(v7 + 56) |= 1u;
          if ( v4 )
            goto LABEL_55;
          return 0;
        }
        if ( !get_tinfo_property() )
        {
          s1 = nullptr;
          s1 = (char *)get_tinfo_property();
          v76 = get_tinfo_property();
          if ( (v76 & 0x2F) != 0xD && (v76 & 0xF) != 0xB )
          {
            clear_tinfo_t();
            if ( *(int *)(v92 + 8) <= 69 )
              goto LABEL_41;
            goto LABEL_19;
          }
          clear_tinfo_t();
        }
        if ( v18 )
        {
          v16 = 0;
          v18 = 0;
          v17 = 0;
        }
        else
        {
          v17 = *(_DWORD *)(a2 + 40);
          v16 = 1;
        }
        v15 = 0;
LABEL_26:
        if ( v13 )
        {
          v19 = v16;
          goto LABEL_28;
        }
        goto LABEL_18;
      }
      v71 = *(_QWORD *)a2;
      sub_255850((__int64 *)a2, *(_QWORD *)(a2 + 24), a3);
      sub_255850((__int64 *)a2, *(_QWORD *)(a2 + 24), a3);
      if ( *(_QWORD *)a2 == -1 )
        *(_QWORD *)a2 = v71;
LABEL_171:
      if ( !(unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
      {
        if ( *(_DWORD *)(v92 + 8) == 51 )
          goto LABEL_41;
        v49 = a2;
        v18 = 1;
        goto LABEL_95;
      }
LABEL_140:
      *(_DWORD *)(a1 + 8) |= 8u;
      return 1;
    case 0x34:
      goto LABEL_84;
    case 0x39:
      v45 = get_tinfo_property();
      v46 = *(_DWORD *)(v92 + 8);
      if ( !v45 )
        goto LABEL_103;
      if ( v46 == 80 )
        goto LABEL_19;
      v18 = 0;
      v13 = a2;
      v47 = get_tinfo_size();
      v16 = 0;
      v17 = v47;
      v15 = 0;
      goto LABEL_26;
    case 0x3A:
      if ( !under_debugger )
        sub_383060(0xC419u, a3);
      goto LABEL_236;
    case 0x3B:
    case 0x3C:
      if ( !under_debugger )
        sub_383060(0xC41Au, a3);
      goto LABEL_236;
    case 0x40:
    case 0x41:
      if ( *(int *)(v92 + 8) <= 69 && (*(_BYTE *)(v92 + 56) & 1) != 0 )
        goto LABEL_41;
      get_tinfo_property();
      if ( (get_tinfo_property() & 0x2F) == 0xD )
      {
        v18 = 0;
        v13 = a2;
        v90 = *(_DWORD *)(a2 + 40);
        clear_tinfo_t();
        v17 = v90;
        v16 = 0;
        v15 = 0;
      }
      else
      {
        v65 = *(_DWORD *)(v92 + 8);
        if ( v65 <= 69 )
        {
          if ( *(_QWORD *)(v92 + 32) != a2 )
            goto LABEL_135;
          if ( (get_tinfo_property() & 0xF) == 0xA
            && (unsigned int)lexcompare_tinfo()
            && (get_tinfo_property() & 0xF) == 0xA )
          {
            sub_26B390(&v95);
            if ( (get_tinfo_property() & 0x2F) == 0xD )
            {
              sub_26B390(&v96);
              a3 = 0.0;
              LODWORD(v101) = 1;
              s1 = nullptr;
              v100 = 0;
              v98 = 0;
              v99 = 0;
              do
              {
                if ( !(unsigned __int8)get_tinfo_details() || !(_QWORD)v98 )
                  goto LABEL_223;
                v80 = v95;
                v95 = *((_QWORD *)s1 + 8);
                *((_QWORD *)s1 + 8) = v80;
              }
              while ( !(unsigned __int8)sub_32A510(*(_QWORD *)(a1 + 72)) );
              if ( a2 )
              {
                v18 = 0;
                sub_22D2D0((__int64 *)&s1);
                clear_tinfo_t();
                clear_tinfo_t();
                v13 = a2;
                clear_tinfo_t();
                v16 = 0;
                v19 = 0;
                v17 = 0;
                v15 = 0;
LABEL_28:
                v20 = *(_QWORD *)(a1 + 72);
                a3 = 0.0;
                v125 = v17;
                v110 = v15;
                v21 = *(_QWORD *)v7;
                v113 = v20;
                v105.m128i_i64[0] = v20;
                v22 = *(_QWORD *)(a1 + 24);
                v118 = v21;
                v23 = *(_QWORD *)(a1 + 16);
                v111 = 0;
                v115 = -1;
                v116 = 0;
                v119 = 0;
                v120 = 0;
                v121 = 0;
                v126 = 0;
                v129 = 0;
                v112 = 0;
                v114 = 0;
                v122 = 0;
                v24 = *(_QWORD *)(v23 + 8 * v22 - 8);
                v106 = a1 + 16;
                v89 = v16;
                v105.m128i_i64[1] = a1;
                v108 = v7;
                v109 = v13;
                v117 = 0;
                v124 = -1;
                v127 = 0;
                v128 = v18;
                v107 = v24;
                v123 = -1;
                v25 = sub_275B20(&v105, v19, (__m128)0LL);
                v26 = v25;
                if ( !v25 )
                {
LABEL_34:
                  v27 = 0;
LABEL_35:
                  if ( v121 )
                  {
                    *(_QWORD *)&v122 = 0;
                    qfree(v121);
                  }
                  clear_tinfo_t();
                  clear_tinfo_t();
                  if ( v111 )
                  {
                    *(_QWORD *)&v112 = 0;
                    qfree(v111);
                  }
                  v28 = *(_DWORD *)(v92 + 8);
                  if ( !v27 )
                    goto LABEL_40;
                  if ( v28 != 57 || *(_QWORD *)(v92 + 24) != v7 )
                    goto LABEL_54;
                  s1 = nullptr;
                  v99 = 0u;
                  v100 = 0;
                  v102 = 0;
                  v104 = 16;
                  v98 = 0;
                  v101 = 0;
                  v103 = 0;
                  v96 = 0;
                  v96 = get_tinfo_property();
                  if ( !(unsigned __int8)get_tinfo_details() )
                  {
LABEL_114:
                    clear_tinfo_t();
                    if ( v102 )
                    {
                      *(_QWORD *)&v103 = 0;
                      qfree(v102);
                    }
                    cleanup_argloc();
                    clear_tinfo_t();
                    v58 = s1;
                    if ( s1 )
                    {
                      v59 = v98;
                      v60 = 0;
                      if ( (_QWORD)v98 )
                      {
                        do
                        {
                          v94 = &v58[80 * v60];
                          clear_tinfo_t();
                          v61 = *((_QWORD *)v94 + 5);
                          if ( v61 )
                          {
                            *((_QWORD *)v94 + 6) = 0;
                            qfree(v61);
                          }
                          v62 = *((_QWORD *)v94 + 2);
                          if ( v62 )
                          {
                            *((_QWORD *)v94 + 3) = 0;
                            qfree(v62);
                          }
                          ++v60;
                          cleanup_argloc();
                          v58 = s1;
                        }
                        while ( v59 != v60 );
                      }
                      *(_QWORD *)&v98 = 0;
                      qfree((__int64)v58);
                    }
                    goto LABEL_54;
                  }
                  v51 = *(_QWORD **)(v92 + 32);
                  if ( v51[1] >= (unsigned __int64)v98 )
                  {
                    v52 = s1;
                    v53 = &s1[80 * v98];
                    if ( s1 != v53 )
                    {
                      v54 = 0;
                      do
                      {
                        v55 = *((_QWORD *)v52 + 8);
                        v52 += 80;
                        v56 = v54 + *v51;
                        v54 += 72;
                        v57 = *(_QWORD *)(v56 + 64);
                        *(_QWORD *)(v56 + 64) = v55;
                        *((_QWORD *)v52 - 2) = v57;
                      }
                      while ( v53 != v52 );
                    }
                    goto LABEL_114;
                  }
                  if ( !under_debugger )
                    sub_383060(0xCD29u, 0.0);
LABEL_236:
                  BUG();
                }
                if ( v89 && !(_DWORD)v126 && !HIBYTE(v129) && HIDWORD(v126) != 3 )
                {
                  sub_255630(v25, 0.0);
                  clear_tinfo_t();
                  j__qfree(v26);
                  goto LABEL_34;
                }
                v63 = BYTE1(v129);
                if ( BYTE1(v129) )
                {
                  if ( v7 )
                  {
                    sub_255630(v7, 0.0);
                    clear_tinfo_t();
                    j__qfree(v7);
                  }
                  sub_255850((__int64 *)v92, v26, 0.0);
                  if ( *(_QWORD *)(a1 + 24) <= 1u )
                  {
                    if ( !under_debugger )
                      sub_383060(0xC41Bu, 0.0);
                    goto LABEL_236;
                  }
                  v7 = v92;
                  goto LABEL_129;
                }
                if ( *(_DWORD *)(v7 + 8) == 48 && !(unsigned __int8)sub_32A510(*(_QWORD *)(a1 + 72)) )
                {
                  v95 = 0;
                  copy_tinfo_t();
                  v96 = 0;
                  copy_tinfo_t();
                  while ( (get_tinfo_property() & 0xF) == 0xA && (get_tinfo_property() & 0xF) == 0xA )
                  {
                    s1 = nullptr;
                    s1 = (char *)get_tinfo_property();
                    copy_tinfo_t();
                    clear_tinfo_t();
                    s1 = nullptr;
                    s1 = (char *)get_tinfo_property();
                    copy_tinfo_t();
                    clear_tinfo_t();
                  }
                  if ( (get_tinfo_property() & 0xF) == 0xB && (v73 = get_tinfo_size()) != 0 && !sub_11CA80(v73)
                    || (v74 = sub_32E340(&v95), v75 = sub_32E340(&v96), v74 < v75)
                    || v74 == v75 && !v74 )
                  {
                    v64 = *(__int64 **)(v7 + 24);
                    clear_tinfo_t();
                    clear_tinfo_t();
                    goto LABEL_132;
                  }
                  clear_tinfo_t();
                  clear_tinfo_t();
                }
                v64 = (__int64 *)v7;
LABEL_132:
                sub_255630((__int64)v64, 0.0);
                sub_255850(v64, v26, 0.0);
LABEL_129:
                v4 = sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) | v63;
                sub_245060(v7);
                v27 = 1;
                goto LABEL_35;
              }
LABEL_223:
              sub_22D2D0((__int64 *)&s1);
              clear_tinfo_t();
            }
            clear_tinfo_t();
          }
          v65 = *(_DWORD *)(v92 + 8);
          if ( v65 <= 69 )
          {
LABEL_135:
            if ( !v92 )
            {
              clear_tinfo_t();
              goto LABEL_41;
            }
            if ( v65 != 57 || a2 == *(_QWORD *)(v92 + 24) )
            {
              clear_tinfo_t();
              if ( *(int *)(v92 + 8) <= 69 )
                goto LABEL_41;
              goto LABEL_19;
            }
          }
        }
        sub_26AE90((__int64 *)&s1, a2, *(_QWORD *)(a1 + 64), (__int64 *)(a1 + 16), nullptr, -1);
        if ( !(_BYTE)s1 || (unsigned __int8)sub_32A510(*(_QWORD *)(a1 + 72)) )
        {
          clear_tinfo_t();
          clear_tinfo_t();
          if ( *(int *)(v92 + 8) <= 69 )
            goto LABEL_41;
          goto LABEL_19;
        }
        clear_tinfo_t();
        clear_tinfo_t();
LABEL_84:
        v16 = 0;
        v18 = 0;
        v13 = a2;
        v17 = 0;
        v15 = 0;
      }
      goto LABEL_26;
    default:
      goto LABEL_18;
  }
}

