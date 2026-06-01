__int64 __fastcall std::_Sp_counted_ptr_inplace<boost::beast::http::detail::chunk_size::sequence,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>::_M_get_deleter(
        __int64 a1,
        __int64 a2)
{
  char *v3; // rdi
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v8; // [rsp+8h] [rbp-10h]

  if ( (_UNKNOWN *)a2 == &std::_Sp_make_shared_tag::_S_ti(void)::__tag )
    return a1 + 16;
  v3 = *(char **)(a2 + 8);
  if ( v3 == "St19_Sp_make_shared_tag" )
    return a1 + 16;
  v4 = 0;
  if ( *v3 == 42 )
    return v4;
  v8 = a1;
  v5 = strcmp(v3, "St19_Sp_make_shared_tag");
  v6 = 0;
  if ( !v5 )
    return v8 + 16;
  return v6;
}

