__int64 __fastcall sub_AD00(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(char *, __int64, __int64, double),
        __int64 a4)
{
  unsigned __int64 *v6; // rax
  __int64 v7; // rax
  char v8; // al
  __int64 v9; // rax
  __int64 result; // rax
  bool v11; // zf
  char v12; // [rsp+1h] [rbp-1D9h]
  _BYTE v13[8]; // [rsp+2h] [rbp-1D8h] BYREF
  __int64 v14; // [rsp+Ah] [rbp-1D0h]
  int v15; // [rsp+12h] [rbp-1C8h]
  __int64 v16; // [rsp+1Ah] [rbp-1C0h]
  __int128 v17; // [rsp+22h] [rbp-1B8h]
  __int64 v18; // [rsp+32h] [rbp-1A8h]
  __int128 v19; // [rsp+42h] [rbp-198h] BYREF
  __int64 v20; // [rsp+52h] [rbp-188h]
  __int64 v21; // [rsp+5Ah] [rbp-180h]
  __int64 v22; // [rsp+62h] [rbp-178h]
  _BYTE v23[48]; // [rsp+6Ah] [rbp-170h] BYREF
  __int64 v24; // [rsp+9Ah] [rbp-140h]
  char v25; // [rsp+BBh] [rbp-11Fh]
  unsigned __int64 v26; // [rsp+1AAh] [rbp-30h] BYREF

  v26 = __readfsqword(0x28u);
  v6 = (unsigned __int64 *)v23;
  v19 = -1;
  v20 = -1;
  v21 = 0;
  v22 = 0;
  do
  {
    *(_WORD *)v6 = 0;
    v6 += 5;
    *((_WORD *)v6 - 19) = 0;
    *((_WORD *)v6 - 18) = 0;
    *((_DWORD *)v6 - 2) = 0;
    *((_WORD *)v6 - 17) = 0;
    *((_OWORD *)v6 - 2) = 0;
    *(v6 - 2) = 0;
  }
  while ( v6 != &v26 );
  if ( (int)decode_insn() <= 0 )
    return -1;
  v7 = *(_QWORD *)(((__int64 (__fastcall *)(const char *, __int64, double))a3)("CCR", a4, 0.0) + 8);
  switch ( (__int16)v21 )
  {
    case 19:
    case 27:
    case 97:
    case 103:
      v8 = (v7 & 1) == 0;
      goto LABEL_7;
    case 21:
    case 31:
    case 98:
    case 105:
      goto LABEL_6;
    case 22:
    case 99:
      v8 = (v7 & 4) != 0;
      goto LABEL_7;
    case 23:
    case 100:
      v8 = ((v7 & 2) != 0) == (unsigned __int8)v7 >> 7;
      goto LABEL_7;
    case 25:
    case 101:
      if ( (v7 & 4) != 0 || (unsigned __int8)((unsigned int)v7 >> 7) != ((v7 & 2) != 0) )
        return -1;
      goto LABEL_8;
    case 26:
    case 102:
      if ( (v7 & 5) != 0 )
        return -1;
      goto LABEL_8;
    case 30:
    case 104:
      if ( (v7 & 4) == 0 && (unsigned __int8)((unsigned int)v7 >> 7) == ((v7 & 2) != 0) )
        return -1;
      goto LABEL_8;
    case 32:
    case 106:
      if ( (v7 & 5) == 0 )
        return -1;
      goto LABEL_8;
    case 33:
    case 107:
      v8 = ((v7 & 2) != 0) ^ ((unsigned __int8)v7 >> 7);
      goto LABEL_7;
    case 35:
    case 109:
      v8 = (v7 & 4) == 0;
      goto LABEL_7;
    case 37:
    case 95:
    case 111:
      goto LABEL_8;
    case 38:
    case 40:
    case 63:
    case 64:
    case 85:
    case 86:
    case 191:
    case 193:
      v13[0] = 0;
      v14 = -1;
      v15 = -2;
      v16 = -1;
      v18 = 0xFFFFFFFFLL;
      v17 = 0;
      v8 = sub_A680(a1, (__int64)v13, a2, 0, a3, a4);
      if ( !v8 )
        goto LABEL_20;
      if ( (_WORD)v21 == 85 )
      {
        v11 = v16++ == -1;
        v8 = v11;
        goto LABEL_20;
      }
      if ( (unsigned __int16)v21 > 0x55u )
      {
        switch ( (_WORD)v21 )
        {
          case 0xBF:
            v8 = v16 == 0;
            goto LABEL_20;
          case 0xC1:
            v8 = v16 != 0;
            goto LABEL_20;
          case 0x56:
            v11 = v16++ == -1;
            v8 = !v11;
            goto LABEL_20;
        }
        goto LABEL_52;
      }
      if ( (_WORD)v21 == 63 )
      {
        v11 = v16-- == 1;
        v8 = v11;
        goto LABEL_20;
      }
      if ( (unsigned __int16)v21 > 0x3Fu )
      {
        if ( (_WORD)v21 == 64 )
        {
          v11 = v16-- == 1;
          v8 = !v11;
          goto LABEL_20;
        }
        goto LABEL_52;
      }
      if ( (_WORD)v21 != 38 )
      {
        if ( (_WORD)v21 == 40 )
        {
          v8 = (v24 & v16) != 0;
          goto LABEL_20;
        }
LABEL_52:
        v8 = 0;
        goto LABEL_20;
      }
      v8 = (v24 & v16) == 0;
LABEL_20:
      if ( v15 >= -1 && v16 )
      {
        v12 = v8;
        *(_QWORD *)&v17 = 0;
        qfree();
        v8 = v12;
      }
LABEL_7:
      if ( !v8 )
        return -1;
LABEL_8:
      if ( v23[1] == 7 )
      {
        v9 = 0;
      }
      else if ( v23[41] == 7 )
      {
        v9 = 1;
      }
      else
      {
        v9 = 2;
        if ( v25 != 7 )
          return -1;
      }
      result = sub_9AA0(a1, (__int64)&v19, *(_QWORD *)&v23[40 * v9 + 16]);
      break;
    case 43:
    case 113:
      v8 = (v7 & 2) == 0;
      goto LABEL_7;
    case 44:
    case 114:
      LOBYTE(v7) = (unsigned __int8)v7 >> 1;
LABEL_6:
      v8 = v7 & 1;
      goto LABEL_7;
    default:
      return -1;
  }
  return result;
}

