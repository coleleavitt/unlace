unsigned __int64 __fastcall sub_323AC0(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v5; // rax
  unsigned int v8; // ebx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  void *v12; // rdx
  int v13; // eax
  __int64 v14; // rax
  char v15; // al
  int v16; // edx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // r13
  int v21; // eax
  int v23; // eax
  char v24; // bl
  __int64 v25; // r15
  int v26; // ebx
  char v27; // al
  char v28; // al
  __int64 v29; // rbx
  bool v30; // r15
  unsigned __int8 v31; // al
  bool v32; // si
  __int64 v33; // rax
  __int64 v34; // rax
  char v35; // cl
  int v36; // r15d
  int v37; // ecx
  __int64 v38; // rdi
  __int64 v39; // rdi
  __int64 v40; // r15
  char v41; // cl
  __int64 v42; // rbx
  __int64 v43; // rsi
  __int64 v44; // r15
  char v45; // al
  char v46; // bl
  __int64 v47; // rax
  const char *v48; // rsi
  const char *v49; // rdi
  __int64 v50; // [rsp+0h] [rbp-108h]
  char v51; // [rsp+8h] [rbp-100h]
  char v52; // [rsp+8h] [rbp-100h]
  char tinfo_property; // [rsp+8h] [rbp-100h]
  int v54; // [rsp+14h] [rbp-F4h]
  __int64 v55; // [rsp+28h] [rbp-E0h] BYREF
  char *s1[3]; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v57; // [rsp+48h] [rbp-C0h]
  __int64 v58; // [rsp+58h] [rbp-B0h]
  __int128 v59; // [rsp+60h] [rbp-A8h]
  __int128 v60; // [rsp+70h] [rbp-98h]
  __int64 v61; // [rsp+A0h] [rbp-68h]
  int v62; // [rsp+A8h] [rbp-60h]
  __int64 v63; // [rsp+B0h] [rbp-58h]
  char v64; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v65; // [rsp+C8h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 216);
  v65 = __readfsqword(0x28u);
  ++*(_DWORD *)(v5 + 448);
  if ( *(_DWORD *)(a3 + 56) > 0x1FFu )
    sub_323680(0xC5FDu, a3, a1 + 16, a4);
  if ( !sub_256450(a3, a2, a4) )
    sub_323680(0xC5FEu, a3, a1 + 16, a4);
  v8 = *(_DWORD *)(a3 + 8);
  if ( v8 > 0x54 )
    sub_323680(0xC5F1u, a3, a1 + 16, a4);
  v9 = *(int *)(a3 + 12);
  if ( (int)v9 < -1 )
    sub_323680(0xC5F2u, a3, a1 + 16, a4);
  if ( (_DWORD)v9 != -1 )
  {
    v10 = *(int *)(*(_QWORD *)(a1 + 8) + 64LL);
    if ( v10 * v10 < v9 )
      sub_323680(0xCD27u, a3, a1 + 16, a4);
  }
  if ( !v8 )
  {
    v11 = (unsigned int)(*(_DWORD *)(a2 + 8) - 67);
    if ( (unsigned int)v11 > 0x11 || (v12 = &loc_320A1, !_bittest64((const __int64 *)&v12, v11)) )
      sub_323680(0xC5FFu, a3, a1 + 16, a4);
    if ( !(unsigned __int8)*(_QWORD *)(a3 + 48) )
      goto LABEL_35;
    if ( !(unsigned int)verify_tinfo() )
    {
      v13 = *(_DWORD *)(a2 + 8);
      if ( v13 != 74 && v13 != 67 )
        sub_323680(0xC78Cu, a3, a1 + 16, a4);
      goto LABEL_18;
    }
LABEL_62:
    sub_323680(0xC601u, a3, a1 + 16, a4);
  }
  if ( !(unsigned __int8)*(_QWORD *)(a3 + 48) )
  {
    if ( ((v8 - 66) & 0xFFFFFFFD) != 0
      && !(unsigned __int8)sub_285160(a3, 66, 1)
      && !(unsigned __int8)sub_285160(a3, 68, 1) )
    {
      sub_323680(0xC600u, a3, a1 + 16, a4);
    }
    goto LABEL_35;
  }
  if ( *(_DWORD *)(a2 + 8) != 52 && (unsigned int)verify_tinfo() )
    goto LABEL_62;
  if ( v8 == 66 )
    sub_323680(0xC602u, a3, a1 + 16, a4);
LABEL_18:
  if ( !(unsigned __int8)print_tinfo() )
    sub_323680(0xC603u, a3, a1 + 16, a4);
  v14 = *(int *)(a2 + 8);
  if ( (int)v14 <= 69 )
  {
    if ( (unsigned int)v14 > 0x45 )
    {
      v17 = *(_DWORD *)(a2 + 56);
    }
    else
    {
      v15 = *((_BYTE *)&off_4E0320 + 16 * v14 + 11);
      v16 = *(_DWORD *)(a2 + 56) & 4;
      if ( (v15 & 2) == 0 )
        goto LABEL_26;
      if ( v16 )
      {
LABEL_31:
        if ( (get_tinfo_property() & 0xF) != 9 )
          sub_323680(0xC606u, a3, a1 + 16, a4);
        goto LABEL_32;
      }
      if ( (get_tinfo_property() & 0xF) == 9 )
        sub_323680(0xC604u, a3, a1 + 16, a4);
      v17 = *(_DWORD *)(a2 + 56);
      v18 = *(int *)(a2 + 8);
      v16 = v17 & 4;
      if ( (unsigned int)v18 <= 0x45 )
      {
        v15 = *((_BYTE *)&off_4E0320 + 16 * v18 + 11);
LABEL_26:
        if ( (v15 & 4) != 0 )
        {
          if ( !v16 )
            sub_323680(0xC605u, a3, a1 + 16, a4);
        }
        else if ( !v16 )
        {
          goto LABEL_32;
        }
        goto LABEL_31;
      }
    }
    if ( (v17 & 4) == 0 )
      goto LABEL_32;
    goto LABEL_31;
  }
LABEL_32:
  v19 = *(_DWORD *)(a1 + 56);
  if ( v19 <= 3 )
  {
    sub_2436E0(
      (__int64 *)s1,
      *(_QWORD *)(a1 + 216),
      a3,
      *(_QWORD *)(a3 + 24) + 48LL,
      (_QWORD *)(*(_QWORD *)(a3 + 32) + 48LL),
      (_BYTE *)(*(_QWORD *)(a3 + 40) + 48LL),
      a4,
      0);
    if ( (unsigned int)lexcompare_tinfo() )
      sub_323680(0xC607u, a3, a1 + 16, a4);
    clear_tinfo_t();
LABEL_35:
    v19 = *(_DWORD *)(a1 + 56);
  }
  v20 = *(_QWORD *)(a3 + 24);
  v50 = *(_QWORD *)(a3 + 32);
  if ( v19 > 6 )
  {
    if ( *(_DWORD *)(a3 + 12) != -1 )
      sub_323680(0xC608u, a3, a1 + 16, a4);
    if ( v8 - 1 <= 0x3B || v8 == 67 )
    {
      v30 = v8 == 58 || v8 - 1 <= 0x2C;
      if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u )
      {
        if ( !v30 )
        {
          if ( v8 > 0x1F )
          {
            v41 = v8 - 35;
            if ( v8 - 35 <= 0x20 && (((1LL << v41) & 0x162FF6000LL) != 0 || v8 == 36 || ((1LL << v41) & 1) != 0) )
              goto LABEL_40;
          }
          else if ( v8 <= 5 )
          {
            if ( v8 == 1 )
              goto LABEL_40;
            if ( v8 == 2 )
              goto LABEL_191;
          }
          else
          {
            v34 = 1LL << v8;
            if ( ((1LL << v8) & 0xAAC00000) != 0 )
              goto LABEL_145;
            if ( (v34 & 0x70000) != 0 || (v34 & 0xC0) != 0 )
              goto LABEL_40;
          }
          goto LABEL_131;
        }
      }
      else
      {
        if ( !v30 )
          goto LABEL_40;
        v30 = 0;
      }
      v31 = (get_tinfo_property() & 0xF) - 10;
      v32 = v31 <= 2u;
      if ( v8 == 16 )
      {
        v44 = *(_QWORD *)(a3 + 40);
        tinfo_property = get_tinfo_property();
        if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u != (unsigned __int8)((tinfo_property & 0xF) - 10) <= 2u
          && (get_tinfo_property() & 0x3F) != 1
          && (get_tinfo_property() & 0x3F) != 1
          && (*(_DWORD *)(v50 + 8) != 61 || sub_255A30(*(__int64 **)(v50 + 24)))
          && (*(_DWORD *)(v44 + 8) != 61 || sub_255A30(*(__int64 **)(v44 + 24))) )
        {
          v45 = get_tinfo_property();
          if ( ((v45 & 0xE) != 0 || (v45 & 0x30) == 0 || (get_tinfo_property() & 0x3F) == 0x2D)
            && !(unsigned __int8)compare_tinfo() )
          {
            sub_323680(0xCD51u, a3, a1 + 16, a4);
          }
        }
        goto LABEL_40;
      }
      if ( v31 > 2u && !v30 )
        goto LABEL_40;
      if ( v8 > 0x1F )
      {
        v35 = v8 - 35;
        if ( v8 - 35 > 0x20 )
          goto LABEL_131;
        if ( ((1LL << v35) & 0x162FF6000LL) != 0 )
          goto LABEL_40;
        if ( ((1LL << v35) & 1) != 0 )
          goto LABEL_176;
        if ( v8 != 36 )
          goto LABEL_131;
        if ( !v30 )
          sub_323680(0xC60Du, a3, a1 + 16, a4);
        if ( v31 > 2u )
          goto LABEL_40;
        goto LABEL_145;
      }
      if ( v8 > 5 )
      {
        v33 = 1LL << v8;
        if ( ((1LL << v8) & 0xAAC00000) == 0 )
        {
          if ( (v33 & 0x70000) != 0 )
            goto LABEL_40;
          if ( (v33 & 0xC0) == 0 )
            goto LABEL_131;
LABEL_176:
          if ( v32 && v30 )
            sub_323680(0xC60Bu, a3, a1 + 16, a4);
          goto LABEL_40;
        }
LABEL_145:
        if ( !sub_245650(*(_QWORD *)(a1 + 216), v20, v50, v8) )
          sub_323680(0xC60Cu, a3, a1 + 16, a4);
        goto LABEL_40;
      }
      if ( v8 == 1 )
        goto LABEL_40;
      if ( v8 == 2 )
      {
        if ( v31 <= 2u )
          goto LABEL_40;
LABEL_191:
        if ( (*(_DWORD *)(v50 + 8) != 61 || sub_255A30(*(__int64 **)(v50 + 24))) && (get_tinfo_property() & 0xF) != 0xC )
          sub_323680(0xC60Au, a3, a1 + 16, a4);
        goto LABEL_40;
      }
LABEL_131:
      sub_323680(0xC610u, a3, a1 + 16, a4);
    }
  }
LABEL_40:
  if ( (*(_BYTE *)(a3 + 56) & 1) != 0 )
  {
    if ( *(_DWORD *)(a2 + 8) == 57 )
    {
      if ( a2 && a3 == *(_QWORD *)(a2 + 24) )
      {
        s1[0] = nullptr;
        s1[0] = (char *)get_tinfo_property();
        if ( (get_tinfo_property() & 0xF) != 0xC )
          sub_323680(0xC611u, a3, a1 + 16, a4);
        clear_tinfo_t();
      }
    }
    else if ( !(unsigned __int8)sub_323990(a1, a2, a3, a4) )
    {
      sub_323680(0xC613u, a3, a1 + 16, a4);
    }
  }
  if ( (unsigned __int8)sub_245010(a2, a3) && !sub_323860(a2, a3, *(_DWORD *)(a1 + 56)) )
    sub_323680(0xC614u, a3, a1 + 16, a4);
  v21 = *(_DWORD *)(a1 + 56);
  if ( v21 <= 6 )
  {
    switch ( v8 )
    {
      case '#':
LABEL_80:
        if ( *(_DWORD *)(a2 + 8) == 51
          && (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 1u
          && (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 1u )
        {
          sub_323680(0xC992u, a3, a1 + 16, a4);
        }
        goto LABEL_51;
      case '0':
LABEL_69:
        if ( (get_tinfo_property() & 0xF) == 0xB && !*(_BYTE *)(*(_QWORD *)(a1 + 216) + 148LL) )
        {
          if ( *(_DWORD *)(a2 + 8) != 57 || (v23 = get_tinfo_property(), v23 != 176) && v23 != 256 )
            sub_323680(0xC616u, a3, a1 + 16, a4);
        }
        if ( (get_tinfo_property() & 0xF) == 0xC )
          sub_323680(0xC617u, a3, a1 + 16, a4);
        if ( *(int *)(a1 + 56) > 6
          && (get_tinfo_property() & 0xF) == 9
          && (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u )
        {
          sub_323680(0xC609u, a3, a1 + 16, a4);
        }
        goto LABEL_51;
      case '3':
LABEL_111:
        if ( *(int *)(a3 + 40) <= 0 )
          sub_323680(0xC61Au, a3, a1 + 16, a4);
        v28 = get_tinfo_property() & 0xF;
        if ( (unsigned __int8)(v28 - 10) > 1u )
          sub_323680(0xC61Du, a3, a1 + 16, a4);
        if ( v28 == 10 )
        {
          v42 = *(int *)(a3 + 40);
          if ( v42 != get_tinfo_size() && (get_tinfo_property() & 0xF) != 0xB )
            sub_323680(0xC61Bu, a3, a1 + 16, a4);
        }
        else
        {
          s1[0] = nullptr;
          s1[0] = (char *)get_tinfo_property();
          v29 = *(int *)(a3 + 40);
          if ( v29 != get_tinfo_size() && (get_tinfo_property() & 0xF) != 0xB )
            sub_323680(0xC61Cu, a3, a1 + 16, a4);
          clear_tinfo_t();
        }
        goto LABEL_51;
      case '9':
LABEL_105:
        if ( (get_tinfo_property() & 0xF) != 0xC )
          sub_323680(0xCE52u, a3, a1 + 16, a4);
        v27 = get_tinfo_property() & 0xF;
        if ( v27 == 10 )
        {
          s1[0] = nullptr;
          s1[0] = (char *)get_tinfo_property();
          v46 = get_tinfo_property();
          clear_tinfo_t();
          v27 = v46 & 0xF;
        }
        if ( v27 != 12 )
          sub_323680(0xC61Eu, a3, a1 + 16, a4);
        goto LABEL_51;
      case ':':
LABEL_102:
        if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 1u
          || (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u )
        {
          sub_323680(0xC60Fu, a3, a1 + 16, a4);
        }
        goto LABEL_51;
      case ';':
LABEL_101:
        v24 = get_tinfo_property();
        goto LABEL_95;
      case '<':
LABEL_94:
        s1[0] = nullptr;
        s1[0] = (char *)get_tinfo_property();
        v24 = get_tinfo_property();
        clear_tinfo_t();
LABEL_95:
        if ( (v24 & 0x2F) != 0xD )
          sub_323680(0xC61Fu, a3, a1 + 16, a4);
        v58 = 0;
        v25 = *(unsigned int *)(a3 + 32);
        v61 = 1;
        v64 = 0;
        memset(s1, 0, sizeof(s1));
        v57 = 0;
        v59 = 0;
        v62 = -1;
        v63 = 0;
        v60 = 0;
        v55 = get_tinfo_property();
        v26 = sub_32D810((__int128 *)s1, (__int64)&v55, v25);
        clear_tinfo_t();
        if ( v26 == -1 )
          sub_323680(0xC6EAu, a3, a1 + 16, 0.0);
        clear_tinfo_t();
        if ( v58 )
        {
          *(_QWORD *)&v59 = 0;
          qfree(v58);
        }
        if ( s1[2] )
        {
          *(_QWORD *)&v57 = 0;
          qfree((__int64)s1[2]);
        }
        goto LABEL_51;
      case '=':
LABEL_88:
        sub_323720(*(_QWORD *)(a3 + 24), a4);
        if ( (*(_BYTE *)(*(_QWORD *)(a3 + 24) + 13LL) & 0x20) == 0 )
        {
          if ( *(_DWORD *)(a1 + 56) != 8 || !(unsigned __int8)is_enum() && !(unsigned __int8)is_stroff() )
            goto LABEL_51;
          if ( !under_debugger )
            sub_383060(0xCC9Du, a4);
LABEL_246:
          BUG();
        }
        if ( !(unsigned __int8)is_enum() )
          goto LABEL_51;
        v43 = *(_QWORD *)(a3 + 48);
        memset(s1, 0, sizeof(s1));
        if ( (v43 & 0x100) == 0 || !get_tinfo_pdata() )
          goto LABEL_174;
        v47 = *(_QWORD *)(a3 + 24);
        if ( *(_QWORD *)(v47 + 24) )
        {
          v48 = *(const char **)(v47 + 16);
          v49 = ::s1;
          if ( !s1[1] )
            goto LABEL_215;
        }
        else
        {
          v48 = ::s1;
          if ( !s1[1] )
            goto LABEL_216;
        }
        v49 = s1[0];
LABEL_215:
        if ( strcmp(v49, v48) )
        {
LABEL_174:
          if ( !under_debugger )
            sub_383060(0xCC9Au, 0.0);
          goto LABEL_246;
        }
LABEL_216:
        if ( s1[0] )
        {
          s1[1] = nullptr;
          qfree((__int64)s1[0]);
        }
        goto LABEL_51;
      case '?':
LABEL_86:
        if ( !*(_QWORD *)(a3 + 24) )
          sub_323680(0xC624u, a3, a1 + 16, a4);
        goto LABEL_51;
      case 'A':
LABEL_84:
        if ( (unsigned __int64)*(int *)(a3 + 32) >= *(_QWORD *)(*(_QWORD *)(a1 + 8) + 440LL) )
          sub_323680(0xC622u, a3, a1 + 16, a4);
        goto LABEL_51;
      case 'B':
LABEL_118:
        if ( v21 > 1 )
LABEL_119:
          sub_323680(0xC625u, a3, a1 + 16, a4);
        goto LABEL_51;
      case 'D':
LABEL_65:
        if ( (*(_BYTE *)(a3 + 56) & 8) == 0 && (!a2 || *(_DWORD *)(a2 + 8) != 57 || a3 != *(_QWORD *)(a2 + 24)) )
          sub_323680(0xC623u, a3, a1 + 16, a4);
        goto LABEL_51;
      case 'E':
LABEL_50:
        if ( !*(_BYTE *)(a3 + 48) )
          sub_323680(0xC618u, a3, a1 + 16, a4);
        goto LABEL_51;
      default:
        goto LABEL_51;
    }
  }
  if ( v8 <= 0x45 )
  {
    if ( (*((_BYTE *)&off_4E0320 + 16 * (int)v8 + 11) & 0x10) == 0 || (*(_BYTE *)(a3 + 56) & 4) != 0 )
    {
      switch ( v8 )
      {
        case '#':
          goto LABEL_80;
        case '0':
          goto LABEL_69;
        case '3':
          goto LABEL_179;
        case '9':
          goto LABEL_105;
        case ':':
          goto LABEL_102;
        case ';':
          goto LABEL_101;
        case '<':
          goto LABEL_94;
        case '=':
          goto LABEL_88;
        case '?':
          goto LABEL_86;
        case 'A':
          goto LABEL_84;
        case 'B':
          goto LABEL_119;
        case 'D':
          goto LABEL_65;
        case 'E':
          goto LABEL_50;
        default:
          goto LABEL_51;
      }
    }
    v36 = sub_254CB0(a3, *(_QWORD *)(a1 + 216));
    v37 = sub_255000(v8);
    if ( v36 == v37 )
      goto LABEL_187;
    v38 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 48LL);
    if ( !(_BYTE)v38 || (v38 & 0xE) == 0 && (v38 & 0x30) != 0 )
      goto LABEL_187;
    v54 = v37;
    s1[0] = nullptr;
    s1[0] = (char *)get_tinfo_property();
    v51 = get_tinfo_property();
    clear_tinfo_t();
    if ( (v51 & 0x3F) == 0x30 )
      goto LABEL_187;
    v39 = *(_QWORD *)(*(_QWORD *)(a3 + 32) + 48LL);
    if ( !(_BYTE)v39 || (v39 & 0xE) == 0 && (v39 & 0x30) != 0 )
      goto LABEL_187;
    s1[0] = nullptr;
    s1[0] = (char *)get_tinfo_property();
    v52 = get_tinfo_property();
    clear_tinfo_t();
    if ( (v52 & 0x3F) == 0x30 )
      goto LABEL_187;
    if ( v54 == 2 && (*((_BYTE *)&off_4E0320 + 16 * (int)v8 + 11) & 8) == 0 )
    {
      v40 = *(_QWORD *)(a3 + 24);
      if ( *(_DWORD *)(v40 + 8) == 61 || (v40 = *(_QWORD *)(a3 + 32), *(_DWORD *)(v40 + 8) == 61) )
      {
        if ( v40 && get_tinfo_size() < (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a1 + 216) + 130LL) )
        {
          if ( *(_DWORD *)(v40 + 8) != 61 )
            sub_323010(a4);
          if ( sub_255A30(*(__int64 **)(v40 + 24)) >= 0 )
          {
LABEL_187:
            switch ( v8 )
            {
              case '#':
                goto LABEL_80;
              case '0':
                goto LABEL_69;
              case '3':
                if ( *(int *)(a1 + 56) > 6 )
                {
LABEL_179:
                  if ( *(_DWORD *)(v20 + 8) == 52
                    && (get_tinfo_property() & 0xF) != 0xB
                    && (unsigned int)lexcompare_tinfo() )
                  {
                    sub_323680(0xC619u, a3, a1 + 16, a4);
                  }
                }
                goto LABEL_111;
              case '9':
                goto LABEL_105;
              case ':':
                goto LABEL_102;
              case ';':
                goto LABEL_101;
              case '<':
                goto LABEL_94;
              case '=':
                goto LABEL_88;
              case '?':
                goto LABEL_86;
              case 'A':
                goto LABEL_84;
              case 'B':
                v21 = *(_DWORD *)(a1 + 56);
                goto LABEL_118;
              case 'D':
                goto LABEL_65;
              case 'E':
                goto LABEL_50;
              default:
                goto LABEL_51;
            }
          }
        }
      }
    }
    sub_323680(0xC615u, a3, a1 + 16, a4);
  }
LABEL_51:
  --*(_DWORD *)(*(_QWORD *)(a1 + 216) + 448LL);
  return v65 - __readfsqword(0x28u);
}

