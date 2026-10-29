unsigned __int64 sub_15C80()
{
  __int64 v0; // rbx
  unsigned __int64 v2; // [rsp+68h] [rbp-30h]

  v2 = __readfsqword(0x28u);
  v0 = getseg();
  if ( (getinf() & 0x200) != 0 && v0 )
    get_segm_class();
  return v2 - __readfsqword(0x28u);
}

