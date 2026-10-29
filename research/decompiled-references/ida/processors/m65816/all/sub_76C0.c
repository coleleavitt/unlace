bool sub_76C0()
{
  unsigned __int64 v0; // rax
  __int64 v1; // rdx
  bool result; // al

  v0 = getinf();
  result = (unsigned int)v0 <= 0xD && (v1 = -8293, !_bittest64(&v1, v0)) || get_segm_by_name() != 0;
  return result;
}

