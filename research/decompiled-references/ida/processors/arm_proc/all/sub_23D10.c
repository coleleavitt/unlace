__int64 __fastcall sub_23D10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 (__fastcall *v8)(__int64, __int64, __int64); // rax
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // r14
  char v12; // dl
  __int64 v13; // r9
  char v14; // al
  unsigned int v15; // ebx
  unsigned __int16 v16; // cx
  char *v17; // rdi
  __int64 (__fastcall *v18)(__int64, __int64, __int64); // rax
  __int64 v19; // rax
  __int64 v20; // r15
  __int16 v21; // dx
  __int64 result; // rax
  unsigned __int16 v23; // ax
  __int64 (__fastcall *v24)(__int64, __int64, __int64, __int64, __int64, __int64); // rax
  bool v25; // al
  __int64 v26; // rax
  int v27; // esi
  __int64 v28; // r9
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 (__fastcall *v32)(__int64, __int64, __int64, __int64, __int64, __int64); // rax
  unsigned int v33; // ecx
  int v34; // eax
  __int64 v35; // rax
  __int16 v36; // dx
  unsigned __int64 v37; // rcx
  int v38; // r14d
  int v39; // eax
  __int64 v40; // r9
  __int64 (__fastcall **v41)(__int64, __int64, __int64); // rdx
  __int64 (__fastcall *v42)(__int64, __int64, __int64, __int64, __int64, __int64); // rdx
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 (__fastcall *v46)(__int64, __int64, __int64, __int64, __int64, __int64); // rdx
  __int64 v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // [rsp+0h] [rbp-A8h]
  __int64 v50; // [rsp+8h] [rbp-A0h]
  __int64 v51; // [rsp+10h] [rbp-98h]
  __int64 v52; // [rsp+18h] [rbp-90h]
  unsigned int v53; // [rsp+2Ch] [rbp-7Ch] BYREF
  _BYTE v54[8]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v55; // [rsp+38h] [rbp-70h]
  int v56; // [rsp+40h] [rbp-68h]
  __int64 v57; // [rsp+48h] [rbp-60h]
  __int128 v58; // [rsp+50h] [rbp-58h]
  __int64 v59; // [rsp+60h] [rbp-48h]
  unsigned __int64 v60; // [rsp+68h] [rbp-40h]

  v50 = a1;
  v49 = a3;
  v8 = **(__int64 (__fastcall ***)(__int64, __int64, __int64))a4;
  BYTE6(v51) = a5;
  v60 = __readfsqword(0x28u);
  v9 = *(_QWORD *)(a2 + 16);
  if ( v8 == sub_21CD0 )
    v10 = (*(__int64 (__fastcall **)(char *, __int64))(a4 + 8))("PSR", a3);
  else
    v10 = v8(a4, (__int64)"PSR", a3);
  v11 = *(_QWORD *)(v10 + 8);
  v12 = sub_55C30(v9);
  v14 = *(_BYTE *)(a2 + 32) & 0xF;
  if ( a5 )
  {
    if ( (v11 & 0x1000000) != 0 )
    {
LABEL_5:
      if ( *(_WORD *)(a2 + 24) == 278 )
      {
        LOBYTE(v15) = *(_BYTE *)(a2 + 33) | (32 * v14) | 0x10;
        goto LABEL_7;
      }
      v15 = ((unsigned int)v11 >> 25) & 3 | ((unsigned int)v11 >> 8) & 0xFFFFFFFC;
      if ( ((unsigned int)v11 >> 25) & 3 | BYTE1(v11) & 0xFC )
      {
LABEL_7:
        BYTE6(v51) = 1;
        switch ( (unsigned __int8)v15 >> 5 )
        {
          case 0:
            goto LABEL_64;
          case 1:
            goto LABEL_60;
          case 2:
            goto LABEL_58;
          case 3:
            goto LABEL_56;
          case 4:
            goto LABEL_54;
          case 5:
            goto LABEL_52;
          case 6:
            goto LABEL_50;
          case 7:
            goto LABEL_62;
        }
      }
      BYTE6(v51) = 1;
      goto LABEL_9;
    }
    BYTE6(v51) = 0;
  }
  else if ( (v11 & 0x20) != 0 )
  {
    goto LABEL_5;
  }
LABEL_9:
  switch ( v14 )
  {
    case 0:
      LOBYTE(v15) = 0;
LABEL_64:
      LOBYTE(v11) = (v11 & 0x40000000) != 0;
      goto LABEL_42;
    case 1:
      LOBYTE(v15) = 0;
LABEL_60:
      LOBYTE(v11) = (v11 & 0x40000000) == 0;
      goto LABEL_42;
    case 2:
      LOBYTE(v15) = 0;
LABEL_58:
      LOBYTE(v11) = (v11 & 0x20000000) != 0;
      goto LABEL_42;
    case 3:
      LOBYTE(v15) = 0;
LABEL_56:
      LOBYTE(v11) = (v11 & 0x20000000) == 0;
      goto LABEL_42;
    case 4:
      LOBYTE(v15) = 0;
LABEL_54:
      LODWORD(v11) = (unsigned int)v11 >> 31;
      goto LABEL_42;
    case 5:
      LOBYTE(v15) = 0;
LABEL_52:
      LOBYTE(v11) = (int)v11 >= 0;
      goto LABEL_42;
    case 6:
      LOBYTE(v15) = 0;
LABEL_50:
      LOBYTE(v11) = (v11 & 0x10000000) != 0;
      goto LABEL_42;
    case 7:
      LOBYTE(v15) = 0;
LABEL_62:
      LOBYTE(v11) = (v11 & 0x10000000) == 0;
      goto LABEL_42;
    case 8:
      LOBYTE(v11) = (v11 & 0x60000000) == 0x20000000;
      LOBYTE(v15) = 0;
      goto LABEL_42;
    case 9:
      LOBYTE(v11) = (v11 & 0x60000000) != 0x20000000;
      LOBYTE(v15) = 0;
      goto LABEL_42;
    case 10:
      LOBYTE(v11) = ((v11 & 0x10000000) != 0) == (int)v11 < 0;
      LOBYTE(v15) = 0;
LABEL_42:
      if ( (_BYTE)v11 )
        goto LABEL_15;
LABEL_43:
      v25 = (_BYTE)v15 == 0;
      goto LABEL_44;
    case 11:
      if ( ((v11 & 0x10000000) != 0) == (int)v11 < 0 )
        return -1;
      goto LABEL_14;
    case 12:
      if ( (v11 & 0x40000000) == 0 && ((v11 & 0x10000000) != 0) == (int)v11 < 0 )
        goto LABEL_14;
      return -1;
    case 13:
      if ( (v11 & 0x40000000) == 0 && ((v11 & 0x10000000) != 0) == (int)v11 < 0 )
        return -1;
      goto LABEL_14;
    case 14:
LABEL_14:
      LOBYTE(v15) = 0;
LABEL_15:
      v16 = *(_WORD *)(a2 + 24);
      HIBYTE(v51) = v16 == 47 || v16 == 41;
      if ( HIBYTE(v51) )
        goto LABEL_16;
      if ( v16 == 166 )
      {
        HIBYTE(v51) = 1;
        goto LABEL_95;
      }
      if ( v16 > 0x113u )
      {
        if ( v16 <= 0x1D5u )
        {
          if ( v16 > 0x1D3u )
          {
            v35 = sub_22FB0(SBYTE6(v51), *(unsigned __int16 *)(a2 + 46), v49, a4);
            v36 = *(_WORD *)(a2 + 24);
            v37 = *(_QWORD *)(a2 + 88);
            if ( v36 == 468 )
            {
              if ( _bittest64(&v35, v37) )
                goto LABEL_67;
            }
            else if ( v36 != 469 || !_bittest64(&v35, v37) )
            {
              goto LABEL_67;
            }
            v20 = *(_QWORD *)(a2 + 136);
LABEL_105:
            if ( v20 == -1 )
              goto LABEL_67;
            goto LABEL_113;
          }
          if ( (unsigned __int16)(v16 - 282) > 1u )
            goto LABEL_67;
          v26 = sub_22FB0(SBYTE6(v51), *(unsigned __int16 *)(a2 + 46), v49, a4);
          if ( *(_WORD *)(a2 + 24) != 282 )
          {
            if ( !v26 )
              goto LABEL_67;
            goto LABEL_76;
          }
          if ( !v26 )
          {
LABEL_76:
            v20 = *(_QWORD *)(a2 + 96);
            goto LABEL_105;
          }
LABEL_67:
          if ( *(_BYTE *)(a2 + 41) == 1 && *(_WORD *)(a2 + 46) == 15 )
          {
            v54[0] = 0;
            v55 = -1;
            v56 = -2;
            v57 = -1;
            v59 = 0xFFFFFFFFLL;
            v58 = 0;
            LOBYTE(v11) = sub_23140(a2, 1u, SBYTE6(v51), (__int64)v54, v49, a4);
            if ( (_BYTE)v11 )
            {
              v52 = v57;
              if ( (unsigned __int8)sub_23140(a2, 2u, SBYTE6(v51), (__int64)v54, v49, a4) )
              {
                v33 = v57;
                v34 = v52;
              }
              else
              {
                v33 = v52;
                v34 = v9;
              }
              v21 = *(_WORD *)(a2 + 24);
              switch ( v21 )
              {
                case 5:
                  v20 = v34 >> v33;
                  goto LABEL_172;
                case 6:
                  v20 = (unsigned int)(v34 << v33);
                  if ( v56 < -1 )
                    goto LABEL_149;
                  goto LABEL_140;
                case 7:
                  v20 = (unsigned int)v34 >> v33;
                  if ( v56 < -1 )
                    goto LABEL_149;
                  goto LABEL_140;
                case 8:
                  v20 = rotate_left();
                  goto LABEL_172;
                case 9:
                  v20 = -v33;
LABEL_172:
                  if ( v56 >= -1 && v57 )
                  {
                    *(_QWORD *)&v58 = 0;
                    qfree();
                  }
                  if ( v20 != -1 )
                    goto LABEL_25;
                  goto LABEL_43;
                case 10:
                  v20 = v33 & v34;
                  if ( v56 < -1 )
                    goto LABEL_149;
                  goto LABEL_140;
                case 11:
                  v20 = v33 ^ v34;
                  if ( v56 < -1 )
                    goto LABEL_149;
                  goto LABEL_140;
                case 12:
                  goto LABEL_148;
                case 13:
                  goto LABEL_161;
                case 14:
                  v20 = v34 + v33;
                  if ( v56 < -1 )
                    goto LABEL_149;
                  goto LABEL_140;
                case 15:
                  v20 = v34 + v33 + 125;
                  if ( v56 < -1 )
                    goto LABEL_149;
                  goto LABEL_140;
                case 16:
                  v34 += 124;
LABEL_148:
                  v20 = v34 - v33;
                  if ( v56 < -1 )
                    goto LABEL_149;
                  goto LABEL_140;
                case 17:
                  v33 += 124;
LABEL_161:
                  v20 = v33 - v34;
                  if ( v56 < -1 )
                    goto LABEL_149;
                  goto LABEL_140;
                case 22:
                  v20 = v33 | v34;
                  if ( v56 < -1 )
                    goto LABEL_149;
                  goto LABEL_140;
                case 23:
                case 35:
                case 44:
                case 80:
                case 81:
                  goto LABEL_139;
                case 24:
                  v20 = v34 & ~v33;
                  if ( v56 < -1 )
                    goto LABEL_149;
                  goto LABEL_140;
                case 25:
                  v20 = ~v33;
                  if ( v56 < -1 )
                    goto LABEL_149;
                  goto LABEL_140;
                case 30:
                case 31:
                  HIBYTE(v51) = *(_DWORD *)(v50 + 192) > 2;
LABEL_139:
                  v20 = v33;
                  if ( v56 < -1 )
                    goto LABEL_149;
LABEL_140:
                  if ( v57 )
                  {
                    *(_QWORD *)&v58 = 0;
                    qfree();
                    goto LABEL_25;
                  }
LABEL_149:
                  if ( HIBYTE(v51) )
                    goto LABEL_26;
                  if ( !BYTE6(v51) )
                    return v20 & 0xFFFFFFFFFFFFFFFCLL;
                  result = v20 | 1;
                  break;
                default:
                  if ( v56 >= -1 && v57 )
                  {
                    *(_QWORD *)&v58 = 0;
                    qfree();
                  }
                  goto LABEL_43;
              }
              return result;
            }
            if ( v56 >= -1 && v57 )
            {
              *(_QWORD *)&v58 = 0;
              qfree();
            }
            return -1;
          }
          LOBYTE(v11) = 1;
          v25 = (_BYTE)v15 == 0;
LABEL_44:
          if ( v25 )
            return -1;
          while ( 1 )
          {
LABEL_37:
            v24 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 16LL);
            if ( v24 == sub_21D40 )
            {
              if ( callui(1110, v9, &v53, 2, &callui, v13, v49, v50, v51, v52) != 2 )
                goto LABEL_39;
              v23 = v53;
            }
            else
            {
              v23 = ((__int64 (__fastcall *)(__int64, __int64))v24)(a4, v9);
            }
            if ( (unsigned int)(v23 >> 11) - 29 > 2 )
            {
              v9 += 2;
              if ( ((v15 & 0x10) != 0) == (_BYTE)v11 )
                return v9 | 1;
              goto LABEL_36;
            }
LABEL_39:
            v9 += 4;
            if ( ((v15 & 0x10) != 0) == (_BYTE)v11 )
              return v9 | 1;
LABEL_36:
            LOBYTE(v15) = 2 * v15;
            if ( (v15 & 0x1E) == 0 )
              return v9 | 1;
          }
        }
        if ( (unsigned __int16)(v16 - 470) > 1u )
          goto LABEL_67;
        goto LABEL_95;
      }
      if ( v16 > 0x111u )
      {
        v38 = sub_22FB0(SBYTE6(v51), *(unsigned __int16 *)(a2 + 46), v49, a4);
        v39 = sub_22FB0(SBYTE6(v51), *(unsigned __int8 *)(a2 + 72), v49, a4);
        v41 = *(__int64 (__fastcall ***)(__int64, __int64, __int64))a4;
        if ( *(_WORD *)(a2 + 24) == 275 )
        {
          v46 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))v41[2];
          v47 = (unsigned int)(v38 + 2 * v39);
          if ( v46 == sub_21D40 )
          {
            v48 = ((__int64 (__fastcall *)(__int64, __int64, unsigned int *, __int64, __int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD), __int64, __int64, __int64))callui)(
                    1110,
                    v47,
                    &v53,
                    2,
                    &callui,
                    v40,
                    v49,
                    a1);
            v45 = 131070;
            if ( v48 == 2 )
              v45 = 2LL * (unsigned __int16)v53;
          }
          else
          {
            v45 = 2LL * ((unsigned __int16 (__fastcall *)(__int64, __int64))v46)(a4, v47);
          }
        }
        else
        {
          v42 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))v41[1];
          v43 = (unsigned int)(v39 + v38);
          if ( v42 == sub_21CE0 )
          {
            v44 = ((__int64 (__fastcall *)(__int64, __int64, unsigned int *, __int64, __int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD), __int64, __int64, __int64))callui)(
                    1110,
                    v43,
                    &v53,
                    1,
                    &callui,
                    v40,
                    v49,
                    a1);
            v45 = 510;
            if ( v44 == 1 )
              v45 = 2LL * (unsigned __int8)v53;
          }
          else
          {
            v45 = 2LL * ((unsigned __int8 (__fastcall *)(__int64, __int64))v42)(a4, v43);
          }
        }
        v20 = v9 + v45 + 4;
        if ( v9 + v45 == -5 )
          goto LABEL_67;
LABEL_113:
        v21 = *(_WORD *)(a2 + 24);
LABEL_114:
        LOBYTE(v11) = BYTE6(v51);
        goto LABEL_27;
      }
      if ( (unsigned __int16)(v16 - 1) > 0x2Eu )
        goto LABEL_67;
LABEL_16:
      if ( ((1LL << v16) & 0xC20000000018LL) != 0 )
      {
LABEL_95:
        v54[0] = 0;
        v55 = -1;
        v56 = -2;
        v57 = -1;
        v59 = 0xFFFFFFFFLL;
        v58 = 0;
        if ( !(unsigned __int8)sub_23140(a2, 0, SBYTE6(v51), (__int64)v54, v49, a4) )
        {
          if ( v56 >= -1 && v57 )
          {
            *(_QWORD *)&v58 = 0;
            qfree();
          }
          goto LABEL_67;
        }
        v20 = v57;
        if ( *(_BYTE *)(a2 + 41) == 7 )
          v20 = v55;
        if ( v56 >= -1 && v57 )
        {
          *(_QWORD *)&v58 = 0;
          qfree();
        }
        goto LABEL_24;
      }
      if ( ((1LL << v16) & 0x40200000000LL) != 0 )
      {
        if ( v16 == 33 )
        {
          if ( (BYTE1(*(_QWORD *)(a2 + 104)) & 0x80u) == 0 )
            goto LABEL_67;
          v27 = *(unsigned __int16 *)(a2 + 46);
          if ( (unsigned __int16)v27 > 0xC2u )
            goto LABEL_67;
        }
        else
        {
          if ( (BYTE1(*(_QWORD *)(a2 + 64)) & 0x80u) == 0 )
            goto LABEL_67;
          v27 = 13;
        }
        v29 = sub_22FB0(SBYTE6(v51), v27, v49, a4);
        if ( (*(_BYTE *)(a2 + 28) & 0x90) != 0 || (v30 = -4, *(_WORD *)(a2 + 24) == 42) )
          v30 = (int)(4 * bitcount() - 4);
        v31 = v29 + v30;
        v32 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 24LL);
        if ( v32 == sub_21DA0 )
        {
          if ( ((__int64 (__fastcall *)(__int64, __int64, unsigned int *, __int64, __int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD), __int64, __int64, __int64))callui)(
                 1110,
                 v31,
                 &v53,
                 4,
                 &callui,
                 v28,
                 v49,
                 a1) != 4 )
          {
            v21 = *(_WORD *)(a2 + 24);
            if ( *(int *)(v50 + 192) > 2 )
            {
              result = 0xFFFFFFFFLL;
              if ( v21 != 46 )
                return result;
              v20 = 0xFFFFFFFFLL;
              if ( !BYTE6(v51) )
                return result;
              return v20 & 0xFFFFFFFFFFFFFFFCLL;
            }
            LOBYTE(v11) = BYTE6(v51);
            v20 = 0xFFFFFFFFLL;
            goto LABEL_27;
          }
          v20 = v53;
        }
        else
        {
          v20 = ((unsigned int (__fastcall *)(__int64, __int64))v32)(a4, v31);
        }
        v21 = *(_WORD *)(a2 + 24);
        if ( *(int *)(v50 + 192) <= 2 )
          goto LABEL_114;
LABEL_26:
        LOBYTE(v11) = v20 & 1;
        goto LABEL_27;
      }
      if ( v16 != 1 )
        goto LABEL_67;
      v17 = "LR";
      if ( v12 )
        v17 = "X30";
      v18 = **(__int64 (__fastcall ***)(__int64, __int64, __int64))a4;
      if ( v18 == sub_21CD0 )
        v19 = (*(__int64 (__fastcall **)(char *, __int64))(a4 + 8))(v17, v49);
      else
        v19 = v18(a4, (__int64)v17, v49);
      v20 = *(_QWORD *)(v19 + 8);
LABEL_24:
      if ( v20 == -1 )
        goto LABEL_67;
LABEL_25:
      v21 = *(_WORD *)(a2 + 24);
      LOBYTE(v11) = BYTE6(v51);
      if ( HIBYTE(v51) )
        goto LABEL_26;
LABEL_27:
      if ( v21 == 46 )
        LOBYTE(v11) = BYTE6(v51) ^ 1;
      if ( !(_BYTE)v11 )
        return v20 & 0xFFFFFFFFFFFFFFFCLL;
      result = v20 | 1;
      if ( (v20 | 1) == 0xFFFFFFFFFFFFFFFFLL && (_BYTE)v15 )
        goto LABEL_37;
      return result;
    default:
      return -1;
  }
}

