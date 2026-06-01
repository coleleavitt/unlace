__int64 __fastcall sub_6810(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax

  result = sub_9BC0(a1, a3, a4);
  if ( result )
  {
    result = get_cmt();
    if ( result <= 0 )
      return set_cmt();
  }
  return result;
}

