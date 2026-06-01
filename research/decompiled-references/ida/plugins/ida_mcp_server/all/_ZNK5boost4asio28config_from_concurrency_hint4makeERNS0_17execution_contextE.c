int __fastcall boost::asio::config_from_concurrency_hint::make(
        boost::asio::config_from_concurrency_hint *this,
        boost::asio::execution_context *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r12
  int v7; // r13d
  __int64 **v8; // rbx
  __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 (__fastcall *v11)(__int64, unsigned __int64, __int64); // rax
  unsigned __int64 v12; // rax
  __m128i v13; // xmm0
  unsigned __int64 v14; // rbp
  __int64 v15; // r13
  __int64 v16; // rbx
  __int64 v17; // rax
  char *v18; // rdi
  __m128i v19; // xmm0
  __m128i v21; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v22[9]; // [rsp+10h] [rbp-48h] BYREF

  v6 = *((_QWORD *)a2 + 1);
  v7 = *((_DWORD *)this + 2);
  v22[3] = __readfsqword(0x28u);
  v8 = *(__int64 ***)(v6 + 48);
  v9 = *v8;
  v10 = **v8;
  v21 = (__m128i)(unsigned __int64)off_444798;
  v11 = *(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(v10 + 8);
  if ( v11 == boost::asio::execution_context::allocator_impl<std::allocator<void>>::allocate )
    v12 = boost::asio::execution_context::allocator_impl<std::allocator<void>>::allocate(
            0x38u,
            (__int64)a2,
            a3,
            a4,
            a5,
            a6,
            v21.m128i_i64[0]);
  else
    v12 = v11((__int64)v9, 56u, 8);
  v13 = _mm_load_si128(&v21);
  v14 = v12;
  *(_QWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 24) = v8;
  *(_QWORD *)(v12 + 32) = 0;
  *(_DWORD *)(v12 + 48) = v7;
  *(_QWORD *)(v12 + 40) = boost::asio::detail::service_registry::destroy_allocated<boost::asio::detail::config_from_concurrency_hint_service>;
  *(__m128i *)v12 = v13;
  if ( v8 != *(__int64 ***)(v6 + 48) )
  {
    std::logic_error::logic_error((std::logic_error *)v22, "Invalid service owner.");
    v22[0] = off_4446D0;
    boost::throw_exception<boost::asio::invalid_service_owner>((std::logic_error *)v22);
  }
  pthread_mutex_lock((pthread_mutex_t *)(v6 + 8));
  v15 = *(_QWORD *)(v6 + 56);
  if ( v15 )
  {
    v16 = *(_QWORD *)(v6 + 56);
    do
    {
      v17 = *(_QWORD *)(v16 + 8);
      if ( v17 )
      {
        v18 = *(char **)(v17 + 8);
        if ( v18 == "N5boost4asio6detail14typeid_wrapperINS0_14config_serviceEEE"
          || *v18 != 42 && !strcmp(v18, "N5boost4asio6detail14typeid_wrapperINS0_14config_serviceEEE") )
        {
          std::logic_error::logic_error((std::logic_error *)v22, "Service already exists.");
          v22[0] = off_4446A8;
          boost::throw_exception<boost::asio::service_already_exists>((std::logic_error *)v22);
        }
      }
      v16 = *(_QWORD *)(v16 + 32);
    }
    while ( v16 );
  }
  if ( !*(_QWORD *)(v14 + 40) )
    *(_QWORD *)(v14 + 40) = boost::asio::detail::service_registry::destroy_added;
  v19 = _mm_loadl_epi64((const __m128i *)&`typeinfo for'boost::asio::detail::typeid_wrapper<boost::asio::config_service>);
  *(_QWORD *)(v14 + 32) = v15;
  *(__m128i *)(v14 + 8) = v19;
  *(_QWORD *)(v6 + 56) = v14;
  return pthread_mutex_unlock((pthread_mutex_t *)(v6 + 8));
}

