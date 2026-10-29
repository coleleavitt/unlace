__int64 __fastcall sub_329400(__int64 *a1)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = *a1;
  if ( (*a1 & 0xE) != 0 )
  {
    v2 = 0;
    if ( ((unsigned __int8)v1 & 0xFu) > 9 )
    {
      visit_subtypes();
      return 0;
    }
  }
  else
  {
    return (v1 & 0x30) != 0;
  }
  return v2;
}

