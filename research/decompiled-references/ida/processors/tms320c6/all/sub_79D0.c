__int64 __fastcall sub_79D0(__int64 a1, __int64 a2, __int16 a3, unsigned __int16 a4)
{
  __int64 result; // rax
  __int16 v5; // r8
  int v6; // esi
  __int16 v7; // dx
  unsigned __int16 v8; // si
  __int16 v9; // dx
  __int16 v10; // dx
  __int16 v11; // dx
  __int16 v12; // dx
  __int16 v13; // dx

  result = a2;
  v5 = a4 & 0x60;
  *(_BYTE *)(a2 + 32) = (a4 & 1) + 3;
  if ( v5 == 96 )
  {
    v6 = ((int)a4 >> 11) & 3;
    if ( (_BYTE)v6 != 2 )
    {
      if ( (_BYTE)v6 == 3 )
      {
        *(_BYTE *)(result + 41) = 1;
        *(_WORD *)(result + 24) = 62;
        v8 = a4 >> 13;
        *(_BYTE *)(result + 45) = 2;
        v11 = (a4 >> 7) & 7;
        if ( (a4 & 1) != 1 )
        {
          *(_WORD *)(result + 46) = v11;
          *(_BYTE *)(result + 121) = 1;
          *(_BYTE *)(result + 125) = 2;
          *(_WORD *)(result + 126) = v11;
          goto LABEL_10;
        }
        v12 = v11 + 32;
        *(_BYTE *)(result + 121) = 1;
        *(_WORD *)(result + 46) = v12;
        *(_BYTE *)(result + 125) = 2;
        *(_WORD *)(result + 126) = v12;
        goto LABEL_9;
      }
      goto LABEL_4;
    }
    v7 = 57;
  }
  else
  {
    v6 = ((int)a4 >> 5) & 3;
    if ( (_BYTE)v6 != 2 )
    {
      if ( (_BYTE)v6 == 3 )
      {
        *(_BYTE *)(result + 41) = 1;
        *(_BYTE *)(result + 45) = 2;
        v8 = a4 >> 13;
        v13 = (a4 >> 7) & 7;
        if ( (a4 & 1) == 1 )
        {
          v13 += 32;
          *(_BYTE *)(result + 121) = 1;
          *(_WORD *)(result + 46) = v13;
        }
        else
        {
          *(_WORD *)(result + 46) = v13;
          *(_BYTE *)(result + 121) = 1;
        }
        *(_BYTE *)(result + 125) = 2;
        *(_WORD *)(result + 126) = v13;
        goto LABEL_7;
      }
LABEL_4:
      v7 = ((_BYTE)v6 == 1) + 55;
      goto LABEL_5;
    }
    v7 = (a3 & 0x4000) == 0 ? 57 : 62;
  }
LABEL_5:
  *(_WORD *)(result + 24) = v7;
  *(_BYTE *)(result + 41) = 1;
  v8 = a4 >> 13;
  *(_BYTE *)(result + 45) = 2;
  v9 = (a4 >> 7) & 7;
  if ( (a4 & 1) == 1 )
  {
    v10 = v9 + 32;
    *(_BYTE *)(result + 121) = 1;
    *(_WORD *)(result + 46) = v10;
    *(_BYTE *)(result + 125) = 2;
    *(_WORD *)(result + 126) = v10;
    if ( v5 != 96 )
      goto LABEL_7;
LABEL_9:
    v8 = (char)(v8 + 32);
    goto LABEL_10;
  }
  *(_WORD *)(result + 46) = v9;
  *(_BYTE *)(result + 121) = 1;
  *(_BYTE *)(result + 125) = 2;
  *(_WORD *)(result + 126) = v9;
  if ( v5 != 96 )
  {
LABEL_7:
    *(_BYTE *)(result + 81) = 5;
    *(_BYTE *)(result + 85) = 2;
    *(_QWORD *)(result + 88) = v8 | (8 * (a4 >> 11)) & 0x18u;
    return result;
  }
LABEL_10:
  *(_BYTE *)(result + 81) = 1;
  *(_BYTE *)(result + 85) = 2;
  *(_WORD *)(result + 86) = v8;
  return result;
}

