__int64 sub_1F6E0()
{
  unsigned __int64 v0; // rbx
  __int64 v2; // rax
  unsigned int v3; // ebx

  v0 = getinf();
  if ( (unsigned __int8)netnode_inited() )
  {
    if ( (unsigned int)v0 > 0x19 )
      return 0;
    v2 = -33556482;
    if ( _bittest64(&v2, v0) )
      return 0;
  }
  v3 = sub_5FAE0(5);
  if ( !(_BYTE)v3 )
    return 0;
  add_idc_func();
  add_idc_func();
  add_idc_func();
  add_idc_func();
  return v3;
}

