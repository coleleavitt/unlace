unsigned __int64 __fastcall sub_BF60(__int64 a1)
{
  __int64 v2; // r14
  __int64 module_data; // rax
  __int64 v4; // rsi
  unsigned __int8 v5; // r12
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // rax
  unsigned int v12; // r12d
  __int64 v13; // r15
  size_t v14; // r12
  __int64 v15; // rdi
  int v16; // eax
  unsigned __int16 v17; // r12
  unsigned __int8 v18; // al
  char v19; // al
  __int64 v20; // r12
  __int64 v21; // rax
  unsigned int v22; // r12d
  int v23; // r12d
  __int64 v24; // r15
  unsigned int v25; // eax
  __int64 v26; // rcx
  char v27; // al
  __int64 v28; // rax
  void *v29; // rcx
  __int64 v30; // r12
  int v31; // r12d
  __int64 v32; // r15
  __int64 v33; // r12
  __int64 v34; // r15
  int v35; // r14d
  char v36; // al
  char v37; // al
  __int64 v38; // rcx
  unsigned __int16 *v39; // r13
  unsigned __int16 *v40; // r14
  char v41; // al
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rax
  char v46; // dl
  char v47; // al
  unsigned __int8 byte; // al
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // r15
  __int64 v52; // r15
  __int64 v53; // rax
  unsigned __int16 v54; // ax
  __int64 v55; // r12
  __int64 v56; // r12
  __int64 v57; // r12
  __int64 v58; // [rsp+0h] [rbp-4C0h]
  __int64 v59; // [rsp+0h] [rbp-4C0h]
  unsigned __int16 v60; // [rsp+8h] [rbp-4B8h]
  char v61; // [rsp+17h] [rbp-4A9h]
  unsigned __int16 v62; // [rsp+1Ch] [rbp-4A4h] BYREF
  unsigned __int16 v63; // [rsp+1Eh] [rbp-4A2h]
  unsigned int v64; // [rsp+20h] [rbp-4A0h] BYREF
  __int64 v65; // [rsp+28h] [rbp-498h] BYREF
  __int128 v66; // [rsp+30h] [rbp-490h]
  __int64 v67; // [rsp+48h] [rbp-478h] BYREF
  __int128 v68; // [rsp+50h] [rbp-470h] BYREF
  __int64 v69; // [rsp+60h] [rbp-460h]
  int v70; // [rsp+68h] [rbp-458h]
  _WORD v71[516]; // [rsp+78h] [rbp-448h] BYREF
  unsigned __int64 v72; // [rsp+480h] [rbp-40h]

  v72 = __readfsqword(0x28u);
  v70 = 0;
  v65 = 0;
  v67 = 0;
  v69 = 0;
  v66 = 0;
  v68 = 0;
  v2 = *(_QWORD *)(a1 + 16);
  sub_10E20(a1, 0);
  module_data = get_module_data((unsigned int)dword_2D4F4);
  v4 = v2;
  v5 = *(_BYTE *)(sub_19F50(module_data, v2, 0) + 184);
  v6 = v2 - *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33157);
  v7 = get_item_end(v2) - v2 - 1;
  if ( v5 == 4 )
  {
    if ( *(unsigned __int16 *)(get_module_data((unsigned int)dword_2D4F4) + 33031) < v6 )
      goto LABEL_6;
    if ( v7 )
      goto LABEL_65;
    *(_DWORD *)(a1 + 144) &= 0xFFFFE76F;
    if ( v6 )
    {
      v20 = get_module_data((unsigned int)dword_2D4F4);
      v21 = get_module_data((unsigned int)dword_2D4F4);
      v15 = *(_QWORD *)(v20 + 33320);
      v4 = v6;
      if ( netnode_supval(v15, v6, v21 + 33265, 44, 83) != 44 )
        goto LABEL_145;
      *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 164) = 2;
      if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) == 0
        && *(_WORD *)(get_module_data((unsigned int)dword_2D4F4) + 33275) )
      {
        v4 = *(unsigned __int16 *)(get_module_data((unsigned int)dword_2D4F4) + 33275);
        if ( (unsigned __int8)sub_92F0(a1, v4, 0) )
          goto LABEL_6;
        *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 164) = 2;
      }
      v4 = 1;
      if ( (unsigned __int8)sub_8ED0(a1, 1u)
        || (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) == 0
        && (unsigned __int8)sub_AE10(a1) )
      {
        goto LABEL_6;
      }
      v22 = *(_BYTE *)(get_module_data((unsigned int)dword_2D4F4) + 33273) & 1;
      v4 = *(unsigned __int16 *)(get_module_data((unsigned int)dword_2D4F4) + 33265);
      if ( (unsigned __int8)sub_10790(a1, v4, 141, 7, v22) )
        goto LABEL_6;
      v61 = sub_117A0(a1);
      if ( v61
        || (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0
        && (unsigned __int8)sub_AE10(a1) )
      {
        goto LABEL_6;
      }
      if ( *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33277) )
      {
        v4 = 0;
        v15 = *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33277);
        v58 = v15;
        v23 = netnode_altval(v15, 0, 65);
        if ( !v23 )
          goto LABEL_145;
        BYTE4(v67) = 8;
        LOWORD(v67) = 1280;
        v4 = 61;
        if ( !(unsigned __int8)sub_FF20(a1, 61) )
        {
          v24 = 1;
          while ( 1 )
          {
            if ( netnode_supval(v58, v24, &v62, 12, 83) == 12 )
            {
              switch ( (char)v62 )
              {
                case 3:
                  BYTE5(v67) = 2;
                  *(_QWORD *)&v68 = v64;
                  goto LABEL_125;
                case 4:
                  BYTE5(v67) = 3;
                  v46 = 1;
                  *(_QWORD *)&v68 = v64;
                  goto LABEL_128;
                case 5:
                  BYTE5(v67) = 7;
                  v45 = get_module_data((unsigned int)dword_2D4F4);
                  sub_6FF0(v45, (__int64)&v67, (__int64)&v62);
                  v46 = 3;
LABEL_128:
                  sub_8690(v2, (__int64)&v68, v46);
                  goto LABEL_125;
                case 6:
                  BYTE5(v67) = 4;
                  sub_8690(v2, (__int64)&v64, 3);
                  v44 = get_module_data((unsigned int)dword_2D4F4);
                  sub_6FF0(v44, (__int64)&v67, (__int64)&v62);
LABEL_125:
                  v4 = (__int64)&v67;
                  if ( !(unsigned __int8)sub_10360(a1, &v67, 12, 0) )
                    goto LABEL_6;
                  goto LABEL_58;
                case 8:
                  v4 = 2;
                  if ( !(unsigned __int8)sub_FD50(a1, 2) )
                    goto LABEL_6;
                  v4 = (unsigned __int16)v64;
                  v27 = sub_10630(a1, (unsigned __int16)v64, 1, 11);
                  break;
                default:
                  sub_E6C0(1);
              }
            }
            else
            {
              v15 = *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33277);
              v4 = v24;
              v25 = netnode_altval(v15, v24, 65);
              if ( (_WORD)v25 != 0xFFFF )
                goto LABEL_145;
              v4 = HIWORD(v25);
              v27 = sub_10000(a1, v4, 35, v26);
            }
            if ( v27 )
              break;
LABEL_58:
            if ( v24 == v23 )
              goto LABEL_168;
            v4 = 44;
            ++v24;
            if ( (unsigned __int8)sub_FF20(a1, 44) )
              goto LABEL_6;
          }
        }
      }
      else
      {
LABEL_168:
        *(_DWORD *)(a1 + 144) |= 0x90u;
        v4 = *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 164) != 0;
        if ( (unsigned __int8)sub_FBC0(a1, v4) )
          goto LABEL_6;
        if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0 )
        {
          if ( *(_WORD *)(get_module_data((unsigned int)dword_2D4F4) + 33275) )
          {
            *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 164) = 4;
            v4 = *(unsigned __int16 *)(get_module_data((unsigned int)dword_2D4F4) + 33275);
            if ( (unsigned __int8)sub_92F0(a1, v4, -1) )
              goto LABEL_6;
            v61 = 1;
          }
          if ( (*(_BYTE *)(get_module_data((unsigned int)dword_2D4F4) + 33273) & 4) != 0 )
          {
            v4 = (__int64)&unk_226D3;
            if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a1 + 136LL))(
                   a1,
                   &unk_226D3,
                   4) )
            {
              goto LABEL_6;
            }
            v61 = 1;
          }
        }
        v55 = *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33301);
        v56 = *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33285) | v55;
        if ( *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33293) | v56 )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) == 0 )
          {
            v4 = 2;
            sub_10B90(a1, 2);
          }
          v61 = 1;
        }
        if ( !*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33301)
          || (v4 = *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33301),
              !(unsigned __int8)sub_AE60(a1, v4, 4u)) )
        {
          v57 = *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33285);
          if ( !(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33293) | v57)
            || (*(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 164) = 4,
                v4 = get_module_data((unsigned int)dword_2D4F4) + 33285,
                !(unsigned __int8)sub_A5E0((_QWORD *)a1, v4, 2u)) )
          {
            if ( v61 )
            {
              v4 = 2;
              sub_10BD0(a1, 2, "field");
            }
          }
        }
      }
      goto LABEL_6;
    }
    v30 = *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33113);
    if ( *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33121) | v30 )
    {
      v4 = get_module_data((unsigned int)dword_2D4F4) + 33113;
      if ( (unsigned __int8)sub_A5E0((_QWORD *)a1, v4, 2u) )
        goto LABEL_6;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
    }
    else
    {
      v4 = 0;
      sub_10B90(a1, 0);
    }
    if ( !*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33089) )
      goto LABEL_6;
    v4 = 0;
    v15 = *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33089);
    v59 = v15;
    v31 = netnode_altval(v15, 0, 65);
    if ( !v31 )
      goto LABEL_145;
    v32 = (unsigned int)(v31 - 1);
    v33 = 1;
    v34 = v32 + 2;
    v35 = -(*(_WORD *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) & 0x22;
    while ( 1 )
    {
      v15 = v59;
      v4 = v33;
      if ( netnode_supval(v59, v33, &v62, 8, 83) != 8 )
        goto LABEL_145;
      *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 164) = 2;
      if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) == 0 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 4);
      v4 = (HIWORD(v64) << 16) | 4u;
      if ( (unsigned __int8)sub_8ED0(a1, v4) )
      {
LABEL_137:
        if ( *(_WORD *)(get_module_data((unsigned int)dword_2D4F4) + 33031) )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
        goto LABEL_6;
      }
      v4 = (unsigned __int16)v64;
      if ( (_WORD)v64 )
        break;
      if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) == 0 )
      {
        v4 = (__int64)"{anonymous}";
        v36 = sub_FDF0(a1, "{anonymous}");
LABEL_80:
        if ( v36 )
          goto LABEL_137;
      }
      if ( !v62
        || ((*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) == 0
          ? (v4 = (__int64)" {is}: ", v47 = sub_FDF0(a1, " {is}: "))
          : (v4 = (__int64)" inner ", v47 = sub_FE40(a1, " inner ", 7)),
            !v47 && (v4 = v62, !(unsigned __int8)sub_10630(a1, v62, 12, (unsigned __int8)v35))) )
      {
        if ( !v63 )
          goto LABEL_88;
        if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0 )
        {
          v4 = (__int64)" outer ";
          v37 = sub_FE40(a1, " outer ", 7);
        }
        else
        {
          v4 = (__int64)" {from}: ";
          v37 = sub_FDF0(a1, " {from}: ");
        }
        if ( !v37 )
        {
          v38 = 0;
          if ( (_BYTE)v35 )
          {
            v60 = v63;
            v50 = get_module_data((unsigned int)dword_2D4F4);
            v38 = 34;
            if ( *(_WORD *)(v50 + 33021) == v60 )
              v38 = 7;
          }
          v4 = v63;
          if ( !(unsigned __int8)sub_10630(a1, v63, 12, v38) )
          {
LABEL_88:
            if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) == 0 )
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 4);
            v4 = 0;
            if ( !(unsigned __int8)sub_FBC0(a1, 0) && ++v33 != v34 )
              continue;
          }
        }
      }
      goto LABEL_137;
    }
    v36 = sub_10630(a1, (unsigned __int16)v64, 13, (unsigned __int8)v35);
    goto LABEL_80;
  }
  if ( v5 <= 4u )
  {
    if ( v5 != 1 )
    {
      if ( v5 == 2 )
      {
        if ( v6 >= *(unsigned int *)(get_module_data((unsigned int)dword_2D4F4) + 33153) )
          goto LABEL_6;
        if ( get_ea_name(0, v2, 0, 0) > 0 )
          (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a1 + 136LL))(a1, &unk_226E1, 0xFFFFFFFFLL);
        if ( !v7 )
        {
          *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 164) = 2;
          byte = get_byte(v2);
          sub_87F0(a1, (__int64)&unk_22917, byte, *(_QWORD *)(*(_QWORD *)(a1 + 632) + 48LL), byte);
          goto LABEL_20;
        }
        goto LABEL_65;
      }
LABEL_20:
      *(_DWORD *)(a1 + 144) |= 0x90u;
      v4 = *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 164) != 0;
      sub_FBC0(a1, v4);
      goto LABEL_6;
    }
    if ( *(unsigned __int16 *)(get_module_data((unsigned int)dword_2D4F4) + 33081) < v6 )
      goto LABEL_6;
    if ( !v7 )
    {
      if ( !v6 )
      {
        v28 = get_module_data((unsigned int)dword_2D4F4);
        v29 = &unk_228D8;
        if ( (*(_BYTE *)(*(_QWORD *)(v28 + 24) + 4LL) & 1) != 0 )
          v29 = *(void **)(*(_QWORD *)(a1 + 632) + 48LL);
        sub_88B0(a1, 0, (__int64)&unk_22947, v29);
        goto LABEL_20;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0 )
      {
        sub_87F0(a1, (__int64)&unk_22929, *(_QWORD *)(*(_QWORD *)(a1 + 632) + 48LL));
        v14 = strlen(*(const char **)(*(_QWORD *)(a1 + 632) + 48LL));
        *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 176) = v14;
      }
      *(_DWORD *)(a1 + 144) &= 0xFFFFE76F;
      v15 = *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33328);
      v4 = v6;
      v16 = netnode_altval(v15, v6, 65);
      v17 = v16;
      if ( !v16 )
        goto LABEL_145;
      v15 = get_module_data((unsigned int)dword_2D4F4);
      v4 = 1;
      if ( !(unsigned __int8)sub_13D40(v15, 1, v17, 0, &v62) )
        goto LABEL_145;
      v15 = get_module_data((unsigned int)dword_2D4F4);
      v4 = (__int64)&v67;
      sub_6FF0(v15, (__int64)&v67, (__int64)&v62);
      LOBYTE(v70) = 0;
      WORD1(v69) = (unsigned __int8)v62;
      if ( (_BYTE)v62 == 9 )
      {
        if ( (~HIBYTE(v62) & 0x70) == 0 )
          goto LABEL_157;
      }
      else
      {
        if ( (unsigned __int8)v62 <= 9u )
        {
          if ( (_BYTE)v62 == 7 )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) == 0 )
            {
              *(_QWORD *)(a1 + 32) = 0;
              *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 176) = 0;
            }
            v18 = *(_WORD *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1;
            sub_11720(a1, &aImport[v18 ^ 1], 8 - (v18 == 0));
            if ( (v62 & 0x1400) != 0 )
            {
              WORD5(v68) = ((v62 & 0x1000) != 0) + 11;
LABEL_35:
              v4 = (__int64)&v67;
              v19 = sub_10F40(a1, &v67, 1);
              goto LABEL_36;
            }
LABEL_159:
            v4 = (__int64)&v67;
            LOBYTE(v67) = 2;
            v19 = sub_10360(a1, &v67, 169, 1);
LABEL_36:
            if ( !v19 )
              goto LABEL_6;
            goto LABEL_20;
          }
          goto LABEL_145;
        }
        if ( (unsigned __int8)(v62 - 10) > 1u )
          goto LABEL_145;
        if ( (~HIBYTE(v62) & 0xB0) == 0 )
        {
LABEL_157:
          v4 = (__int64)"  ";
          if ( (unsigned __int8)sub_FDF0(a1, "  ") )
            goto LABEL_6;
          if ( !(_BYTE)v70 )
            goto LABEL_35;
          goto LABEL_159;
        }
      }
      LOBYTE(v70) = 1;
      goto LABEL_157;
    }
LABEL_65:
    (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, &unk_23588, 0);
    goto LABEL_20;
  }
  if ( v5 != 9 )
    goto LABEL_20;
  v11 = *(_QWORD *)(a1 + 720);
  if ( (v11 & 0x600) == 0x400 && (v11 & 0xF0000000) == 0xB0000000LL )
  {
    *(_DWORD *)(a1 + 144) &= 0xFFFFE76F;
    goto LABEL_6;
  }
  v12 = v2 - *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33165);
  if ( v12 >= *(unsigned __int16 *)(get_module_data((unsigned int)dword_2D4F4) + 33173) )
  {
    v13 = 0;
    v12 = -1;
  }
  else
  {
    v13 = 0;
    if ( *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33193) )
    {
      v15 = *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33193);
      v4 = v12;
      v49 = netnode_altval(v15, v12, 65);
      v13 = (unsigned int)v49;
      if ( v49 )
      {
        if ( v49 < 0 )
        {
          v13 = (unsigned int)-v49;
          if ( v7 > 1 )
            goto LABEL_145;
          v7 = 0;
        }
        if ( __ROR8__(0xCCCCCCCCCCCCCCCDLL * (unsigned int)v13, 1) > 0x1999999999999999uLL || (unsigned int)v13 > 0x3FF )
LABEL_145:
          sub_E6A0(v15, v4);
      }
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 632) + 48LL);
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, v4, 4);
  }
  *(_DWORD *)(a1 + 144) &= 0xFFFFE7FF;
  if ( v12 == -1 )
    goto LABEL_6;
  if ( v7 )
    goto LABEL_65;
  if ( get_ea_name(&v65, v2, 1, 0) > 0 )
    sub_87F0(a1, (__int64)&unk_22929, v65);
  if ( !(_DWORD)v13 )
    goto LABEL_20;
  *(_DWORD *)(a1 + 144) |= 0x90u;
  v4 = 1;
  if ( (unsigned __int8)sub_FBC0(a1, 1) )
    goto LABEL_6;
  v39 = v71;
  v4 = v12;
  v15 = *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33193);
  if ( v13 != netnode_supval(v15, v12, v71, (unsigned int)(v13 + 1), 83) )
    goto LABEL_145;
  v40 = &v71[5 * ((unsigned int)v13 / 0xA) - 5];
  while ( 1 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0 )
    {
      *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 164) = 4;
      sub_11720(a1, ".var ", 5);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 12);
      v51 = (*(_QWORD *)(a1 + 32) == 0) + *(_QWORD *)(a1 + 32) - 1LL;
      sub_87F0(a1, (__int64)"%u", v12);
      v52 = (*(_QWORD *)(a1 + 32) == 0) + *(_QWORD *)(a1 + 32) - 1LL - v51;
      v53 = get_module_data((unsigned int)dword_2D4F4);
      *(_QWORD *)(v53 + 176) += v52;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 12);
      sub_11720(a1, " is ", 4);
    }
    else
    {
      v4 = v39[4];
      if ( (_WORD)v4 && (unsigned __int8)sub_92F0(a1, v4, 0) )
        break;
      v4 = v39[3];
      if ( (unsigned __int8)sub_10630(a1, v4, 3, 32) || (unsigned __int8)sub_117A0(a1) )
        break;
    }
    v4 = v39[2];
    if ( (unsigned __int8)sub_10630(a1, v4, 141, 7) || (unsigned __int8)sub_117A0(a1) )
      break;
    if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0 )
    {
      v4 = v39[3];
      if ( (unsigned __int8)sub_10630(a1, v4, 3, 32) )
        break;
      v54 = v39[4];
      if ( v54 )
      {
        v4 = v54;
        if ( (unsigned __int8)sub_92F0(a1, v54, 0) )
          break;
      }
      v4 = (__int64)"from ";
      if ( (unsigned __int8)sub_FE40(a1, "from ", 5) )
        break;
    }
    else
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 4);
      v4 = (__int64)"Scope: ";
      if ( !(unsigned int)sub_FB40(a1, "Scope: ", 0, v42, v43) )
        break;
    }
    v4 = *v39;
    if ( (unsigned __int8)sub_115E0(a1, v4, v12) )
      break;
    if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0 )
    {
      v4 = (__int64)" to ";
      v41 = sub_FE40(a1, " to ", 4);
    }
    else
    {
      v4 = (__int64)" / ";
      v41 = sub_FDF0(a1, " / ");
    }
    if ( v41 )
      break;
    v4 = v39[1];
    if ( (unsigned __int8)sub_115E0(a1, v4, v12) )
      break;
    if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) == 0 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 4);
    v4 = *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 164) != 0;
    if ( (unsigned __int8)sub_FBC0(a1, v4) || v39 == v40 )
      break;
    v39 += 5;
  }
LABEL_6:
  sub_10EE0(a1);
  if ( v65 )
  {
    *(_QWORD *)&v66 = 0;
    qfree(v65, v4, v8, v9);
  }
  return v72 - __readfsqword(0x28u);
}

