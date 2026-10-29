__int64 __fastcall sub_6D30(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  __int16 v4; // r8
  __int16 v5; // dx
  int v6; // eax
  __int64 v7; // rdi
  char v8; // dl
  __int64 result; // rax
  __int64 v10; // rsi
  char v11; // dl

  *(_BYTE *)(a2 + 32) = 8;
  v4 = a4 & 0x1000;
  v5 = ((unsigned __int16)a4 >> 7) & 0x1F;
  v6 = ((a4 & 0x2000) != 0) + 1;
  if ( (a4 & 0x4000) == 0 )
  {
    v7 = a2 + 80;
    if ( a4 < 0 )
    {
      *(_BYTE *)(a2 + 41) = 8;
      *(_WORD *)(a2 + 24) = 214;
      *(_BYTE *)(a2 + 114) = 0;
      *(_BYTE *)(a2 + 45) = 2;
      *(_WORD *)(a2 + 46) = v5;
      if ( v4 )
      {
        v10 = a2 + 40;
        goto LABEL_15;
      }
      *(_BYTE *)(a2 + 81) = 4;
      *(_BYTE *)(a2 + 85) = 2;
    }
    else
    {
      *(_BYTE *)(a2 + 41) = 1;
      *(_WORD *)(a2 + 24) = 68;
      *(_BYTE *)(a2 + 45) = 2;
      *(_WORD *)(a2 + 46) = v5;
      if ( !v4 )
      {
        *(_BYTE *)(a2 + 81) = 4;
        v11 = 10;
        *(_BYTE *)(a2 + 85) = 2;
LABEL_18:
        *(_BYTE *)(v7 + 33) = v11;
        *(_WORD *)(v7 + 6) = 47;
        result = 4 * v6;
        *(_QWORD *)(v7 + 16) = (int)result;
        return result;
      }
      *(_BYTE *)(a2 + 81) = 4;
      *(_WORD *)(a2 + 46) = v5 + 32;
      *(_BYTE *)(a2 + 85) = 2;
    }
    v8 = 10;
    goto LABEL_6;
  }
  v7 = a2 + 40;
  if ( a4 >= 0 )
  {
    *(_BYTE *)(a2 + 81) = 1;
    *(_WORD *)(a2 + 24) = 24;
    *(_BYTE *)(a2 + 85) = 2;
    *(_WORD *)(a2 + 86) = v5;
    if ( v4 )
    {
      *(_BYTE *)(a2 + 41) = 4;
      *(_WORD *)(a2 + 86) = v5 + 32;
      *(_BYTE *)(a2 + 45) = 2;
LABEL_5:
      v8 = 9;
LABEL_6:
      *(_BYTE *)(v7 + 33) = v8;
      *(_WORD *)(v7 + 6) = 47;
      result = v6 << ((a4 < 0) + 2);
      *(_QWORD *)(v7 + 16) = (int)result;
      return result;
    }
    *(_BYTE *)(a2 + 41) = 4;
    v11 = 9;
    *(_BYTE *)(a2 + 45) = 2;
    goto LABEL_18;
  }
  *(_BYTE *)(a2 + 81) = 8;
  *(_WORD *)(a2 + 24) = 140;
  *(_BYTE *)(a2 + 114) = 0;
  *(_BYTE *)(a2 + 85) = 2;
  *(_WORD *)(a2 + 86) = v5;
  if ( v4 )
  {
    v10 = a2 + 80;
LABEL_15:
    *(_WORD *)(v10 + 6) = v5 + 32;
    v8 = 10;
    *(_BYTE *)(v7 + 1) = 4;
    *(_BYTE *)(v7 + 5) = 2;
    if ( (a4 & 0x4000) == 0 )
      goto LABEL_6;
    goto LABEL_5;
  }
  *(_BYTE *)(a2 + 41) = 4;
  *(_BYTE *)(a2 + 45) = 2;
  result = 8 * v6;
  *(_BYTE *)(a2 + 73) = 9;
  *(_WORD *)(a2 + 46) = 47;
  *(_QWORD *)(a2 + 56) = (int)result;
  return result;
}

