unsigned __int64 __fastcall sub_BC10(__int64 a1, unsigned int a2)
{
  __int16 v2; // bx
  __int16 *v3; // rsi
  char v5; // [rsp+Ch] [rbp-2Ch] BYREF
  char v6; // [rsp+Dh] [rbp-2Bh] BYREF
  __int16 v7; // [rsp+Eh] [rbp-2Ah] BYREF
  __int16 v8; // [rsp+10h] [rbp-28h] BYREF
  __int16 v9; // [rsp+12h] [rbp-26h] BYREF
  __int16 v10; // [rsp+14h] [rbp-24h] BYREF
  _BYTE v11[2]; // [rsp+16h] [rbp-22h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v2 = a2;
  if ( a2 <= 0x7F )
  {
    v5 = a2;
    if ( qfwrite(a1, &v5, 1) == 1 )
      return v12 - __readfsqword(0x28u);
    goto LABEL_10;
  }
  if ( a2 <= 0x3FFE )
  {
    v3 = &v7;
    v7 = __ROL2__(v2 | 0x8000, 8);
    goto LABEL_6;
  }
  if ( a2 > 0x1FFFFFFE )
  {
    v6 = -1;
    if ( qfwrite(a1, &v6, 1) == 1 )
    {
      v11[0] = HIBYTE(a2);
      v11[1] = BYTE2(a2);
      if ( qfwrite(a1, v11, 2) == 2 )
      {
        v3 = &v10;
        v10 = __ROL2__(v2, 8);
        goto LABEL_6;
      }
    }
LABEL_10:
    sub_BA80((__int64)"File write error");
  }
  v9 = __ROL2__(HIWORD(a2) | 0xC000, 8);
  if ( qfwrite(a1, &v9, 2) != 2 )
    goto LABEL_10;
  v3 = &v8;
  v8 = __ROL2__(v2, 8);
LABEL_6:
  if ( qfwrite(a1, v3, 2) != 2 )
    goto LABEL_10;
  return v12 - __readfsqword(0x28u);
}

