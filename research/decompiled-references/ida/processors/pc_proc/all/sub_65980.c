__int64 __fastcall sub_65980(__int64 a1, __int64 a2, int a3, char a4)
{
  unsigned __int64 *v7; // rax
  char v8; // al
  char v9; // dl
  __int64 v10; // rcx
  char next_byte; // bp
  __int16 v12; // ax
  _BYTE v13[360]; // [rsp+0h] [rbp-198h] BYREF
  unsigned __int64 v14; // [rsp+168h] [rbp-30h] BYREF

  v14 = __readfsqword(0x28u);
  if ( (getinf() & 1) == 0 || *(_BYTE *)(a2 + 33) )
    return 0;
  v7 = (unsigned __int64 *)&v13[40];
  *(_QWORD *)&v13[24] = 0;
  *(_QWORD *)&v13[32] = 0;
  memset(v13, 255, 24);
  do
  {
    *(_WORD *)v7 = 0;
    v7 += 5;
    *((_WORD *)v7 - 19) = 0;
    *((_WORD *)v7 - 18) = 0;
    *((_DWORD *)v7 - 2) = 0;
    *((_WORD *)v7 - 17) = 0;
    *((_OWORD *)v7 - 2) = 0;
    *(v7 - 2) = 0;
  }
  while ( &v14 != v7 );
  if ( a3 == 61 )
  {
    *(_BYTE *)(a2 + 41) = 0;
    *(_WORD *)(a2 + 24) = 213;
  }
  else if ( a3 > 61 )
  {
    if ( a3 != 62 )
      return 0;
    qmemcpy(v13, (const void *)a2, sizeof(v13));
    next_byte = insn_get_next_byte();
    insn_get_next_byte();
    switch ( next_byte )
    {
      case -24:
        v12 = 297;
        break;
      case -22:
        v12 = 298;
        break;
      case -20:
        v12 = 337;
        break;
      case -18:
        v12 = 338;
        break;
      case -16:
        v12 = 299;
        break;
      case -14:
        v12 = 300;
        break;
      default:
        goto LABEL_16;
    }
    *(_WORD *)(a2 + 24) = v12;
    *(_BYTE *)(a2 + 44) &= ~8u;
    *(_BYTE *)(a2 + 41) = 11;
    *(_WORD *)(a2 + 46) = 0;
  }
  else if ( a3 == 60 )
  {
    if ( *(_BYTE *)(a2 + 32) )
      return 0;
    qmemcpy(v13, (const void *)a2, sizeof(v13));
    v8 = insn_get_next_byte();
    v9 = v8 & 0xC0;
    if ( (v8 & 0xC0) == 0x80 )
    {
      *(_BYTE *)(a2 + 32) = 30;
    }
    else if ( (v8 & 0xC0u) > 0x80 )
    {
      if ( v9 == -64 )
        *(_BYTE *)(a2 + 32) = 29;
    }
    else
    {
      *(_BYTE *)(a2 + 32) = (v9 == 0) + 31;
    }
    v10 = 16777217;
    if ( !_bittest64(&v10, v8 & 0x38) )
    {
LABEL_16:
      qmemcpy((void *)a2, v13, 0x168u);
      return 0;
    }
    *(_WORD *)(a2 + 24) = 0;
    *(_BYTE *)(a1 + 5221) = 0;
    if ( !(unsigned __int8)sub_65170(a1, a2, v8 & 7 | 0xD8u, a4) )
    {
      *(_BYTE *)(a1 + 5221) = 1;
      goto LABEL_16;
    }
  }
  else
  {
    if ( a3 <= 51 )
      return 0;
    qmemcpy(v13, (const void *)a2, sizeof(v13));
    if ( !(unsigned __int8)sub_65170(a1, a2, a3 + 164, a4) )
      goto LABEL_16;
  }
  return 1;
}

