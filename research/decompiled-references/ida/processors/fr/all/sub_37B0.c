__int64 __fastcall sub_37B0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, int a5, __int16 a6)
{
  __int64 result; // rax
  __int64 v7; // rsi
  __int16 v8; // dx
  int v9; // edx
  __int16 v10; // dx
  char v11; // dl
  char v12; // dl
  int v13; // edx
  __int64 v14; // rcx
  int v15; // edx
  int v16; // edx

  result = a3;
  v7 = *((_DWORD *)qword_A450 + a5) & a2;
  switch ( a4 )
  {
    case 1LL:
      if ( a5 != 1 )
        goto LABEL_66;
      if ( (unsigned int)v7 > 0xF )
        goto LABEL_65;
      *(_BYTE *)(a3 + 1) = 1;
      *(_WORD *)(a3 + 6) = v7;
      *(_BYTE *)(a3 + 5) = 0;
      return result;
    case 2LL:
      if ( a5 != 1 )
        goto LABEL_74;
      if ( (unsigned int)v7 > 0xF )
        goto LABEL_65;
      *(_WORD *)(a3 + 6) = v7;
      *(_BYTE *)(a3 + 1) = 3;
      *(_BYTE *)(a3 + 33) = 0;
      *(_BYTE *)(a3 + 5) = 0;
      return result;
    case 3LL:
      if ( a5 != 1 )
        goto LABEL_72;
      if ( (unsigned int)v7 <= 0xF )
      {
        *(_WORD *)(a3 + 6) = v7;
        *(_BYTE *)(a3 + 1) = 3;
        *(_BYTE *)(a3 + 33) = 2;
        *(_BYTE *)(a3 + 5) = 0;
        return result;
      }
LABEL_65:
      sub_3790();
LABEL_66:
      if ( under_debugger )
        goto LABEL_78;
      interr();
LABEL_68:
      if ( under_debugger )
        goto LABEL_78;
      return interr();
    case 4LL:
      if ( (unsigned int)v7 > 0xF )
        goto LABEL_65;
      *(_WORD *)(a3 + 6) = v7;
      *(_BYTE *)(a3 + 1) = 3;
      *(_BYTE *)(a3 + 33) = 4;
      *(_BYTE *)(a3 + 5) = 0;
      return result;
    case 5LL:
      if ( a5 == 3 )
      {
        *(_BYTE *)(a3 + 1) = 4;
        LODWORD(v7) = (unsigned __int8)(16 * v7) | ((int)v7 >> 4) & 0xF;
      }
      else
      {
        *(_BYTE *)(a3 + 1) = 4;
        if ( (_DWORD)v7 == -1 )
          goto LABEL_43;
      }
      v15 = ((a6 & 0x1000) != 0) + 1;
      if ( (a6 & 0x2000) != 0 )
        v15 = 4;
      *(_QWORD *)(result + 8) = (unsigned int)(v7 * v15);
LABEL_43:
      *(_BYTE *)(result + 32) |= 1u;
      *(_BYTE *)(result + 5) = 0;
      return result;
    case 6LL:
      if ( a5 == 3 )
      {
        *(_BYTE *)(a3 + 1) = 4;
        LODWORD(v7) = (unsigned __int8)(16 * v7) | ((int)v7 >> 4) & 0xF;
      }
      else
      {
        *(_BYTE *)(a3 + 1) = 4;
        if ( (_DWORD)v7 == -1 )
          goto LABEL_49;
      }
      v16 = ((a6 & 0x1000) != 0) + 1;
      if ( (a6 & 0x2000) != 0 )
        v16 = 4;
      *(_QWORD *)(result + 8) = (unsigned int)(v7 * v16);
LABEL_49:
      *(_BYTE *)(result + 32) |= 2u;
      *(_BYTE *)(result + 5) = 0;
      return result;
    case 7LL:
      *(_BYTE *)(a3 + 1) = 3;
      *(_WORD *)(a3 + 6) = 15;
      *(_BYTE *)(a3 + 33) = 2;
      *(_BYTE *)(a3 + 5) = 0;
      return result;
    case 8LL:
      *(_BYTE *)(a3 + 1) = 3;
      *(_WORD *)(a3 + 6) = 15;
      *(_BYTE *)(a3 + 33) = 3;
      *(_BYTE *)(a3 + 5) = 0;
      return result;
    case 9LL:
      *(_BYTE *)(a3 + 1) = 1;
      *(_WORD *)(a3 + 6) = 13;
      *(_BYTE *)(a3 + 5) = 0;
      return result;
    case 10LL:
      *(_BYTE *)(a3 + 1) = 3;
      *(_WORD *)(a3 + 6) = 13;
      *(_BYTE *)(a3 + 33) = 2;
      *(_BYTE *)(a3 + 5) = 0;
      return result;
    case 11LL:
      if ( (unsigned int)v7 > 0xF )
        goto LABEL_68;
      *(_BYTE *)(a3 + 1) = 1;
      v9 = *((_DWORD *)qword_9060 + (int)v7);
      *(_BYTE *)(result + 5) = 1;
      *(_WORD *)(result + 6) = v9;
      return result;
    case 12LL:
      *(_BYTE *)(a3 + 1) = 1;
      *(_WORD *)(a3 + 6) = 33;
      *(_BYTE *)(a3 + 5) = 1;
      return result;
    case 13LL:
      if ( a5 == 3 )
        v7 = (unsigned __int8)(16 * v7) | ((int)v7 >> 4) & 0xFu;
      v10 = *(_WORD *)(a1 + 24);
      if ( v10 == 98 )
      {
        v7 = (unsigned int)(4 * v7);
      }
      else if ( v10 == 89 )
      {
        v7 = (unsigned int)(4 * v7);
      }
      *(_BYTE *)(result + 1) = 5;
      v11 = *((_BYTE *)qword_A440 + a5);
      switch ( v11 )
      {
        case 1:
          v7 = (__int16)v7;
          goto LABEL_30;
        case 2:
          v7 = (int)v7;
          goto LABEL_30;
        case 0:
          v7 = (char)v7;
LABEL_30:
          *(_QWORD *)(result + 8) = v7;
          *(_BYTE *)(result + 5) = v11;
          return result;
      }
      goto LABEL_76;
    case 14LL:
      if ( a5 == 3 )
        LODWORD(v7) = (unsigned __int8)(16 * v7) | ((int)v7 >> 4) & 0xF;
      v8 = *(_WORD *)(a1 + 24);
      if ( v8 == 76 )
      {
        LODWORD(v7) = 4 * v7;
      }
      else if ( v8 == 77 )
      {
        LODWORD(v7) = 2 * v7;
      }
      *(_BYTE *)(result + 32) |= a6;
      *(_QWORD *)(result + 16) = (int)v7;
      *(_BYTE *)(result + 1) = 3;
      *(_BYTE *)(result + 33) = 1;
      *(_BYTE *)(result + 5) = 1;
      return result;
    case 15LL:
      if ( a5 == 3 )
      {
        *(_BYTE *)(a3 + 1) = 7;
        LODWORD(v7) = (unsigned __int8)(16 * v7) | ((int)v7 >> 4) & 0xF;
        goto LABEL_62;
      }
      *(_BYTE *)(a3 + 1) = 7;
      v12 = *((_BYTE *)qword_A440 + a5);
      if ( !v12 )
      {
LABEL_62:
        v13 = (char)v7;
        goto LABEL_35;
      }
      if ( v12 == 1 )
      {
        v13 = (__int16)v7;
LABEL_35:
        v14 = *(_QWORD *)(a1 + 8);
        *(_BYTE *)(result + 5) = 9;
        *(_QWORD *)(result + 16) = v14 + 2 * v13 + 2;
        return result;
      }
      if ( under_debugger )
        goto LABEL_78;
      interr();
LABEL_72:
      if ( under_debugger )
        goto LABEL_78;
      interr();
LABEL_74:
      if ( under_debugger )
        goto LABEL_78;
      interr();
LABEL_76:
      if ( under_debugger )
LABEL_78:
        BUG();
      interr();
      return sub_3C70(10013, v7);
    case 16LL:
      if ( a5 == 3 )
        LODWORD(v7) = (unsigned __int8)(16 * v7) | ((int)v7 >> 4) & 0xF;
      *(_BYTE *)(a3 + 1) = 8;
      *(_QWORD *)(a3 + 8) = (int)v7;
      *(_BYTE *)(a3 + 5) = 0;
      return result;
    default:
      return result;
  }
}

