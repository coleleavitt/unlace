void __fastcall sub_FF50(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v4; // cx
  __int64 v5; // rax
  __int64 v6; // rdx
  char v7; // al

  v4 = *(_WORD *)(a3 + 24);
  if ( v4 > 0x55u )
  {
    if ( (unsigned __int16)(v4 - 214) <= 1u )
    {
      v6 = 4 * (*(unsigned __int16 *)(a3 + 66) - *(unsigned __int16 *)(a3 + 64)) + 4;
      if ( v4 == 214 )
        v6 = -v6;
      goto LABEL_8;
    }
  }
  else if ( v4 > 0x24u )
  {
    v5 = 1LL << ((unsigned __int8)v4 - 37);
    if ( (v5 & 0x1870000000140LL) != 0 )
    {
      v6 = (int)sub_FE10(a1, a3);
LABEL_8:
      add_auto_stkpnt(a2, *(_QWORD *)(a3 + 16) + *(unsigned __int16 *)(a3 + 26), v6);
      return;
    }
    if ( (v5 & 0x600000001LL) != 0 && *(_BYTE *)(a3 + 41) == 5 && *(_BYTE *)(a3 + 81) == 1 && *(_WORD *)(a3 + 86) == 3 )
    {
      v7 = *(_BYTE *)(a3 + 121);
      if ( !v7 || v7 == 1 && *(_WORD *)(a3 + 126) == 3 )
      {
        v6 = *(_QWORD *)(a3 + 48);
        goto LABEL_8;
      }
    }
  }
}

