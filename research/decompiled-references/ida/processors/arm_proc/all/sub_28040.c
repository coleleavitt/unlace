bool __fastcall sub_28040(__int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // r13d
  __int16 v5; // dx
  int dword; // eax
  char v8; // al
  char v9; // al
  __int16 v10; // ax
  __m128i si128; // [rsp+8h] [rbp-50h]

  v4 = a3 & 2;
  if ( (a3 & 2) != 0 )
  {
    if ( (unsigned __int16)(get_word() - 1) > 0xFFFDu )
      return 0;
    v5 = *(_WORD *)(a2 + 24);
    if ( v5 == 288 )
      return 0;
  }
  else
  {
    dword = get_dword();
    if ( dword == 0xFFFF || dword == 0 )
      return 0;
    if ( dword == -1 )
      return 0;
    v5 = *(_WORD *)(a2 + 24);
    if ( v5 == 288 )
      return 0;
  }
  if ( (~*(_BYTE *)(a2 + 32) & 0xF) == 0 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 0x40) == 0 )
  {
    if ( (unsigned __int8)segtype() != 2 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_89530);
      get_fixup();
    }
    if ( (a3 & 4) != 0 && !sub_21B30(a2) )
    {
      v8 = 1;
      if ( *(_DWORD *)(a1 + 212) )
        v8 = (unsigned __int64)(get_sreg() - 1) <= 0xFFFFFFFFFFFFFFFDLL;
      if ( v8 != (unsigned __int8)(v4 >> 1) )
        return 0;
    }
    if ( (a3 & 1) != 0 && (*(_BYTE *)(a2 + 32) & 0xF) != 0xE && *(_WORD *)(a2 + 24) != 3 )
      return 0;
    v9 = *(_BYTE *)(a2 + 41);
    if ( (v9 == 2 || v9 == 7) && !(unsigned __int8)is_mapped() )
      return 0;
    if ( *(_WORD *)(a2 + 26) <= 3u )
    {
      v10 = *(_WORD *)(a2 + 24);
      if ( v10 == 4
        || v10 == 46
        || v10 == 23 && *(_BYTE *)(a2 + 41) == 1 && *(_WORD *)(a2 + 46) == 14 && *(_BYTE *)(a2 + 81) == 5 )
      {
        return 0;
      }
    }
    if ( (a3 & 4) != 0 && (get_flags_ex() & 0x1000) != 0 && (unsigned __int8)xrefblk_t_first_to() )
    {
      while ( (unsigned __int8)(si128.m128i_i8[9] - 2) > 1u )
      {
        if ( !(unsigned __int8)xrefblk_t_next_to() )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  if ( *(_BYTE *)(a2 + 72) == 1 )
    return 1;
  if ( (unsigned int)(*(char *)(a2 + 72) - 14) > 1 )
    return 0;
  return (v5 & 0xFFFD) == 89;
}

