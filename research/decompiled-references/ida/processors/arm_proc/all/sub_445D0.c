unsigned __int64 __fastcall sub_445D0(__int64 a1, char a2)
{
  unsigned __int64 v3; // [rsp+58h] [rbp-40h]

  v3 = __readfsqword(0x28u);
  get_abi_name();
  invalidate_regfinder_cache();
  unk_A7C48 &= ~1u;
  if ( a2 )
  {
    if ( strcmp(&s1, "win8") )
      strcmp(&s1, "eabi");
    setinf_flag();
    if ( !(unsigned __int8)getinf_flag() )
      getinf();
    setinf_flag();
    if ( !(unsigned __int8)getinf_flag() )
      getinf();
    if ( !(unsigned __int8)getinf_flag() )
      getinf();
    setinf_flag();
    setinf_flag();
    setinf_flag();
  }
  return v3 - __readfsqword(0x28u);
}

