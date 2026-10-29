void __fastcall boost::asio::execution_context::allocator_impl<std::allocator<void>>::destroy(void *a1)
{
  (*(void (__fastcall **)(void *))(*(_QWORD *)a1 + 24LL))(a1);
  operator delete(a1, 0x10u);
}

