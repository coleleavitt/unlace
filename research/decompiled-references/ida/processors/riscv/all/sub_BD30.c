void __fastcall sub_BD30(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rdx
  char v6; // si
  __int64 v7; // rax
  __int64 **v8; // rdi

  LOWORD(a3) = (unsigned __int16)a3 >> 4;
  v5 = a3 << 52 >> 52;
  if ( (unsigned __int16)a4 <= 0x31u )
  {
    if ( (unsigned __int16)a4 > 0xAu )
    {
      switch ( a4 )
      {
        case 11:
        case 14:
          v6 = 0;
          goto LABEL_7;
        case 12:
        case 15:
          v6 = 1;
          goto LABEL_7;
        case 13:
        case 48:
          v6 = 2;
          goto LABEL_7;
        case 49:
          v6 = 7;
          goto LABEL_7;
        default:
          goto LABEL_11;
      }
    }
    goto LABEL_11;
  }
  if ( (_WORD)a4 == 117 )
  {
    v6 = 4;
  }
  else if ( (unsigned __int16)a4 <= 0x75u )
  {
    v6 = 3;
    if ( (_WORD)a4 != 93 )
    {
LABEL_11:
      *(_BYTE *)(a2 + 1) = 5;
      *(_BYTE *)(a2 + 5) = 2;
      *(_QWORD *)(a2 + 8) = v5;
      return;
    }
  }
  else
  {
    v6 = 15;
    if ( (_WORD)a4 != 119 )
    {
      v6 = 1;
      if ( (_WORD)a4 != 375 )
        goto LABEL_11;
    }
  }
LABEL_7:
  *(_BYTE *)(a2 + 5) = v6;
  *(_BYTE *)(a2 + 1) = 4;
  *(_QWORD *)(a2 + 16) = v5;
  v7 = *(_QWORD *)(a1 + 504);
  if ( v7 )
  {
    *(_BYTE *)(v7 + 24) = 1;
    *(_BYTE *)(*(_QWORD *)(a1 + 504) + 25LL) = 1;
    v8 = *(__int64 ***)(a1 + 504);
    if ( v8 )
      sub_BAE0(v8, 32, 32, 20);
  }
}

