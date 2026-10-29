void __fastcall __noreturn boost::asio::execution_context::allocator_impl<std::allocator<void>>::allocate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h]

  retaddr = (_UNKNOWN *)((char *)&`vtable for'std::bad_alloc + 16);
  boost::throw_exception<std::bad_alloc>();
}

