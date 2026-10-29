__int64 sub_13070()
{
  unsigned __int64 v0; // rax
  __int64 v1; // rdx
  __int64 v2; // rbx

  v0 = getinf(5);
  if ( (unsigned int)v0 > 0x19 )
    return 0;
  v1 = -33818625;
  if ( _bittest64(&v1, v0) )
    return 0;
  v2 = qalloc_or_throw(560);
  sub_12C00(v2);
  return v2;
}
