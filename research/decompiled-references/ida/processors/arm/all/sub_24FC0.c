__int64 sub_24FC0()
{
  unsigned int v0; // r12d

  v0 = 0;
  if ( get_ea_name() > 0 )
  {
    cleanup_name();
    v0 = 2;
    if ( strcmp(&s1, "security_push_cookie") )
    {
      v0 = 3;
      if ( strcmp(&s1, "security_pop_cookie") )
        return 4 * (unsigned int)(strcmp(&s1, "alloca_probe") == 0);
    }
  }
  return v0;
}
