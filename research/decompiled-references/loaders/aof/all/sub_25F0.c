__int64 __fastcall sub_25F0(__int64 a1, const char *a2, char a3, unsigned __int8 a4)
{
  __int64 result; // rax

  result = (__int64)strstr(a2, "$litpool_e$");
  if ( !result )
  {
    if ( (a3 & 2) != 0 )
    {
      add_entry(a1, a1, a2, a4, 1);
      result = make_name_public(a1);
      if ( (a3 & 0x10) == 0 )
        goto LABEL_5;
    }
    else
    {
      result = set_name(a1, a2, 7168);
      if ( (a3 & 0x10) == 0 )
      {
LABEL_5:
        if ( (a3 & 8) == 0 )
          goto LABEL_6;
LABEL_10:
        result = sub_2530(a1, 1u, (__int64)"Case-insensitive label");
LABEL_6:
        if ( (a3 & 0x20) != 0 )
          return sub_2530(a1, 1u, (__int64)"Strong name");
        return result;
      }
    }
    result = make_name_weak(a1);
    if ( (a3 & 8) == 0 )
      goto LABEL_6;
    goto LABEL_10;
  }
  return result;
}
