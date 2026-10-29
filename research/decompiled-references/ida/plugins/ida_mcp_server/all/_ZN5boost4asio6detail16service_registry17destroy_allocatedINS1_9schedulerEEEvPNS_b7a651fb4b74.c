void __fastcall boost::asio::detail::service_registry::destroy_allocated<boost::asio::detail::scheduler>(__int64 a1)
{
  __int64 v1; // rbp
  void (__fastcall *v2)(__int64, __int64, __int64, __int64); // rax

  v1 = **(_QWORD **)(a1 + 24);
  (**(void (__fastcall ***)(__int64))a1)(a1);
  v2 = *(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v1 + 16LL);
  if ( v2 == boost::asio::execution_context::allocator_impl<std::allocator<void>>::deallocate )
    operator delete((void *)(a1 - *(_QWORD *)(a1 + 272)), 0x11Fu);
  else
    v2(v1, a1, 272, 8);
}

