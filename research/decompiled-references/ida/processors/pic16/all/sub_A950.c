__int64 __fastcall sub_A950(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 free_chunk; // [rsp+0h] [rbp-F8h]

  free_chunk = find_free_chunk();
  allocate_selector();
  add_segm_ex();
  return free_chunk - a3;
}

