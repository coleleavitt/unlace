__int64 __fastcall boost::asio::detail::epoll_reactor::register_descriptor(
        __int64 a1,
        int a2,
        unsigned __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  char v6; // r13
  uint32_t v8; // eax
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // edi
  __int64 result; // rax
  pthread_mutex_t *v14; // r13
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // [rsp+0h] [rbp-58h]
  char v17; // [rsp+1Bh] [rbp-3Dh] BYREF
  struct epoll_event event; // [rsp+1Ch] [rbp-3Ch] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-30h]

  v6 = 0;
  v19 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 204) )
  {
    v6 = 1;
    pthread_mutex_lock((pthread_mutex_t *)(a1 + 160));
  }
  v8 = *(_DWORD *)(a1 + 148);
  v17 = *(_BYTE *)(a1 + 145);
  v9 = *(_QWORD *)(a1 + 224);
  event.events = v8;
  if ( v9 )
    *(_QWORD *)(a1 + 224) = *(_QWORD *)(v9 + 24);
  else
    v9 = boost::asio::detail::allocate_object<boost::asio::detail::epoll_reactor::descriptor_state,boost::asio::execution_context::allocator<void>,bool &,int &>(
           *(_QWORD *)(a1 + 208),
           &v17,
           (int *)&event,
           (__int64)&event,
           a5,
           a6);
  v10 = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(v9 + 32) = 0;
  *(_QWORD *)(v9 + 24) = v10;
  v11 = *(_QWORD *)(a1 + 216);
  if ( v11 )
    *(_QWORD *)(v11 + 32) = v9;
  *(_QWORD *)(a1 + 216) = v9;
  if ( v6 )
  {
    v16 = v9;
    pthread_mutex_unlock((pthread_mutex_t *)(a1 + 160));
    v9 = v16;
  }
  *a3 = v9;
  if ( *(_BYTE *)(v9 + 92) )
  {
    v14 = (pthread_mutex_t *)(v9 + 48);
    pthread_mutex_lock((pthread_mutex_t *)(v9 + 48));
    v15 = *a3;
    *(_QWORD *)(v15 + 96) = a1;
    *(_DWORD *)(v15 + 104) = a2;
    *(_DWORD *)(v15 + 160) = 65793;
    pthread_mutex_unlock(v14);
    v9 = *a3;
  }
  else
  {
    *(_QWORD *)(v9 + 96) = a1;
    *(_DWORD *)(v9 + 104) = a2;
    *(_DWORD *)(v9 + 160) = 65793;
  }
  event.events = -2147483621;
  *(_DWORD *)(v9 + 108) = -2147483621;
  v12 = *(_DWORD *)(a1 + 128);
  event.data.u64 = v9;
  if ( !epoll_ctl(v12, 1, a2, &event) )
    return 0;
  result = (unsigned int)*__errno_location();
  if ( (_DWORD)result == 1 )
  {
    *(_DWORD *)(*a3 + 108) = 0;
    return 0;
  }
  return result;
}

