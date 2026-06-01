__int64 __fastcall sub_263730(__int64 *a1)
{
  __int16 flags; // r13
  unsigned int v2; // ebp

  flags = get_flags_ex();
  v2 = (unsigned __int8)is_spec_ea() == 0 ? 8 : 34;
  if ( (flags & 0xC000) == 0 && (flags & 0x600) != 0x200 )
    set_dummy_name();
  if ( get_ea_name() <= 0 )
  {
    sub_6B870(a1);
    return 18;
  }
  else
  {
    calc_c_cpp_name();
    return v2;
  }
}

