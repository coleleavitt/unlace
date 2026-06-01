unsigned __int64 __fastcall boost::asio::detail::epoll_reactor::notify_fork(__int64 a1, int a2)
{
  int v4; // edi
  int v5; // ebx
  int v6; // edi
  int v7; // eax
  int v8; // edi
  bool v9; // r12
  int v10; // edx
  int v11; // edi
  int v12; // edi
  int v13; // edx
  unsigned __int64 (__fastcall *v14)(__int64); // rax
  int v15; // edx
  int v16; // edi
  epoll_data_t v17; // rbx
  char v18; // r15
  int v19; // edx
  int v20; // edi
  int *v21; // rax
  struct timespec v22; // xmm2
  int v23; // edi
  int v24; // edi
  _QWORD *v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // rax
  __syscall_slong_t v28; // rcx
  int v29; // eax
  pthread_mutex_t *v30; // rdi
  int v31; // ebx
  int *v32; // r12
  unsigned int v33; // eax
  int v34; // eax
  __int32 v35; // eax
  __m128i v36; // [rsp+0h] [rbp-D8h] BYREF
  struct epoll_event event; // [rsp+14h] [rbp-C4h] BYREF
  struct itimerspec utmr; // [rsp+20h] [rbp-B8h] BYREF
  struct itimerspec buf; // [rsp+40h] [rbp-98h] BYREF
  int v40; // [rsp+60h] [rbp-78h]
  int v41; // [rsp+64h] [rbp-74h]
  __int64 (__fastcall ***v42)(boost::system::detail::system_error_category *__hidden); // [rsp+68h] [rbp-70h]
  __int64 v43; // [rsp+70h] [rbp-68h]
  _QWORD v44[5]; // [rsp+80h] [rbp-58h] BYREF
  unsigned __int64 v45; // [rsp+A8h] [rbp-30h]

  v45 = __readfsqword(0x28u);
  if ( a2 != 2 )
    return v45 - __readfsqword(0x28u);
  v4 = *(_DWORD *)(a1 + 128);
  if ( v4 != -1 )
    close(v4);
  *(_DWORD *)(a1 + 128) = -1;
  v5 = epoll_create1((int)&loc_80000);
  if ( v5 == -1 )
  {
    v32 = __errno_location();
    v33 = *v32;
    if ( ((*v32 - 22) & 0xFFFFFFEF) == 0 )
    {
      v35 = epoll_create(20000);
      if ( v35 != -1 )
      {
        v36.m128i_i32[0] = v35;
        fcntl(v35, 2, 1);
        v5 = v36.m128i_i32[0];
        goto LABEL_6;
      }
      v33 = *v32;
    }
    v44[0] = v33;
    v44[1] = &boost::system::detail::system_cat_holder<void>::instance;
    v44[2] = 2 - ((v33 == 0) - 1LL);
    buf.it_value.tv_sec = 653;
    buf.it_interval = (struct timespec)_mm_unpacklo_epi64(
                                         _mm_loadl_epi64((const __m128i *)off_4429E0),
                                         (__m128i)(unsigned __int64)"do_epoll_create");
    boost::asio::detail::throw_error();
  }
LABEL_6:
  v6 = *(_DWORD *)(a1 + 132);
  *(_DWORD *)(a1 + 128) = v5;
  if ( v6 != -1 )
  {
    close(v6);
    *(_DWORD *)(a1 + 132) = -1;
    v31 = timerfd_create(1, (int)&loc_80000);
    if ( v31 == -1 && *__errno_location() == 22 )
    {
      v34 = timerfd_create(1, 0);
      v31 = v34;
      if ( v34 != -1 )
        fcntl(v34, 2, 1);
    }
    *(_DWORD *)(a1 + 132) = v31;
  }
  v7 = *(_DWORD *)(a1 + 124);
  v8 = *(_DWORD *)(a1 + 120);
  v9 = v7 == v8;
  if ( v7 != v8 && v7 != -1 )
  {
    close(v7);
    v8 = *(_DWORD *)(a1 + 120);
    if ( v8 == -1 )
      goto LABEL_10;
    goto LABEL_30;
  }
  if ( v8 != -1 )
LABEL_30:
    close(v8);
LABEL_10:
  *(_QWORD *)(a1 + 120) = -1;
  boost::asio::detail::eventfd_select_interrupter::open_descriptors(
    (boost::asio::detail::eventfd_select_interrupter *)(a1 + 120),
    v9);
  v10 = *(_DWORD *)(a1 + 120);
  v11 = *(_DWORD *)(a1 + 128);
  event.events = -2147483639;
  event.data.u64 = a1 + 120;
  epoll_ctl(v11, 1, v10, &event);
  v12 = *(_DWORD *)(a1 + 124);
  buf.it_interval.tv_sec = 1;
  write(v12, &buf, 8u);
  v13 = *(_DWORD *)(a1 + 132);
  if ( v13 == -1
    || (v23 = *(_DWORD *)(a1 + 128),
        event.events = 9,
        event.data.u64 = a1 + 132,
        epoll_ctl(v23, 1, v13, &event),
        v24 = *(_DWORD *)(a1 + 132),
        v24 == -1) )
  {
    v14 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL);
    if ( v14 == boost::asio::detail::epoll_reactor::interrupt )
    {
      v15 = *(_DWORD *)(a1 + 120);
      *(__time_t *)((char *)&buf.it_interval.tv_sec + 4) = a1 + 120;
      v16 = *(_DWORD *)(a1 + 128);
      LODWORD(buf.it_interval.tv_sec) = -2147483639;
      epoll_ctl(v16, 3, v15, (struct epoll_event *)&buf);
    }
    else
    {
      v14(a1);
    }
    if ( *(_BYTE *)(a1 + 204) )
      goto LABEL_28;
LABEL_14:
    v17.ptr = *(void **)(a1 + 216);
    v18 = 0;
    if ( !v17.u64 )
      return v45 - __readfsqword(0x28u);
    goto LABEL_15;
  }
  v25 = *(_QWORD **)(a1 + 136);
  utmr.it_interval = 0;
  if ( v25 )
  {
    v26 = 300000000;
    do
    {
      v27 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v25 + 32LL))(v25, v26);
      v25 = (_QWORD *)v25[1];
      v26 = v27;
    }
    while ( v25 );
    v24 = *(_DWORD *)(a1 + 132);
    v28 = 1;
    v29 = 1;
    utmr.it_value.tv_sec = v26 / 1000000;
    if ( v26 )
    {
      v29 = 0;
      v28 = 1000 * (v26 % 1000000);
    }
  }
  else
  {
    utmr.it_value.tv_sec = 300;
    v28 = 0;
    v29 = 0;
  }
  utmr.it_value.tv_nsec = v28;
  timerfd_settime(v24, v29, &utmr, &buf);
  if ( !*(_BYTE *)(a1 + 204) )
    goto LABEL_14;
LABEL_28:
  v18 = 1;
  v36.m128i_i64[0] = a1 + 160;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 160));
  v17.ptr = *(void **)(a1 + 216);
  v30 = (pthread_mutex_t *)(a1 + 160);
  if ( !v17.u64 )
  {
LABEL_36:
    pthread_mutex_unlock(v30);
    return v45 - __readfsqword(0x28u);
  }
LABEL_15:
  v36 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_4429E0), (__m128i)(unsigned __int64)"notify_fork");
  do
  {
    if ( *(_DWORD *)(v17.u64 + 108) )
    {
      v19 = *(_DWORD *)(v17.u64 + 104);
      v20 = *(_DWORD *)(a1 + 128);
      event.events = *(_DWORD *)(v17.u64 + 108);
      event.data = v17;
      if ( epoll_ctl(v20, 1, v19, &event) )
      {
        v21 = __errno_location();
        v22 = (struct timespec)_mm_load_si128(&v36);
        LODWORD(v21) = *v21;
        v41 = 0;
        buf.it_value.tv_sec = 154;
        v40 = (int)v21;
        buf.it_interval = v22;
        v43 = 2 - (((_DWORD)v21 == 0) - 1LL);
        v42 = &boost::system::detail::system_cat_holder<void>::instance;
        if ( (_DWORD)v21 )
        {
          boost::system::system_error::system_error();
          boost::throw_exception<boost::system::system_error>((std::runtime_error *)v44);
        }
      }
    }
    v17.ptr = *(void **)(v17.u64 + 24);
  }
  while ( v17.u64 );
  v30 = (pthread_mutex_t *)(a1 + 160);
  if ( v18 )
    goto LABEL_36;
  return v45 - __readfsqword(0x28u);
}

