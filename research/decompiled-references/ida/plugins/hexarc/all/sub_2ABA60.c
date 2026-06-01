unsigned __int64 __fastcall sub_2ABA60(__int64 a1, const void **a2, unsigned __int64 a3)
{
  int v4; // eax
  size_t v5; // rbp
  size_t v7; // rbx
  void *dest; // [rsp+8h] [rbp-48h]
  unsigned __int64 v9; // [rsp+20h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  dest = nullptr;
  v4 = unpack_dd();
  if ( v4 )
  {
    v5 = v4;
    if ( (unsigned __int64)*a2 + v4 < a3 )
    {
      v7 = v4 + 1LL;
      if ( v7 )
      {
        dest = (void *)qvector_reserve();
        memset(dest, 0, v7);
      }
      *((_BYTE *)dest + v5) = 0;
      memcpy(dest, *a2, v5);
      *a2 = (char *)*a2 + v5;
    }
  }
  if ( !(unsigned __int8)extract_argloc() )
  {
    if ( !under_debugger )
      sub_37B760(51187);
    BUG();
  }
  if ( dest )
    qfree();
  return v9 - __readfsqword(0x28u);
}

