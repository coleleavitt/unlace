__int64 __fastcall sub_3E7480(__int64 a1, char a2, double a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // eax
  __int64 v8; // rsi
  int v9; // r12d
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // ebp
  __int16 v13; // ax
  int dtype_size; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r14d
  int v18; // r15d
  int v19; // esi
  int v20; // eax
  __int64 v21; // r13
  char v22; // al
  unsigned __int64 v23; // rax
  signed int v24; // r11d
  __int64 v25; // rdx
  unsigned __int16 v26; // dx
  int v27; // esi
  _QWORD *v28; // r15
  unsigned __int64 v29; // rsi
  _QWORD *v30; // r12
  unsigned __int64 v31; // rdx
  char v32; // cl
  _QWORD *v33; // rax
  _WORD *v35; // rax
  int v36; // eax
  int v37; // eax
  __int64 v38; // rax
  char v39; // al
  int v40; // r13d
  char v41; // al
  __int64 v42; // r15
  int v43; // eax
  __int64 v44; // r14
  int v45; // eax
  int v46; // eax
  __int64 v47; // rbp
  int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // r14
  int v51; // eax
  __int64 v52; // rbp
  int v53; // eax
  int v54; // eax
  __int64 v55; // r12
  int v56; // eax
  int v57; // eax
  __int64 v58; // r14
  unsigned int v59; // r13d
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  __int64 v64; // rax
  __int64 v65; // rbp
  int v66; // eax
  __int64 v67; // rsi
  unsigned __int8 v68; // r9
  __int64 v69; // r14
  unsigned int v70; // r13d
  int v71; // eax
  int v72; // esi
  int v73; // eax
  int v74; // esi
  int v75; // eax
  int v76; // eax
  int v77; // eax
  __int64 v78; // rcx
  __int64 v79; // r14
  int v80; // eax
  int v81; // eax
  int v82; // eax
  int v83; // esi
  int v84; // esi
  char v85; // al
  unsigned int v86; // r11d
  char v87; // al
  __int64 v88; // rax
  int v89; // eax
  int v90; // eax
  unsigned int v91; // ebp
  int v92; // eax
  int v93; // eax
  __int64 v94; // rax
  __int64 v95; // rcx
  int v96; // [rsp+Ch] [rbp-7Ch]
  signed int v97; // [rsp+Ch] [rbp-7Ch]
  signed int v98; // [rsp+Ch] [rbp-7Ch]
  signed int v99; // [rsp+Ch] [rbp-7Ch]
  unsigned __int8 v100; // [rsp+10h] [rbp-78h]
  signed int v101; // [rsp+10h] [rbp-78h]
  unsigned __int64 v102; // [rsp+10h] [rbp-78h]
  signed int v103; // [rsp+18h] [rbp-70h]
  unsigned __int64 v104; // [rsp+18h] [rbp-70h]
  signed int v105; // [rsp+18h] [rbp-70h]
  signed int v106; // [rsp+18h] [rbp-70h]
  int v107; // [rsp+18h] [rbp-70h]
  signed int v108; // [rsp+18h] [rbp-70h]
  signed int v109; // [rsp+18h] [rbp-70h]
  signed int v110; // [rsp+18h] [rbp-70h]
  signed int v111; // [rsp+18h] [rbp-70h]
  signed int v112; // [rsp+18h] [rbp-70h]
  signed int v113; // [rsp+18h] [rbp-70h]
  signed int v114; // [rsp+18h] [rbp-70h]
  signed int v115; // [rsp+18h] [rbp-70h]
  signed int v116; // [rsp+18h] [rbp-70h]
  signed int v117; // [rsp+18h] [rbp-70h]
  signed int v118; // [rsp+18h] [rbp-70h]
  signed int v119; // [rsp+18h] [rbp-70h]
  int v120; // [rsp+18h] [rbp-70h]
  signed int v121; // [rsp+18h] [rbp-70h]
  _QWORD v122[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v123[11]; // [rsp+30h] [rbp-58h] BYREF

  v123[3] = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 384) )
    return 0;
  v6 = *(unsigned __int16 *)(a1 + 48);
  v8 = *(_QWORD *)(a1 + 800);
  if ( (unsigned __int16)v6 <= 4u )
  {
    v9 = 0;
  }
  else
  {
    v9 = *(_DWORD *)(a1 + 52) & 0x1F;
    if ( (*(_DWORD *)(a1 + 52) & 0x10) != 0 )
    {
      v9 = 16;
    }
    else
    {
      v9 = (unsigned __int8)v9;
      v10 = *(_QWORD *)(*(_QWORD *)(v8 + 24) + 16LL);
      v11 = *(_QWORD *)(a1 + 80) + 16LL * *(_QWORD *)(a1 + 24);
      if ( v11 != v10 )
      {
        v10 &= v11;
        if ( v11 == -1 )
          v10 = -1;
      }
      if ( (unsigned __int16)(v6 - 17) <= 1u || (unsigned __int16)(v6 - 14) <= 1u )
      {
        if ( (unsigned __int8)sub_3E6030((_QWORD *)a1, v123, v10) )
        {
          v12 = v123[0];
          if ( !LODWORD(v123[0]) )
          {
            v13 = *(_WORD *)(a1 + 48);
            if ( v13 == 14 || v13 == 17 )
            {
              dtype_size = get_dtype_size();
              sub_1CF210(a1, 0x3Au, dtype_size, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
            }
          }
          return v12;
        }
        v8 = *(_QWORD *)(a1 + 800);
        v6 = *(unsigned __int16 *)(a1 + 48);
      }
    }
  }
  v15 = *(_QWORD *)(v8 + 8);
  v16 = *(unsigned int *)(v15 + 104);
  v100 = *(_BYTE *)(a1 + 69);
  if ( v6 < (int)v16 || v6 >= *(_DWORD *)(v15 + 108) )
  {
    if ( *(_BYTE *)(a1 + 65) == 1 )
    {
      v18 = 2;
      LOWORD(v17) = 0;
      v19 = 1;
      v96 = sub_3E5930(a1, 0, v15, v16, a6);
    }
    else
    {
      v96 = 272;
      v18 = 2;
      LOWORD(v17) = 0;
      v19 = 1;
    }
LABEL_44:
    v21 = 280;
    if ( *(_BYTE *)(a1 + 40LL * v19 + 65) == 1 )
      goto LABEL_20;
    goto LABEL_21;
  }
  v17 = *(_DWORD *)(*(_QWORD *)(v15 + 112) + 16LL * (v6 - (int)v16) + 8);
  if ( (v17 & 0x100) != 0 )
  {
    v18 = 2;
    v19 = 1;
    v96 = sub_3E5930(a1, 0, v15, v16, a6);
    v20 = 512;
    goto LABEL_19;
  }
  v39 = *(_BYTE *)(a1 + 65);
  v40 = v17 & 0x30C;
  if ( v39 != 1 )
  {
    if ( v40 != 12 )
    {
      v18 = 2;
      v20 = 512;
      v19 = 1;
      v96 = 272;
LABEL_19:
      if ( (v20 & v17) != 0 )
      {
LABEL_20:
        v21 = (int)sub_3E5930(a1, v19, v15, v16, a6);
        goto LABEL_21;
      }
      goto LABEL_44;
    }
    v96 = 272;
    goto LABEL_61;
  }
  v96 = sub_3E5930(a1, 0, v15, v16, a6);
  if ( v40 != 12 )
    goto LABEL_62;
  v39 = *(_BYTE *)(a1 + 65);
  if ( v39 != 1 )
  {
LABEL_61:
    if ( v39 == 5 && !*(_QWORD *)(a1 + 72) && !*(_BYTE *)(a1 + 105) )
      goto LABEL_67;
LABEL_62:
    v18 = 2;
    v20 = 512;
    v19 = 1;
    goto LABEL_19;
  }
  v41 = *(_BYTE *)(a1 + 105);
  if ( v41 == 1 )
  {
    if ( !*(_BYTE *)(a1 + 136) )
      goto LABEL_62;
LABEL_67:
    v18 = 3;
    v20 = 1024;
    v19 = 2;
    goto LABEL_19;
  }
  if ( !v41 )
    goto LABEL_67;
  v18 = 2;
  if ( (v17 & 0x200) != 0 )
  {
    v19 = 1;
    goto LABEL_20;
  }
  v21 = 280;
LABEL_21:
  v22 = *(_BYTE *)(a1 + 40LL * v18 + 65);
  if ( v22 && v22 != 7 )
  {
    v36 = sub_3E5930(a1, v18, v15, v16, a6);
    v24 = v21;
    v21 = v36;
  }
  else
  {
    v23 = *(unsigned __int16 *)(a1 + 48);
    v24 = v96;
    if ( (unsigned __int16)v23 <= 0x1Du )
    {
      v25 = 536875200;
      if ( _bittest64(&v25, v23) )
      {
        v37 = get_dtype_size();
        sub_1CF210(a1, 3u, v37, 1, 0x3BEA45E214ADDC55LL, 280, 0);
        v24 = v21;
        v21 = 280;
      }
    }
  }
  if ( v9 == 16 )
    goto LABEL_30;
  v26 = *(_WORD *)(a1 + 48);
  v27 = *(_DWORD *)(a1 + 52);
  if ( v26 != 43 && v26 > 4u && (v27 & 0x10) != 0 )
    goto LABEL_30;
  v35 = &unk_407840;
  while ( v26 != *v35 )
  {
    if ( &unk_4078AA == (_UNKNOWN *)++v35 )
      goto LABEL_30;
  }
  if ( (_DWORD)v21 == -1 || v24 == -1 )
  {
LABEL_30:
    v28 = *(_QWORD **)(a1 + 8);
    v29 = *(_QWORD *)(a1 + 40);
    v30 = (_QWORD *)v28[127];
    if ( !v30 )
    {
      v102 = *(_QWORD *)(a1 + 40);
      if ( v28 + 126 != (_QWORD *)v28[128] )
      {
        v121 = v24;
        v88 = std::_Rb_tree_decrement();
        v24 = v121;
        if ( *(_QWORD *)(v88 + 32) >= v102 )
          goto LABEL_39;
      }
      goto LABEL_38;
    }
    while ( 1 )
    {
      v31 = v30[4];
      v32 = 0;
      v33 = (_QWORD *)v30[3];
      if ( v29 < v31 )
      {
        v33 = (_QWORD *)v30[2];
        v32 = 1;
      }
      if ( !v33 )
        break;
      v30 = v33;
    }
    if ( v32 )
    {
      if ( v30 == (_QWORD *)v28[128] )
        goto LABEL_38;
      v104 = *(_QWORD *)(a1 + 40);
      v101 = v24;
      v38 = std::_Rb_tree_decrement();
      v29 = v104;
      v24 = v101;
      v31 = *(_QWORD *)(v38 + 32);
    }
    if ( v31 >= v29 )
    {
LABEL_39:
      sub_3E63B0(a1, v17, v96, v24, v21);
      return 0;
    }
LABEL_38:
    v103 = v24;
    *(_QWORD *)(operator new(0x28u) + 32) = *(_QWORD *)(a1 + 40);
    std::_Rb_tree_insert_and_rebalance();
    ++v28[130];
    v24 = v103;
    goto LABEL_39;
  }
  switch ( v26 )
  {
    case 1u:
    case 0x1Bu:
      if ( (unsigned __int8)sub_3E6C20(a1, v21, a3) )
        return 0;
      sub_3E4100(a1, 4u, v100, (int)v21, 0x3BEA45E214ADDC55LL, v96, 0);
      goto LABEL_72;
    case 3u:
      sub_3E5D60(a1, 1, v96, 0xFFFFFFFFLL, a6, a3);
      return 0;
    case 6u:
    case 7u:
      v108 = v24;
      sub_3E7240(a1, v21, v21);
      v69 = (int)v21;
      if ( (unsigned __int8)sub_3E2770(a1 + 24) )
        sub_3E4100(a1, 0x1Cu, v100, v108, (int)v21, 0, 0);
      v70 = 23;
      if ( *(_WORD *)(a1 + 48) == 6 )
        v70 = 24;
      v71 = get_dtype_size();
      sub_1CF210(a1, v70, v71, v108, v69, v96, 0);
      goto LABEL_72;
    case 8u:
    case 9u:
      v67 = *(unsigned __int8 *)(a1 + 109);
      v68 = 1;
      goto LABEL_91;
    case 0xAu:
    case 0xBu:
      v67 = *(unsigned __int8 *)(a1 + 109);
      v68 = 0;
LABEL_91:
      sub_1CF640(a1, v67, 2, v21, v24, v68);
      goto LABEL_72;
    case 0xCu:
      v119 = v24;
      sub_3E7240(a1, v21, v21);
      v85 = sub_3E2770(a1 + 24);
      v86 = v119;
      if ( v85 )
      {
        sub_3E4100(a1, 0x1Cu, v100, v119, (int)v21, 0, 0);
        v86 = v119;
      }
      sub_1CF9F0(a1, 1u, v100, v86, v21, v96);
      goto LABEL_72;
    case 0xEu:
    case 0x11u:
      goto LABEL_80;
    case 0xFu:
    case 0x12u:
      v97 = v24;
      if ( (unsigned __int8)sub_3E6C20(a1, v24, a3) )
        goto LABEL_134;
      v52 = *(_QWORD *)(a1 + 32) + *(unsigned __int16 *)(a1 + 50);
      v53 = get_dtype_size();
      sub_1CF210(a1, 3u, v53, v52, 0x3BEA45E214ADDC55LL, 132, 0);
      v24 = v97;
LABEL_80:
      if ( *(_BYTE *)(a1 + 65) == 7 )
      {
        if ( !(unsigned __int8)sub_1CF0C0(a1) )
        {
          v94 = *(_QWORD *)(a1 + 80) + 16LL * *(_QWORD *)(a1 + 24);
          v95 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL) + 16LL);
          if ( v94 != v95 )
          {
            if ( v94 == -1 )
              v95 = -1;
            else
              v95 &= v94;
          }
          sub_3E4100(a1, 0x37u, v100, v95, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
        }
        return 0;
      }
      v98 = v24;
      if ( !(unsigned __int8)sub_3E6C20(a1, v24, a3) )
      {
        v54 = get_dtype_size();
        sub_1CF210(a1, 0x36u, v54, 0x3BEA45E214ADDC55LL, 296, v98, 4);
        return 0;
      }
LABEL_134:
      v12 = 1;
      break;
    case 0x10u:
      sub_3E6E40((_QWORD *)a1);
      goto LABEL_134;
    case 0x13u:
      v47 = (int)v21;
      v50 = v24;
      goto LABEL_75;
    case 0x14u:
      v120 = v24;
      v87 = sub_3E2770(a1 + 24);
      sub_1CF710(a1, v100, v120, v21, v96, 288, v87 == 0 ? -1 : 0x110);
      goto LABEL_72;
    case 0x15u:
      v42 = (int)v21;
      v44 = v96;
      v21 = v24;
      goto LABEL_69;
    case 0x16u:
      sub_3E7170(a1, v100, v24, v21, v96);
      goto LABEL_72;
    case 0x17u:
      v79 = v96;
      goto LABEL_109;
    case 0x18u:
      goto LABEL_104;
    case 0x19u:
      v114 = v24;
      v77 = get_dtype_size();
      v78 = (int)v21;
      v21 = 280;
      sub_1CF210(a1, 7u, v77, v78, 0x3BEA45E214ADDC55LL, 280, 0);
      v79 = v96;
      v24 = v114;
      goto LABEL_109;
    case 0x1Au:
      goto LABEL_102;
    case 0x1Cu:
      return 0;
    case 0x1Du:
      goto LABEL_105;
    case 0x22u:
      if ( *(_BYTE *)(a1 + 145) )
      {
LABEL_105:
        v113 = v24;
        sub_3E7240(a1, v21, v21);
        if ( (unsigned __int8)sub_3E2770(a1 + 24) )
        {
          v93 = get_dtype_size();
          sub_1CF210(a1, 0x1Bu, v93, v113, v21, 0, 0);
        }
        v76 = get_dtype_size();
        sub_1CF210(a1, 0x16u, v76, v113, v21, v96, 0);
      }
      else
      {
        v47 = (int)v21;
        v24 = v21;
        v50 = (int)v21;
LABEL_75:
        v107 = v24;
        if ( (unsigned __int8)sub_3E2770(a1 + 24) )
          sub_3E6180(a1, v100, v107, v21, 0);
        v51 = get_dtype_size();
        sub_1CF210(a1, 0xCu, v51, v50, v47, v96, 0);
      }
      goto LABEL_72;
    case 0x23u:
    case 0x24u:
      sub_3E7000(a1, 236, 244, v24, v21, v26 == 35);
      v122[0] = 0xFFFFFFFF00000000LL;
      v122[1] = 0;
      sub_11EBE0((__int64)v122, 238, 244, 2);
      v123[1] = 240;
      v123[0] = 0x400000001LL;
      sub_1CF350(a1, 4, (unsigned __int8 *)v122, nullptr, (unsigned __int8 *)v123);
      sub_1166E0((__int64)v123);
      sub_1166E0((__int64)v122);
      return 0;
    case 0x29u:
    case 0x2Au:
      v99 = v24;
      v55 = (int)v21;
      v56 = get_dtype_size();
      sub_1CF210(a1, 3u, v56, 31, 0x3BEA45E214ADDC55LL, 288, 1);
      v57 = get_dtype_size();
      v58 = 288;
      v59 = 44;
      sub_1CF210(a1, 0x14u, v57, v55, 288, v55, 0);
      v60 = get_dtype_size();
      sub_1CF210(a1, 3u, v60, 1, 0x3BEA45E214ADDC55LL, 288, 1);
      v61 = get_dtype_size();
      sub_1CF210(a1, 0x16u, v61, 288, v55, 288, 0);
      v62 = get_dtype_size();
      sub_1CF210(a1, 0x14u, v62, v99, 288, 288, 0);
      v63 = get_dtype_size();
      sub_1CF210(a1, 3u, v63, 0, 0x3BEA45E214ADDC55LL, v55, 0);
      if ( *(_WORD *)(a1 + 48) != 41 )
LABEL_84:
        v59 = 43;
LABEL_85:
      if ( a2 )
      {
        v91 = sub_3274A0(v59 - 11);
        v92 = get_dtype_size();
        sub_1CF210(a1, v91, v92, v58, v55, 7, 0);
      }
      else
      {
        v64 = *(_QWORD *)(a1 + 160) + 16LL * *(_QWORD *)(a1 + 24);
        v65 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL) + 16LL);
        if ( v64 != v65 )
        {
          v65 &= v64;
          if ( v64 == -1 )
            v65 = -1;
        }
        v66 = get_dtype_size();
        sub_1CF210(a1, v59, v66, v58, v55, v65, 0);
      }
      return 0;
    case 0x2Bu:
      if ( (v27 & 0x10) == 0 )
      {
        switch ( v27 & 0x1F )
        {
          case 1:
            v55 = (int)v21;
            v58 = v24;
            v59 = 44;
            goto LABEL_85;
          case 2:
            v58 = v24;
            v55 = (int)v21;
            goto LABEL_84;
          case 5:
            v55 = (int)v21;
            v58 = v24;
            v59 = 46;
            goto LABEL_85;
          case 6:
            v55 = (int)v21;
            v58 = v24;
            v59 = 47;
            goto LABEL_85;
          case 0xA:
            v55 = (int)v21;
            v58 = v24;
            v59 = 50;
            goto LABEL_85;
          case 0xB:
            v55 = (int)v21;
            v58 = v24;
            v59 = 51;
            goto LABEL_85;
          default:
            break;
        }
      }
      if ( !under_debugger )
        sub_37B760(0xC822u, a3);
      BUG();
    case 0x2Cu:
      sub_3E6820(a1, 120, *(unsigned __int16 *)(a1 + 70), 193);
      return 0;
    case 0x2Du:
      sub_3E6820(a1, 120, *(unsigned __int16 *)(a1 + 70), 80);
      return 0;
    case 0x2Fu:
    case 0x30u:
    case 0x31u:
      v106 = v24;
      v47 = 288;
      sub_3E5360(a1, (unsigned __int8 *)(a1 + 144), 2, v26 - 46, 288);
      v48 = get_dtype_size();
      v49 = (int)v21;
      LODWORD(v21) = 288;
      sub_1CF210(a1, 0x16u, v48, v49, 288, 288, 0);
      v50 = v106;
      v24 = v106;
      goto LABEL_75;
    case 0x32u:
      v84 = v21;
      v118 = v24;
      v21 = 288;
      sub_3E72C0(a1, v84, 288, 1);
      v79 = v96;
      v24 = v118;
      goto LABEL_109;
    case 0x33u:
      v117 = v24;
      sub_3E7390(a1, v21, 288);
      v21 = 288;
      v79 = v96;
      v24 = v117;
      goto LABEL_109;
    case 0x34u:
      v74 = v21;
      v111 = v24;
      v21 = 288;
      sub_3E72C0(a1, v74, 288, 0);
      v24 = v111;
LABEL_104:
      v112 = v24;
      v75 = get_dtype_size();
      sub_1CF210(a1, 0x13u, v75, v112, v21, v96, 0);
      goto LABEL_72;
    case 0x35u:
      v83 = v21;
      v116 = v24;
      v21 = 288;
      v79 = 272;
      sub_3E72C0(a1, v83, 288, 0);
      v24 = v116;
      v96 = 272;
      goto LABEL_109;
    case 0x36u:
      v72 = v21;
      v109 = v24;
      v21 = 288;
      sub_3E72C0(a1, v72, 288, 0);
      v24 = v109;
LABEL_102:
      v110 = v24;
      v73 = get_dtype_size();
      sub_1CF210(a1, 0x15u, v73, v110, v21, v96, 0);
      goto LABEL_72;
    case 0x37u:
      v42 = (int)v21;
      v21 = v24;
      v96 = 272;
      v44 = 272;
      goto LABEL_69;
    case 0x3Du:
      v42 = (int)v21;
      v21 = 280;
      v82 = get_dtype_size();
      sub_1CF210(a1, 3u, v82, 0, 0x3BEA45E214ADDC55LL, 280, 0);
      v44 = v96;
      goto LABEL_69;
    case 0x3Eu:
      v81 = get_dtype_size();
      sub_1CF210(a1, 7u, v81, (int)v21, 0x3BEA45E214ADDC55LL, v96, 0);
      goto LABEL_72;
    case 0x3Fu:
      v96 = 272;
      v42 = v24;
      v44 = 272;
      goto LABEL_69;
    case 0x40u:
      v44 = v96;
      v42 = v24;
      goto LABEL_69;
    case 0x42u:
    case 0x43u:
    case 0x44u:
      v105 = v24;
      v42 = 288;
      sub_3E5360(a1, (unsigned __int8 *)(a1 + 144), 2, v26 - 65, 288);
      v43 = get_dtype_size();
      sub_1CF210(a1, 0x16u, v43, (int)v21, 288, 288, 0);
      v21 = v105;
      v44 = v96;
LABEL_69:
      if ( (unsigned __int8)sub_3E2770(a1 + 24) )
      {
        v89 = get_dtype_size();
        sub_1CF210(a1, 0x23u, v89, v21, v42, 0, 0);
        v90 = get_dtype_size();
        sub_1CF210(a1, 0x1Eu, v90, v21, v42, 3, 0);
      }
      v45 = get_dtype_size();
      sub_1CF210(a1, 0xDu, v45, v21, v42, v44, 0);
      goto LABEL_72;
    case 0x47u:
      v96 = 272;
      v79 = 272;
LABEL_109:
      v115 = v24;
      v80 = get_dtype_size();
      sub_1CF210(a1, 0x14u, v80, v115, v21, v79, 0);
LABEL_72:
      if ( (unsigned __int8)sub_3E2770(a1 + 24) )
      {
        sub_3E5F30(a1, 33, v96, (unsigned int)(char)v100, 1);
        v46 = get_dtype_size();
        sub_1CF210(a1, 0x1Du, v46, v96, 0x3BEA45E214ADDC55LL, 2, 0);
      }
      return 0;
    default:
      goto LABEL_30;
  }
  return v12;
}

