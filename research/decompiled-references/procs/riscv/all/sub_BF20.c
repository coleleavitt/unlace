__int64 __fastcall sub_BF20(__int64 a1, __int64 a2, unsigned __int16 a3, unsigned __int16 a4)
{
  __int64 v4; // rax

  if ( a4 == 93 )
    goto LABEL_14;
  if ( a4 <= 0x5Du )
  {
    if ( a4 != 49 )
    {
      if ( a4 <= 0x31u )
      {
        if ( a4 != 13 )
        {
          if ( a4 == 18 )
            goto LABEL_7;
LABEL_13:
          v4 = 0;
          goto LABEL_9;
        }
LABEL_14:
        v4 = (__int16)(((a3 >> 7) & 0x20 | (a3 >> 2) & 0x1C) + ((16 * (_BYTE)a3) & 0xC0));
        if ( a4 != 93 )
          goto LABEL_8;
LABEL_15:
        *(_BYTE *)(a2 + 5) = 3;
        goto LABEL_9;
      }
      if ( a4 != 50 )
        goto LABEL_13;
      v4 = (a3 >> 7) & 0x38 | (a3 >> 1) & 0x1C0u;
LABEL_20:
      *(_BYTE *)(a2 + 5) = 7;
      goto LABEL_9;
    }
LABEL_16:
    v4 = (__int16)(((a3 >> 7) & 0x20 | (a3 >> 2) & 0x18) + ((16 * a3) & 0x1C0));
    if ( a4 > 0x5Eu )
    {
      *(_BYTE *)(a2 + 5) = 4;
      goto LABEL_9;
    }
    goto LABEL_20;
  }
  if ( a4 == 117 )
    goto LABEL_16;
  if ( a4 == 118 )
  {
    *(_BYTE *)(a2 + 5) = 4;
    v4 = (a3 >> 7) & 0x38 | (a3 >> 1) & 0x1C0u;
    goto LABEL_9;
  }
  if ( a4 != 94 )
    goto LABEL_13;
LABEL_7:
  v4 = (a3 >> 7) & 0x3C | (a3 >> 1) & 0xC0u;
  if ( a4 > 0x5Cu )
    goto LABEL_15;
LABEL_8:
  *(_BYTE *)(a2 + 5) = 2;
LABEL_9:
  *(_QWORD *)(a2 + 16) = v4;
  *(_BYTE *)(a2 + 1) = 4;
  *(_WORD *)(a2 + 6) = 2;
  return 2;
}
