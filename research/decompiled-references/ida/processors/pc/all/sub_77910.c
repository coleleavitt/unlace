__int64 __fastcall sub_77910(__int64 a1, __int64 a2, char *a3)
{
  char v5; // bl

  if ( (unsigned __int8)getinf_flag() )
    return 0;
  v5 = 0;
  if ( (unsigned int)sub_690D0(a1, a2, "SEH_epilog", 3u, 1) )
  {
    v5 = 1;
  }
  else if ( !(unsigned int)sub_690D0(a1, a2, "EH_epilog", 1u, 1) )
  {
    return 0;
  }
  if ( a3 )
    *a3 = v5;
  return 1;
}
