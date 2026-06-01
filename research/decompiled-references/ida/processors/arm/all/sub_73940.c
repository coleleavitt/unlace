__int64 __fastcall sub_73940(__int64 a1, __int64 a2, char a3, int a4)
{
  int v5; // r8d
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rax
  char *v9; // rax
  __int64 i; // rdx
  char v11; // al
  int v13; // r10d
  int v14; // r9d
  bool v15; // cl
  int v16; // r9d
  __int16 v17; // dx
  int v18; // eax
  int v19; // eax

  v5 = a3 & 0x60;
  if ( (a4 & 0x20) == 0 )
  {
    v13 = (unsigned __int8)a4;
    if ( !(_BYTE)a4 )
    {
      v14 = *(_DWORD *)(a1 + 196);
      v15 = v14 == 77;
      if ( !v14 )
        v15 = (unsigned int)(*(_DWORD *)(a1 + 192) - 11) <= 2;
      if ( !v15 )
      {
        *(_BYTE *)(a2 + 1) = 1;
        v19 = (a4 >> 8) & 0xF;
        *(_BYTE *)(a2 + 5) = 2;
        if ( (a3 & 0x60) == 0 )
          v15 = v19;
        *(_BYTE *)(a2 + 32) = v15;
        *(_WORD *)(a2 + 6) = (a3 & 0x10) == 0 ? 16 : 18;
        goto LABEL_10;
      }
    }
    goto LABEL_16;
  }
  v6 = *(_DWORD *)(a1 + 196);
  if ( v6 )
  {
    if ( v6 != 77 )
      goto LABEL_4;
    goto LABEL_31;
  }
  if ( (unsigned int)(*(_DWORD *)(a1 + 192) - 11) <= 2 )
  {
LABEL_31:
    v13 = (unsigned __int8)a4;
LABEL_16:
    for ( i = 0; i != 14; ++i )
    {
      v16 = byte_8EE70[2 * i];
      if ( v16 > v13 )
        break;
      if ( v16 >= v13 )
      {
        *(_BYTE *)(a2 + 1) = 1;
        v17 = byte_8EE70[2 * (int)i + 1];
        *(_BYTE *)(a2 + 5) = 2;
        *(_WORD *)(a2 + 6) = v17;
        if ( !(v5 | a4 & 0xFC) )
        {
          if ( (a4 & 0x800) != 0 )
            *(_BYTE *)(a2 + 32) |= 3u;
          if ( ((a4 >> 10) & 1) != 0 )
            *(_BYTE *)(a2 + 32) |= 4u;
        }
        goto LABEL_10;
      }
    }
    v18 = *(_DWORD *)(a1 + 196);
    LOBYTE(i) = v18 == 77;
    if ( !v18 )
      LOBYTE(i) = (unsigned int)(*(_DWORD *)(a1 + 192) - 11) <= 2;
    if ( (_BYTE)i || *(_DWORD *)(a1 + 192) == 9999 )
    {
      *(_BYTE *)(a2 + 1) = 11;
      *(_WORD *)(a2 + 6) = v13;
      *(_BYTE *)(a2 + 5) = 2;
      goto LABEL_10;
    }
    return (unsigned int)i;
  }
LABEL_4:
  v7 = (a4 >> 8) & 0xF;
  if ( (a3 & 0x60) != 0 )
    v7 = a3 & 0xF;
  v8 = 4LL * (v7 | a4 & 0x10);
  if ( (a3 & 0x10) != 0 )
    v9 = (char *)&unk_893E0 + v8;
  else
    v9 = (char *)&unk_89460 + v8;
  LODWORD(i) = 0;
  if ( *(_WORD *)v9 != 0xFFFF )
  {
    *(_WORD *)(a2 + 6) = *(_WORD *)v9;
    v11 = v9[2];
    *(_BYTE *)(a2 + 1) = 1;
    *(_BYTE *)(a2 + 5) = 2;
    *(_BYTE *)(a2 + 32) = v11 | 0x80;
LABEL_10:
    LODWORD(i) = 1;
  }
  return (unsigned int)i;
}
