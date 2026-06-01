unsigned __int64 __fastcall sub_31E290(
        unsigned int *a1,
        _QWORD *a2,
        char a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  _QWORD *v10; // rdi
  _DWORD *v11; // r15
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rax
  _QWORD *v14; // r12
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rdi
  char v19; // r13
  char v20; // r12
  unsigned int v21; // eax
  int v22; // edx
  __int64 v23; // rcx
  char v24; // r14
  char v25; // r13
  __int64 v26; // rax
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned __int8 v29; // al
  __int64 v30; // rsi
  __int64 (*v31)(); // rax
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // r9d
  __int64 v36; // rcx
  __int64 v37; // r8
  int v38; // r9d
  unsigned __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rdx
  _BYTE *v43; // rdx
  int v44; // ecx
  __int64 v45; // rsi
  __int64 v46; // r14
  _QWORD *v47; // rdx
  _QWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx

  v10 = (_QWORD *)a2[1];
  v11 = (_DWORD *)v10[188];
  a2[4] = a1;
  if ( (*(_BYTE *)v10 & 4) == 0 )
  {
    v12 = *((_QWORD *)a1 + 3);
    if ( v12 == -1 )
      sub_31B3B0((__int64)a2, 0xC66Bu, *(double *)a4.m128_u64);
    v13 = sub_330F80(v10, v12);
    v14 = (_QWORD *)a2[1];
    v15 = sub_330F80(v14, v13);
    if ( !(unsigned __int8)sub_332920((__int64)(v14 + 1), v15) )
      sub_31B3B0((__int64)a2, 0xC6AFu, *(double *)a4.m128_u64);
  }
  v16 = *((_QWORD *)a1 + 1);
  if ( v16 )
  {
    if ( *(unsigned int **)(v16 + 16) != a1 )
      sub_31B3B0((__int64)a2, 0xC66Du, *(double *)a4.m128_u64);
    v17 = *((_QWORD *)a1 + 2);
    if ( !v17 )
      goto LABEL_8;
    goto LABEL_7;
  }
  v17 = *((_QWORD *)a1 + 2);
  if ( v17 )
  {
LABEL_7:
    if ( *(unsigned int **)(v17 + 8) != a1 )
      sub_31B3B0((__int64)a2, 0xC66Eu, *(double *)a4.m128_u64);
LABEL_8:
    if ( !a3 )
      sub_31B3B0((__int64)a2, 0xC66Fu, *(double *)a4.m128_u64);
    v18 = *a1;
    goto LABEL_10;
  }
  v18 = *a1;
  v19 = *((_BYTE *)a1 + 64) != 0;
  if ( a3 )
  {
LABEL_10:
    v19 = *((_BYTE *)a1 + 64) != 0;
    v20 = 0;
    goto LABEL_11;
  }
  if ( !sub_32ED70(v18) )
    sub_31B3B0((__int64)a2, 0xC670u, *(double *)a4.m128_u64);
  v18 = *a1;
  v20 = 2;
LABEL_11:
  v21 = a1[1];
  v22 = v18;
  if ( (unsigned int)v18 <= 0x3E )
  {
    v23 = 0x4001F83F80000016LL;
    if ( _bittest64(&v23, v18) )
    {
      if ( (v21 & 0x1000) != 0 )
      {
        if ( (_DWORD)v18 == 62 )
        {
          if ( a3 )
          {
LABEL_16:
            v20 |= 4u;
            if ( !sub_31B590((__int64)(a1 + 8), (__int64)v11, *((_QWORD *)a1 + 3)) )
              sub_31B3B0((__int64)a2, 0xC677u, *(double *)a4.m128_u64);
            if ( !sub_31B590((__int64)(a1 + 12), (__int64)v11, *((_QWORD *)a1 + 3)) )
              sub_31B3B0((__int64)a2, 0xC678u, *(double *)a4.m128_u64);
            if ( !sub_31B590((__int64)(a1 + 16), (__int64)v11, *((_QWORD *)a1 + 3)) )
              sub_31B3B0((__int64)a2, 0xC679u, *(double *)a4.m128_u64);
            LODWORD(v18) = *a1;
            v24 = 4;
            v25 = 4;
            v22 = *a1;
            goto LABEL_44;
          }
LABEL_172:
          sub_31B3B0((__int64)a2, 0xC672u, *(double *)a4.m128_u64);
        }
LABEL_22:
        sub_31B3B0((__int64)a2, 0xCDF3u, *(double *)a4.m128_u64);
      }
      if ( (unsigned int)v18 > 0x12 )
        goto LABEL_67;
      goto LABEL_33;
    }
  }
  v23 = (v21 >> 4) & 1;
  if ( ((a1[1] & 0x10) != 0) != (int)v18 > 62 )
    sub_31B3B0((__int64)a2, 0xC671u, *(double *)a4.m128_u64);
  if ( (v21 & 0x1000) != 0 )
    goto LABEL_22;
  if ( (unsigned int)v18 <= 0x12 )
  {
LABEL_33:
    v23 = (unsigned int)v18;
    v26 = 1LL << v18;
    if ( ((1LL << v18) & 0x7FE8) != 0 )
    {
      if ( a3 != v19 )
LABEL_74:
        sub_31B3B0((__int64)a2, 0xC673u, *(double *)a4.m128_u64);
      goto LABEL_37;
    }
    if ( (v26 & 0x78014) != 0 )
    {
      if ( !*((_BYTE *)a1 + 64) )
        v20 = 2;
      goto LABEL_37;
    }
    if ( (v26 & 3) != 0 )
    {
      if ( !a3 )
        goto LABEL_172;
LABEL_37:
      if ( (_DWORD)v18 )
      {
LABEL_38:
        v23 = 0x3FFDFFFF006LL;
        if ( ((1LL << v18) & 0x3FFDFFFF006LL) != 0 )
        {
          if ( !*((_BYTE *)a1 + 32) || !*((_BYTE *)a1 + 48) )
LABEL_193:
            sub_31B3B0((__int64)a2, 0xC67Fu, *(double *)a4.m128_u64);
          goto LABEL_43;
        }
        if ( ((1LL << v18) & 0x20000FF8) != 0 )
        {
LABEL_64:
          if ( !*((_BYTE *)a1 + 32) || *((_BYTE *)a1 + 48) )
            sub_31B3B0((__int64)a2, 0xC681u, *(double *)a4.m128_u64);
LABEL_43:
          v24 = 0;
          v25 = 0;
          goto LABEL_44;
        }
      }
LABEL_40:
      if ( *((_BYTE *)a1 + 32) || *((_BYTE *)a1 + 48) || *((_BYTE *)a1 + 64) )
        sub_31B3B0((__int64)a2, 0xC676u, *(double *)a4.m128_u64);
      goto LABEL_43;
    }
LABEL_63:
    sub_31B3B0((__int64)a2, 0xC674u, *(double *)a4.m128_u64);
  }
  if ( (unsigned int)(v18 - 19) > 0x35 )
    goto LABEL_63;
LABEL_67:
  switch ( (int)v18 )
  {
    case '*':
    case '+':
    case ',':
    case '-':
    case '.':
    case '/':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case ':':
    case ';':
    case '<':
    case '=':
    case '>':
      if ( !a3 )
        goto LABEL_172;
      if ( (_DWORD)v18 != 42 )
        break;
      if ( !*((_BYTE *)a1 + 32) || *((_BYTE *)a1 + 48) || (unsigned __int8)(*((_BYTE *)a1 + 64) - 6) > 1u )
        sub_31B3B0((__int64)a2, 0xC683u, *(double *)a4.m128_u64);
      v20 = 17;
      v24 = 0;
      v25 = 0;
LABEL_51:
      if ( (v22 & 0xFFFFFFF7) == 0x36 || v22 == 1 )
        goto LABEL_53;
LABEL_90:
      v29 = *((_BYTE *)a1 + 64);
      if ( v29 != 4 )
        goto LABEL_115;
      if ( v22 != 61 || **((_DWORD **)a1 + 9) != 2 )
        goto LABEL_61;
      v28 = a1[1];
      if ( (v28 & 0x10) != 0 )
        goto LABEL_94;
      goto LABEL_54;
    case '8':
    case '9':
      break;
    default:
      if ( a3 != v19 )
        goto LABEL_74;
      if ( (unsigned int)v18 <= 0x2A )
        goto LABEL_38;
      break;
  }
  switch ( (int)v18 )
  {
    case '+':
    case ',':
    case '-':
    case '.':
    case '/':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
      if ( !*((_BYTE *)a1 + 32) || !*((_BYTE *)a1 + 48) || (unsigned __int8)(*((_BYTE *)a1 + 64) - 6) > 1u )
        sub_31B3B0((__int64)a2, 0xC684u, *(double *)a4.m128_u64);
      v27 = a1[13];
      v20 = 17;
      v24 = 0;
      v25 = 0;
      goto LABEL_49;
    case '5':
      if ( !*((_BYTE *)a1 + 32) || *((_BYTE *)a1 + 48) != 12 || *((_BYTE *)a1 + 64) )
        sub_31B3B0((__int64)a2, 0xC685u, *(double *)a4.m128_u64);
      v29 = 0;
      v24 = 32;
      v25 = 0;
      goto LABEL_137;
    case '6':
      if ( *((_BYTE *)a1 + 32) || !*((_BYTE *)a1 + 48) || !*((_BYTE *)a1 + 64) )
        sub_31B3B0((__int64)a2, 0xC67Du, *(double *)a4.m128_u64);
      v24 = 0;
      v25 = 0;
LABEL_127:
      v44 = v11[21];
LABEL_128:
      sub_31B410((__int64)a2, (__int64)(a1 + 12), (__int64)(a1 + 16), v44, *(double *)a4.m128_u64);
      v22 = *a1;
      goto LABEL_51;
    case '7':
      if ( (unsigned __int8)(*((_BYTE *)a1 + 32) - 6) > 1u || *((_BYTE *)a1 + 48) || *((_BYTE *)a1 + 64) )
        sub_31B3B0((__int64)a2, 0xC67Cu, *(double *)a4.m128_u64);
      v29 = 0;
      v24 = 0;
      v25 = 17;
      goto LABEL_137;
    case '8':
      if ( *((_BYTE *)a1 + 48) )
        sub_31B3B0((__int64)a2, 0xC686u, *(double *)a4.m128_u64);
      v25 = 1;
      goto LABEL_106;
    case '9':
      v25 = 0;
LABEL_106:
      v40 = *((unsigned __int8 *)a1 + 32);
      if ( (unsigned __int8)v40 <= 0xAu )
      {
        v41 = 1409;
        if ( _bittest64(&v41, v40) )
          sub_31B3B0((__int64)a2, 0xC687u, *(double *)a4.m128_u64);
      }
      v42 = a2[2];
      if ( v42 && (*(_BYTE *)(v42 + 25) & 8) != 0 && *((_BYTE *)a1 + 64) != 8 )
        sub_31B3B0((__int64)a2, 0xC688u, *(double *)a4.m128_u64);
      v43 = (_BYTE *)a2[1];
      if ( (char)v43[4] < 0 && (_BYTE)v40 != 11 && (*v43 & 4) == 0 )
      {
        v45 = a2[5];
        v23 = a2[6];
        v46 = *((_QWORD *)a1 + 3);
        v47 = (_QWORD *)(v45 + 8 * v23);
        if ( (_QWORD *)v45 != v47 )
        {
          v48 = (_QWORD *)a2[5];
          while ( v46 != *v48 )
          {
            if ( v47 == ++v48 )
              goto LABEL_173;
          }
          if ( v48 != v47 )
            sub_31B3B0((__int64)a2, 0xC840u, *(double *)a4.m128_u64);
        }
LABEL_173:
        if ( a2[7] < (unsigned __int64)(v23 + 1) )
        {
          v49 = qvector_reserve((__int64)(a2 + 5), v45, v23 + 1, 8);
          v50 = a2[6];
          a2[5] = v49;
          v47 = (_QWORD *)(v49 + 8 * v50);
        }
        *v47 = v46;
        v24 = 0;
        ++a2[6];
        LODWORD(v18) = *a1;
        v22 = *a1;
LABEL_44:
        switch ( (int)v18 )
        {
          case 1:
            v44 = a1[9];
            goto LABEL_128;
          case 2:
            sub_31B410((__int64)a2, (__int64)(a1 + 8), (__int64)(a1 + 12), a1[17], *(double *)a4.m128_u64);
            v22 = *a1;
            goto LABEL_51;
          case 3:
          case 4:
          case 5:
          case 7:
          case 68:
            goto LABEL_75;
          case 6:
            if ( a1[9] != 1 || a1[17] != 1 )
              sub_31B3B0((__int64)a2, 0xCC72u, *(double *)a4.m128_u64);
            goto LABEL_141;
          case 8:
          case 9:
            if ( (int)a1[9] >= (int)a1[17] )
              sub_31B3B0((__int64)a2, 0xC695u, *(double *)a4.m128_u64);
            goto LABEL_90;
          case 10:
          case 11:
            if ( (int)a1[9] <= (int)a1[17] )
              sub_31B3B0((__int64)a2, 0xC696u, *(double *)a4.m128_u64);
            if ( *((_BYTE *)a1 + 32) != 4 )
              goto LABEL_90;
            v23 = *((_QWORD *)a1 + 5);
            if ( (unsigned int)(*(_DWORD *)v23 - 10) > 1 || (*(_BYTE *)(v23 + 33) & 2) == 0 )
              goto LABEL_90;
            v25 = 4;
LABEL_60:
            v29 = *((_BYTE *)a1 + 64);
            if ( v29 == 4 )
              goto LABEL_61;
            goto LABEL_115;
          case 12:
          case 13:
          case 14:
          case 15:
          case 16:
          case 17:
          case 18:
          case 19:
          case 20:
          case 21:
          case 69:
          case 70:
          case 71:
          case 72:
            goto LABEL_71;
          case 22:
          case 23:
          case 24:
            if ( a1[13] != 1 )
              sub_31B3B0((__int64)a2, 0xC693u, *(double *)a4.m128_u64);
            v30 = a1[9];
            if ( *((_BYTE *)a1 + 48) != 2 )
              goto LABEL_76;
            v31 = *(__int64 (**)())(*(_QWORD *)v11 + 328LL);
            if ( v31 == sub_14DA60 )
              goto LABEL_76;
            v32 = ((__int64 (__fastcall *)(_DWORD *, __int64, double))v31)(v11, v30, *(double *)a4.m128_u64);
            if ( v32 && *(unsigned __int8 *)(*((_QWORD *)a1 + 7) + 16LL) > v32 )
              sub_31B3B0((__int64)a2, 0xCB96u, *(double *)a4.m128_u64);
LABEL_75:
            LODWORD(v30) = a1[9];
LABEL_76:
            if ( a1[17] != (_DWORD)v30 )
              sub_31B3B0((__int64)a2, 0xC694u, *(double *)a4.m128_u64);
            v22 = *a1;
            goto LABEL_51;
          case 25:
          case 26:
          case 30:
          case 31:
          case 32:
          case 33:
          case 34:
          case 35:
          case 36:
          case 37:
          case 38:
          case 39:
          case 40:
          case 41:
            if ( a1[9] != a1[13] )
              sub_31B3B0((__int64)a2, 0xC690u, *(double *)a4.m128_u64);
            if ( a1[17] == 1 )
              goto LABEL_60;
            goto LABEL_166;
          case 27:
          case 28:
            if ( a1[13] != 1 || a1[17] != 1 )
              sub_31B3B0((__int64)a2, 0xC692u, *(double *)a4.m128_u64);
            goto LABEL_60;
          case 29:
            if ( a1[17] != 1 )
LABEL_166:
              sub_31B3B0((__int64)a2, 0xC691u, *(double *)a4.m128_u64);
LABEL_141:
            v29 = *((_BYTE *)a1 + 64);
            if ( v29 == 4 )
              goto LABEL_61;
            goto LABEL_115;
          case 43:
          case 44:
          case 45:
          case 46:
          case 47:
          case 48:
          case 49:
          case 50:
          case 51:
          case 52:
            v27 = a1[13];
            goto LABEL_49;
          case 54:
            goto LABEL_127;
          default:
            goto LABEL_51;
        }
      }
      v29 = *((_BYTE *)a1 + 64);
      v24 = 0;
      if ( v29 == 4 )
LABEL_61:
        sub_31B3B0((__int64)a2, 0xC697u, *(double *)a4.m128_u64);
LABEL_115:
      if ( v29 <= 4u )
      {
LABEL_137:
        if ( (unsigned __int8)(v29 - 2) > 1u )
          goto LABEL_53;
        goto LABEL_118;
      }
      if ( v29 <= 0xBu )
      {
        if ( v29 <= 9u )
          goto LABEL_53;
LABEL_118:
        sub_31B3B0((__int64)a2, 0xC9C4u, *(double *)a4.m128_u64);
      }
      if ( v29 == 13 )
        goto LABEL_118;
LABEL_53:
      v28 = a1[1];
      if ( (v28 & 0x10) != 0 )
      {
LABEL_94:
        v25 |= 8 * sub_1225C0((__int64)a1);
        v24 |= 8 * sub_1225E0((__int64)a1);
        v20 |= 8 * sub_122600(a1);
        if ( (a1[1] & 0x80u) == 0 )
          goto LABEL_95;
      }
      else
      {
LABEL_54:
        if ( (v28 & 0x80u) == 0 )
          goto LABEL_95;
      }
      if ( *a1 != 4 && (*a1 != 67 || a1[9] != a1[17]) )
        sub_31B3B0((__int64)a2, 0xCB9Bu, *(double *)a4.m128_u64);
LABEL_95:
      sub_31CCB0((unsigned __int8 *)a1 + 32, (__int64)a2, v25, a4, v23, a6, a7);
      sub_31CCB0((unsigned __int8 *)a1 + 48, (__int64)a2, v24, a4, v33, v34, v35);
      return sub_31CCB0((unsigned __int8 *)a1 + 64, (__int64)a2, v20, a4, v36, v37, v38);
    case ';':
      if ( !*((_BYTE *)a1 + 32) || *((_BYTE *)a1 + 48) || *((_BYTE *)a1 + 64) )
        sub_31B3B0((__int64)a2, 0xC67Bu, *(double *)a4.m128_u64);
      v29 = 0;
      v24 = 0;
      v25 = 0;
      goto LABEL_137;
    case '<':
      goto LABEL_100;
    case '=':
      v20 |= 4u;
LABEL_100:
      if ( *((_BYTE *)a1 + 32) || *((_BYTE *)a1 + 48) || !*((_BYTE *)a1 + 64) )
        sub_31B3B0((__int64)a2, 0xC682u, *(double *)a4.m128_u64);
      v24 = 0;
      v25 = 0;
      goto LABEL_90;
    case '>':
      goto LABEL_16;
    case '?':
    case '@':
    case 'A':
    case 'B':
    case 'C':
    case 'D':
      goto LABEL_64;
    case 'E':
    case 'F':
    case 'G':
    case 'H':
      if ( !*((_BYTE *)a1 + 32) || !*((_BYTE *)a1 + 48) )
        goto LABEL_193;
      v24 = 0;
      v25 = 0;
LABEL_71:
      v27 = a1[17];
      if ( a1[13] != v27 )
        sub_31B3B0((__int64)a2, 0xC68Eu, *(double *)a4.m128_u64);
LABEL_49:
      if ( a1[9] != v27 )
        sub_31B3B0((__int64)a2, 0xC68Fu, *(double *)a4.m128_u64);
      v22 = v18;
      goto LABEL_51;
    default:
      goto LABEL_40;
  }
}

