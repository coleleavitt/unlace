__int64 __fastcall sub_27E290(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v4; // ebx
  unsigned __int64 v5; // rax
  unsigned int v6; // r12d
  unsigned int v9; // ebx
  __int64 v10; // r15
  bool v11; // zf
  __int64 v12; // r14
  unsigned int v13; // ecx
  unsigned int v14; // edi
  unsigned int v16; // eax
  __int64 v17; // rdi
  unsigned int v18; // edx
  int v19; // ecx
  char v20; // r9
  __int64 v21; // rax
  unsigned int v22; // esi
  char v23; // al
  __int64 v24; // rax
  unsigned int v25; // eax
  char tinfo_property; // al
  int v27; // esi
  __int64 v28; // rax
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // r14
  char v39; // r14
  char v40; // al
  char v41; // r9
  __int64 v42; // r15
  __int64 v43; // rax
  __int64 v44; // rsi
  __m128 v45; // xmm0
  int v46; // r8d
  int v47; // r9d
  char v48; // r9
  __int64 tinfo_size; // rax
  __int64 v50; // rsi
  unsigned int v51; // eax
  char v52; // al
  int v53; // r15d
  int v54; // eax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rsi
  __int64 v58; // r14
  char v59; // r9
  __int64 v60; // rdx
  int v61; // eax
  __int64 v62; // [rsp+0h] [rbp-A8h] BYREF
  __int128 *v63; // [rsp+8h] [rbp-A0h]
  char *v64; // [rsp+10h] [rbp-98h]
  __int64 *v65; // [rsp+18h] [rbp-90h]
  int v66; // [rsp+20h] [rbp-88h]
  __int64 v67; // [rsp+28h] [rbp-80h] BYREF
  __int64 v68; // [rsp+30h] [rbp-78h]
  __int64 v69; // [rsp+38h] [rbp-70h] BYREF
  __int128 v70; // [rsp+40h] [rbp-68h] BYREF
  __int64 v71; // [rsp+50h] [rbp-58h] BYREF
  int v72; // [rsp+58h] [rbp-50h]
  __int16 v73; // [rsp+5Ch] [rbp-4Ch]
  __int64 v74; // [rsp+60h] [rbp-48h]
  unsigned __int64 v75; // [rsp+68h] [rbp-40h]

  v62 = a4;
  v75 = __readfsqword(0x28u);
  v5 = *(int *)(a1 + 8);
  if ( (int)v5 > 69 )
  {
    if ( !under_debugger )
      sub_37EEE0(51787);
    goto LABEL_239;
  }
  v6 = a3;
  LOBYTE(v4) = (_DWORD)v5 == 58;
  LOBYTE(a3) = (unsigned int)(v5 - 1) <= 0x2C;
  v9 = a3 | v4;
  if ( (unsigned int)(v5 - 1) <= 0x3B || (_DWORD)v5 == 67 )
  {
    v10 = *(_QWORD *)(a1 + 24) + 48LL;
    if ( !(_BYTE)v9 )
    {
      if ( (_DWORD)v5 == 57 )
      {
        if ( (unsigned __int8)compare_tinfo() )
        {
          v5 = *(int *)(a1 + 8);
          if ( (unsigned int)v5 > 0x45 )
            goto LABEL_7;
LABEL_25:
          v12 = 0;
          goto LABEL_38;
        }
        v67 = 0;
        copy_tinfo_t();
        if ( (get_tinfo_property() & 0xF) != 0xA )
        {
          v68 = 0;
          v64 = (char *)&v70 + 8;
          v69 = 0;
          v70 = 0;
          copy_tinfo_t();
          v71 = 0;
          v65 = &v71;
          copy_tinfo_t();
          v72 = 0;
          v73 = 0;
          clear_tinfo_t();
          clear_tinfo_t();
          v63 = &v70;
          copy_tinfo_t();
          create_tinfo();
          clear_tinfo_t();
          clear_tinfo_t();
          clear_tinfo_t();
        }
        v9 = sub_242EC0(*(_QWORD *)(a1 + 24), a2, &v67);
        v12 = 0;
        v10 = *(_QWORD *)(a1 + 24) + 48LL;
        clear_tinfo_t();
        v5 = *(int *)(a1 + 8);
        if ( (unsigned int)v5 > 0x45 )
          goto LABEL_8;
      }
      else
      {
        v11 = (get_tinfo_property() & 0xF) == 12;
        v5 = *(int *)(a1 + 8);
        if ( !v11 )
        {
          if ( (unsigned int)v5 > 0x45 )
          {
LABEL_7:
            v12 = 0;
            goto LABEL_8;
          }
          goto LABEL_25;
        }
        if ( (unsigned int)v5 <= 0x3C )
        {
          v37 = 0x19EE800000000000LL;
          v12 = 0;
          LOBYTE(v64) = 0;
          if ( !_bittest64(&v37, v5) )
            goto LABEL_38;
LABEL_36:
          v17 = *(_QWORD *)(a1 + 24);
          *(_QWORD *)&v70 = 39;
          v63 = &v70;
          v9 = sub_242EC0(v17, a2, &v70);
          clear_tinfo_t();
          v10 = *(_QWORD *)(a1 + 24) + 48LL;
          if ( !(_BYTE)v64 )
          {
            v5 = *(int *)(a1 + 8);
            if ( (unsigned int)v5 > 0x45 )
              goto LABEL_8;
            goto LABEL_38;
          }
          goto LABEL_110;
        }
        v12 = 0;
        if ( (unsigned int)v5 > 0x45 )
          goto LABEL_8;
      }
LABEL_38:
      if ( (*((_BYTE *)&off_4CD440 + 16 * v5 + 11) & 2) == 0 )
        goto LABEL_84;
LABEL_39:
      if ( (*(_BYTE *)(a1 + 56) & 4) != 0 )
        goto LABEL_84;
      goto LABEL_40;
    }
    v12 = *(_QWORD *)(a1 + 32) + 48LL;
    if ( (_DWORD)v5 == 1 )
    {
      v9 = 0;
      if ( (unk_4CD45B & 2) == 0 )
        goto LABEL_8;
      goto LABEL_39;
    }
    if ( (get_tinfo_property() & 0xF) == 0xC )
    {
      LOBYTE(v64) = (get_tinfo_property() & 0xF) == 12;
      goto LABEL_36;
    }
    if ( (get_tinfo_property() & 0xF) != 0xC )
    {
      v5 = *(int *)(a1 + 8);
      v9 = 0;
      if ( (unsigned int)v5 > 0x45 )
        goto LABEL_8;
      goto LABEL_38;
    }
    v9 = 0;
    v63 = &v70;
LABEL_110:
    v36 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)&v70 = 39;
    v9 |= sub_242EC0(v36, a2, v63);
    clear_tinfo_t();
    v12 = *(_QWORD *)(a1 + 32) + 48LL;
    v5 = *(int *)(a1 + 8);
    if ( (unsigned int)v5 <= 0x45 )
      goto LABEL_38;
    if ( v10 )
    {
      LOBYTE(v18) = v9;
LABEL_43:
      LOBYTE(v62) = v18;
      v9 = (unsigned __int8)v18;
      if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u )
      {
LABEL_44:
        if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 2u )
          goto LABEL_10;
        v13 = *(_DWORD *)(a1 + 8);
        v20 = 1;
        if ( v13 > 0x24 )
        {
          v21 = v13 - 48;
          if ( (unsigned int)v21 > 0x13 )
            goto LABEL_47;
          goto LABEL_107;
        }
        goto LABEL_54;
      }
    }
LABEL_52:
    if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u )
    {
      v13 = *(_DWORD *)(a1 + 8);
      v20 = 0;
      if ( v13 > 0x24 )
      {
        v21 = v13 - 48;
LABEL_107:
        switch ( v21 )
        {
          case 0LL:
            if ( !v20 )
              goto LABEL_27;
LABEL_151:
            LOBYTE(v62) = v20;
            if ( (get_tinfo_property() & 0xF) != 9 )
            {
              if ( !(_BYTE)v6 )
                goto LABEL_19;
              v13 = *(_DWORD *)(a1 + 8);
              v22 = v13;
              if ( v13 - 22 > 9 )
              {
                v23 = v62 & (v13 == 36);
                goto LABEL_63;
              }
              goto LABEL_122;
            }
            v24 = sub_27B550(a2, *(_QWORD *)(a1 + 24), 0);
            v59 = v62;
            *(_QWORD *)(a1 + 24) = v24;
            if ( !(_BYTE)v6 )
              goto LABEL_172;
            v13 = *(_DWORD *)(a1 + 8);
            v22 = v13;
            if ( v13 - 22 > 9 )
            {
              v9 = v6;
              v23 = v59 & (v13 == 36);
              goto LABEL_63;
            }
            v9 = v6;
            goto LABEL_68;
          case 1LL:
          case 3LL:
          case 4LL:
          case 5LL:
          case 6LL:
          case 7LL:
          case 8LL:
          case 9LL:
          case 16LL:
          case 17LL:
          case 19LL:
            goto LABEL_27;
          case 2LL:
          case 13LL:
          case 14LL:
          case 15LL:
          case 18LL:
            goto LABEL_159;
          case 10LL:
            if ( v20 )
            {
              if ( (unsigned __int8)sub_242EC0(*(_QWORD *)(a1 + 32), a2, (_QWORD *)(a2 + 288)) )
                goto LABEL_60;
              if ( !under_debugger )
                sub_37EEE0(51414);
            }
            else if ( !under_debugger )
            {
              sub_37EEE0(50598);
            }
            goto LABEL_239;
          case 11LL:
LABEL_161:
            if ( !under_debugger )
              sub_37EEE0(50599);
            goto LABEL_239;
          case 12LL:
            if ( !v20 )
            {
              if ( !under_debugger )
                sub_37EEE0(50597);
              goto LABEL_239;
            }
LABEL_103:
            if ( (_BYTE)v6 )
              goto LABEL_19;
            break;
          default:
            goto LABEL_59;
        }
LABEL_104:
        v14 = v13;
        if ( (*(_BYTE *)(a1 + 56) & 4) != 0 )
          goto LABEL_21;
        goto LABEL_30;
      }
LABEL_54:
      if ( v13 <= 0x15 )
      {
        if ( v13 == 2 )
        {
          LOBYTE(v64) = 1;
          goto LABEL_134;
        }
        if ( v13 <= 2 )
        {
          if ( v13 == 1 )
            goto LABEL_27;
          goto LABEL_58;
        }
        if ( v13 > 7 )
        {
          if ( v13 - 16 > 2 )
          {
LABEL_159:
            if ( !v20 )
              goto LABEL_59;
LABEL_145:
            if ( v13 - 2 > 0xD )
            {
              v60 = *(_QWORD *)(a1 + 24);
              LOBYTE(v62) = v20;
              v61 = sub_27E160(a1, a2, v60);
              v48 = v62;
              v9 |= v61;
LABEL_147:
              if ( !v48 )
              {
LABEL_148:
                if ( !(_BYTE)v6 )
                  goto LABEL_19;
                goto LABEL_149;
              }
LABEL_59:
              if ( (unsigned __int8)sub_27E160(a1, a2, *(_QWORD *)(a1 + 32)) )
              {
LABEL_60:
                if ( !(_BYTE)v6 )
                {
LABEL_172:
                  if ( (*(_BYTE *)(a1 + 56) & 4) != 0 )
                    goto LABEL_32;
                  v14 = *(_DWORD *)(a1 + 8);
                  if ( v14 > 0x45 || (*((_BYTE *)&off_4CD440 + 16 * (int)v14 + 11) & 0x10) == 0 )
                    goto LABEL_32;
                  v9 = 1;
                  goto LABEL_31;
                }
                v13 = *(_DWORD *)(a1 + 8);
                v22 = v13;
                if ( v13 - 22 <= 9 )
                {
                  v24 = *(_QWORD *)(a1 + 24);
                  v9 = v6;
                  goto LABEL_68;
                }
                v9 = v6;
                v23 = v13 == 36;
                goto LABEL_63;
              }
LABEL_130:
              if ( !(_BYTE)v6 )
                goto LABEL_19;
              v13 = *(_DWORD *)(a1 + 8);
              v22 = v13;
              if ( v13 - 22 <= 9 )
                goto LABEL_122;
              v23 = v13 == 36;
LABEL_63:
              if ( !v23 )
                goto LABEL_19;
              v22 = v13;
              goto LABEL_122;
            }
LABEL_146:
            LOBYTE(v63) = v20;
            v42 = j__qalloc_or_throw();
            v62 = *(_QWORD *)(a1 + 32);
            v43 = j__qalloc_or_throw();
            v44 = *(_QWORD *)(a1 + 24);
            *(_QWORD *)v43 = -1;
            *(_DWORD *)(v43 + 8) = 0;
            *(_QWORD *)(v43 + 12) = -1;
            *(_QWORD *)(v43 + 48) = 0;
            *(_DWORD *)(v43 + 56) = 0;
            sub_257370(v43, v44);
            *(_DWORD *)(v42 + 8) = sub_241350(*(_DWORD *)(a1 + 8));
            v45 = _mm_loadh_ps((const double *)&v62);
            *(_QWORD *)v42 = -1;
            v9 = 1;
            *(__m128 *)(v42 + 24) = v45;
            *(_QWORD *)(v42 + 12) = -1;
            *(_QWORD *)(v42 + 40) = 0;
            *(_QWORD *)(v42 + 48) = 0;
            *(_DWORD *)(v42 + 56) = 0;
            *(_QWORD *)(a1 + 32) = v42;
            sub_240540(v42, *(_QWORD *)(a2 + 112), 0);
            sub_27E290(
              *(_QWORD *)(a1 + 32),
              a2,
              (unsigned __int8)v6,
              a1,
              v46,
              v47,
              v62,
              (__int64)v63,
              (_DWORD)v64,
              (_DWORD)v65,
              v66,
              v67,
              v68,
              v69,
              v70,
              DWORD2(v70),
              v71,
              v72,
              v74);
            *(_DWORD *)(a1 + 8) = 2;
            v48 = (char)v63;
            goto LABEL_147;
          }
LABEL_27:
          if ( (_BYTE)v6 )
            goto LABEL_19;
          goto LABEL_28;
        }
        if ( v13 <= 5 )
        {
          if ( !v20 )
            goto LABEL_59;
          goto LABEL_146;
        }
        if ( v20 )
        {
          v38 = *(_QWORD *)(a1 + 32);
          v63 = &v70;
          goto LABEL_129;
        }
        if ( !(_BYTE)v6 )
          goto LABEL_19;
      }
      else
      {
        if ( ((1LL << v13) & 0xAAC00000) != 0 )
        {
          if ( !v20 )
            v9 = sub_27DB30(a2, *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 24));
          goto LABEL_130;
        }
        if ( v13 != 36 )
        {
          if ( v13 != 35 )
          {
LABEL_58:
            if ( !v20 )
              goto LABEL_59;
LABEL_47:
            v9 |= sub_27E160(a1, a2, *(_QWORD *)(a1 + 24));
            goto LABEL_59;
          }
          if ( v20 )
          {
            *(_QWORD *)&v70 = 0;
            *(_QWORD *)&v70 = get_tinfo_property();
            if ( (get_tinfo_property() & 0xF) == 0xB )
              v38 = *(_QWORD *)(a1 + 24);
            else
              v38 = *(_QWORD *)(a1 + 32);
            v63 = &v70;
            clear_tinfo_t();
LABEL_129:
            *(_QWORD *)&v70 = 0;
            copy_tinfo_t();
            v39 = sub_242EC0(v38, a2, v63);
            clear_tinfo_t();
            if ( v39 )
              goto LABEL_60;
            goto LABEL_130;
          }
          if ( !(_BYTE)v6 )
            goto LABEL_19;
          v22 = 35;
LABEL_196:
          LOBYTE(v64) = v6;
          goto LABEL_197;
        }
        if ( v20 )
        {
          if ( (_BYTE)v6 )
          {
            v22 = 36;
            goto LABEL_122;
          }
          goto LABEL_104;
        }
        v58 = *(_QWORD *)(a1 + 32);
        *(_QWORD *)&v70 = 0;
        v63 = &v70;
        copy_tinfo_t();
        LODWORD(v58) = sub_242EC0(v58, a2, &v70);
        clear_tinfo_t();
        v9 |= v58;
        if ( !(_BYTE)v6 )
          goto LABEL_19;
        v13 = *(_DWORD *)(a1 + 8);
      }
      v22 = v13;
      if ( v13 - 22 <= 9 )
        goto LABEL_122;
      goto LABEL_196;
    }
    goto LABEL_18;
  }
  if ( !(_BYTE)v9 )
  {
    if ( (unsigned int)v5 > 0x45 )
      goto LABEL_18;
    v12 = 0;
    v10 = 0;
    goto LABEL_38;
  }
  v12 = *(_QWORD *)(a1 + 32) + 48LL;
  if ( (_DWORD)v5 != 1 )
  {
    if ( (get_tinfo_property() & 0xF) == 0xC )
    {
      v9 = 0;
      v10 = 0;
      v63 = &v70;
      goto LABEL_110;
    }
    v5 = *(int *)(a1 + 8);
    if ( (unsigned int)v5 <= 0x45 )
    {
      v9 = 0;
      v10 = 0;
      goto LABEL_38;
    }
LABEL_51:
    v9 = 0;
    goto LABEL_52;
  }
  if ( (unk_4CD45B & 2) == 0 || (*(_BYTE *)(a1 + 56) & 4) != 0 )
    goto LABEL_51;
  v9 = 0;
  v10 = 0;
LABEL_40:
  v18 = sub_27E090(a2, a1);
  if ( (_BYTE)v18 )
  {
    v19 = *(_DWORD *)(a1 + 8);
    v10 = *(_QWORD *)(a1 + 24) + 48LL;
    if ( v12 )
    {
      v12 = *(_QWORD *)(a1 + 32) + 48LL;
      if ( v19 != 51 )
        goto LABEL_43;
      goto LABEL_171;
    }
    if ( v19 == 51 )
    {
LABEL_171:
      v9 = v18;
      goto LABEL_85;
    }
    LOBYTE(v62) = v18;
    v9 = (unsigned __int8)v18;
    if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u )
      goto LABEL_10;
LABEL_18:
    if ( !(_BYTE)v6 )
      goto LABEL_19;
    goto LABEL_65;
  }
LABEL_84:
  if ( *(_DWORD *)(a1 + 8) != 51 )
    goto LABEL_97;
LABEL_85:
  tinfo_property = get_tinfo_property();
  v27 = *(_DWORD *)(a1 + 40);
  v11 = (tinfo_property & 0xF) == 9;
  v28 = *(_QWORD *)(a1 + 24);
  LOBYTE(v64) = v11;
  LODWORD(v63) = v11;
  if ( !(unsigned __int8)sub_23D410((int)v28 + 48, v27, v11, v29, v30, v31) )
  {
    if ( v62 && *(int *)(v62 + 8) <= 69 && (get_tinfo_property() & 0x2F) == 0xD )
    {
      tinfo_size = get_tinfo_size();
      v34 = *(int *)(a1 + 40);
      if ( v34 == tinfo_size )
      {
        v50 = *(_QWORD *)(a2 + 112);
        v63 = &v70;
        sub_328210(&v70, v50, v62 + 48);
        v51 = sub_242EC0(*(_QWORD *)(a1 + 24), a2, &v70);
        if ( (_BYTE)v51 )
        {
          v10 = *(_QWORD *)(a1 + 24) + 48LL;
          v9 = v51;
        }
        clear_tinfo_t();
        goto LABEL_91;
      }
    }
    else
    {
      LODWORD(v34) = *(_DWORD *)(a1 + 40);
    }
    v35 = sub_23D520(*(__int64 **)(a1 + 24), *(_QWORD *)(a2 + 112), v34, (int)v63, v32, v33);
    if ( (_BYTE)v35 )
    {
      v10 = *(_QWORD *)(a1 + 24) + 48LL;
      v9 = v35;
    }
  }
LABEL_91:
  v68 = 0;
  v68 = get_tinfo_property();
  if ( !(_BYTE)v68 )
  {
    if ( !under_debugger )
      sub_37EEE0(50595);
    goto LABEL_239;
  }
  if ( (_BYTE)v64 != ((get_tinfo_property() & 0xF) == 9) )
  {
    sub_328210(&v69, *(_QWORD *)(a2 + 112), a1 + 48);
    v63 = &v70;
    sub_26A2B0(&v70);
    copy_tinfo_t();
    clear_tinfo_t();
    if ( !(unsigned __int8)compare_tinfo() && !(unsigned __int8)sub_242EC0(*(_QWORD *)(a1 + 24), a2, &v69) )
    {
      if ( !under_debugger )
        sub_37EEE0(50596);
      goto LABEL_239;
    }
    v9 = 1;
    clear_tinfo_t();
  }
  clear_tinfo_t();
LABEL_97:
  if ( !v10 )
  {
LABEL_98:
    if ( !v12 )
    {
      if ( !(_BYTE)v6 )
        goto LABEL_19;
LABEL_65:
      if ( (unsigned int)(*(_DWORD *)(a1 + 8) - 22) > 9 )
        goto LABEL_19;
      goto LABEL_66;
    }
    goto LABEL_52;
  }
LABEL_8:
  if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 2u )
    goto LABEL_98;
  if ( v12 )
    goto LABEL_44;
LABEL_10:
  v13 = *(_DWORD *)(a1 + 8);
  if ( v13 > 0x24 )
  {
    switch ( v13 )
    {
      case '0':
        v20 = 0;
        goto LABEL_151;
      case '1':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
      case '@':
      case 'A':
      case 'C':
        goto LABEL_27;
      case '2':
      case '=':
      case '>':
      case '?':
      case 'B':
        goto LABEL_144;
      case ':':
        goto LABEL_104;
      case ';':
        goto LABEL_161;
      case '<':
        goto LABEL_103;
      default:
        goto LABEL_15;
    }
  }
  if ( v13 > 0x15 )
  {
    if ( ((1LL << v13) & 0xAAC00000) != 0 )
    {
      v9 = sub_27DB30(a2, *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
      if ( !(_BYTE)v6 )
        goto LABEL_19;
LABEL_149:
      v13 = *(_DWORD *)(a1 + 8);
LABEL_121:
      v22 = v13;
      if ( v13 - 22 <= 9 )
      {
LABEL_122:
        v24 = *(_QWORD *)(a1 + 24);
        goto LABEL_68;
      }
      LOBYTE(v64) = 0;
      goto LABEL_197;
    }
    if ( v13 != 36 )
    {
      if ( v13 != 35 )
      {
LABEL_15:
        v9 |= sub_27E160(a1, a2, *(_QWORD *)(a1 + 24));
        goto LABEL_148;
      }
      if ( !(_BYTE)v6 )
        goto LABEL_19;
      LOBYTE(v64) = 0;
      v22 = 35;
LABEL_197:
      v23 = (unsigned __int8)v64 & (v22 == 36);
      goto LABEL_63;
    }
    if ( !(_BYTE)v6 )
      goto LABEL_104;
LABEL_28:
    if ( (*(_BYTE *)(a1 + 56) & 4) != 0 )
      goto LABEL_21;
    v14 = v13;
LABEL_30:
    if ( (*((_BYTE *)&off_4CD440 + 16 * (int)v14 + 11) & 0x10) == 0 )
      goto LABEL_21;
    goto LABEL_31;
  }
  if ( v13 != 2 )
  {
    if ( v13 <= 2 )
    {
      if ( v13 != 1 )
        goto LABEL_15;
    }
    else
    {
      if ( v13 <= 7 )
      {
        v20 = 0;
        if ( v13 > 5 )
        {
          if ( !(_BYTE)v6 )
            goto LABEL_19;
          goto LABEL_121;
        }
        goto LABEL_146;
      }
      if ( v13 - 16 > 2 )
      {
LABEL_144:
        v20 = 0;
        goto LABEL_145;
      }
    }
    goto LABEL_27;
  }
  LOBYTE(v64) = 0;
  v20 = 1;
LABEL_134:
  LOBYTE(v62) = v20;
  v40 = get_tinfo_property();
  v41 = v62;
  if ( (v40 & 0xF) == 0xB )
  {
    v52 = get_tinfo_property();
    v41 = v62;
    if ( (v52 & 0x2F) == 0xD )
    {
      v53 = get_tinfo_size();
      v54 = get_tinfo_size();
      v41 = v62;
      if ( v53 == v54 || !(_BYTE)v6 )
      {
        v55 = *(_QWORD *)(a1 + 24);
        if ( *(_DWORD *)(v55 + 8) == 51 && *(_DWORD *)(*(_QWORD *)(v55 + 24) + 8LL) == 48 )
        {
          v56 = *(_QWORD *)(a1 + 32);
          v57 = *(_QWORD *)(a2 + 112);
          v63 = &v70;
          sub_328210(&v70, v57, v56 + 48);
          copy_tinfo_t();
          clear_tinfo_t();
          copy_tinfo_t();
          v41 = v62;
        }
        goto LABEL_135;
      }
      if ( !under_debugger )
        sub_37EEE0(50969);
LABEL_239:
      BUG();
    }
  }
LABEL_135:
  if ( !(_BYTE)v6 )
    goto LABEL_19;
  v22 = *(_DWORD *)(a1 + 8);
  v13 = v22;
  if ( v22 - 22 > 9 )
    goto LABEL_197;
  if ( (_BYTE)v64 || v41 )
    goto LABEL_122;
LABEL_66:
  if ( (get_tinfo_property() & 0x2F) != 0xD && (get_tinfo_property() & 0x2F) != 0xD )
  {
LABEL_19:
    if ( (*(_BYTE *)(a1 + 56) & 4) != 0 )
      goto LABEL_21;
    v14 = *(_DWORD *)(a1 + 8);
    if ( v14 > 0x45 )
      goto LABEL_21;
    goto LABEL_30;
  }
  v22 = *(_DWORD *)(a1 + 8);
  v24 = *(_QWORD *)(a1 + 24);
LABEL_68:
  if ( sub_2419D0(a2, v24, *(_QWORD *)(a1 + 32), v22) )
    goto LABEL_19;
  v25 = sub_245550(a1, a2);
  if ( !(_BYTE)v25 )
    goto LABEL_19;
  if ( (*(_BYTE *)(a1 + 56) & 4) != 0 )
    goto LABEL_32;
  v14 = *(_DWORD *)(a1 + 8);
  if ( v14 > 0x45 || (*((_BYTE *)&off_4CD440 + 16 * (int)v14 + 11) & 0x10) == 0 )
    goto LABEL_32;
  v9 = v25;
LABEL_31:
  v16 = sub_251380(v14);
  if ( (unsigned __int8)sub_27F590(a1, a2, v16, (unsigned __int8)v6) )
    goto LABEL_32;
LABEL_21:
  if ( (_BYTE)v9 )
  {
LABEL_32:
    v9 = 1;
    sub_240540(a1, *(_QWORD *)(a2 + 112), 0);
  }
  return v9;
}

