void __fastcall boost::asio::execution_context::allocator_impl<std::allocator<void>>::~allocator_impl(void *a1)
{
  operator delete(a1, 0x10u);
}

