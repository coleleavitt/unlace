__int64 __fastcall sub_8EF0(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // eax
  unsigned int v4; // r9d
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // edx
  unsigned __int8 v8; // r8
  __int64 v9; // r8
  unsigned __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rcx
  int v14; // r9d
  __int64 v15; // rdx
  unsigned int v16; // eax

  v3 = sub_8DC0(a1, a2, a3, 1);
  v5 = v3;
  if ( v3 == -1 )
    return 0;
  v6 = *(unsigned __int16 *)(a2 + 24);
  v7 = v4 >> 9;
  *(_BYTE *)(a2 + 73) = (v4 >> 9) & 0xF;
  if ( (unsigned __int16)v6 > 0x44u )
  {
    v8 = (unsigned __int16)(v6 - 214) <= 2u;
  }
  else
  {
    v8 = 0;
    if ( (unsigned __int16)v6 > 0x3Fu )
    {
      v9 = 21;
      v8 = _bittest64(&v9, (unsigned int)(v6 - 64));
    }
  }
  if ( (v7 & 8) != 0 )
  {
    if ( (unsigned __int8)(((v4 >> 9) & 0xF) - 12) > 3u )
      goto LABEL_20;
  }
  else
  {
    if ( ((v4 >> 9) & 0xF) > 5 )
      return 0;
    if ( (v7 & 0xC) == 0 )
    {
      if ( (v7 & 0xE) != 0 )
        return 0;
LABEL_20:
      v16 = v4;
      *(_BYTE *)(a2 + 41) = 4;
      *(_QWORD *)(a2 + 64) = v5;
      v14 = (v4 >> 18) & 0x1F;
      *(_QWORD *)(a2 + 56) = ((v16 >> 13) & 0x1F) << v5;
      v11 = *(unsigned __int8 *)(a2 + 32);
      if ( (unsigned __int8)v11 > 8u )
        goto LABEL_17;
LABEL_15:
      v15 = 340;
      if ( _bittest64(&v15, v11) )
        LOBYTE(v14) = v14 + 32;
      goto LABEL_17;
    }
  }
  v11 = *(unsigned __int8 *)(a2 + 32);
  *(_BYTE *)(a2 + 41) = 3;
  v12 = (v4 >> 13) & 0x1F;
  if ( (unsigned __int8)v11 <= 8u )
  {
    v13 = 340;
    if ( _bittest64(&v13, v11) )
      LOBYTE(v12) = v12 + 32;
    v14 = (v4 >> 18) & 0x1F;
    *(_BYTE *)(a2 + 72) = v12;
    goto LABEL_15;
  }
  *(_BYTE *)(a2 + 72) = v12;
  v14 = (v4 >> 18) & 0x1F;
LABEL_17:
  *(_WORD *)(a2 + 46) = (unsigned __int8)v14;
  if ( v8 )
    sub_7210(a2);
  return *(unsigned __int16 *)(a2 + 26);
}

