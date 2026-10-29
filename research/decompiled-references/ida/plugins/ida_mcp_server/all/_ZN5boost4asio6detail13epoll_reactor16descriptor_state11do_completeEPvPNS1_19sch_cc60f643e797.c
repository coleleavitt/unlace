__int64 __fastcall boost::asio::detail::epoll_reactor::descriptor_state::do_complete(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  int v4; // ebp
  char *v5; // r13
  _QWORD *v6; // r14
  _QWORD *v7; // r12
  _BYTE *v8; // rbp
  __int64 *v9; // r15
  __int64 v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  int v14; // edx
  __int64 *v15; // rax
  __int64 v16; // rdi
  char v20; // [rsp+37h] [rbp-81h]
  __int64 v21; // [rsp+38h] [rbp-80h]
  unsigned __int64 v22; // [rsp+78h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  if ( !a1 )
    return v22 - __readfsqword(0x28u);
  v20 = *(_BYTE *)(a2 + 92);
  if ( v20 )
  {
    v4 = *(_DWORD *)(a2 + 88);
    if ( v4 )
    {
      while ( pthread_mutex_trylock((pthread_mutex_t *)(a2 + 48)) )
      {
        v4 -= v4 > 0;
        if ( !v4 )
          goto LABEL_37;
      }
      v20 = *(_BYTE *)(a2 + 92);
    }
    else
    {
LABEL_37:
      pthread_mutex_lock((pthread_mutex_t *)(a2 + 48));
      v20 = *(_BYTE *)(a2 + 92);
    }
  }
  v5 = (char *)&boost::asio::detail::epoll_reactor::descriptor_state::perform_io(unsigned int)::flag;
  v6 = nullptr;
  v7 = nullptr;
  v8 = (_BYTE *)(a2 + 162);
  v9 = (__int64 *)(a2 + 144);
  v21 = *(_QWORD *)(a2 + 96);
  do
  {
    if ( ((*((_DWORD *)v5 + 2) | 0x18) & a4) != 0 )
    {
      *v8 = 1;
      while ( 1 )
      {
        v13 = v6;
        v6 = (_QWORD *)*v9;
        if ( !*v9 )
          break;
        v14 = ((__int64 (__fastcall *)(__int64))v6[8])(*v9);
        if ( !v14 )
          break;
        v15 = (__int64 *)*v9;
        if ( *v9 )
        {
          v16 = *v15;
          *v9 = *v15;
          if ( !v16 )
            v9[1] = 0;
          *v15 = 0;
        }
        *v6 = 0;
        if ( v13 )
        {
          *v13 = v6;
          if ( v14 == 2 )
            goto LABEL_35;
        }
        else
        {
          v7 = v6;
          if ( v14 == 2 )
          {
LABEL_35:
            *v8 = 0;
            goto LABEL_10;
          }
        }
      }
      v6 = v13;
    }
LABEL_10:
    v5 -= 4;
    --v8;
    v9 -= 2;
  }
  while ( v5 != (char *)&boost::asio::detail::epoll_reactor::descriptor_state::perform_io(unsigned int)::flag - 12 );
  if ( !v7 )
  {
    if ( v20 )
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 48));
    v11 = *(_QWORD *)(v21 + 56);
    v12 = *(_QWORD **)__tls_get_addr();
    if ( !v12 )
LABEL_41:
      BUG();
    while ( v11 != *v12 )
    {
      v12 = (_QWORD *)v12[2];
      if ( !v12 )
        goto LABEL_41;
    }
    ++*(_QWORD *)(v12[1] + 128LL);
    boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::~op_queue();
    return v22 - __readfsqword(0x28u);
  }
  if ( *v7 )
  {
    *v7 = 0;
    if ( v20 )
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 48));
    boost::asio::detail::scheduler::post_deferred_completions();
    boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::~op_queue();
  }
  else
  {
    if ( v20 )
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 48));
    boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::~op_queue();
  }
  return ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, _QWORD))v7[1])(a1, v7, a3, 0);
}

