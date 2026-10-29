__m128i *__fastcall boost::asio::detail::allocate_object<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::execution_context::allocator<void>,boost::asio::io_context &>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rax
  __int64 (__fastcall *v7)(); // rax
  __m128i *v8; // rax
  __m128i *v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // r14
  __int64 v12; // rax
  char *v13; // rdi
  __int64 v14; // rdi
  __m128i v15; // xmm0
  __int64 v16; // rdx
  __int64 *v17; // rax
  __int64 v18; // rbp
  __int64 v19; // r13
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rax
  char *v24; // rdi
  __int64 v25; // rax
  unsigned __int64 *v26; // rdx
  unsigned __int64 v27; // rax
  __m128i v28; // [rsp+0h] [rbp-78h] BYREF
  _QWORD *v29; // [rsp+18h] [rbp-60h]
  __m128i v30; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v31; // [rsp+38h] [rbp-40h]

  v29 = a1;
  v6 = *a1;
  v31 = __readfsqword(0x28u);
  v28 = (__m128i)(unsigned __int64)&unk_4448A0;
  v7 = *(__int64 (__fastcall **)())(v6 + 8);
  if ( v7 == boost::asio::execution_context::allocator_impl<std::allocator<void>>::allocate )
    v8 = (__m128i *)boost::asio::execution_context::allocator_impl<std::allocator<void>>::allocate(
                      0x58u,
                      a2,
                      a3,
                      a4,
                      a5,
                      a6,
                      v28.m128i_i64[0]);
  else
    v8 = (__m128i *)((__int64 (__fastcall *)(_QWORD *, __int64, __int64))v7)(a1, 88, 8);
  v9 = v8;
  *v8 = _mm_load_si128(&v28);
  v10 = *(_QWORD *)(a2 + 8);
  v8[1].m128i_i64[1] = a2;
  v8[1].m128i_i64[0] = 0;
  v8[2].m128i_i64[0] = 0;
  v8[2].m128i_i64[1] = 0;
  pthread_mutex_lock((pthread_mutex_t *)(v10 + 8));
  v11 = *(_QWORD *)(v10 + 56);
  if ( v11 )
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)(v11 + 8);
      if ( v12 )
      {
        v13 = *(char **)(v12 + 8);
        if ( v13 == "N5boost4asio6detail14typeid_wrapperINS1_13epoll_reactorEEE"
          || *v13 != 42 && !strcmp(v13, "N5boost4asio6detail14typeid_wrapperINS1_13epoll_reactorEEE") )
        {
          break;
        }
      }
      v11 = *(_QWORD *)(v11 + 32);
      if ( !v11 )
        goto LABEL_12;
    }
  }
  else
  {
LABEL_12:
    pthread_mutex_unlock((pthread_mutex_t *)(v10 + 8));
    v21 = boost::asio::detail::service_registry::create<boost::asio::detail::epoll_reactor,boost::asio::execution_context>();
    *(__m128i *)(v21 + 8) = _mm_loadl_epi64((const __m128i *)&`typeinfo for'boost::asio::detail::typeid_wrapper<boost::asio::detail::epoll_reactor>);
    pthread_mutex_lock((pthread_mutex_t *)(v10 + 8));
    v22 = *(_QWORD *)(v10 + 56);
    v28.m128i_i64[0] = v22;
    if ( v22 )
    {
      v11 = v22;
      while ( 1 )
      {
        v23 = *(_QWORD *)(v11 + 8);
        if ( v23 )
        {
          v24 = *(char **)(v23 + 8);
          if ( v24 == "N5boost4asio6detail14typeid_wrapperINS1_13epoll_reactorEEE"
            || *v24 != 42 && !strcmp(v24, "N5boost4asio6detail14typeid_wrapperINS1_13epoll_reactorEEE") )
          {
            break;
          }
        }
        v11 = *(_QWORD *)(v11 + 32);
        if ( !v11 )
          goto LABEL_25;
      }
      (*(void (__fastcall **)(__int64))(v21 + 40))(v21);
    }
    else
    {
LABEL_25:
      v11 = v21;
      *(_QWORD *)(v21 + 32) = v28.m128i_i64[0];
      *(_QWORD *)(v10 + 56) = v21;
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(v10 + 8));
  v9[3].m128i_i64[0] = v11;
  *(__m128i *)((char *)&v9[3] + 8) = 0;
  v14 = *(_QWORD *)(a2 + 8);
  v15 = _mm_loadl_epi64((const __m128i *)&`typeinfo for'boost::asio::detail::typeid_wrapper<boost::asio::config_service>);
  v9[4].m128i_i64[1] = 0;
  v16 = *(_QWORD *)(v14 + 48);
  v30 = v15;
  v17 = boost::asio::detail::service_registry::do_use_service(v14, (__int64)&v30, v16);
  v9[5].m128i_i8[0] = ((unsigned int)boost::asio::detail::config_get<int>(
                                       v17,
                                       (__int64)"reactor",
                                       (__int64)"reset_edge_on_partial_read",
                                       0) != 0) << 7;
  v18 = *(_QWORD *)(v9[3].m128i_i64[0] + 56);
  v19 = v18 + 56;
  v30.m128i_i64[0] = v18 + 56;
  if ( *(_BYTE *)(v18 + 108) )
  {
    pthread_mutex_lock((pthread_mutex_t *)(v18 + 64));
    v30.m128i_i8[8] = 1;
    if ( *(_BYTE *)(v18 + 218) )
    {
LABEL_29:
      pthread_mutex_unlock((pthread_mutex_t *)(v19 + 8));
      goto LABEL_10;
    }
    if ( *(_QWORD *)(v18 + 176) )
    {
LABEL_28:
      v19 = v30.m128i_i64[0];
      goto LABEL_29;
    }
  }
  else
  {
    v30.m128i_i8[8] = 0;
    if ( *(_BYTE *)(v18 + 218) || *(_QWORD *)(v18 + 176) )
      goto LABEL_10;
  }
  v25 = (*(__int64 (__fastcall **)(_QWORD))(v18 + 184))(*(_QWORD *)(v18 + 24));
  v26 = *(unsigned __int64 **)(v18 + 240);
  *(_QWORD *)(v18 + 176) = v25;
  v27 = v18 + 192;
  *(_QWORD *)(v18 + 192) = 0;
  if ( v26 )
  {
    *v26 = v27;
    *(_QWORD *)(v18 + 240) = v27;
  }
  else
  {
    *(__m128i *)(v18 + 232) = _mm_unpacklo_epi64((__m128i)v27, (__m128i)v27);
  }
  boost::asio::detail::scheduler::wake_one_thread_and_unlock();
  if ( v30.m128i_i8[8] )
    goto LABEL_28;
LABEL_10:
  v9->m128i_i64[0] = (__int64)off_4448D0;
  return v9;
}

