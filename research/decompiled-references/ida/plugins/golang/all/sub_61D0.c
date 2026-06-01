__int64 __fastcall sub_61D0(__int64 a1, __int64 a2)
{
  getinf_buf();
  getinf_flag();
  if ( (unsigned __int8)getinf_flag() )
  {
    netnode_check();
    if ( (unsigned int)netnode_altval() > 0x74 )
      get_ph();
  }
  set_compiler();
  if ( a2 && !byte_284D0 )
  {
    netnode_check();
    netnode_supset();
    netnode_check();
    netnode_supset();
    if ( !(_DWORD)a2 )
      byte_284D0 = 1;
    *(_BYTE *)(a1 + 556) = 1;
    if ( (unsigned __int8)getinf_flag() )
    {
      netnode_check();
      if ( (unsigned int)netnode_altval() > 0x74 )
        get_ph();
    }
    setinf();
  }
  return 1;
}
