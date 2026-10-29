unsigned __int64 sub_29A640()
{
  unsigned __int64 v1; // [rsp+48h] [rbp-40h]

  v1 = __readfsqword(0x28u);
  copy_tinfo_t();
  copy_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  copy_tinfo_t();
  create_tinfo();
  clear_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  return v1 - __readfsqword(0x28u);
}

