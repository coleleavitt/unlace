unsigned __int64 sub_52D0()
{
  unsigned __int64 v1; // [rsp+C8h] [rbp-40h]

  v1 = __readfsqword(0x28u);
  find_free_chunk();
  allocate_selector();
  add_segm_ex();
  return v1 - __readfsqword(0x28u);
}

