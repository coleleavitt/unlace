unsigned __int64 __fastcall boost::asio::execution_context::allocator_impl<std::allocator<void>>::allocate(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned __int64 result; // rax

  v8 = a1 + 15;
  if ( v8 < 0 )
    std::__throw_bad_alloc();
  v9 = operator new(v8);
  v13 = v9;
  if ( a1 > 0xFFFFFFFFFFFFFFF8LL
    || (result = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL, v10 = result - v13, result - v13 > 7)
    || !result )
  {
    boost::asio::execution_context::allocator_impl<std::allocator<void>>::allocate(v8, a2, v10, v13, v11, v12, a7);
  }
  *(_QWORD *)(result + a1) = v10;
  return result;
}

