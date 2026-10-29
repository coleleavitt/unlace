bool sub_97C0()
{
  unsigned __int64 v0; // rax
  __int64 v1; // rdx
  bool result; // al
  __int64 loader_name; // rdx
  char v4[88]; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v5; // [rsp+58h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v0 = getinf();
  if ( (unsigned int)v0 <= 0xD )
  {
    v1 = -8293;
    if ( !_bittest64(&v1, v0) )
      return 1;
  }
  loader_name = get_loader_name();
  result = 0;
  if ( loader_name > 0 )
    return strcasecmp(v4, "SBN") == 0;
  return result;
}

