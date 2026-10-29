const char *__fastcall sub_DAA0(__int64 a1, __int64 a2, _BYTE *a3)
{
  if ( (unsigned int)qsscanf() != 2 )
    return sub_D7F0((__int64 *)a1, a3);
  if ( (*(_BYTE *)(a1 + 80) & 4) == 0 )
    return sub_D7F0((__int64 *)a1, a3);
  if ( !getseg() )
    return sub_D7F0((__int64 *)a1, a3);
  create_data();
  if ( (unsigned int)get_dword() == 0xFFFFFFFFLL )
    return sub_D7F0((__int64 *)a1, a3);
  get_default_reftype();
  op_offset();
  add_entry();
  if ( *(_BYTE *)skip_spaces() )
    set_cmt();
  return nullptr;
}

