__int64 __fastcall sub_4B810(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v5; // r13d
  int v6; // eax
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v11; // rbx
  __int64 v12; // rbx
  int v13; // eax
  __int16 v14; // dx
  __int16 v15; // dx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // rax
  __int16 v24; // ax
  int v26; // edx
  int v27; // eax
  int v28; // r11d
  int v29; // ecx
  int v30; // edi
  int v31; // r8d
  int v32; // r9d
  int v33; // eax
  int v34; // ecx
  char v35; // di
  int v36; // ecx
  int v37; // r9d
  int v38; // r8d
  __int16 v39; // ax
  __int16 v40; // ax
  int v41; // ebx
  __int16 v42; // ax
  __int16 v43; // ax
  __int64 v44; // rdx
  __int64 v45; // rdx
  bool v46; // zf
  __int16 v47; // dx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int16 v52; // dx
  __int16 v53; // ax
  __int16 v54; // cx
  int v55; // r8d
  __int64 v56; // rdx
  char v57; // al
  __int16 v58; // ax

  v5 = a3 >> 31;
  v6 = (a3 >> 29) & 3;
  if ( v6 == 1 )
  {
    *(_BYTE *)(a2 + 41) = 1;
    *(_WORD *)(a2 + 46) = (a3 & 0x1F) + 129;
    v14 = *(_WORD *)(a2 + 34);
    *(_BYTE *)(a2 + 45) = v5 == 0 ? 2 : 7;
    v15 = v14 & 4;
    v16 = a3 >> 5;
    if ( (a3 & 0x2000000) != 0 )
    {
      *(_BYTE *)(a2 + 81) = 5;
      v17 = (__int16)(4 * v16);
      *(_BYTE *)(a2 + 85) = 7;
      *(_BYTE *)(a2 + 113) = 0;
      *(_QWORD *)(a2 + 104) = 0;
      v18 = (a3 >> 19) & 0x1F | (32 * v5);
      v19 = v17;
      *(_QWORD *)(a2 + 88) = v18;
      if ( v15 )
      {
        v20 = *(_QWORD *)(a2 + 8) + v17;
      }
      else
      {
        v44 = getinf() & 0x1006;
        v20 = v19 + *(_QWORD *)(a2 + 8);
        if ( v44 != 4098 )
          v20 = (unsigned int)(v19 + *(_DWORD *)(a2 + 8));
      }
      *(_QWORD *)(a2 + 136) = v20;
      *(_BYTE *)(a2 + 121) = 7;
      *(_BYTE *)(a2 + 125) = 9;
      *(_WORD *)(a2 + 24) = ((a3 & 0x1000000) != 0) + 468;
      if ( a4 && sub_38140() )
        sub_1DB20(a4, 19, 19, 5);
      return *(unsigned __int16 *)(a2 + 26);
    }
    v21 = v16 << 45 >> 43;
    v22 = v21;
    if ( v15 )
    {
      v23 = *(_QWORD *)(a2 + 8) + v21;
    }
    else
    {
      v45 = getinf() & 0x1006;
      v23 = v22 + *(_QWORD *)(a2 + 8);
      if ( v45 != 4098 )
        v23 = (unsigned int)(v22 + *(_DWORD *)(a2 + 8));
    }
    *(_QWORD *)(a2 + 96) = v23;
    *(_BYTE *)(a2 + 81) = 7;
    *(_BYTE *)(a2 + 85) = 9;
    *(_WORD *)(a2 + 24) = ((a3 & 0x1000000) != 0) + 282;
    if ( !a4 || !sub_38140() )
      return *(unsigned __int16 *)(a2 + 26);
    goto LABEL_17;
  }
  if ( v6 != 2 )
  {
    if ( !v6 )
    {
      v8 = (__int64)((unsigned __int64)a3 << 38) >> 36;
      if ( (*(_BYTE *)(a2 + 34) & 4) != 0 )
      {
        v9 = *(_QWORD *)(a2 + 8) + v8;
      }
      else
      {
        v24 = getinf();
        v9 = *(_QWORD *)(a2 + 8) + v8;
        if ( (v24 & 0x1006) != 0x1002 )
          v9 = (unsigned int)v9;
      }
      *(_BYTE *)(a2 + 41) = 7;
      *(_BYTE *)(a2 + 45) = 9;
      *(_QWORD *)(a2 + 56) = v9;
      if ( v5 )
      {
        *(_WORD *)(a2 + 24) = 4;
        if ( !a4 )
          return *(unsigned __int16 *)(a2 + 26);
      }
      else
      {
        *(_WORD *)(a2 + 24) = 3;
        if ( !a4 || !sub_38100() )
          return *(unsigned __int16 *)(a2 + 26);
      }
      sub_1DB20(a4, 26, 26, 0);
      return *(unsigned __int16 *)(a2 + 26);
    }
    return 0;
  }
  if ( (a3 & 0x80000000) == 0 )
  {
    if ( (a3 & 0x3000010) != 0 )
      return 0;
    *(_BYTE *)(a2 + 32) = a3 & 0xF;
    v11 = (__int64)((unsigned __int64)(a3 >> 5) << 45) >> 43;
    if ( (*(_BYTE *)(a2 + 34) & 4) != 0 )
    {
      v12 = *(_QWORD *)(a2 + 8) + v11;
    }
    else
    {
      v40 = getinf();
      v12 = *(_QWORD *)(a2 + 8) + v11;
      if ( (v40 & 0x1006) != 0x1002 )
        v12 = (unsigned int)v12;
    }
    *(_BYTE *)(a2 + 41) = 7;
    *(_BYTE *)(a2 + 45) = 9;
    *(_QWORD *)(a2 + 56) = v12;
    *(_WORD *)(a2 + 24) = 3;
    if ( !a4 || !sub_38100() )
      return *(unsigned __int16 *)(a2 + 26);
LABEL_17:
    sub_1DB20(a4, 24, 24, 5);
    return *(unsigned __int16 *)(a2 + 26);
  }
  v13 = a3 & 0x1000000;
  if ( (a3 & 0x2000000) != 0 )
  {
    if ( (~a3 & 0x1F0000) == 0 )
    {
      v37 = a3 & 0x1F;
      v38 = (a3 >> 5) & 0x1F;
      switch ( (a3 >> 21) & 7 )
      {
        case 0u:
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = 470;
          *(_WORD *)(a2 + 46) = v38 + 129;
          *(_BYTE *)(a2 + 45) = 7;
          goto LABEL_77;
        case 1u:
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = 471;
          *(_WORD *)(a2 + 46) = v38 + 129;
          *(_BYTE *)(a2 + 45) = 7;
          goto LABEL_77;
        case 2u:
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 24) = 1;
          *(_WORD *)(a2 + 46) = v38 + 129;
          *(_BYTE *)(a2 + 45) = 7;
          if ( v38 != 30 && (a3 & 0x800) == 0 )
            return *(unsigned __int16 *)(a2 + 26);
          *(_BYTE *)(a2 + 44) &= ~8u;
          if ( (a3 & 0x800) != 0 && HIBYTE(v13) )
            return 0;
          if ( (a3 & 0x800) == 0 )
            return *(unsigned __int16 *)(a2 + 26);
LABEL_64:
          v41 = (a3 >> 10) & 1;
          goto LABEL_65;
        case 4u:
          if ( v38 != 31 || (a3 & 0x800) != 0 && HIBYTE(v13) )
            return 0;
          *(_WORD *)(a2 + 24) = 429;
          if ( (a3 & 0x800) != 0 )
            goto LABEL_64;
          return *(unsigned __int16 *)(a2 + 26);
        case 5u:
          if ( v38 != 31 || (a3 & 0x1F) != 0 )
            return 0;
          *(_WORD *)(a2 + 24) = 534;
LABEL_77:
          if ( (a3 & 0x800) == 0 )
            return *(unsigned __int16 *)(a2 + 26);
          v41 = (a3 >> 10) & 1;
          if ( v13 )
          {
LABEL_65:
            v42 = *(_WORD *)(a2 + 24);
            *(_DWORD *)(a2 + 28) |= 0x10000u;
            *(_BYTE *)(a2 + 33) = v41;
            if ( v42 != 1 && v42 != 429 )
            {
              v43 = v37 + 129;
              *(_BYTE *)(a2 + 81) = 1;
              if ( v37 == 31 )
                v43 = 161;
              *(_BYTE *)(a2 + 85) = 7;
              *(_WORD *)(a2 + 86) = v43;
            }
          }
          else
          {
            *(_DWORD *)(a2 + 28) |= 0x10000u;
            *(_BYTE *)(a2 + 33) = ((a3 & 0x400) != 0) | 0x20;
            if ( v37 != 31 )
              return 0;
          }
          break;
        default:
          return 0;
      }
      return *(unsigned __int16 *)(a2 + 26);
    }
    return 0;
  }
  if ( !v13 )
  {
    if ( (a3 & 0x1C) != 0 )
      return 0;
    v39 = word_8C700[4 * ((a3 >> 21) & 7) + (a3 & 3)];
    *(_WORD *)(a2 + 24) = v39;
    if ( !v39 )
      return 0;
    *(_BYTE *)(a2 + 41) = 5;
    *(_BYTE *)(a2 + 45) = 7;
    *(_QWORD *)(a2 + 48) = (unsigned __int16)(a3 >> 5);
    *(_BYTE *)(a2 + 73) = 0;
    *(_QWORD *)(a2 + 64) = 0;
    if ( ((a3 >> 21) & 7) != 5 )
      return *(unsigned __int16 *)(a2 + 26);
LABEL_56:
    *(_BYTE *)(a2 + 44) &= ~8u;
    return *(unsigned __int16 *)(a2 + 26);
  }
  if ( (a3 & 0xC00000) != 0 )
    return 0;
  v26 = (a3 >> 19) & 3;
  v27 = (a3 >> 21) & 1;
  v28 = BYTE2(a3) & 7;
  v29 = (unsigned __int16)a3 >> 12;
  v30 = BYTE1(a3) & 0xF;
  v31 = (unsigned __int8)a3 >> 5;
  v32 = a3 & 0x1F;
  if ( (unsigned int)(v26 - 1) <= 2 )
  {
    v46 = v26 == 1;
    v47 = v27 + 535;
    if ( !v46 )
      v47 = 27 - v27;
    *(_WORD *)(a2 + 24) = v47;
    v48 = a2 + 40LL * v27;
    *(_BYTE *)(v48 + 41) = 5;
    *(_BYTE *)(v48 + 45) = 7;
    *(_QWORD *)(v48 + 48) = BYTE2(a3) & 7;
    *(_BYTE *)(v48 + 73) = 0;
    *(_QWORD *)(v48 + 64) = 0;
    v49 = a2 + 40LL * (v27 + 1);
    *(_BYTE *)(v49 + 41) = 11;
    *(_BYTE *)(v49 + 45) = 2;
    *(_WORD *)(v49 + 46) = v29;
    v50 = a2 + 40LL * (v27 + 2);
    *(_WORD *)(v50 + 46) = v30;
    *(_BYTE *)(v50 + 41) = 11;
    *(_BYTE *)(v50 + 45) = 2;
    v51 = a2 + 40LL * (v27 + 3);
    *(_BYTE *)(v51 + 41) = 5;
    *(_BYTE *)(v51 + 45) = 7;
    *(_QWORD *)(v51 + 48) = (unsigned __int8)a3 >> 5;
    *(_BYTE *)(v51 + 73) = 0;
    *(_QWORD *)(v51 + 64) = 0;
    v52 = v32 + 129;
    if ( v27 )
    {
      *(_WORD *)(a2 + 46) = v52;
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 7;
    }
    else
    {
      *(_WORD *)(a2 + 206) = v52;
      *(_BYTE *)(a2 + 201) = 1;
      *(_BYTE *)(a2 + 205) = 7;
      if ( v32 == 31 )
        *(_BYTE *)(a2 + 204) &= ~8u;
    }
    return *(unsigned __int16 *)(a2 + 26);
  }
  if ( v27 )
    return 0;
  v33 = BYTE1(a3) & 0xF;
  if ( v29 == 3 )
  {
    if ( v32 != 31 )
      return 0;
    switch ( (unsigned __int8)a3 >> 5 )
    {
      case 1:
        if ( ((a3 >> 8) & 3) != 2 )
          return 0;
        *(_WORD *)(a2 + 24) = 284;
        v33 = v30 + 1;
        *(_BYTE *)(a2 + 72) = 1;
        goto LABEL_118;
      case 2:
        *(_WORD *)(a2 + 24) = 256;
        goto LABEL_118;
      case 4:
        if ( (a3 & 0xF00) != 0 )
        {
          if ( v30 != 4 )
          {
            *(_WORD *)(a2 + 24) = 284;
LABEL_118:
            *(_BYTE *)(a2 + 41) = 5;
            *(_QWORD *)(a2 + 64) = 0;
            v54 = *(_WORD *)(a2 + 24);
            *(_QWORD *)(a2 + 48) = v33;
            *(_BYTE *)(a2 + 45) = 7;
            *(_BYTE *)(a2 + 73) = 0;
            if ( v54 != 256 && v54 != 286 || v33 != 15 )
              return *(unsigned __int16 *)(a2 + 26);
            goto LABEL_56;
          }
          v58 = 913;
        }
        else
        {
          v58 = 912;
        }
        *(_WORD *)(a2 + 24) = v58;
        return *(unsigned __int16 *)(a2 + 26);
      case 5:
        *(_WORD *)(a2 + 24) = 285;
        goto LABEL_118;
      case 6:
        *(_WORD *)(a2 + 24) = 286;
        goto LABEL_118;
      case 7:
        *(_WORD *)(a2 + 24) = 911;
        return *(unsigned __int16 *)(a2 + 26);
      default:
        return 0;
    }
  }
  if ( (a3 & 0xC000) != 0 )
  {
    if ( v29 == 4 && v32 == 31 )
    {
      if ( (((unsigned __int8)(a3 >> 5) | BYTE2(a3)) & 7) != 0 )
      {
        if ( v31 != 1 || (a3 & 0x70000) != 0 )
        {
          if ( v31 != 2 || (a3 & 0x70000) != 0 )
          {
            *(_WORD *)(a2 + 24) = 27;
            *(_BYTE *)(a2 + 41) = 5;
            *(_BYTE *)(a2 + 45) = 7;
            *(_QWORD *)(a2 + 48) = v31 | (8 * v28);
            *(_QWORD *)(a2 + 64) = 0;
            *(_BYTE *)(a2 + 73) = 0;
            *(_BYTE *)(a2 + 81) = 5;
            *(_BYTE *)(a2 + 85) = 7;
            *(_QWORD *)(a2 + 88) = BYTE1(a3) & 0xF;
            *(_BYTE *)(a2 + 113) = 0;
            *(_QWORD *)(a2 + 104) = 0;
          }
          else
          {
            *(_WORD *)(a2 + 24) = 894;
          }
        }
        else
        {
          *(_WORD *)(a2 + 24) = 893;
        }
      }
      else
      {
        *(_WORD *)(a2 + 24) = 889;
      }
      return *(unsigned __int16 *)(a2 + 26);
    }
  }
  else
  {
    if ( v29 == 1 )
    {
      if ( v28 != 3 || (a3 & 0xF00) != 0 )
        return 0;
      if ( (unsigned __int8)a3 >> 5 )
      {
        v53 = 1133;
        if ( v31 != 1 )
          return 0;
      }
      else
      {
        v53 = 1132;
      }
      *(_WORD *)(a2 + 24) = v53;
      *(_WORD *)(a2 + 46) = v32 + 129;
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 7;
      return *(unsigned __int16 *)(a2 + 26);
    }
    if ( v29 == 2 && v32 == 31 )
    {
      v34 = 8 * v30;
      v35 = 32;
      v36 = v31 | v34;
      if ( (a3 & 0x20) != 0 )
        v35 = 96;
      if ( v36 > 7 )
      {
        if ( (unsigned int)(v36 - 8) <= 0x1E )
        {
          v55 = v31 >> 1;
          v56 = 1LL << v36;
          v57 = v55 & 1;
          if ( ((1LL << v36) & 0xFF000000) != 0 )
          {
            *(_DWORD *)(a2 + 28) |= 0x10000u;
            *(_WORD *)(a2 + 24) = 869 - (((a3 >> 5) & 4) == 0);
            *(_BYTE *)(a2 + 33) = v35 | v57 | 0x10;
            return *(unsigned __int16 *)(a2 + 26);
          }
          if ( (v56 & 0x5500000000LL) != 0 )
          {
            *(_WORD *)(a2 + 24) = 910;
            *(_WORD *)(a2 + 46) = v55;
            *(_BYTE *)(a2 + 41) = 13;
            qstrncpy();
            return *(unsigned __int16 *)(a2 + 26);
          }
          if ( (v56 & 0x5500) != 0 )
          {
            *(_DWORD *)(a2 + 28) |= 0x10000u;
            *(_BYTE *)(a2 + 33) = v57 | 0x48;
            *(_WORD *)(a2 + 24) = 869 - (((a3 >> 5) & 4) == 0);
            return *(unsigned __int16 *)(a2 + 26);
          }
        }
      }
      else if ( (unsigned int)v36 <= 7 )
      {
        switch ( v36 )
        {
          case 0:
            *(_WORD *)(a2 + 24) = 2;
            break;
          case 1:
            *(_WORD *)(a2 + 24) = 263;
            break;
          case 2:
            *(_WORD *)(a2 + 24) = 265;
            break;
          case 3:
            *(_WORD *)(a2 + 24) = 266;
            break;
          case 4:
            *(_WORD *)(a2 + 24) = 264;
            break;
          case 5:
            *(_WORD *)(a2 + 24) = 467;
            break;
          case 7:
            *(_DWORD *)(a2 + 28) |= 0x10000u;
            *(_WORD *)(a2 + 24) = 870;
            *(_BYTE *)(a2 + 33) = 16;
            break;
          default:
            goto LABEL_140;
        }
        return *(unsigned __int16 *)(a2 + 26);
      }
LABEL_140:
      *(_WORD *)(a2 + 24) = 541;
      *(_BYTE *)(a2 + 41) = 5;
      *(_BYTE *)(a2 + 45) = 7;
      *(_QWORD *)(a2 + 48) = v36;
      *(_BYTE *)(a2 + 73) = 0;
      *(_QWORD *)(a2 + 64) = 0;
      return *(unsigned __int16 *)(a2 + 26);
    }
  }
  return 0;
}

