__int64 __fastcall sub_EC30(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        char a5,
        unsigned __int8 a6)
{
  char v7; // bp
  __int64 result; // rax
  __int64 v10; // rsi
  __int16 v11; // ax
  __int16 v12; // dx
  __int64 v13; // rax
  __int64 **v14; // rdi

  v7 = a4;
  if ( a5 == 1 )
  {
    if ( a6 > 5u )
    {
      if ( a6 == 48 )
      {
        v12 = (a4 >> 4) & 0x1F;
        if ( ((a4 >> 4) & 0x1F) == 1 )
        {
          *(_WORD *)(a2 + 24) = 356;
          goto LABEL_5;
        }
        if ( (_BYTE)v12 == 2 )
        {
          *(_WORD *)(a2 + 24) = 354;
          goto LABEL_5;
        }
        result = 0;
        if ( !(_BYTE)v12 )
        {
          *(_WORD *)(a2 + 24) = 352;
          goto LABEL_5;
        }
        return result;
      }
    }
    else
    {
      if ( a6 > 3u )
      {
        *(_BYTE *)(a2 + 121) = 5;
        *(_WORD *)(a2 + 24) = 25;
        *(_BYTE *)(a2 + 125) = 2;
        *(_QWORD *)(a2 + 128) = (a4 >> 4) & 0x3F;
        *(_WORD *)(a2 + 28) = 1794;
        goto LABEL_5;
      }
      if ( !a6 )
      {
        *(_WORD *)(a2 + 24) = 52;
        goto LABEL_11;
      }
    }
    return 0;
  }
  if ( a5 != 5 )
  {
    result = 0;
    if ( a5 )
      return result;
    v10 = a2 + 120;
    *(_WORD *)(v10 - 96) = 51;
    sub_BD30(a1, v10, a4, 51);
    if ( *(_QWORD *)(a2 + 128) )
    {
      v13 = *(_QWORD *)(a1 + 504);
      if ( v13 )
      {
        *(_BYTE *)(v13 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(a1 + 504) + 25LL) = 1;
        v14 = *(__int64 ***)(a1 + 504);
        if ( v14 )
          sub_BAE0(v14, 32, 32, 20);
      }
    }
    goto LABEL_5;
  }
  if ( a6 == 32 )
  {
    *(_WORD *)(a2 + 24) = 54;
    goto LABEL_11;
  }
  if ( a6 == 48 )
  {
    *(_WORD *)(a2 + 24) = 368;
    goto LABEL_11;
  }
  result = 0;
  if ( !a6 )
  {
    *(_WORD *)(a2 + 24) = 53;
LABEL_11:
    *(_BYTE *)(a2 + 121) = 5;
    *(_BYTE *)(a2 + 125) = 2;
    *(_QWORD *)(a2 + 128) = (a4 >> 4) & 0x3F;
LABEL_5:
    v11 = *(_WORD *)(a2 + 34);
    *(_BYTE *)(a2 + 41) = 1;
    *(_BYTE *)(a2 + 81) = 1;
    *(_WORD *)(a2 + 46) = (a3 >> 7) & 0x1F;
    LOBYTE(v11) = (v11 & 4) == 0 ? 2 : 7;
    *(_WORD *)(a2 + 86) = (a3 >> 15) + ((2 * v7) & 0x1E);
    *(_BYTE *)(a2 + 45) = v11;
    *(_BYTE *)(a2 + 85) = v11;
    return *(unsigned __int16 *)(a2 + 26);
  }
  return result;
}
