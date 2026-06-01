unsigned __int64 __fastcall boost::asio::detail::epoll_reactor::run(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __m128i *v4; // r12
  int v5; // edi
  unsigned int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  char v9; // di
  struct epoll_event *v10; // rdx
  struct epoll_event *v11; // rsi
  uint32_t v12; // r8d
  epoll_data_t v13; // rax
  _QWORD *v14; // rbx
  char v15; // r13
  int v16; // edi
  _QWORD *v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // rax
  int v20; // r8d
  __syscall_slong_t v21; // rax
  pthread_mutex_t *v22; // r8
  _QWORD *v24; // r13
  char v25; // bl
  __int64 (*v26)(); // rsi
  __int64 v27; // rax
  pthread_mutex_t *v28; // r8
  epoll_data_t *v29; // r10
  int v30; // edi
  int v31; // edi
  int v32; // [rsp+0h] [rbp-688h]
  unsigned int v33; // [rsp+Ch] [rbp-67Ch]
  struct itimerspec utmr; // [rsp+10h] [rbp-678h] BYREF
  struct itimerspec otmr; // [rsp+30h] [rbp-658h] BYREF
  struct epoll_event events[128]; // [rsp+50h] [rbp-638h] BYREF
  unsigned __int64 v37; // [rsp+658h] [rbp-30h]

  v37 = __readfsqword(0x28u);
  v4 = (__m128i *)a3;
  if ( !a2 )
  {
    LODWORD(v7) = 0;
    goto LABEL_4;
  }
  v5 = *(_DWORD *)(a1 + 132);
  if ( a2 < 0 )
  {
    v7 = 0xFFFFFFFFLL;
    if ( v5 != -1 )
      goto LABEL_4;
    if ( !*(_BYTE *)(a1 + 116) )
    {
      v24 = *(_QWORD **)(a1 + 136);
      v25 = 0;
      v26 = boost::system::system_error::system_error;
      if ( !v24 )
        goto LABEL_55;
      goto LABEL_27;
    }
    v25 = 1;
    pthread_mutex_lock((pthread_mutex_t *)(a1 + 72));
    v24 = *(_QWORD **)(a1 + 136);
    v28 = (pthread_mutex_t *)(a1 + 72);
    v26 = boost::system::system_error::system_error;
    if ( v24 )
      goto LABEL_27;
LABEL_53:
    v7 = (__int64)boost::system::system_error::system_error;
    goto LABEL_30;
  }
  a3 = (a2 - 1) / 0x3E8uLL;
  v6 = a3 + 1;
  v7 = (unsigned int)(a3 + 1);
  if ( v5 != -1 )
    goto LABEL_4;
  if ( *(_BYTE *)(a1 + 116) )
  {
    v33 = a3 + 1;
    pthread_mutex_lock((pthread_mutex_t *)(a1 + 72));
    v24 = *(_QWORD **)(a1 + 136);
    v28 = (pthread_mutex_t *)(a1 + 72);
    v7 = v33;
    if ( v6 <= (unsigned int)boost::system::system_error::system_error )
    {
      if ( !v24 )
        goto LABEL_30;
      v26 = (__int64 (*)())v6;
      v25 = 1;
      goto LABEL_27;
    }
    v25 = 1;
    v26 = boost::system::system_error::system_error;
    if ( v24 )
      goto LABEL_27;
    goto LABEL_53;
  }
  v24 = *(_QWORD **)(a1 + 136);
  if ( v6 <= (unsigned int)boost::system::system_error::system_error )
  {
    if ( !v24 )
      goto LABEL_4;
    v26 = (__int64 (*)())v6;
    v25 = 0;
    goto LABEL_27;
  }
  v25 = 0;
  v26 = boost::system::system_error::system_error;
  if ( !v24 )
  {
LABEL_55:
    v7 = (__int64)boost::system::system_error::system_error;
    goto LABEL_4;
  }
  do
  {
LABEL_27:
    v27 = (*(__int64 (__fastcall **)(_QWORD *, __int64 (*)(), unsigned __int64, __int64))(*v24 + 24LL))(
            v24,
            v26,
            a3,
            v7);
    v24 = (_QWORD *)v24[1];
    v26 = (__int64 (*)())v27;
  }
  while ( v24 );
  LODWORD(v7) = v27;
  if ( v25 )
  {
    v28 = (pthread_mutex_t *)(a1 + 72);
LABEL_30:
    v32 = v7;
    pthread_mutex_unlock(v28);
    LODWORD(v7) = v32;
  }
LABEL_4:
  v8 = epoll_wait(*(_DWORD *)(a1 + 128), events, 128, v7);
  v9 = *(_DWORD *)(a1 + 132) == -1;
  if ( v8 > 0 )
  {
    v10 = events;
    v11 = &events[v8];
    do
    {
      while ( 1 )
      {
        v13.ptr = (void *)v10->data;
        if ( v13.u64 != a1 + 120 )
          break;
        ++v10;
        v9 |= *(_DWORD *)(a1 + 132) == -1;
        if ( v10 == v11 )
          goto LABEL_12;
      }
      if ( v13.u64 == a1 + 132 )
      {
        v9 = 1;
      }
      else
      {
        v12 = v10->events;
        if ( *(_QWORD *)v13.ptr || (v29 = (epoll_data_t *)v4->m128i_i64[1], v13.ptr == v29) )
        {
          *(_DWORD *)(v13.u64 + 16) |= v12;
        }
        else
        {
          *(_DWORD *)(v13.u64 + 16) = v12;
          if ( v29 )
          {
            v29->ptr = v13.ptr;
            v4->m128i_i64[1] = (__int64)v13.ptr;
          }
          else
          {
            *v4 = _mm_unpacklo_epi64((__m128i)v13.u64, (__m128i)v13.u64);
          }
        }
      }
      ++v10;
    }
    while ( v10 != v11 );
  }
LABEL_12:
  if ( v9 )
  {
    if ( *(_BYTE *)(a1 + 116) )
    {
      v15 = 1;
      pthread_mutex_lock((pthread_mutex_t *)(a1 + 72));
      v14 = *(_QWORD **)(a1 + 136);
      v22 = (pthread_mutex_t *)(a1 + 72);
      if ( !v14 )
      {
        v30 = *(_DWORD *)(a1 + 132);
        if ( v30 != -1 )
        {
          utmr.it_value.tv_sec = 300;
          utmr.it_value.tv_nsec = 0;
          utmr.it_interval = 0;
          timerfd_settime(v30, 0, &utmr, &otmr);
          v22 = (pthread_mutex_t *)(a1 + 72);
        }
        goto LABEL_42;
      }
      do
      {
LABEL_15:
        (*(void (__fastcall **)(_QWORD *, __m128i *))(*v14 + 40LL))(v14, v4);
        v14 = (_QWORD *)v14[1];
      }
      while ( v14 );
      v16 = *(_DWORD *)(a1 + 132);
      if ( v16 == -1 )
      {
LABEL_22:
        v22 = (pthread_mutex_t *)(a1 + 72);
        if ( !v15 )
          return v37 - __readfsqword(0x28u);
LABEL_42:
        pthread_mutex_unlock(v22);
        return v37 - __readfsqword(0x28u);
      }
      v17 = *(_QWORD **)(a1 + 136);
      utmr.it_interval = 0;
      if ( v17 )
      {
        v18 = 300000000;
        do
        {
          v19 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v17 + 32LL))(v17, v18);
          v17 = (_QWORD *)v17[1];
          v18 = v19;
        }
        while ( v17 );
        v16 = *(_DWORD *)(a1 + 132);
        v20 = 1;
        v21 = 1;
        utmr.it_value.tv_sec = v18 / 1000000;
        if ( !v18 )
          goto LABEL_21;
        v21 = 1000 * (v18 % 1000000);
      }
      else
      {
        utmr.it_value.tv_sec = 300;
        v21 = 0;
      }
      v20 = 0;
LABEL_21:
      utmr.it_value.tv_nsec = v21;
      timerfd_settime(v16, v20, &utmr, &otmr);
      goto LABEL_22;
    }
    v14 = *(_QWORD **)(a1 + 136);
    v15 = 0;
    if ( v14 )
      goto LABEL_15;
    v31 = *(_DWORD *)(a1 + 132);
    if ( v31 != -1 )
    {
      utmr.it_value.tv_sec = 300;
      utmr.it_value.tv_nsec = 0;
      utmr.it_interval = 0;
      timerfd_settime(v31, 0, &utmr, &otmr);
    }
  }
  return v37 - __readfsqword(0x28u);
}

