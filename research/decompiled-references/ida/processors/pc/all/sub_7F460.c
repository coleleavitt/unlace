__int64 __fastcall sub_7F460(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  __int64 v4; // [rsp+10h] [rbp-38h]

  v2 = *(_WORD *)(a2 + 26);
  if ( v2 == -1 )
    return *(unsigned __int16 *)(a2 + 24);
  if ( (*(_BYTE *)(a1 + 28) & 0x10) != 0 && (unsigned __int16)(v2 - 33) > 1u )
  {
    get_flags_ex();
    if ( !(unsigned __int8)is_off() )
      return 0;
  }
  v4 = _mm_load_si128((const __m128i *)&xmmword_95060).m128i_i64[1];
  if ( (unsigned __int8)get_fixup() )
    return v4;
  get_sreg();
  return get_group_selector();
}
