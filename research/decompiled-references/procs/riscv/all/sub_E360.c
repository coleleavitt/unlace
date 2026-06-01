__int64 __fastcall sub_E360(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        unsigned __int8 a5,
        __int64 a6)
{
  __int16 v8; // si
  char v9; // r8
  __int16 v10; // si
  int v11; // esi

  switch ( a6 )
  {
    case 0LL:
      v8 = a79[a5];
      *(_WORD *)(a2 + 24) = v8;
      goto LABEL_5;
    case 1LL:
      v8 = word_2ADA0[a5];
      *(_WORD *)(a2 + 24) = v8;
      goto LABEL_5;
    case 2LL:
    case 3LL:
    case 5LL:
    case 6LL:
    case 7LL:
    case 8LL:
    case 9LL:
    case 10LL:
    case 11LL:
    case 12LL:
    case 13LL:
    case 14LL:
    case 15LL:
    case 17LL:
    case 18LL:
    case 19LL:
    case 20LL:
    case 21LL:
    case 22LL:
    case 23LL:
    case 24LL:
    case 25LL:
    case 26LL:
    case 27LL:
    case 28LL:
    case 29LL:
    case 30LL:
    case 31LL:
      return 0;
    case 4LL:
      if ( !a5 )
      {
        *(_WORD *)(a2 + 24) = 28;
        *(_WORD *)(a2 + 28) = 1794;
LABEL_6:
        v9 = 1;
        goto LABEL_7;
      }
      if ( a5 != 4 )
        return 0;
      if ( (a4 & 0x1F0) != 0 )
      {
        *(_WORD *)(a2 + 24) = 393;
        goto LABEL_6;
      }
      v9 = 0;
      *(_WORD *)(a2 + 24) = 374;
      *(_WORD *)(a2 + 28) = 514;
LABEL_7:
      v10 = *(_WORD *)(a2 + 34);
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 81) = 1;
      *(_WORD *)(a2 + 46) = (a3 >> 7) & 0x1F;
      v11 = (v10 & 4) == 0 ? 2 : 7;
      *(_WORD *)(a2 + 86) = ((2 * (_BYTE)a4) & 0x1E) + (a3 >> 15);
      *(_BYTE *)(a2 + 45) = v11;
      *(_BYTE *)(a2 + 85) = v11;
      if ( v9 )
      {
        *(_BYTE *)(a2 + 121) = 1;
        *(_BYTE *)(a2 + 125) = v11;
        *(_WORD *)(a2 + 126) = (a4 >> 4) & 0x1F;
      }
      return *(unsigned __int16 *)(a2 + 26);
    case 16LL:
      if ( (a5 & 1) != 0 )
        return 0;
      *(_WORD *)(a2 + 28) = 1794;
      v8 = word_2AD90[a5 >> 1];
      *(_WORD *)(a2 + 24) = v8;
      goto LABEL_5;
    case 32LL:
      v8 = word_2AD80[a5];
      *(_WORD *)(a2 + 24) = v8;
      goto LABEL_5;
    default:
      if ( (_BYTE)a6 != 48 )
        return 0;
      v8 = word_2AD70[a5];
      *(_WORD *)(a2 + 24) = v8;
LABEL_5:
      if ( v8 )
        goto LABEL_6;
      return 0;
  }
}
