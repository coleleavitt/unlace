bool __fastcall sub_3E5960(_DWORD *a1, int a2)
{
  bool result; // al

  if ( a2 < a1[118] || (result = 1, a2 > a1[119]) )
  {
    if ( a2 < a1[120] || (result = 1, a2 > a1[123]) )
    {
      result = 0;
      if ( a2 >= a1[124] )
        return a2 <= a1[127];
    }
  }
  return result;
}

