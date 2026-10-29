void __fastcall sub_10F90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // [rsp+0h] [rbp-8h]

  *(_BYTE *)(a4 + 41) = 1;
  *(_BYTE *)(a4 + 45) = 1;
  *(_BYTE *)(a4 + 81) = 1;
  *(_BYTE *)(a4 + 85) = 1;
  switch ( a2 )
  {
    case 0LL:
      goto LABEL_8;
    case 1LL:
      *(_WORD *)(a4 + 46) = 1;
      *(_WORD *)(a4 + 86) = 3;
      return;
    case 4LL:
      goto LABEL_10;
    case 5LL:
      *(_WORD *)(a4 + 46) = 5;
      *(_WORD *)(a4 + 86) = 7;
      return;
    case 8LL:
      goto LABEL_6;
    case 9LL:
      *(_WORD *)(a4 + 46) = 9;
      *(_WORD *)(a4 + 86) = 11;
      return;
    case 12LL:
      goto LABEL_4;
    case 13LL:
      *(_WORD *)(a4 + 46) = 13;
      *(_WORD *)(a4 + 86) = 5;
      return;
    case 14LL:
      goto LABEL_12;
    case 15LL:
      *(_WORD *)(a4 + 46) = 15;
      *(_WORD *)(a4 + 86) = 7;
      return;
    case 16LL:
      v5 = a4;
      if ( !(unsigned __int8)sub_F580(a4, (__int64)"p", 0, 1, 0) )
        goto LABEL_21;
LABEL_8:
      *(_WORD *)(a4 + 46) = 0;
      *(_WORD *)(a4 + 86) = 2;
      break;
    case 20LL:
      v5 = a4;
      if ( !(unsigned __int8)sub_F580(a4, (__int64)"p", 0, 1, 0) )
        goto LABEL_21;
LABEL_10:
      *(_WORD *)(a4 + 46) = 4;
      *(_WORD *)(a4 + 86) = 6;
      break;
    case 24LL:
      v5 = a4;
      if ( !(unsigned __int8)sub_F580(a4, (__int64)"p", 0, 1, 0) )
        goto LABEL_21;
LABEL_6:
      *(_WORD *)(a4 + 46) = 8;
      *(_WORD *)(a4 + 86) = 10;
      break;
    case 28LL:
      v5 = a4;
      if ( (unsigned __int8)sub_F580(a4, (__int64)"p", 0, 1, 0) )
        goto LABEL_4;
      goto LABEL_21;
    case 30LL:
      v5 = a4;
      if ( !(unsigned __int8)sub_F580(a4, (__int64)"p", 0, 1, 0) )
LABEL_21:
        sub_10D50(v5, (__int64)"p", v6, v7, v8, v9);
LABEL_12:
      *(_WORD *)(a4 + 46) = 14;
      *(_WORD *)(a4 + 86) = 6;
      break;
    case 44LL:
      if ( !(unsigned __int8)sub_F580(a4, (__int64)"4", 0, 1, 0) )
        sub_10CA0((__int64)"interr: ana: adjust_insn_suffix", (__int64)"4", v10, v11, v12, v13, v14);
LABEL_4:
      *(_WORD *)(a4 + 46) = 12;
      *(_WORD *)(a4 + 86) = 4;
      break;
    case 56LL:
      *(_WORD *)(a4 + 46) = 8;
      *(_WORD *)(a4 + 86) = 9;
      break;
    default:
      *(_WORD *)(a4 + 24) = 0;
      break;
  }
}

