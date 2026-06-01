__int64 __fastcall sub_3E87D0(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  int v15; // edi
  __int64 v16; // rax
  __int64 *v17; // rsi
  char v19; // al
  unsigned __int8 v20; // al
  int v21; // eax
  __int64 v22; // rdx
  int v23; // edx
  unsigned __int8 v24; // al
  int v25; // eax
  unsigned __int16 v26; // dx
  __int64 v27; // rcx
  unsigned __int8 v28; // al
  __int16 v29; // ax
  char v30; // al

  v15 = *(unsigned __int16 *)(a1 + 48);
  v16 = 250;
  v17 = &qword_4C1CC0;
  while ( v16 > 0 )
  {
    while ( 1 )
    {
      a12 = (__int64)&v17[v16 >> 1];
      if ( *(_WORD *)a12 >= (unsigned __int16)v15 )
        break;
      v17 = (__int64 *)(a12 + 8);
      v16 = v16 - 1 - (v16 >> 1);
      if ( v16 <= 0 )
        goto LABEL_5;
    }
    v16 >>= 1;
  }
LABEL_5:
  if ( v17 == (__int64 *)&unk_4C2490 || *(_WORD *)v17 != (_WORD)v15 )
    return 0;
  *(_QWORD *)(a1 + 840) = *v17;
  switch ( v15 )
  {
    case 81:
    case 82:
    case 83:
    case 84:
    case 85:
    case 86:
    case 87:
    case 88:
    case 89:
    case 90:
    case 91:
    case 92:
      if ( (*(_BYTE *)(a1 + 52) & 2) != 0 )
      {
        v20 = *(_BYTE *)(a1 + 53);
        if ( v20 == 3 )
        {
          if ( (_WORD)v15 == 92 )
          {
            *(_WORD *)(a1 + 842) = 16;
            return 1;
          }
          goto LABEL_13;
        }
LABEL_17:
        if ( v20 <= 3u )
        {
          if ( v20 )
          {
            if ( v20 == 1 )
            {
LABEL_20:
              *(_WORD *)(a1 + 842) = 8;
              v21 = 8;
              goto LABEL_21;
            }
            goto LABEL_13;
          }
          goto LABEL_51;
        }
        if ( v20 == 4 )
        {
LABEL_51:
          v21 = 4;
          *(_WORD *)(a1 + 842) = 4;
LABEL_21:
          v22 = *(_QWORD *)(a1 + 832);
          if ( (*(_BYTE *)(a1 + 844) & 1) != 0 )
            v23 = *(_DWORD *)(v22 + 692);
          else
            v23 = *(_DWORD *)(v22 + 80);
          if ( v23 < v21 )
            goto LABEL_24;
          return 1;
        }
LABEL_13:
        *(_WORD *)(a1 + 842) = 0;
        return 0;
      }
      if ( !under_debugger )
        sub_37DDE0(0xCE5Au, *(double *)a2.m128_u64);
      goto LABEL_75;
    case 95:
    case 96:
    case 97:
    case 98:
    case 99:
    case 100:
    case 101:
    case 102:
    case 103:
    case 104:
    case 105:
    case 106:
    case 107:
    case 108:
    case 113:
    case 114:
    case 115:
    case 132:
    case 133:
      if ( *(_BYTE *)(a1 + 52) == 2 )
        goto LABEL_11;
      if ( !under_debugger )
        sub_37DDE0(0xCE37u, *(double *)a2.m128_u64);
      goto LABEL_75;
    case 109:
    case 111:
      if ( (*(_BYTE *)(a1 + 52) & 0x2F) != 3 )
      {
        if ( !under_debugger )
          sub_37DDE0(0xCE35u, *(double *)a2.m128_u64);
        goto LABEL_75;
      }
      v19 = *(_BYTE *)(a1 + 54);
      if ( v19 != 1 )
        goto LABEL_12;
      v21 = 8;
      goto LABEL_28;
    case 110:
      if ( (*(_BYTE *)(a1 + 52) & 0x2F) != 0x23 )
      {
        if ( !under_debugger )
          sub_37DDE0(0xCE36u, *(double *)a2.m128_u64);
        goto LABEL_75;
      }
      v28 = *(_BYTE *)(a1 + 54);
      if ( v28 > 1u )
      {
        if ( (unsigned __int8)(v28 - 2) > 1u )
          sub_3E4E30(*(double *)a2.m128_u64);
        v29 = 8;
      }
      else
      {
        v29 = 4;
      }
      *(_WORD *)(a1 + 842) = v29;
      goto LABEL_29;
    case 112:
      v30 = *(_BYTE *)(a1 + 52) & 0x2F;
      switch ( v30 )
      {
        case 3:
          v19 = *(_BYTE *)(a1 + 54);
          *(_DWORD *)(a1 + 844) |= 1u;
          if ( v19 == 1 )
            goto LABEL_20;
          break;
        case 35:
          v20 = *(_BYTE *)(a1 + 53);
          if ( v20 == 3 )
            goto LABEL_13;
          goto LABEL_17;
        case 2:
          *(_DWORD *)(a1 + 844) |= 1u;
LABEL_11:
          v19 = *(_BYTE *)(a1 + 53);
          if ( v19 == 1 )
            goto LABEL_20;
          break;
        default:
          if ( !under_debugger )
            sub_37DDE0(0xCE34u, *(double *)a2.m128_u64);
          goto LABEL_75;
      }
LABEL_12:
      if ( (v19 & 0xFB) != 0 )
        goto LABEL_13;
      v21 = 4;
LABEL_28:
      *(_WORD *)(a1 + 842) = v21;
      if ( (unsigned int)(unsigned __int16)v15 - 109 > 1 )
        goto LABEL_21;
LABEL_29:
      v24 = *(_BYTE *)(a1 + 53);
      if ( v24 > 1u && v24 != 4 )
        return 0;
LABEL_31:
      v25 = *(_DWORD *)(a1 + 844);
      v26 = *(_WORD *)(a1 + 842);
      v27 = *(_QWORD *)(a1 + 832);
      if ( (v25 & 1) != 0 )
        a12 = *(unsigned int *)(v27 + 692);
      else
        a12 = *(unsigned int *)(v27 + 80);
      if ( !v26 )
      {
        if ( (v25 & 6) == 0 )
        {
          *(_WORD *)(a1 + 842) = a12;
          return 1;
        }
        if ( !under_debugger )
          sub_37DDE0(0xCE1Fu, *(double *)a2.m128_u64);
LABEL_75:
        BUG();
      }
      if ( v26 > (int)a12 && ((_WORD)v15 != 92 || v26 != 16) )
      {
LABEL_24:
        sub_32BE10(*(_QWORD **)(a1 + 8), *(_QWORD *)(a1 + 40), 0x32u, a12, a1, a14, a2, a3, a4, a5, a6, a7, a8, a9);
        return 0;
      }
      return 1;
    default:
      goto LABEL_31;
  }
}

