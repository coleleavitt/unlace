__int64 __fastcall sub_ECAE0(_QWORD *a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    result = 0;
    if ( !*a1 )
    {
      sub_E8BB0(0x15u, "API called with finalized prepared statement");
      return 1;
    }
  }
  else
  {
    sub_E8BB0(0x15u, "API called with NULL prepared statement");
    return 1;
  }
  return result;
}
