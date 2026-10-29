void __fastcall sub_8740(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbp
  unsigned __int16 next_word; // ax
  int v9; // eax
  int v10; // eax

  if ( (int)a2 <= 7 )
  {
    *(_BYTE *)(a3 + 1) = 1;
    *(_WORD *)(a3 + 6) = a2 + 13;
    *(_BYTE *)(a3 + 5) = 1;
    return;
  }
  if ( (int)a2 <= 11 )
  {
    sub_7FF0(a2 - 8, (unsigned __int8 *)a3, (__int64)a4);
    return;
  }
  if ( (int)a2 <= 15 )
  {
    sub_7FF0(a2 - 12, (unsigned __int8 *)a3, (__int64)a4);
    *(_BYTE *)(a3 + 33) = 1;
    return;
  }
  if ( (int)a2 <= 23 )
  {
    sub_7FF0(a2 - 16, (unsigned __int8 *)a3, (__int64)a4);
    *(_BYTE *)(a3 + 1) = 4;
    LOBYTE(v9) = insn_get_next_byte();
    *(_BYTE *)(a3 + 34) = 0;
    v9 = (unsigned __int8)v9;
    if ( (v9 & 0x80u) != 0 )
      v9 |= 0xFFFFFF80;
    *(_QWORD *)(a3 + 16) = v9;
  }
  else
  {
    if ( (int)a2 <= 27 )
    {
      sub_7FF0(a2 - 24, (unsigned __int8 *)a3, (__int64)a4);
      *(_BYTE *)(a3 + 1) = 4;
    }
    else
    {
      if ( (int)a2 <= 29 )
      {
        sub_7FF0(a2 - 28, (unsigned __int8 *)a3, (__int64)a4);
        *(_BYTE *)(a3 + 33) = 2;
        *(_WORD *)(a3 + 26) = 20;
        return;
      }
      if ( (_DWORD)a2 != 30 )
      {
        a4[32] = 26;
        a4[28] = *(_BYTE *)a3;
        *(_BYTE *)(a3 + 1) = 2;
        v7 = sub_8260(a4, a2, a3, (__int64)a4, a5, a6);
        next_word = insn_get_next_word();
        *(_BYTE *)(a3 + 5) = 1;
        *(_QWORD *)(a3 + 16) = next_word | (unsigned __int64)(v7 << 16);
        return;
      }
      *(_WORD *)(a3 + 6) = 3;
      a4[32] = 25;
      a4[28] = *(_BYTE *)a3;
      ++*(_BYTE *)(a3 + 32);
      *(_BYTE *)(a3 + 5) = 1;
      *(_BYTE *)(a3 + 1) = 4;
    }
    LOWORD(v10) = insn_get_next_word();
    *(_BYTE *)(a3 + 34) = 1;
    v10 = (unsigned __int16)v10;
    if ( (v10 & 0x8000u) != 0 )
      v10 |= 0xFFFF8000;
    *(_QWORD *)(a3 + 16) = v10;
  }
}

