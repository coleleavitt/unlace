__int64 __fastcall sub_C470(__int64 a1, unsigned __int64 a2, char a3)
{
  int v3; // ebx
  int v5; // ebx

  if ( a3 )
  {
    if ( !a2 )
      return 1;
    v5 = 0;
    while ( (unsigned __int8)add_idc_func() )
    {
      if ( ++v5 >= a2 )
        return 1;
    }
    return 0;
  }
  else
  {
    v3 = 0;
    if ( !a2 )
      return 1;
    while ( (unsigned __int8)del_idc_func() )
    {
      if ( ++v3 >= a2 )
        return 1;
    }
    return 0;
  }
}

