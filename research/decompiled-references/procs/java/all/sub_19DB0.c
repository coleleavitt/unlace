__int64 __fastcall sub_19DB0(int a1, __int64 a2)
{
  char *v2; // rbx
  __int64 v3; // rsi
  __int64 result; // rax
  char *v5; // rbx
  __int64 v6; // rsi

  if ( a1 == 1 )
  {
    v5 = "./()";
    do
    {
      v6 = (unsigned int)*v5++;
      result = set_cp_validity(2, v6, 0xFFFFFFFFLL, 1);
    }
    while ( v5 != &algn_264CF );
  }
  else if ( a1 == 2 )
  {
    set_cp_validity(2, 46, 0xFFFFFFFFLL, 1);
    return set_cp_validity(2, 47, 0xFFFFFFFFLL, 1);
  }
  else if ( a1 )
  {
    if ( under_debugger )
      BUG();
    interr(10267, a2);
    return sub_19E90(10267);
  }
  else
  {
    v2 = "./()";
    do
    {
      v3 = (unsigned int)*v2++;
      result = set_cp_validity(2, v3, 0xFFFFFFFFLL, 0);
    }
    while ( &algn_264CF != v2 );
  }
  return result;
}
