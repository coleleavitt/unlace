void __fastcall __noreturn boost::asio::execution::detail::any_executor_base::prefer_fn<boost::asio::execution::any_executor<boost::asio::execution::context_as_t<boost::asio::execution_context &>,boost::asio::execution::detail::blocking::never_t<0>,boost::asio::execution::prefer_only<boost::asio::execution::detail::blocking::possibly_t<0>>,boost::asio::execution::prefer_only<boost::asio::execution::detail::outstanding_work::tracked_t<0>>,boost::asio::execution::prefer_only<boost::asio::execution::detail::outstanding_work::untracked_t<0>>,boost::asio::execution::prefer_only<boost::asio::execution::detail::relationship::fork_t<0>>,boost::asio::execution::prefer_only<boost::asio::execution::detail::relationship::continuation_t<0>>>,void,boost::asio::execution::prefer_only<boost::asio::execution::detail::relationship::fork_t<0>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  boost::throw_exception<boost::asio::execution::bad_executor>(a1, a2, a3, a4);
}

