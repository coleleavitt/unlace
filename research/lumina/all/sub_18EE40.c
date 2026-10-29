__int64 __fastcall sub_18EE40(unsigned __int8 *a1)
{
  unsigned __int8 *v2; // [rsp+8h] [rbp-10h] BYREF

  v2 = a1;
  do
  {
    if ( !*v2 )
      return 1;
  }
  while ( (unsigned int)sub_18ECE0(&v2) != -1 );
  return 0;
}
