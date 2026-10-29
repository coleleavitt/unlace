__int64 __fastcall boost::asio::detail::scheduler::get_default_task(
        boost::asio::detail::scheduler *this,
        boost::asio::execution_context *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 v4; // rax
  char *v5; // rdi
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rax
  char *v10; // rdi

  v2 = *((_QWORD *)this + 1);
  pthread_mutex_lock((pthread_mutex_t *)(v2 + 8));
  v3 = *(_QWORD *)(v2 + 56);
  if ( v3 )
  {
    while ( 1 )
    {
      v4 = *(_QWORD *)(v3 + 8);
      if ( v4 )
      {
        v5 = *(char **)(v4 + 8);
        if ( v5 == "N5boost4asio6detail14typeid_wrapperINS1_13epoll_reactorEEE"
          || *v5 != 42 && !strcmp(v5, "N5boost4asio6detail14typeid_wrapperINS1_13epoll_reactorEEE") )
        {
          break;
        }
      }
      v3 = *(_QWORD *)(v3 + 32);
      if ( !v3 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    pthread_mutex_unlock((pthread_mutex_t *)(v2 + 8));
    v7 = boost::asio::detail::service_registry::create<boost::asio::detail::epoll_reactor,boost::asio::execution_context>();
    *(__m128i *)(v7 + 8) = _mm_loadl_epi64((const __m128i *)&`typeinfo for'boost::asio::detail::typeid_wrapper<boost::asio::detail::epoll_reactor>);
    pthread_mutex_lock((pthread_mutex_t *)(v2 + 8));
    v8 = *(_QWORD *)(v2 + 56);
    if ( v8 )
    {
      v3 = *(_QWORD *)(v2 + 56);
      while ( 1 )
      {
        v9 = *(_QWORD *)(v3 + 8);
        if ( v9 )
        {
          v10 = *(char **)(v9 + 8);
          if ( v10 == "N5boost4asio6detail14typeid_wrapperINS1_13epoll_reactorEEE"
            || *v10 != 42 && !strcmp(v10, "N5boost4asio6detail14typeid_wrapperINS1_13epoll_reactorEEE") )
          {
            break;
          }
        }
        v3 = *(_QWORD *)(v3 + 32);
        if ( !v3 )
          goto LABEL_16;
      }
      (*(void (__fastcall **)(__int64))(v7 + 40))(v7);
    }
    else
    {
LABEL_16:
      *(_QWORD *)(v7 + 32) = v8;
      v3 = v7;
      *(_QWORD *)(v2 + 56) = v7;
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(v2 + 8));
  return v3 + 48;
}

