__int64 __fastcall sub_9CC0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 free_chunk; // rax
  unsigned __int64 v6; // [rsp+0h] [rbp-E8h]

  if ( *(int *)(a1 + 256) <= 0 )
    free_chunk = find_free_chunk();
  else
    free_chunk = (getinf() + 15) & 0xFFFFFFFFFFFFFFF0LL;
  v6 = free_chunk;
  allocate_selector();
  add_segm_ex();
  return v6 - a3;
}

