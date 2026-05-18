unsigned __int64 __fastcall sub_1294A0(
        __int64 a1,
        __int64 a2,
        int a3,
        int **a4,
        __int64 a5,
        unsigned __int8 *a6,
        double a7,
        unsigned int a8,
        __int64 a9)
{
  int **v9; // r15
  __int64 v11; // r12
  unsigned __int8 *v12; // r13
  int *v13; // rdx
  unsigned int v14; // ebx
  bool v15; // cl
  int v16; // ebp
  signed int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // r13d
  unsigned int v20; // r14d
  unsigned int v21; // r8d
  unsigned int v22; // ecx
  int v23; // r14d
  signed int v24; // esi
  int *v25; // rsi
  char v26; // r8
  int *v27; // rcx
  int v28; // edx
  int *v29; // rax
  char v30; // al
  int v31; // r13d
  char v33; // al
  int v34; // r14d
  unsigned int v35; // r13d
  unsigned int v36; // edx
  int v37; // eax
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // r14d
  char v41; // al
  unsigned int v42; // r13d
  unsigned int v43; // eax
  int *v44; // rbx
  int v45; // r15d
  unsigned int v46; // ebp
  unsigned __int16 *v47; // r12
  int v48; // edx
  unsigned int v49; // ecx
  int v50; // eax
  int v51; // esi
  _BYTE *v52; // rdx
  int v53; // r13d
  int v54; // r11d
  char v55; // al
  int v56; // r14d
  __int64 v57; // r13
  int v58; // eax
  __int64 v59; // r8
  __int64 v60; // r9
  signed int v61; // esi
  unsigned __int8 v62; // al
  unsigned __int8 v63; // al
  char v64; // al
  int v65; // ebx
  __int64 v66; // rax
  unsigned __int8 v67; // al
  unsigned __int8 v68; // al
  unsigned __int8 v69; // al
  int v70; // edi
  __int64 v71; // rax
  __int64 v72; // rax
  int v74; // [rsp+Ch] [rbp-7Ch]
  int v75; // [rsp+Ch] [rbp-7Ch]
  signed int v76; // [rsp+Ch] [rbp-7Ch]
  unsigned int v77; // [rsp+Ch] [rbp-7Ch]
  __int64 v78; // [rsp+10h] [rbp-78h]
  unsigned __int8 v79; // [rsp+18h] [rbp-70h]
  int v80; // [rsp+18h] [rbp-70h]
  unsigned int v81; // [rsp+18h] [rbp-70h]
  int v82; // [rsp+1Ch] [rbp-6Ch]
  unsigned int v83; // [rsp+1Ch] [rbp-6Ch]
  unsigned int v84; // [rsp+20h] [rbp-68h]
  int v85; // [rsp+24h] [rbp-64h]
  int v86; // [rsp+24h] [rbp-64h]
  int *v88; // [rsp+28h] [rbp-60h]
  __int64 v89; // [rsp+28h] [rbp-60h]
  int **v90; // [rsp+30h] [rbp-58h]
  unsigned __int8 *v91; // [rsp+38h] [rbp-50h]
  unsigned int v92; // [rsp+38h] [rbp-50h]
  unsigned int v93; // [rsp+40h] [rbp-48h] BYREF
  bool v94; // [rsp+44h] [rbp-44h]
  unsigned __int64 v95; // [rsp+48h] [rbp-40h]

  v9 = a4;
  v11 = a1;
  v12 = a6;
  v95 = __readfsqword(0x28u);
  v78 = *(_QWORD *)(a1 + 16);
  v79 = *a6;
  v85 = *a6;
  v84 = *((_DWORD *)a6 + 1);
  if ( !a5 )
  {
    if ( a4 )
    {
      v13 = *a4;
      if ( *a4 )
      {
        v74 = 0;
        goto LABEL_4;
      }
    }
LABEL_15:
    v24 = *(_DWORD *)(a2 + 12);
    if ( v24 > 0 )
    {
      v9 = nullptr;
      sub_E2490(v78, v24, a8);
      v74 = 0;
      v15 = 1;
      v16 = **(_DWORD **)(a2 + 32);
      v82 = *((_DWORD *)v12 + 3);
      v14 = v82;
      v17 = *(_DWORD *)(a1 + 56);
      if ( !v82 )
        goto LABEL_6;
    }
    else
    {
      v14 = *((_DWORD *)a6 + 3);
      v9 = nullptr;
      v74 = 0;
      v15 = 1;
      v82 = v14;
      v16 = **(_DWORD **)(a2 + 32);
      v17 = *(_DWORD *)(a1 + 56);
      if ( !v14 )
        goto LABEL_6;
    }
    goto LABEL_17;
  }
  v74 = *(unsigned __int8 *)(a5 + 1);
  if ( !a4 || (v13 = *a4) == nullptr )
  {
    if ( *(_BYTE *)(a5 + 1) )
    {
      v14 = *((_DWORD *)a6 + 3);
      v9 = nullptr;
      v15 = 0;
      v82 = v14;
      v16 = **(_DWORD **)(a2 + 32);
      v17 = *(_DWORD *)(a1 + 56);
      if ( !v14 )
        goto LABEL_6;
      goto LABEL_17;
    }
    goto LABEL_15;
  }
LABEL_4:
  v14 = *((_DWORD *)a6 + 3);
  v15 = v74 == 0;
  v16 = **(_DWORD **)(a2 + 32);
  v17 = *(_DWORD *)(a1 + 56);
  if ( !v14 )
  {
    v17 += ((*((_BYTE *)v9 + 36) & 1) == 0) + *v13;
    v82 = ((*((_BYTE *)v9 + 36) & 1) == 0) + *v13;
    *(_DWORD *)(a1 + 56) = v17;
LABEL_6:
    *((_DWORD *)v12 + 3) = v17 + 1;
    *(_DWORD *)(a1 + 56) += v16;
    v14 = *((_DWORD *)v12 + 3);
    goto LABEL_7;
  }
LABEL_17:
  v82 = 0;
  if ( (int)(v14 + v16) <= v17 )
  {
LABEL_7:
    *((_DWORD *)v12 + 4) = v16;
    v18 = a3;
    if ( a3 >= 0 )
      goto LABEL_8;
    goto LABEL_19;
  }
  *(_DWORD *)(a1 + 56) = v16 + v17;
  *((_DWORD *)v12 + 4) = v16;
  v18 = a3;
  v14 = *((_DWORD *)v12 + 3);
  if ( a3 >= 0 )
  {
LABEL_8:
    if ( v16 <= 0 )
    {
      v23 = v14;
    }
    else
    {
      v91 = v12;
      v19 = 0;
      v20 = v18;
      do
      {
        v21 = v19 + v14;
        v22 = v19++;
        sub_E1710(v78, 94, v20, v22, v21);
      }
      while ( v19 != v16 );
      v11 = a1;
      v12 = v91;
      v23 = v14;
    }
    goto LABEL_12;
  }
LABEL_19:
  if ( v85 != 3 )
  {
    v25 = *(int **)(a2 + 32);
    v26 = (unsigned int)(v85 - 9) <= 1 || v85 == 13;
    if ( v9 && v15 && (v79 & 0xFD) != 0xC )
    {
      v27 = *v9;
      v26 |= 0xCu;
      v28 = *((_DWORD *)v9 + 2);
      if ( v28 < **v9 )
      {
        do
        {
          if ( LOWORD(v27[6 * v28 + 7]) )
          {
            LOWORD(v25[6 * LOWORD(v27[6 * v28 + 7]) + 1]) = v28 + 1 - *((_WORD *)v9 + 4);
            v25 = *(int **)(a2 + 32);
            v27 = *v9;
          }
          ++v28;
        }
        while ( *v27 > v28 );
      }
      if ( *v25 <= 0 )
      {
        v23 = v14;
      }
      else
      {
        v29 = v25 + 7;
        v23 = v14;
        do
        {
          if ( *(_WORD *)v29 )
          {
            --v16;
            v23 = 0;
          }
          v29 += 6;
        }
        while ( &v25[6 * (*v25 - 1) + 13] != v29 );
      }
      v93 = v14;
      v94 = v26;
      if ( *(_DWORD *)(a2 + 8) && v82 > 0 )
      {
        v23 = 0;
        v9[5] = (int *)&v93;
        goto LABEL_12;
      }
    }
    else
    {
      v93 = v14;
      v94 = (unsigned int)(v85 - 9) <= 1 || v85 == 13;
      v23 = v14;
    }
    sub_128C80(a1, v25, v14, 0, v26, a7);
LABEL_12:
    if ( !v74 )
    {
      switch ( v79 )
      {
        case 1u:
          goto LABEL_35;
        case 2u:
          goto LABEL_59;
        case 3u:
          goto LABEL_99;
        case 5u:
        case 8u:
        case 0xCu:
        case 0xEu:
          goto LABEL_85;
        case 6u:
        case 7u:
          goto LABEL_67;
        case 9u:
        case 0xDu:
          goto LABEL_64;
        case 0xAu:
          goto LABEL_62;
        case 0xBu:
          goto LABEL_92;
        case 0xFu:
          goto LABEL_60;
        default:
          goto LABEL_39;
      }
    }
    goto LABEL_49;
  }
  if ( !v74 )
  {
LABEL_99:
    sub_E1710(v78, 71, 1u, v84, 0);
    goto LABEL_39;
  }
  v23 = v14;
LABEL_49:
  v75 = *(unsigned __int8 *)(a5 + 1);
  v37 = sub_F4560(v11, v75, *(_DWORD *)(a5 + 4), a8, *(int **)(a2 + 32), v14, a7);
  if ( !*(_DWORD *)(v11 + 48) && (unsigned int)(v75 - 1) <= 1 )
    sub_D0650(*(_QWORD *)(v11 + 16), v75, v37, *(unsigned int *)(a5 + 8), v38, v39);
  if ( v9 )
  {
    switch ( v79 )
    {
      case 1u:
        goto LABEL_35;
      case 2u:
        goto LABEL_59;
      case 3u:
        goto LABEL_99;
      case 5u:
      case 8u:
      case 0xCu:
      case 0xEu:
        goto LABEL_85;
      case 6u:
      case 7u:
        goto LABEL_67;
      case 9u:
      case 0xDu:
LABEL_64:
        if ( !v9 )
          goto LABEL_65;
        goto LABEL_61;
      case 0xAu:
LABEL_62:
        if ( !v9 )
          goto LABEL_45;
        goto LABEL_61;
      case 0xBu:
LABEL_92:
        if ( !v9 )
          goto LABEL_93;
        goto LABEL_61;
      case 0xFu:
LABEL_60:
        if ( !v9 )
          goto LABEL_41;
LABEL_61:
        sub_128F30(v11, v9, a2, v14, v23, v16, a7, v82);
        break;
      default:
        return __readfsqword(0x28u) ^ v95;
    }
    return __readfsqword(0x28u) ^ v95;
  }
  v61 = *(_DWORD *)(a2 + 12);
  if ( v61 <= 0 )
  {
    switch ( v79 )
    {
      case 1u:
        goto LABEL_35;
      case 2u:
        goto LABEL_59;
      case 3u:
        goto LABEL_99;
      case 5u:
      case 8u:
      case 0xCu:
      case 0xEu:
        goto LABEL_85;
      case 6u:
      case 7u:
        goto LABEL_67;
      case 9u:
      case 0xDu:
        goto LABEL_65;
      case 0xBu:
        goto LABEL_93;
      case 0xFu:
        goto LABEL_41;
      default:
        goto LABEL_45;
    }
  }
  sub_E2490(v78, v61, a8);
  switch ( v79 )
  {
    case 1u:
LABEL_35:
      v30 = *(_BYTE *)(v11 + 31);
      if ( v30 )
      {
        v63 = v30 - 1;
        *(_BYTE *)(v11 + 31) = v63;
        v31 = *(_DWORD *)(v11 + 4LL * v63 + 216);
      }
      else
      {
        v31 = *(_DWORD *)(v11 + 56) + 1;
        *(_DWORD *)(v11 + 56) = v31;
      }
      sub_E1710(v78, 97, v14, v16, v31);
      sub_E1770((_QWORD *)v78, 138, v84, v31, v14, v16);
      if ( v31 )
        sub_CEFE0(v11, v31);
      break;
    case 2u:
LABEL_59:
      sub_E1710(v78, 140, v84, v14, v16);
      break;
    case 3u:
      goto LABEL_99;
    case 5u:
    case 8u:
    case 0xCu:
    case 0xEu:
LABEL_85:
      v53 = v82 + 1;
      v77 = sub_CF000(v11, v82 + 1);
      v81 = v77 + v54;
      sub_E1710(v78, 97, v14, v16, v77 + v54);
      if ( v85 == 5 )
      {
        sub_E1770((_QWORD *)v78, 28, v84 + 1, *(_DWORD *)(v78 + 144) + 4, v77, 0);
        sub_E1770((_QWORD *)v78, 138, v84 + 1, v77, v14, v16);
      }
      if ( v9 )
      {
        sub_128F30(v11, v9, a2, v81, v23, 1, a7, v82);
      }
      else
      {
        v64 = *(_BYTE *)(v11 + 31);
        if ( v64 )
        {
          v68 = v64 - 1;
          *(_BYTE *)(v11 + 31) = v68;
          v65 = *(_DWORD *)(v11 + 4LL * v68 + 216);
        }
        else
        {
          v65 = *(_DWORD *)(v11 + 56) + 1;
          *(_DWORD *)(v11 + 56) = v65;
        }
        sub_E1710(v78, 127, v84, v65, 0);
        sub_E1710(v78, 128, v84, v77, v65);
        v66 = *(int *)(v78 + 144);
        if ( (int)v66 > 0 )
          *(_WORD *)(*(_QWORD *)(v78 + 136) + 24 * v66 - 22) = 8;
        if ( v65 )
          sub_CEFE0(v11, v65);
      }
      if ( v82 )
      {
        if ( v53 > *(_DWORD *)(v11 + 40) )
        {
          *(_DWORD *)(v11 + 40) = v53;
          *(_DWORD *)(v11 + 44) = v77;
        }
      }
      else
      {
        sub_CF060(v11, v77);
      }
      break;
    case 6u:
    case 7u:
LABEL_67:
      v88 = *((int **)v12 + 4);
      v40 = *v88;
      v41 = *(_BYTE *)(v11 + 31);
      if ( v41 )
      {
        v62 = v41 - 1;
        *(_BYTE *)(v11 + 31) = v62;
        v80 = *(_DWORD *)(v11 + 4LL * v62 + 216);
      }
      else
      {
        v80 = *(_DWORD *)(v11 + 56) + 1;
        *(_DWORD *)(v11 + 56) = v80;
      }
      v76 = v40 + 2;
      v42 = sub_CF000(v11, v40 + 2);
      v83 = v40 + v42;
      if ( v85 != 6 )
      {
        sub_E1710(v78, 97, v14, v16, v40 + v42 + 1);
        v86 = 0;
        if ( v40 <= 0 )
        {
          sub_E1710(v78, 126, v84, v83, 0);
          sub_E1710(v78, 97, v42, v76, v80);
          sub_E1770((_QWORD *)v78, 138, v84, v80, v42, v76);
          goto LABEL_80;
        }
        goto LABEL_71;
      }
      v92 = v40 + v42 + 1;
      v70 = sub_E1710(v78, 28, v84 + 1, 0, v14);
      v86 = v70;
      if ( !*(_BYTE *)(*(_QWORD *)v78 + 103LL) )
      {
        v71 = *(_QWORD *)(v78 + 136) + 24LL * v70;
        *(_BYTE *)(v71 + 1) = -3;
        *(_DWORD *)(v71 + 16) = v16;
      }
      sub_E1710(v78, 97, v14, v16, v92);
      sub_E1710(v78, 138, v84 + 1, v92, 0);
      v72 = *(int *)(v78 + 144);
      if ( (int)v72 > 0 )
        *(_WORD *)(*(_QWORD *)(v78 + 136) + 24 * v72 - 22) = 16;
      if ( v40 > 0 )
      {
LABEL_71:
        v43 = v14 - 1;
        v44 = v88;
        v89 = v11;
        v90 = v9;
        v45 = 0;
        v46 = v43;
        v47 = (unsigned __int16 *)(v44 + 7);
        do
        {
          v48 = *v47;
          v49 = v42 + v45++;
          v47 += 12;
          sub_E1710(v78, 81, v46 + v48, v49, 0);
        }
        while ( v40 > v45 );
        v11 = v89;
        v9 = v90;
      }
      sub_E1710(v78, 126, v84, v83, 0);
      sub_E1710(v78, 97, v42, v76, v80);
      sub_E1770((_QWORD *)v78, 138, v84, v80, v42, v76);
      if ( v86 )
      {
        v50 = *(_DWORD *)(v78 + 144);
        v51 = v50 - 1;
        v52 = byte_241F50;
        if ( v86 >= 0 )
          v51 = v86;
        if ( !*(_BYTE *)(*(_QWORD *)v78 + 103LL) )
          v52 = (_BYTE *)(*(_QWORD *)(v78 + 136) + 24LL * v51);
        *((_DWORD *)v52 + 2) = v50;
      }
LABEL_80:
      if ( v80 )
        sub_CEFE0(v11, v80);
      if ( v40 == -1 )
      {
        sub_CF060(v11, v42);
      }
      else if ( v76 > *(_DWORD *)(v11 + 40) )
      {
        *(_DWORD *)(v11 + 40) = v76;
        *(_DWORD *)(v11 + 44) = v42;
      }
      break;
    case 9u:
    case 0xDu:
LABEL_65:
      if ( v85 == 13 )
        sub_E1710(v78, 11, *((_DWORD *)v12 + 1), 0, 0);
      else
        sub_E1710(v78, 84, v14, v16, 0);
      goto LABEL_45;
    case 0xBu:
LABEL_93:
      v55 = *(_BYTE *)(v11 + 31);
      if ( v55 )
      {
        v67 = v55 - 1;
        *(_BYTE *)(v11 + 31) = v67;
        v56 = *(_DWORD *)(v11 + 4LL * v67 + 216);
      }
      else
      {
        v56 = *(_DWORD *)(v11 + 56) + 1;
        *(_DWORD *)(v11 + 56) = v56;
      }
      v57 = *((_QWORD *)v12 + 3);
      v58 = sub_E1710(v78, 97, v14, v16, v56);
      sub_DCC50(v78, v58, v57, (unsigned int)v16, v59, v60);
      sub_E1770((_QWORD *)v78, 138, v84, v56, v14, v16);
      if ( v56 )
        sub_CEFE0(v11, v56);
      goto LABEL_45;
    case 0xFu:
LABEL_41:
      v33 = *(_BYTE *)(v11 + 31);
      v34 = *((_DWORD *)v12 + 2);
      if ( v33 )
      {
        v69 = v33 - 1;
        *(_BYTE *)(v11 + 31) = v69;
        v35 = *(_DWORD *)(v11 + 4LL * v69 + 216);
      }
      else
      {
        v35 = *(_DWORD *)(v11 + 56) + 1;
        *(_DWORD *)(v11 + 56) = v35;
      }
      sub_E1710(v78, 50, v14, a9, 0);
      sub_E1710(v78, 97, ((unsigned int)v34 >> 31) + v14, v16 - ((unsigned int)v34 >> 31), v35);
      if ( v34 < 0 )
        sub_E1710(v78, 128, v84, v35, v14);
      else
        sub_E1770((_QWORD *)v78, 138, v84, v35, v14, v34);
      goto LABEL_45;
    default:
      goto LABEL_45;
  }
LABEL_39:
  if ( !v9 )
  {
LABEL_45:
    v36 = *(_DWORD *)(a2 + 8);
    if ( v36 )
      sub_E1710(v78, 60, v36, a9, 0);
  }
  return __readfsqword(0x28u) ^ v95;
}
