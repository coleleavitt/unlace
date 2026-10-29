__int64 __fastcall sub_7F2C0(__int64 a1, __int64 a2)
{
  __int16 v2; // dx

  v2 = *(_WORD *)(a2 + 26);
  if ( v2 == -1 )
    return sel2para();
  if ( (*(_BYTE *)(a1 + 28) & 0x10) != 0
    && (unsigned __int16)(v2 - 33) > 1u
    && (get_flags_ex(), !(unsigned __int8)is_off()) )
  {
    return sel2para();
  }
  else
  {
    return calc_dataseg();
  }
}
