__int64 __fastcall sub_5CA0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  __int16 v5; // di
  char v7; // si
  int v8; // r8d
  __int64 v10; // rsi
  __int64 v11; // rax

  v3 = HIBYTE(a3) - 128;
  if ( (unsigned int)v3 > 0x4A )
    return 0;
  v5 = *((_WORD *)qword_A4E0 + 2 * v3);
  *(_WORD *)(a2 + 24) = v5;
  v7 = *((_BYTE *)qword_A4E0 + 4 * v3 + 2);
  if ( v7 != 1 )
  {
    v8 = (a3 >> 19) & 0x1F;
    if ( v7 != 2 )
    {
      if ( v7 != -2 )
      {
        if ( v5 != 67 )
          return 1;
LABEL_11:
        if ( *(_BYTE *)(a2 + 41) == 2 )
        {
          v11 = *(_QWORD *)(a2 + 56);
          *(_BYTE *)(a2 + 41) = 5;
          *(_BYTE *)(a2 + 45) = 2;
          *(_QWORD *)(a2 + 48) = v11;
        }
        return 1;
      }
      *(_BYTE *)(a2 + 41) = 1;
      v10 = a2 + 80;
      *(_BYTE *)(a2 + 45) = 2;
      *(_WORD *)(a2 + 46) = v8;
      goto LABEL_9;
    }
    *(_BYTE *)(a2 + 81) = 1;
    *(_BYTE *)(a2 + 85) = 2;
    *(_WORD *)(a2 + 86) = v8;
  }
  v10 = a2 + 40;
LABEL_9:
  if ( (unsigned __int8)sub_5A50(a1, a2, v10, a3, *((_BYTE *)qword_A4E0 + 4 * v3 + 3)) )
  {
    if ( *(_WORD *)(a2 + 24) != 67 )
      return 1;
    goto LABEL_11;
  }
  return 0;
}

