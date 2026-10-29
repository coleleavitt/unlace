void __fastcall boost::asio::execution_context::allocator_impl<std::allocator<void>>::deallocate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  if ( a2 )
    operator delete((void *)(a2 - *(_QWORD *)(a2 + a3)), a3 + a4 + 7);
}

