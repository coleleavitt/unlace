void __fastcall boost::asio::detail::posix_thread::func<boost::asio::detail::scheduler::thread_function,std::allocator<void>>::~func(
        void *a1)
{
  operator delete(a1, 0x20u);
}

