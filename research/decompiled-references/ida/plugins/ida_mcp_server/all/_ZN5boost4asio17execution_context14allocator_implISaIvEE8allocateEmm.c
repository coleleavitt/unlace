__int64 __fastcall boost::asio::execution_context::allocator_impl<std::allocator<void>>::allocate(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3)
{
  signed __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx

  v3 = a2 + a3 + 7;
  if ( v3 < 0 )
    std::__throw_bad_alloc();
  v4 = a3 + a2 - 1;
  v6 = operator new(v3);
  if ( v4 < a2 || (v7 = -a3 & (v6 + a3 - 1), v4 - a2 < v7 - v6) || !v7 )
    boost::throw_exception<std::bad_alloc>(v3);
  *(_QWORD *)(v7 + a2) = v7 - v6;
  return -a3 & (v6 + a3 - 1);
}

