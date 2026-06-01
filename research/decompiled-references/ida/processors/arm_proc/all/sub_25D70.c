char __fastcall sub_25D70(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 ea_name; // rdx

  result = sub_55C30(a2);
  if ( result )
  {
    ea_name = get_ea_name();
    result = 0;
    if ( ea_name > 0 )
    {
      cleanup_name();
      return 0;
    }
  }
  return result;
}

