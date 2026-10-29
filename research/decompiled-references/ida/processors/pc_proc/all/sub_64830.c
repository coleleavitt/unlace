__int64 __fastcall sub_64830(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  unsigned __int8 next_byte; // al
  int v5; // r8d
  __int64 v6; // r12
  int v7; // r13d
  int v8; // r8d
  __int64 v9; // r9
  __int64 v10; // r10
  _BOOL8 v11; // r11
  unsigned __int64 v12; // rax
  int v14; // edx
  char v15; // dl
  __int64 v16; // rdx
  __int64 v17; // rdx

  v3 = a3;
  if ( !a3 )
    v3 = (__int64)*(&off_181A00 + *(unsigned __int8 *)(a2 + 24));
  next_byte = insn_get_next_byte();
  LOBYTE(v5) = 0;
  *(_BYTE *)(a1 + 5193) = next_byte;
  v6 = 160LL * next_byte + v3;
  v7 = (*(char *)(a2 + 33) >> 3) & 1;
  while ( 1 )
  {
    if ( sub_64610(a1, a2, v5) )
    {
      v12 = *(unsigned __int16 *)(v9 + 4);
      if ( (_WORD)v12 )
        break;
    }
    v5 = v8 + 1;
    if ( v5 == 5 )
      return 0;
  }
  if ( v8 == 2 )
  {
    *(_BYTE *)(a1 + 5222) = 1;
    v14 = *(_DWORD *)(a2 + 28);
    v12 = *(unsigned __int16 *)(16 * v10 + v6 + 68);
  }
  else
  {
    v14 = *(_DWORD *)(a2 + 28);
    if ( v8 == 3 )
    {
      v14 &= ~4u;
      *(_DWORD *)(a2 + 28) = v14;
      v12 = *(unsigned __int16 *)(16 * v10 + v6 + 100);
    }
    else if ( v8 == 1 )
    {
      v14 &= ~2u;
      *(_DWORD *)(a2 + 28) = v14;
      v12 = *(unsigned __int16 *)(16 * v10 + v6 + 36);
    }
  }
  if ( (v14 & 0x10) == 0 )
  {
    v11 = 0;
    if ( v7 )
    {
      v11 = 1;
      if ( (v14 & 0x14000) != 0 )
      {
        v15 = *(_BYTE *)(a1 + 5193);
        if ( (_WORD)v12 == 966 )
        {
          v11 = v15 != 124;
        }
        else if ( (unsigned __int16)v12 > 0x3C6u )
        {
          if ( (unsigned __int16)v12 <= 0x542u )
          {
            if ( (unsigned __int16)v12 > 0x532u )
            {
              LOWORD(v12) = v12 - 1331;
              v17 = 49923;
              v11 = !_bittest64(&v17, v12);
            }
            else
            {
              v11 = 0;
              if ( (_WORD)v12 != 991 )
                v11 = (_WORD)v12 != 1006;
            }
          }
        }
        else if ( (unsigned __int16)v12 <= 0x32Fu )
        {
          if ( (unsigned __int16)v12 > 0x325u )
          {
            LOWORD(v12) = v12 - 806;
            v16 = 813;
            v11 = !_bittest64(&v16, v12);
          }
        }
        else if ( (_WORD)v12 == 927 )
        {
          v11 = v8 != 2 || (v15 & 0xEF) != 110;
        }
      }
    }
  }
  return v6 + 16 * (v11 + 2LL * v8);
}

