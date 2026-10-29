__int64 __fastcall sub_EE40(_QWORD *a1, _QWORD *a2, const char *a3)
{
  size_t v4; // rbx
  __int64 member; // rbx
  void *v7; // [rsp+10h] [rbp-B8h]

  v7 = 0;
  if ( a3 )
  {
    v4 = strlen(a3);
    if ( v4 )
    {
      v7 = (void *)qvector_reserve();
      memmove(v7, a3, v4);
      *((_BYTE *)v7 + v4) = 0;
    }
  }
  member = udt_type_data_t__find_member();
  clear_tinfo_t();
  if ( v7 )
    qfree();
  if ( member < 0 )
  {
    sub_EC40();
    return 0;
  }
  else
  {
    *a1 = *(_QWORD *)(*a2 + 144 * member) >> 3;
    return 1;
  }
}
