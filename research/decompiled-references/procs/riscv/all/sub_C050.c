void __fastcall sub_C050(__int64 a1, __int64 a2, unsigned __int16 a3, int a4, unsigned __int16 a5)
{
  unsigned int v5; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 **v9; // rdi
  __int64 v10; // rax
  __int64 **v11; // rdi

  HIWORD(v5) = HIWORD(a4);
  LOWORD(v5) = ((unsigned __int16)a4 >> 4) & 0xFE0;
  v7 = (a3 >> 7) & 0x1F | v5;
  if ( a5 == 94 )
  {
    *(_BYTE *)(a2 + 5) = 3;
    goto LABEL_11;
  }
  if ( a5 > 0x5Eu )
  {
    switch ( a5 )
    {
      case 0x78u:
        *(_BYTE *)(a2 + 5) = 15;
        break;
      case 0x178u:
        goto LABEL_18;
      case 0x76u:
        *(_BYTE *)(a2 + 5) = 4;
        break;
    }
  }
  else
  {
    if ( a5 == 18 )
    {
      *(_BYTE *)(a2 + 5) = 2;
      goto LABEL_11;
    }
    if ( a5 <= 0x12u )
    {
      if ( a5 == 16 )
      {
        *(_BYTE *)(a2 + 5) = 0;
        goto LABEL_11;
      }
      if ( a5 != 17 )
        goto LABEL_11;
LABEL_18:
      *(_BYTE *)(a2 + 5) = 1;
      goto LABEL_11;
    }
    if ( a5 == 50 )
      *(_BYTE *)(a2 + 5) = 7;
  }
LABEL_11:
  *(_BYTE *)(a2 + 1) = 4;
  *(_QWORD *)(a2 + 16) = v7 << 52 >> 52;
  *(_WORD *)(a2 + 6) = (a3 >> 15) + ((2 * (_BYTE)a4) & 0x1E);
  v8 = *(_QWORD *)(a1 + 504);
  if ( v8 )
  {
    *(_BYTE *)(v8 + 24) = 1;
    *(_BYTE *)(*(_QWORD *)(a1 + 504) + 25LL) = 1;
    v9 = *(__int64 ***)(a1 + 504);
    if ( v9 )
    {
      sub_BAE0(v9, 12, 12, 7);
      v10 = *(_QWORD *)(a1 + 504);
      if ( v10 )
      {
        *(_BYTE *)(v10 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(a1 + 504) + 25LL) = 1;
        v11 = *(__int64 ***)(a1 + 504);
        if ( v11 )
          sub_BAE0(v11, 32, 32, 25);
      }
    }
  }
}
