void __fastcall boost::asio::detail::posix_thread::func<boost::asio::detail::scheduler::thread_function,std::allocator<void>>::destroy(
        void (__fastcall ***a1)(_QWORD))
{
  (**a1)(a1);
  operator delete(a1, 0x20u);
}

