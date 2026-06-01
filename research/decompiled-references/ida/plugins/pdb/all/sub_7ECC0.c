__int64 __fastcall sub_7ECC0(unsigned __int16 *a1, unsigned __int64 a2)
{
  unsigned int v4; // r8d
  int v5; // ecx
  unsigned __int64 v6; // rsi
  __int64 v7; // r9
  unsigned __int64 v8; // r10
  unsigned int v9; // eax
  unsigned __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rax
  unsigned __int64 v13; // rcx

  v4 = 0;
  v5 = *a1;
  if ( (((_WORD)v5 - 387) & 0xFFFD) == 0 )
    return v4;
  v6 = a1[1];
  if ( (_WORD)v6 )
  {
    if ( (unsigned __int16)v6 > 0xFEFFu )
      return v4;
  }
  else
  {
    if ( !(_WORD)v5 )
      return v4;
    if ( (unsigned __int16)(v5 - 257) <= 7u )
    {
      v7 = 209;
      if ( _bittest64(&v7, (unsigned int)(v5 - 257)) )
        return v4;
      v8 = *((int *)a1 + 2);
      v9 = *((_DWORD *)a1 + 3);
      goto LABEL_7;
    }
    if ( (_WORD)v5 == 265 || (_WORD)v5 == 287 )
      return 0;
  }
  v8 = *((int *)a1 + 2);
  v9 = *((_DWORD *)a1 + 3);
  if ( (_WORD)v5 == 194 )
  {
    v10 = v9;
    if ( !v9 )
    {
      v8 = 0;
      v10 = 0;
    }
    goto LABEL_20;
  }
LABEL_7:
  v10 = v9;
  v11 = 20;
  if ( (_WORD)v5 != 21020 )
  {
    if ( (unsigned __int16)(v5 - 487) <= 0x10u )
    {
      v12 = 65793;
      v11 = _bittest64(&v12, (unsigned int)(v5 - 487)) == 0 ? 20 : 24;
      goto LABEL_10;
    }
    if ( (unsigned __int16)(v5 - 193) > 1u )
      goto LABEL_10;
LABEL_20:
    v11 = 22;
  }
LABEL_10:
  v4 = 0;
  v13 = (unsigned int)a1[8] + v11;
  if ( v13 < a2 && v6 < (a2 - v13) / 0x28 )
  {
    if ( (_DWORD)v10 )
    {
      LOBYTE(v4) = v8 < a2 && v8 >= v13 + 40 * v6;
      if ( (_BYTE)v4 )
        LOBYTE(v4) = (a2 - v8) / 0x12 >= v10;
    }
    else
    {
      LOBYTE(v4) = v8 == 0;
    }
  }
  return v4;
}

