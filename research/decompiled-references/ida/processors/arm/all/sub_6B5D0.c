void __fastcall sub_6B5D0(__int64 a1, char a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // r15
  char byte; // r13
  char v6; // al

  if ( a2 )
  {
    if ( (a1 & 1) == 0 )
      return;
    v2 = 1;
  }
  else
  {
    if ( (a1 & 3) == 0 )
      return;
    v2 = (int)(4 - (a1 & 3));
  }
  v3 = a1 + v2;
  v4 = a1;
  byte = get_byte(a1 - 1);
  while ( 1 )
  {
    v6 = get_byte(v4);
    if ( v6 )
    {
      if ( byte != v6 )
        break;
    }
    if ( ++v4 == v3 )
    {
      del_items();
      create_align();
      return;
    }
  }
}
