unsigned __int64 sub_11880()
{
  unsigned __int64 v1; // [rsp+190h] [rbp-20h]

  v1 = __readfsqword(0x28u);
  if ( (unsigned __int8)get_sreg_range() )
    netnode_altval();
  return v1 - __readfsqword(0x28u);
}

