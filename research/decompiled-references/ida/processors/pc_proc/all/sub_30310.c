bool __fastcall sub_30310(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 func; // rax
  __int64 v8; // rbp
  unsigned __int64 v9; // rbp

  if ( (unsigned __int16)(*(_WORD *)(a2 + 24) - 16) > 2u )
  {
    LOBYTE(v6) = 0;
    return v6;
  }
  sub_74080(a1, a2, 0, a4, a5, a6);
  func = get_func();
  if ( func )
  {
    if ( (*(_BYTE *)(func + 16) & 1) == 0 )
    {
      LOBYTE(v6) = (unsigned __int16)get_word() == 0xCCCC;
      return v6;
    }
LABEL_5:
    LOBYTE(v6) = 1;
    return v6;
  }
  if ( (get_aflags() & 0x400000) != 0 )
    goto LABEL_5;
  v8 = *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26);
  if ( (unsigned __int16)get_word() == 0xCCCC )
    goto LABEL_5;
  if ( (unsigned __int8)get_byte() == 0xCC )
  {
    v9 = v8 + 1;
    v6 = get_func();
    if ( v6 )
      LOBYTE(v6) = v9 >= *(_QWORD *)(v6 + 8);
    else
      return (v9 & 3) == 0;
  }
  else
  {
    LOBYTE(v6) = 0;
  }
  return v6;
}

