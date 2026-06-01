bool sub_5360()
{
  unsigned __int64 v0; // rax
  bool result; // al
  __int64 v2; // rdx

  v0 = getinf();
  result = (unsigned int)v0 <= 0xD && (v2 = -8293, !_bittest64(&v2, v0)) || get_segm_by_name() != 0;
  return result;
}

