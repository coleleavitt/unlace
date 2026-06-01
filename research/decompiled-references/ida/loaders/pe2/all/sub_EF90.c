unsigned __int64 sub_EF90()
{
  unsigned __int64 v0; // rbx

  v0 = (getinf() + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( v0 != getinf() )
  {
    getinf();
    getinf();
    set_segm_end();
    create_align();
  }
  return v0;
}

