unsigned __int64 *__fastcall boost::asio::execution::detail::any_executor_base::prefer_fn<boost::asio::execution::any_executor<boost::asio::execution::context_as_t<boost::asio::execution_context &>,boost::asio::execution::detail::blocking::never_t<0>,boost::asio::execution::prefer_only<boost::asio::execution::detail::blocking::possibly_t<0>>,boost::asio::execution::prefer_only<boost::asio::execution::detail::outstanding_work::tracked_t<0>>,boost::asio::execution::prefer_only<boost::asio::execution::detail::outstanding_work::untracked_t<0>>,boost::asio::execution::prefer_only<boost::asio::execution::detail::relationship::fork_t<0>>,boost::asio::execution::prefer_only<boost::asio::execution::detail::relationship::continuation_t<0>>>,boost::asio::io_context::basic_executor_type<std::allocator<void>,4ul>,boost::asio::execution::prefer_only<boost::asio::execution::detail::blocking::possibly_t<0>>>(
        unsigned __int64 *a1,
        _QWORD *a2)
{
  unsigned __int64 *result; // rax
  unsigned __int64 v3; // rdx

  result = a1;
  v3 = *a2 & 0xFFFFFFFFFFFFFFFELL;
  if ( v3 > 3 )
    _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFCLL) + 16) + 224LL), 1u);
  *a1 = v3;
  a1[4] = (unsigned __int64)a1;
  a1[5] = (unsigned __int64)boost::asio::execution::detail::any_executor_base::target_fns_table<boost::asio::io_context::basic_executor_type<std::allocator<void>,4ul>>(bool,std::enable_if<!(std::is_same<boost::asio::io_context::basic_executor_type<std::allocator<void>,4ul>,void>::value),void>::type *)::fns_with_execute;
  a1[6] = (unsigned __int64)boost::asio::execution::any_executor<boost::asio::execution::context_as_t<boost::asio::execution_context &>,boost::asio::execution::detail::blocking::never_t<0>,boost::asio::execution::prefer_only<boost::asio::execution::detail::blocking::possibly_t<0>>,boost::asio::execution::prefer_only<boost::asio::execution::detail::outstanding_work::tracked_t<0>>,boost::asio::execution::prefer_only<boost::asio::execution::detail::outstanding_work::untracked_t<0>>,boost::asio::execution::prefer_only<boost::asio::execution::detail::relationship::fork_t<0>>,boost::asio::execution::prefer_only<boost::asio::execution::detail::relationship::continuation_t<0>>>::prop_fns_table<boost::asio::io_context::basic_executor_type<std::allocator<void>,4ul>>(void)::fns;
  a1[3] = (unsigned __int64)&boost::asio::execution::detail::any_executor_base::object_fns_table<boost::asio::io_context::basic_executor_type<std::allocator<void>,4ul>>(std::enable_if<(!(std::is_same<boost::asio::io_context::basic_executor_type<std::allocator<void>,4ul>,void>::value))&&(!(std::is_same<boost::asio::io_context::basic_executor_type<std::allocator<void>,4ul>,boost::asio::execution::detail::shared_target_executor>::value)),void>::type *)::fns;
  return result;
}

