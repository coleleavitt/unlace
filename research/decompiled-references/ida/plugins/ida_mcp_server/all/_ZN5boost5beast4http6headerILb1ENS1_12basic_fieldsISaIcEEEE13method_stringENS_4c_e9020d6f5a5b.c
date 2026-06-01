void __fastcall boost::beast::http::header<true,boost::beast::http::basic_fields<std::allocator<char>>>::method_string(
        __int64 a1,
        const void *a2,
        signed __int64 a3)
{
  int v4; // eax
  unsigned __int64 v5; // rcx
  void *v6; // rax
  void *v7; // r8
  void *v8; // [rsp+0h] [rbp-28h]
  unsigned __int64 v9; // [rsp+8h] [rbp-20h]

  v4 = boost::beast::http::string_to_verb();
  v5 = *(_QWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 84) = v4;
  if ( v4 )
  {
    if ( !v5 )
      return;
LABEL_6:
    operator delete(*(void **)(a1 + 48), v5);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 56) = 0;
    return;
  }
  if ( v5 )
  {
    if ( !a3 )
      goto LABEL_6;
    if ( a3 >= 0 )
    {
      v9 = v5;
      v8 = (void *)operator new(a3);
      memcpy(v8, a2, a3);
      operator delete(*(void **)(a1 + 48), v9);
      v7 = v8;
      goto LABEL_10;
    }
    goto LABEL_13;
  }
  if ( a3 )
  {
    if ( a3 >= 0 )
    {
      v6 = (void *)operator new(a3);
      v7 = memcpy(v6, a2, a3);
LABEL_10:
      *(_QWORD *)(a1 + 48) = v7;
      *(_QWORD *)(a1 + 56) = a3;
      return;
    }
LABEL_13:
    std::__throw_bad_alloc();
  }
}

