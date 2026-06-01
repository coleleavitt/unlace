unsigned __int64 __fastcall sub_2730(__int64 a1, __int16 a2, const char *a3, double a4, double a5)
{
  __int16 v6; // r13
  unsigned __int64 result; // rax

  v6 = a2 & 0x200;
  if ( (a2 & 0x200) == 0 )
  {
    set_processor_type("metapc", 1);
    setinf(9, 4);
    setinf_flag(3, 4, 0);
    setinf_flag(3, 2, 1);
  }
  if ( strcmp(a3, "X-box XE file") )
  {
    result = sub_2240(a1, a2, a4, a5);
    if ( v6 )
      return result;
    return add_til("mssdk_win7", 2);
  }
  result = sub_1A40(a1, a2);
  if ( !v6 )
    return add_til("mssdk_win7", 2);
  return result;
}

