__int64 sub_EDE00()
{
  if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) != 0 || get_func() )
    return 0;
  else
    return add_func_ex();
}

