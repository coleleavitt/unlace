__int64 __fastcall sub_B720(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r12
  __int64 free_chunk; // [rsp+0h] [rbp-F8h]

  v3 = a3;
  free_chunk = find_free_chunk();
  allocate_selector();
  add_segm_ex();
  return free_chunk - v3;
}

