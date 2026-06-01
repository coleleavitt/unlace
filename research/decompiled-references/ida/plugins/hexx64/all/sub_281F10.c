__int64 __fastcall sub_281F10(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __m128 a5)
{
  int v5; // ebx
  unsigned __int64 v6; // rax
  unsigned int v7; // r12d
  unsigned int v10; // ebx
  __int64 v11; // r15
  char v12; // zf
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // edi
  unsigned int v18; // eax
  __int64 v19; // rdi
  unsigned int v20; // edx
  int v21; // ecx
  char v22; // r9
  __int64 v23; // rax
  unsigned int v24; // esi
  char v25; // al
  __int64 v26; // rax
  unsigned int v27; // eax
  char tinfo_property; // al
  unsigned int v29; // esi
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned int v32; // eax
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // r14
  char v36; // r14
  char v37; // al
  char v38; // r9
  __int64 v39; // r15
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rsi
  char v44; // r9
  __int64 tinfo_size; // rax
  __int64 v46; // rsi
  unsigned int v47; // eax
  char v48; // al
  int v49; // r15d
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rsi
  __int64 v54; // r14
  char v55; // r9
  __int64 v56; // rdx
  int v57; // eax
  __int64 v58; // [rsp+0h] [rbp-A8h] BYREF
  __int128 *v59; // [rsp+8h] [rbp-A0h]
  char *v60; // [rsp+10h] [rbp-98h]
  __int64 *v61; // [rsp+18h] [rbp-90h]
  __int64 v62; // [rsp+28h] [rbp-80h] BYREF
  __int64 v63; // [rsp+30h] [rbp-78h]
  __int64 v64; // [rsp+38h] [rbp-70h] BYREF
  __int128 v65; // [rsp+40h] [rbp-68h] BYREF
  __int64 v66; // [rsp+50h] [rbp-58h] BYREF
  int v67; // [rsp+58h] [rbp-50h]
  __int16 v68; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int64 v69; // [rsp+68h] [rbp-40h]

  v58 = a4;
  v69 = __readfsqword(0x28u);
  v6 = *(int *)(a1 + 8);
  if ( (int)v6 > 69 )
  {
    if ( !under_debugger )
      sub_383060(0xCA4Bu, *(double *)a5.m128_u64);
    goto LABEL_239;
  }
  v7 = a3;
  LOBYTE(v5) = (_DWORD)v6 == 58;
  LOBYTE(a3) = (unsigned int)(v6 - 1) <= 0x2C;
  v10 = a3 | v5;
  if ( (unsigned int)(v6 - 1) <= 0x3B || (_DWORD)v6 == 67 )
  {
    v11 = *(_QWORD *)(a1 + 24) + 48LL;
    if ( !(_BYTE)v10 )
    {
      if ( (_DWORD)v6 == 57 )
      {
        if ( (unsigned __int8)compare_tinfo() )
        {
          v6 = *(int *)(a1 + 8);
          if ( (unsigned int)v6 > 0x45 )
            goto LABEL_7;
LABEL_25:
          v13 = 0;
          goto LABEL_38;
        }
        v62 = 0;
        copy_tinfo_t();
        if ( (get_tinfo_property() & 0xF) != 0xA )
        {
          a5.m128_u64[0] = 0;
          v63 = 0;
          v60 = (char *)&v65 + 8;
          v64 = 0;
          v65 = 0;
          copy_tinfo_t();
          v66 = 0;
          v61 = &v66;
          copy_tinfo_t();
          v67 = 0;
          v68 = 0;
          clear_tinfo_t();
          clear_tinfo_t();
          v59 = &v65;
          copy_tinfo_t();
          create_tinfo();
          clear_tinfo_t();
          clear_tinfo_t();
          clear_tinfo_t();
        }
        v10 = sub_246B40(*(_QWORD *)(a1 + 24), a2, &v62, *(double *)a5.m128_u64);
        v13 = 0;
        v11 = *(_QWORD *)(a1 + 24) + 48LL;
        clear_tinfo_t();
        v6 = *(int *)(a1 + 8);
        if ( (unsigned int)v6 > 0x45 )
          goto LABEL_8;
      }
      else
      {
        v12 = (get_tinfo_property() & 0xF) == 12;
        v6 = *(int *)(a1 + 8);
        if ( !v12 )
        {
          if ( (unsigned int)v6 > 0x45 )
          {
LABEL_7:
            v13 = 0;
            goto LABEL_8;
          }
          goto LABEL_25;
        }
        if ( (unsigned int)v6 <= 0x3C )
        {
          v34 = 0x19EE800000000000LL;
          v13 = 0;
          LOBYTE(v60) = 0;
          if ( !_bittest64(&v34, v6) )
            goto LABEL_38;
LABEL_36:
          v19 = *(_QWORD *)(a1 + 24);
          *(_QWORD *)&v65 = 39;
          v59 = &v65;
          v10 = sub_246B40(v19, a2, &v65, *(double *)a5.m128_u64);
          clear_tinfo_t();
          v11 = *(_QWORD *)(a1 + 24) + 48LL;
          if ( !(_BYTE)v60 )
          {
            v6 = *(int *)(a1 + 8);
            if ( (unsigned int)v6 > 0x45 )
              goto LABEL_8;
            goto LABEL_38;
          }
          goto LABEL_110;
        }
        v13 = 0;
        if ( (unsigned int)v6 > 0x45 )
          goto LABEL_8;
      }
LABEL_38:
      if ( (*((_BYTE *)&off_4E0320 + 16 * v6 + 11) & 2) == 0 )
        goto LABEL_84;
LABEL_39:
      if ( (*(_BYTE *)(a1 + 56) & 4) != 0 )
        goto LABEL_84;
      goto LABEL_40;
    }
    v13 = *(_QWORD *)(a1 + 32) + 48LL;
    if ( (_DWORD)v6 == 1 )
    {
      v10 = 0;
      if ( (unk_4E033B & 2) == 0 )
        goto LABEL_8;
      goto LABEL_39;
    }
    if ( (get_tinfo_property() & 0xF) == 0xC )
    {
      LOBYTE(v60) = (get_tinfo_property() & 0xF) == 12;
      goto LABEL_36;
    }
    if ( (get_tinfo_property() & 0xF) != 0xC )
    {
      v6 = *(int *)(a1 + 8);
      v10 = 0;
      if ( (unsigned int)v6 > 0x45 )
        goto LABEL_8;
      goto LABEL_38;
    }
    v10 = 0;
    v59 = &v65;
LABEL_110:
    v33 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)&v65 = 39;
    v10 |= sub_246B40(v33, a2, v59, *(double *)a5.m128_u64);
    clear_tinfo_t();
    v13 = *(_QWORD *)(a1 + 32) + 48LL;
    v6 = *(int *)(a1 + 8);
    if ( (unsigned int)v6 <= 0x45 )
      goto LABEL_38;
    if ( v11 )
    {
      LOBYTE(v20) = v10;
LABEL_43:
      LOBYTE(v58) = v20;
      v10 = (unsigned __int8)v20;
      if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u )
      {
LABEL_44:
        if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 2u )
          goto LABEL_10;
        v15 = *(unsigned int *)(a1 + 8);
        v22 = 1;
        if ( (unsigned int)v15 > 0x24 )
        {
          v23 = (unsigned int)(v15 - 48);
          if ( (unsigned int)v23 > 0x13 )
            goto LABEL_47;
          goto LABEL_107;
        }
        goto LABEL_54;
      }
    }
LABEL_52:
    if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u )
    {
      v15 = *(unsigned int *)(a1 + 8);
      v22 = 0;
      if ( (unsigned int)v15 > 0x24 )
      {
        v23 = (unsigned int)(v15 - 48);
LABEL_107:
        switch ( v23 )
        {
          case 0LL:
            if ( !v22 )
              goto LABEL_27;
LABEL_151:
            LOBYTE(v58) = v22;
            if ( (get_tinfo_property() & 0xF) != 9 )
            {
              if ( !(_BYTE)v7 )
                goto LABEL_19;
              LODWORD(v15) = *(_DWORD *)(a1 + 8);
              v24 = v15;
              if ( (unsigned int)(v15 - 22) > 9 )
              {
                v25 = v58 & ((_DWORD)v15 == 36);
                goto LABEL_63;
              }
              goto LABEL_122;
            }
            v26 = sub_27F1D0(a2, *(_QWORD *)(a1 + 24), 0, *(double *)a5.m128_u64);
            v55 = v58;
            *(_QWORD *)(a1 + 24) = v26;
            if ( !(_BYTE)v7 )
              goto LABEL_172;
            LODWORD(v15) = *(_DWORD *)(a1 + 8);
            v24 = v15;
            if ( (unsigned int)(v15 - 22) > 9 )
            {
              v10 = v7;
              v25 = v55 & ((_DWORD)v15 == 36);
              goto LABEL_63;
            }
            v10 = v7;
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
            if ( v22 )
            {
              if ( (unsigned __int8)sub_246B40(*(_QWORD *)(a1 + 32), a2, (_QWORD *)(a2 + 288), *(double *)a5.m128_u64) )
                goto LABEL_60;
              if ( !under_debugger )
                sub_383060(0xC8D6u, *(double *)a5.m128_u64);
            }
            else if ( !under_debugger )
            {
              sub_383060(0xC5A6u, *(double *)a5.m128_u64);
            }
            goto LABEL_239;
          case 11LL:
LABEL_161:
            if ( !under_debugger )
              sub_383060(0xC5A7u, *(double *)a5.m128_u64);
            goto LABEL_239;
          case 12LL:
            if ( !v22 )
            {
              if ( !under_debugger )
                sub_383060(0xC5A5u, *(double *)a5.m128_u64);
              goto LABEL_239;
            }
LABEL_103:
            if ( (_BYTE)v7 )
              goto LABEL_19;
            break;
          default:
            goto LABEL_59;
        }
LABEL_104:
        v16 = v15;
        if ( (*(_BYTE *)(a1 + 56) & 4) != 0 )
          goto LABEL_21;
        goto LABEL_30;
      }
LABEL_54:
      if ( (unsigned int)v15 <= 0x15 )
      {
        if ( (_DWORD)v15 == 2 )
        {
          LOBYTE(v60) = 1;
          goto LABEL_134;
        }
        if ( (unsigned int)v15 <= 2 )
        {
          if ( (_DWORD)v15 == 1 )
            goto LABEL_27;
          goto LABEL_58;
        }
        if ( (unsigned int)v15 > 7 )
        {
          if ( (unsigned int)(v15 - 16) > 2 )
          {
LABEL_159:
            if ( !v22 )
              goto LABEL_59;
LABEL_145:
            v15 = (unsigned int)(v15 - 2);
            if ( (unsigned int)v15 > 0xD )
            {
              v56 = *(_QWORD *)(a1 + 24);
              LOBYTE(v58) = v22;
              v57 = sub_281DE0(a1, a2, v56, *(double *)a5.m128_u64);
              v44 = v58;
              v10 |= v57;
LABEL_147:
              if ( !v44 )
              {
LABEL_148:
                if ( !(_BYTE)v7 )
                  goto LABEL_19;
                goto LABEL_149;
              }
LABEL_59:
              if ( (unsigned __int8)sub_281DE0(a1, a2, *(_QWORD *)(a1 + 32), *(double *)a5.m128_u64) )
              {
LABEL_60:
                if ( !(_BYTE)v7 )
                {
LABEL_172:
                  if ( (*(_BYTE *)(a1 + 56) & 4) != 0 )
                    goto LABEL_32;
                  v16 = *(_DWORD *)(a1 + 8);
                  if ( v16 > 0x45 || (*((_BYTE *)&off_4E0320 + 16 * (int)v16 + 11) & 0x10) == 0 )
                    goto LABEL_32;
                  v10 = 1;
                  goto LABEL_31;
                }
                LODWORD(v15) = *(_DWORD *)(a1 + 8);
                v24 = v15;
                if ( (unsigned int)(v15 - 22) <= 9 )
                {
                  v26 = *(_QWORD *)(a1 + 24);
                  v10 = v7;
                  goto LABEL_68;
                }
                v10 = v7;
                v25 = (_DWORD)v15 == 36;
                goto LABEL_63;
              }
LABEL_130:
              if ( !(_BYTE)v7 )
                goto LABEL_19;
              LODWORD(v15) = *(_DWORD *)(a1 + 8);
              v24 = v15;
              if ( (unsigned int)(v15 - 22) <= 9 )
                goto LABEL_122;
              v25 = (_DWORD)v15 == 36;
LABEL_63:
              if ( !v25 )
                goto LABEL_19;
              v24 = v15;
              goto LABEL_122;
            }
LABEL_146:
            LOBYTE(v59) = v22;
            v39 = j__qalloc_or_throw(64, 2, v14, v15);
            v58 = *(_QWORD *)(a1 + 32);
            v42 = j__qalloc_or_throw(64, 2, v40, v41);
            v43 = *(_QWORD *)(a1 + 24);
            *(_QWORD *)v42 = -1;
            *(_DWORD *)(v42 + 8) = 0;
            *(_QWORD *)(v42 + 12) = -1;
            *(_QWORD *)(v42 + 48) = 0;
            *(_DWORD *)(v42 + 56) = 0;
            sub_25AFF0(v42, v43, *(double *)a5.m128_u64);
            *(_DWORD *)(v39 + 8) = sub_244FD0(*(_DWORD *)(a1 + 8));
            a5 = _mm_loadh_ps((const double *)&v58);
            *(_QWORD *)v39 = -1;
            v10 = 1;
            *(__m128 *)(v39 + 24) = a5;
            *(_QWORD *)(v39 + 12) = -1;
            *(_QWORD *)(v39 + 40) = 0;
            *(_QWORD *)(v39 + 48) = 0;
            *(_DWORD *)(v39 + 56) = 0;
            *(_QWORD *)(a1 + 32) = v39;
            sub_2441C0(v39, *(_QWORD *)(a2 + 112), 0, *(double *)a5.m128_u64);
            sub_281F10(*(_QWORD *)(a1 + 32), a2, (unsigned __int8)v7, a1);
            *(_DWORD *)(a1 + 8) = 2;
            v44 = (char)v59;
            goto LABEL_147;
          }
LABEL_27:
          if ( (_BYTE)v7 )
            goto LABEL_19;
          goto LABEL_28;
        }
        if ( (unsigned int)v15 <= 5 )
        {
          if ( !v22 )
            goto LABEL_59;
          goto LABEL_146;
        }
        if ( v22 )
        {
          v35 = *(_QWORD *)(a1 + 32);
          v59 = &v65;
          goto LABEL_129;
        }
        if ( !(_BYTE)v7 )
          goto LABEL_19;
      }
      else
      {
        if ( ((1LL << v15) & 0xAAC00000) != 0 )
        {
          if ( !v22 )
            v10 = sub_2817B0(a2, *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 24), *(double *)a5.m128_u64);
          goto LABEL_130;
        }
        if ( (_DWORD)v15 != 36 )
        {
          if ( (_DWORD)v15 != 35 )
          {
LABEL_58:
            if ( !v22 )
              goto LABEL_59;
LABEL_47:
            v10 |= sub_281DE0(a1, a2, *(_QWORD *)(a1 + 24), *(double *)a5.m128_u64);
            goto LABEL_59;
          }
          if ( v22 )
          {
            *(_QWORD *)&v65 = 0;
            *(_QWORD *)&v65 = get_tinfo_property();
            if ( (get_tinfo_property() & 0xF) == 0xB )
              v35 = *(_QWORD *)(a1 + 24);
            else
              v35 = *(_QWORD *)(a1 + 32);
            v59 = &v65;
            clear_tinfo_t();
LABEL_129:
            *(_QWORD *)&v65 = 0;
            copy_tinfo_t();
            v36 = sub_246B40(v35, a2, v59, *(double *)a5.m128_u64);
            clear_tinfo_t();
            if ( v36 )
              goto LABEL_60;
            goto LABEL_130;
          }
          if ( !(_BYTE)v7 )
            goto LABEL_19;
          v24 = 35;
LABEL_196:
          LOBYTE(v60) = v7;
          goto LABEL_197;
        }
        if ( v22 )
        {
          if ( (_BYTE)v7 )
          {
            v24 = 36;
            goto LABEL_122;
          }
          goto LABEL_104;
        }
        v54 = *(_QWORD *)(a1 + 32);
        *(_QWORD *)&v65 = 0;
        v59 = &v65;
        copy_tinfo_t();
        LODWORD(v54) = sub_246B40(v54, a2, &v65, *(double *)a5.m128_u64);
        clear_tinfo_t();
        v10 |= v54;
        if ( !(_BYTE)v7 )
          goto LABEL_19;
        LODWORD(v15) = *(_DWORD *)(a1 + 8);
      }
      v24 = v15;
      if ( (unsigned int)(v15 - 22) <= 9 )
        goto LABEL_122;
      goto LABEL_196;
    }
    goto LABEL_18;
  }
  if ( !(_BYTE)v10 )
  {
    if ( (unsigned int)v6 > 0x45 )
      goto LABEL_18;
    v13 = 0;
    v11 = 0;
    goto LABEL_38;
  }
  v13 = *(_QWORD *)(a1 + 32) + 48LL;
  if ( (_DWORD)v6 != 1 )
  {
    if ( (get_tinfo_property() & 0xF) == 0xC )
    {
      v10 = 0;
      v11 = 0;
      v59 = &v65;
      goto LABEL_110;
    }
    v6 = *(int *)(a1 + 8);
    if ( (unsigned int)v6 <= 0x45 )
    {
      v10 = 0;
      v11 = 0;
      goto LABEL_38;
    }
LABEL_51:
    v10 = 0;
    goto LABEL_52;
  }
  if ( (unk_4E033B & 2) == 0 || (*(_BYTE *)(a1 + 56) & 4) != 0 )
    goto LABEL_51;
  v10 = 0;
  v11 = 0;
LABEL_40:
  v20 = sub_281D10(a2, a1, *(double *)a5.m128_u64);
  if ( (_BYTE)v20 )
  {
    v21 = *(_DWORD *)(a1 + 8);
    v11 = *(_QWORD *)(a1 + 24) + 48LL;
    if ( v13 )
    {
      v13 = *(_QWORD *)(a1 + 32) + 48LL;
      if ( v21 != 51 )
        goto LABEL_43;
      goto LABEL_171;
    }
    if ( v21 == 51 )
    {
LABEL_171:
      v10 = v20;
      goto LABEL_85;
    }
    LOBYTE(v58) = v20;
    v10 = (unsigned __int8)v20;
    if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u )
      goto LABEL_10;
LABEL_18:
    if ( !(_BYTE)v7 )
      goto LABEL_19;
    goto LABEL_65;
  }
LABEL_84:
  if ( *(_DWORD *)(a1 + 8) != 51 )
    goto LABEL_97;
LABEL_85:
  tinfo_property = get_tinfo_property();
  v29 = *(_DWORD *)(a1 + 40);
  v12 = (tinfo_property & 0xF) == 9;
  v30 = *(_QWORD *)(a1 + 24);
  LOBYTE(v60) = v12;
  LODWORD(v59) = v12;
  if ( !(unsigned __int8)sub_241090((int)v30 + 48, v29, v12) )
  {
    if ( v58 && *(int *)(v58 + 8) <= 69 && (get_tinfo_property() & 0x2F) == 0xD )
    {
      tinfo_size = get_tinfo_size();
      v31 = *(int *)(a1 + 40);
      if ( v31 == tinfo_size )
      {
        v46 = *(_QWORD *)(a2 + 112);
        v59 = &v65;
        sub_32C540(&v65, v46, (_QWORD *)(v58 + 48));
        v47 = sub_246B40(*(_QWORD *)(a1 + 24), a2, &v65, *(double *)a5.m128_u64);
        if ( (_BYTE)v47 )
        {
          v11 = *(_QWORD *)(a1 + 24) + 48LL;
          v10 = v47;
        }
        clear_tinfo_t();
        goto LABEL_91;
      }
    }
    else
    {
      LODWORD(v31) = *(_DWORD *)(a1 + 40);
    }
    v32 = sub_2411A0(*(__int64 **)(a1 + 24), *(_QWORD *)(a2 + 112), v31, (char)v59);
    if ( (_BYTE)v32 )
    {
      v11 = *(_QWORD *)(a1 + 24) + 48LL;
      v10 = v32;
    }
  }
LABEL_91:
  v63 = 0;
  v63 = get_tinfo_property();
  if ( !(_BYTE)v63 )
  {
    if ( !under_debugger )
      sub_383060(0xC5A3u, *(double *)a5.m128_u64);
    goto LABEL_239;
  }
  if ( (_BYTE)v60 != ((get_tinfo_property() & 0xF) == 9) )
  {
    sub_32C540(&v64, *(_QWORD *)(a2 + 112), (_QWORD *)(a1 + 48));
    v59 = &v65;
    sub_26DF30(&v65);
    copy_tinfo_t();
    clear_tinfo_t();
    if ( !(unsigned __int8)compare_tinfo()
      && !(unsigned __int8)sub_246B40(*(_QWORD *)(a1 + 24), a2, &v64, *(double *)a5.m128_u64) )
    {
      if ( !under_debugger )
        sub_383060(0xC5A4u, *(double *)a5.m128_u64);
      goto LABEL_239;
    }
    v10 = 1;
    clear_tinfo_t();
  }
  clear_tinfo_t();
LABEL_97:
  if ( !v11 )
  {
LABEL_98:
    if ( !v13 )
    {
      if ( !(_BYTE)v7 )
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
  if ( v13 )
    goto LABEL_44;
LABEL_10:
  v15 = *(unsigned int *)(a1 + 8);
  if ( (unsigned int)v15 > 0x24 )
  {
    switch ( (int)v15 )
    {
      case '0':
        v22 = 0;
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
  if ( (unsigned int)v15 > 0x15 )
  {
    if ( ((1LL << v15) & 0xAAC00000) != 0 )
    {
      v10 = sub_2817B0(a2, *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32), *(double *)a5.m128_u64);
      if ( !(_BYTE)v7 )
        goto LABEL_19;
LABEL_149:
      LODWORD(v15) = *(_DWORD *)(a1 + 8);
LABEL_121:
      v24 = v15;
      if ( (unsigned int)(v15 - 22) <= 9 )
      {
LABEL_122:
        v26 = *(_QWORD *)(a1 + 24);
        goto LABEL_68;
      }
      LOBYTE(v60) = 0;
      goto LABEL_197;
    }
    if ( (_DWORD)v15 != 36 )
    {
      if ( (_DWORD)v15 != 35 )
      {
LABEL_15:
        v10 |= sub_281DE0(a1, a2, *(_QWORD *)(a1 + 24), *(double *)a5.m128_u64);
        goto LABEL_148;
      }
      if ( !(_BYTE)v7 )
        goto LABEL_19;
      LOBYTE(v60) = 0;
      v24 = 35;
LABEL_197:
      v25 = (unsigned __int8)v60 & (v24 == 36);
      goto LABEL_63;
    }
    if ( !(_BYTE)v7 )
      goto LABEL_104;
LABEL_28:
    if ( (*(_BYTE *)(a1 + 56) & 4) != 0 )
      goto LABEL_21;
    v16 = v15;
LABEL_30:
    if ( (*((_BYTE *)&off_4E0320 + 16 * (int)v16 + 11) & 0x10) == 0 )
      goto LABEL_21;
    goto LABEL_31;
  }
  if ( (_DWORD)v15 != 2 )
  {
    if ( (unsigned int)v15 <= 2 )
    {
      if ( (_DWORD)v15 != 1 )
        goto LABEL_15;
    }
    else
    {
      if ( (unsigned int)v15 <= 7 )
      {
        v22 = 0;
        if ( (unsigned int)v15 > 5 )
        {
          if ( !(_BYTE)v7 )
            goto LABEL_19;
          goto LABEL_121;
        }
        goto LABEL_146;
      }
      if ( (unsigned int)(v15 - 16) > 2 )
      {
LABEL_144:
        v22 = 0;
        goto LABEL_145;
      }
    }
    goto LABEL_27;
  }
  LOBYTE(v60) = 0;
  v22 = 1;
LABEL_134:
  LOBYTE(v58) = v22;
  v37 = get_tinfo_property();
  v38 = v58;
  if ( (v37 & 0xF) == 0xB )
  {
    v48 = get_tinfo_property();
    v38 = v58;
    if ( (v48 & 0x2F) == 0xD )
    {
      v49 = get_tinfo_size();
      v50 = get_tinfo_size();
      v38 = v58;
      if ( v49 == v50 || !(_BYTE)v7 )
      {
        v51 = *(_QWORD *)(a1 + 24);
        if ( *(_DWORD *)(v51 + 8) == 51 && *(_DWORD *)(*(_QWORD *)(v51 + 24) + 8LL) == 48 )
        {
          v52 = *(_QWORD *)(a1 + 32);
          v53 = *(_QWORD *)(a2 + 112);
          v59 = &v65;
          sub_32C540(&v65, v53, (_QWORD *)(v52 + 48));
          copy_tinfo_t();
          clear_tinfo_t();
          copy_tinfo_t();
          v38 = v58;
        }
        goto LABEL_135;
      }
      if ( !under_debugger )
        sub_383060(0xC719u, *(double *)a5.m128_u64);
LABEL_239:
      BUG();
    }
  }
LABEL_135:
  if ( !(_BYTE)v7 )
    goto LABEL_19;
  v24 = *(_DWORD *)(a1 + 8);
  LODWORD(v15) = v24;
  if ( v24 - 22 > 9 )
    goto LABEL_197;
  if ( (_BYTE)v60 || v38 )
    goto LABEL_122;
LABEL_66:
  if ( (get_tinfo_property() & 0x2F) != 0xD && (get_tinfo_property() & 0x2F) != 0xD )
  {
LABEL_19:
    if ( (*(_BYTE *)(a1 + 56) & 4) != 0 )
      goto LABEL_21;
    v16 = *(_DWORD *)(a1 + 8);
    if ( v16 > 0x45 )
      goto LABEL_21;
    goto LABEL_30;
  }
  v24 = *(_DWORD *)(a1 + 8);
  v26 = *(_QWORD *)(a1 + 24);
LABEL_68:
  if ( sub_245650(a2, v26, *(_QWORD *)(a1 + 32), v24) )
    goto LABEL_19;
  v27 = sub_2491D0(a1, a2, *(double *)a5.m128_u64);
  if ( !(_BYTE)v27 )
    goto LABEL_19;
  if ( (*(_BYTE *)(a1 + 56) & 4) != 0 )
    goto LABEL_32;
  v16 = *(_DWORD *)(a1 + 8);
  if ( v16 > 0x45 || (*((_BYTE *)&off_4E0320 + 16 * (int)v16 + 11) & 0x10) == 0 )
    goto LABEL_32;
  v10 = v27;
LABEL_31:
  v18 = sub_255000(v16);
  if ( (unsigned __int8)sub_283210(a1, a2, v18, (unsigned __int8)v7) )
    goto LABEL_32;
LABEL_21:
  if ( (_BYTE)v10 )
  {
LABEL_32:
    v10 = 1;
    sub_2441C0(a1, *(_QWORD *)(a2 + 112), 0, *(double *)a5.m128_u64);
  }
  return v10;
}

