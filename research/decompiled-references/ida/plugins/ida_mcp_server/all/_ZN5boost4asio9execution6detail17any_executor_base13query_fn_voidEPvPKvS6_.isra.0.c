void __fastcall __noreturn boost::asio::execution::detail::any_executor_base::query_fn_void(
        boost::asio::execution::detail::any_executor_base *this,
        void *a2,
        const void *a3,
        const void *a4)
{
  boost::throw_exception<boost::asio::execution::bad_executor>(this, a2, a3, a4);
}

