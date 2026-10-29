unsigned __int64 __fastcall sub_31E200(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v5; // rax
  unsigned int v8; // ebx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
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
  int v25; // eax
  __int64 v26; // r15
  unsigned int v27; // ebx
  int v28; // ebx
  char v29; // al
  char v30; // al
  __int64 v31; // rbx
  bool v32; // r15
  unsigned __int8 v33; // al
  bool v34; // si
  __int64 v35; // rax
  __int64 v36; // rax
  char v37; // cl
  int v38; // r15d
  int v39; // ecx
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int64 v42; // r15
  char v43; // cl
  __int64 v44; // rbx
  __int64 v45; // rsi
  __int64 v46; // rsi
  __int64 v47; // r15
  char v48; // al
  char v49; // bl
  __int64 v50; // rax
  const char *v51; // rsi
  const char *v52; // rdi
  __int64 v53; // [rsp+0h] [rbp-108h]
  char v54; // [rsp+8h] [rbp-100h]
  char v55; // [rsp+8h] [rbp-100h]
  char tinfo_property; // [rsp+8h] [rbp-100h]
  int v57; // [rsp+14h] [rbp-F4h]
  __int64 v58; // [rsp+28h] [rbp-E0h] BYREF
  char *s1[3]; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v60; // [rsp+48h] [rbp-C0h]
  __int64 v61; // [rsp+58h] [rbp-B0h]
  __int128 v62; // [rsp+60h] [rbp-A8h]
  __int128 v63; // [rsp+70h] [rbp-98h]
  __int64 v64; // [rsp+A0h] [rbp-68h]
  int v65; // [rsp+A8h] [rbp-60h]
  __int64 v66; // [rsp+B0h] [rbp-58h]
  char v67; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v68; // [rsp+C8h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 216);
  v68 = __readfsqword(0x28u);
  ++*(_DWORD *)(v5 + 448);
  if ( *(_DWORD *)(a3 + 56) > 0x1FFu )
    sub_31DDC0(0xC5FDu, a3, a1 + 16, a4);
  if ( !sub_251090(a3, a2) )
    sub_31DDC0(0xC5FEu, a3, a1 + 16, a4);
  v8 = *(_DWORD *)(a3 + 8);
  if ( v8 > 0x54 )
    sub_31DDC0(0xC5F1u, a3, a1 + 16, a4);
  v9 = *(int *)(a3 + 12);
  if ( (int)v9 < -1 )
    sub_31DDC0(0xC5F2u, a3, a1 + 16, a4);
  if ( (_DWORD)v9 != -1 )
  {
    v10 = *(int *)(*(_QWORD *)(a1 + 8) + 64LL);
    if ( v10 * v10 < v9 )
      sub_31DDC0(0xCD27u, a3, a1 + 16, a4);
  }
  if ( !v8 )
  {
    v11 = (unsigned int)(*(_DWORD *)(a2 + 8) - 67);
    if ( (unsigned int)v11 > 0x11 || (v12 = 204961, !_bittest64(&v12, v11)) )
      sub_31DDC0(0xC5FFu, a3, a1 + 16, a4);
    if ( !(unsigned __int8)*(_QWORD *)(a3 + 48) )
      goto LABEL_35;
    if ( !(unsigned int)verify_tinfo() )
    {
      v13 = *(_DWORD *)(a2 + 8);
      if ( v13 != 74 && v13 != 67 )
        sub_31DDC0(0xC78Cu, a3, a1 + 16, a4);
      goto LABEL_18;
    }
LABEL_62:
    sub_31DDC0(0xC601u, a3, a1 + 16, a4);
  }
  if ( !(unsigned __int8)*(_QWORD *)(a3 + 48) )
  {
    if ( ((v8 - 66) & 0xFFFFFFFD) != 0
      && !(unsigned __int8)sub_27FDA0(a3, 66, 1)
      && !(unsigned __int8)sub_27FDA0(a3, 68, 1) )
    {
      sub_31DDC0(0xC600u, a3, a1 + 16, a4);
    }
    goto LABEL_35;
  }
  if ( *(_DWORD *)(a2 + 8) != 52 && (unsigned int)verify_tinfo() )
    goto LABEL_62;
  if ( v8 == 66 )
    sub_31DDC0(0xC602u, a3, a1 + 16, a4);
LABEL_18:
  if ( !(unsigned __int8)print_tinfo() )
    sub_31DDC0(0xC603u, a3, a1 + 16, a4);
  v14 = *(int *)(a2 + 8);
  if ( (int)v14 <= 69 )
  {
    if ( (unsigned int)v14 > 0x45 )
    {
      v17 = *(_DWORD *)(a2 + 56);
    }
    else
    {
      v15 = *((_BYTE *)&off_4B3CC0 + 16 * v14 + 11);
      v16 = *(_DWORD *)(a2 + 56) & 4;
      if ( (v15 & 2) == 0 )
        goto LABEL_26;
      if ( v16 )
      {
LABEL_31:
        if ( (get_tinfo_property() & 0xF) != 9 )
          sub_31DDC0(0xC606u, a3, a1 + 16, a4);
        goto LABEL_32;
      }
      if ( (get_tinfo_property() & 0xF) == 9 )
        sub_31DDC0(0xC604u, a3, a1 + 16, a4);
      v17 = *(_DWORD *)(a2 + 56);
      v18 = *(int *)(a2 + 8);
      v16 = v17 & 4;
      if ( (unsigned int)v18 <= 0x45 )
      {
        v15 = *((_BYTE *)&off_4B3CC0 + 16 * v18 + 11);
LABEL_26:
        if ( (v15 & 4) != 0 )
        {
          if ( !v16 )
            sub_31DDC0(0xC605u, a3, a1 + 16, a4);
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
    sub_23E320(
      (__int64 *)s1,
      *(_QWORD *)(a1 + 216),
      a3,
      *(_QWORD *)(a3 + 24) + 48LL,
      (_QWORD *)(*(_QWORD *)(a3 + 32) + 48LL),
      (_BYTE *)(*(_QWORD *)(a3 + 40) + 48LL),
      0);
    if ( (unsigned int)lexcompare_tinfo() )
      sub_31DDC0(0xC607u, a3, a1 + 16, a4);
    clear_tinfo_t();
LABEL_35:
    v19 = *(_DWORD *)(a1 + 56);
  }
  v20 = *(_QWORD *)(a3 + 24);
  v53 = *(_QWORD *)(a3 + 32);
  if ( v19 > 6 )
  {
    if ( *(_DWORD *)(a3 + 12) != -1 )
      sub_31DDC0(0xC608u, a3, a1 + 16, a4);
    if ( v8 - 1 <= 0x3B || v8 == 67 )
    {
      v32 = v8 == 58 || v8 - 1 <= 0x2C;
      if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u )
      {
        if ( !v32 )
        {
          if ( v8 > 0x1F )
          {
            v43 = v8 - 35;
            if ( v8 - 35 <= 0x20 && (((1LL << v43) & 0x162FF6000LL) != 0 || v8 == 36 || ((1LL << v43) & 1) != 0) )
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
            v36 = 1LL << v8;
            if ( ((1LL << v8) & 0xAAC00000) != 0 )
              goto LABEL_145;
            if ( (v36 & 0x70000) != 0 || (v36 & 0xC0) != 0 )
              goto LABEL_40;
          }
          goto LABEL_131;
        }
      }
      else
      {
        if ( !v32 )
          goto LABEL_40;
        v32 = 0;
      }
      v33 = (get_tinfo_property() & 0xF) - 10;
      v34 = v33 <= 2u;
      if ( v8 == 16 )
      {
        v47 = *(_QWORD *)(a3 + 40);
        tinfo_property = get_tinfo_property();
        if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u != (unsigned __int8)((tinfo_property & 0xF) - 10) <= 2u
          && (get_tinfo_property() & 0x3F) != 1
          && (get_tinfo_property() & 0x3F) != 1
          && (*(_DWORD *)(v53 + 8) != 61 || sub_250670(*(__int64 **)(v53 + 24)))
          && (*(_DWORD *)(v47 + 8) != 61 || sub_250670(*(__int64 **)(v47 + 24))) )
        {
          v48 = get_tinfo_property();
          if ( ((v48 & 0xE) != 0 || (v48 & 0x30) == 0 || (get_tinfo_property() & 0x3F) == 0x2D)
            && !(unsigned __int8)compare_tinfo() )
          {
            sub_31DDC0(0xCD51u, a3, a1 + 16, a4);
          }
        }
        goto LABEL_40;
      }
      if ( v33 > 2u && !v32 )
        goto LABEL_40;
      if ( v8 > 0x1F )
      {
        v37 = v8 - 35;
        if ( v8 - 35 > 0x20 )
          goto LABEL_131;
        if ( ((1LL << v37) & 0x162FF6000LL) != 0 )
          goto LABEL_40;
        if ( ((1LL << v37) & 1) != 0 )
          goto LABEL_176;
        if ( v8 != 36 )
          goto LABEL_131;
        if ( !v32 )
          sub_31DDC0(0xC60Du, a3, a1 + 16, a4);
        if ( v33 > 2u )
          goto LABEL_40;
        goto LABEL_145;
      }
      if ( v8 > 5 )
      {
        v35 = 1LL << v8;
        if ( ((1LL << v8) & 0xAAC00000) == 0 )
        {
          if ( (v35 & 0x70000) != 0 )
            goto LABEL_40;
          if ( (v35 & 0xC0) == 0 )
            goto LABEL_131;
LABEL_176:
          if ( v34 && v32 )
            sub_31DDC0(0xC60Bu, a3, a1 + 16, a4);
          goto LABEL_40;
        }
LABEL_145:
        if ( !sub_240290(*(_QWORD *)(a1 + 216), v20, v53, v8) )
          sub_31DDC0(0xC60Cu, a3, a1 + 16, a4);
        goto LABEL_40;
      }
      if ( v8 == 1 )
        goto LABEL_40;
      if ( v8 == 2 )
      {
        if ( v33 <= 2u )
          goto LABEL_40;
LABEL_191:
        if ( (*(_DWORD *)(v53 + 8) != 61 || sub_250670(*(__int64 **)(v53 + 24))) && (get_tinfo_property() & 0xF) != 0xC )
          sub_31DDC0(0xC60Au, a3, a1 + 16, a4);
        goto LABEL_40;
      }
LABEL_131:
      sub_31DDC0(0xC610u, a3, a1 + 16, a4);
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
          sub_31DDC0(0xC611u, a3, a1 + 16, a4);
        clear_tinfo_t();
      }
    }
    else if ( !(unsigned __int8)sub_31E0D0(a1, a2, a3) )
    {
      sub_31DDC0(0xC613u, a3, a1 + 16, a4);
    }
  }
  if ( (unsigned __int8)sub_23FC50(a2, a3) && !sub_31DFA0(a2, a3, *(_DWORD *)(a1 + 56)) )
    sub_31DDC0(0xC614u, a3, a1 + 16, a4);
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
          sub_31DDC0(0xC992u, a3, a1 + 16, a4);
        }
        goto LABEL_51;
      case '0':
LABEL_69:
        if ( (get_tinfo_property() & 0xF) == 0xB && !*(_BYTE *)(*(_QWORD *)(a1 + 216) + 148LL) )
        {
          if ( *(_DWORD *)(a2 + 8) != 57 || (v23 = get_tinfo_property(), v23 != 176) && v23 != 256 )
            sub_31DDC0(0xC616u, a3, a1 + 16, a4);
        }
        if ( (get_tinfo_property() & 0xF) == 0xC )
          sub_31DDC0(0xC617u, a3, a1 + 16, a4);
        if ( *(int *)(a1 + 56) > 6
          && (get_tinfo_property() & 0xF) == 9
          && (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u )
        {
          sub_31DDC0(0xC609u, a3, a1 + 16, a4);
        }
        goto LABEL_51;
      case '3':
LABEL_111:
        if ( *(int *)(a3 + 40) <= 0 )
          sub_31DDC0(0xC61Au, a3, a1 + 16, a4);
        v30 = get_tinfo_property() & 0xF;
        if ( (unsigned __int8)(v30 - 10) > 1u )
          sub_31DDC0(0xC61Du, a3, a1 + 16, a4);
        if ( v30 == 10 )
        {
          v44 = *(int *)(a3 + 40);
          if ( v44 != get_tinfo_size() && (get_tinfo_property() & 0xF) != 0xB )
            sub_31DDC0(0xC61Bu, a3, a1 + 16, a4);
        }
        else
        {
          s1[0] = nullptr;
          s1[0] = (char *)get_tinfo_property();
          v31 = *(int *)(a3 + 40);
          if ( v31 != get_tinfo_size() && (get_tinfo_property() & 0xF) != 0xB )
            sub_31DDC0(0xC61Cu, a3, a1 + 16, a4);
          clear_tinfo_t();
        }
        goto LABEL_51;
      case '9':
LABEL_105:
        if ( (get_tinfo_property() & 0xF) != 0xC )
          sub_31DDC0(0xCE52u, a3, a1 + 16, a4);
        v29 = get_tinfo_property() & 0xF;
        if ( v29 == 10 )
        {
          s1[0] = nullptr;
          s1[0] = (char *)get_tinfo_property();
          v49 = get_tinfo_property();
          clear_tinfo_t();
          v29 = v49 & 0xF;
        }
        if ( v29 != 12 )
          sub_31DDC0(0xC61Eu, a3, a1 + 16, a4);
        goto LABEL_51;
      case ':':
LABEL_102:
        if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 1u
          || (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u )
        {
          sub_31DDC0(0xC60Fu, a3, a1 + 16, a4);
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
          sub_31DDC0(0xC61Fu, a3, a1 + 16, a4);
        v25 = *(_DWORD *)(a3 + 56);
        v61 = 0;
        v26 = *(unsigned int *)(a3 + 32);
        v64 = 1;
        v67 = 0;
        memset(s1, 0, sizeof(s1));
        v60 = 0;
        v62 = 0;
        v27 = (v25 & 0x100) == 0 ? 2 : 268435458;
        v65 = -1;
        v66 = 0;
        v63 = 0;
        v58 = get_tinfo_property();
        v28 = sub_327D90(s1, &v58, v26, v27);
        clear_tinfo_t();
        if ( v28 == -1 )
          sub_31DDC0(0xC6EAu, a3, a1 + 16, 0.0);
        clear_tinfo_t();
        if ( v61 )
        {
          *(_QWORD *)&v62 = 0;
          qfree();
        }
        if ( s1[2] )
        {
          *(_QWORD *)&v60 = 0;
          qfree();
        }
        goto LABEL_51;
      case '=':
LABEL_88:
        sub_31DE60(*(_QWORD *)(a3 + 24));
        if ( (*(_BYTE *)(*(_QWORD *)(a3 + 24) + 13LL) & 0x20) == 0 )
        {
          if ( *(_DWORD *)(a1 + 56) != 8 || !(unsigned __int8)is_enum() && !(unsigned __int8)is_stroff() )
            goto LABEL_51;
          if ( !under_debugger )
            sub_37CFE0(52381);
LABEL_246:
          BUG();
        }
        if ( !(unsigned __int8)is_enum() )
          goto LABEL_51;
        v45 = *(_QWORD *)(a3 + 48);
        memset(s1, 0, sizeof(s1));
        if ( (v45 & 0x100) == 0 || !get_tinfo_pdata() )
          goto LABEL_174;
        v50 = *(_QWORD *)(a3 + 24);
        if ( *(_QWORD *)(v50 + 24) )
        {
          v51 = *(const char **)(v50 + 16);
          v52 = ::s1;
          if ( !s1[1] )
            goto LABEL_215;
        }
        else
        {
          v51 = ::s1;
          if ( !s1[1] )
            goto LABEL_216;
        }
        v52 = s1[0];
LABEL_215:
        if ( strcmp(v52, v51) )
        {
LABEL_174:
          if ( !under_debugger )
            sub_37CFE0(52378);
          goto LABEL_246;
        }
LABEL_216:
        if ( s1[0] )
        {
          s1[1] = nullptr;
          qfree();
        }
        goto LABEL_51;
      case '?':
LABEL_86:
        if ( !*(_QWORD *)(a3 + 24) )
          sub_31DDC0(0xC624u, a3, a1 + 16, a4);
        goto LABEL_51;
      case 'A':
LABEL_84:
        if ( (unsigned __int64)*(int *)(a3 + 32) >= *(_QWORD *)(*(_QWORD *)(a1 + 8) + 440LL) )
          sub_31DDC0(0xC622u, a3, a1 + 16, a4);
        goto LABEL_51;
      case 'B':
LABEL_118:
        if ( v21 > 1 )
LABEL_119:
          sub_31DDC0(0xC625u, a3, a1 + 16, a4);
        goto LABEL_51;
      case 'D':
LABEL_65:
        if ( (*(_BYTE *)(a3 + 56) & 8) == 0 && (!a2 || *(_DWORD *)(a2 + 8) != 57 || a3 != *(_QWORD *)(a2 + 24)) )
          sub_31DDC0(0xC623u, a3, a1 + 16, a4);
        goto LABEL_51;
      case 'E':
LABEL_50:
        if ( !*(_BYTE *)(a3 + 48) )
          sub_31DDC0(0xC618u, a3, a1 + 16, a4);
        goto LABEL_51;
      default:
        goto LABEL_51;
    }
  }
  if ( v8 <= 0x45 )
  {
    if ( (*((_BYTE *)&off_4B3CC0 + 16 * (int)v8 + 11) & 0x10) == 0 || (*(_BYTE *)(a3 + 56) & 4) != 0 )
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
    v38 = sub_24F8F0(a3, *(_QWORD *)(a1 + 216));
    v39 = sub_24FC40(v8);
    if ( v38 == v39 )
      goto LABEL_187;
    v40 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 48LL);
    if ( !(_BYTE)v40 || (v40 & 0xE) == 0 && (v40 & 0x30) != 0 )
      goto LABEL_187;
    v57 = v39;
    s1[0] = nullptr;
    s1[0] = (char *)get_tinfo_property();
    v54 = get_tinfo_property();
    clear_tinfo_t();
    if ( (v54 & 0x3F) == 0x30 )
      goto LABEL_187;
    v41 = *(_QWORD *)(*(_QWORD *)(a3 + 32) + 48LL);
    if ( !(_BYTE)v41 || (v41 & 0xE) == 0 && (v41 & 0x30) != 0 )
      goto LABEL_187;
    s1[0] = nullptr;
    s1[0] = (char *)get_tinfo_property();
    v55 = get_tinfo_property();
    clear_tinfo_t();
    if ( (v55 & 0x3F) == 0x30 )
      goto LABEL_187;
    if ( v57 == 2 && (*((_BYTE *)&off_4B3CC0 + 16 * (int)v8 + 11) & 8) == 0 )
    {
      v42 = *(_QWORD *)(a3 + 24);
      if ( *(_DWORD *)(v42 + 8) == 61 || (v42 = *(_QWORD *)(a3 + 32), *(_DWORD *)(v42 + 8) == 61) )
      {
        if ( v42 )
        {
          v46 = *(_QWORD *)(v42 + 48);
          if ( get_tinfo_size() < (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a1 + 216) + 130LL) )
          {
            if ( *(_DWORD *)(v42 + 8) != 61 )
              sub_31D750(0, v46);
            if ( sub_250670(*(__int64 **)(v42 + 24)) >= 0 )
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
                      sub_31DDC0(0xC619u, a3, a1 + 16, a4);
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
    }
    sub_31DDC0(0xC615u, a3, a1 + 16, a4);
  }
LABEL_51:
  --*(_DWORD *)(*(_QWORD *)(a1 + 216) + 448LL);
  return v68 - __readfsqword(0x28u);
}

