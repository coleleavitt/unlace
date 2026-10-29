int __fastcall boost::asio::detail::epoll_reactor::deregister_descriptor(
        __int64 a1,
        int a2,
        pthread_mutex_t **a3,
        char a4)
{
  pthread_mutex_t *v4; // r10
  pthread_mutex_t *v5; // r9
  pthread_mutex_t **v6; // r8
  pthread_mutex_t *v8; // rbx
  char v9; // r11
  char v10; // r15
  pthread_mutex_t *v11; // rdi
  pthread_mutex_t *v12; // r11
  pthread_mutex_t *v13; // r13
  char v14; // r12
  int v15; // r10d
  pthread_mutex_t **v16; // r9
  pthread_mutex_t *v17; // rdx
  __int64 v18; // r8
  pthread_mutex_t *v19; // rcx
  __m128i v20; // xmm0
  __int64 v21; // rsi
  pthread_mutex_t **v22; // rax
  __int64 v23; // rax
  int v24; // edi
  pthread_mutex_t *mutex; // [rsp+0h] [rbp-88h]
  pthread_mutex_t *mutexb; // [rsp+0h] [rbp-88h]
  pthread_mutex_t *mutexa; // [rsp+0h] [rbp-88h]
  pthread_mutex_t *v29; // [rsp+8h] [rbp-80h]
  pthread_mutex_t *v30; // [rsp+8h] [rbp-80h]
  pthread_mutex_t *v31; // [rsp+10h] [rbp-78h]
  char v32; // [rsp+10h] [rbp-78h]
  pthread_mutex_t **v34; // [rsp+18h] [rbp-70h]
  __int128 event; // [rsp+20h] [rbp-68h] BYREF
  __m128i v36; // [rsp+30h] [rbp-58h] BYREF
  __int64 v37; // [rsp+40h] [rbp-48h]
  unsigned __int64 v38; // [rsp+48h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v5 = *a3;
  if ( *a3 )
  {
    v6 = a3;
    if ( v5[2].__size[12] )
    {
      v31 = v4;
      v29 = *a3;
      mutex = (pthread_mutex_t *)((char *)v5 + 48);
      pthread_mutex_lock((pthread_mutex_t *)((char *)v5 + 48));
      v6 = a3;
      v5 = v29;
      v4 = v31;
      v8 = *a3;
      if ( (*a3)[4].__size[3] )
      {
        *a3 = nullptr;
        LODWORD(v23) = pthread_mutex_unlock(mutex);
        return v23;
      }
      v9 = 1;
      goto LABEL_5;
    }
    if ( !v5[4].__size[3] )
    {
      v8 = *a3;
      v9 = 0;
LABEL_5:
      if ( !a4 && *((_DWORD *)&v8[2].__align + 7) )
      {
        v24 = *(_DWORD *)(a1 + 128);
        v34 = v6;
        v32 = v9;
        v30 = v4;
        mutexa = v5;
        LODWORD(event) = 0;
        *(_QWORD *)((char *)&event + 4) = 0;
        epoll_ctl(v24, 2, a2, (struct epoll_event *)&event);
        v6 = v34;
        v9 = v32;
        v4 = v30;
        v5 = mutexa;
        v8 = *v34;
      }
      *(_QWORD *)&event = 0;
      v10 = v9;
      v11 = nullptr;
      v12 = v4;
      v13 = v5;
      v14 = 0;
      v15 = 0;
      v16 = v6;
      while ( 1 )
      {
        v17 = (pthread_mutex_t *)(&v8[2].__list.__next)[2 * v15];
        if ( v17 )
        {
          v18 = 2LL * v15;
          while ( 1 )
          {
            v36.m128i_i64[0] = 125;
            v36.m128i_i64[1] = (__int64)&boost::system::detail::system_cat_holder<void>::instance;
            v20 = _mm_load_si128(&v36);
            v17[1].__align = 3;
            *(__m128i *)(&v17->__align + 3) = v20;
            v8 = *v16;
            v37 = 3;
            v21 = (__int64)v8 + v18 * 8;
            v22 = (pthread_mutex_t **)(&v8[2].__list.__next)[v18];
            if ( !v22 )
              break;
            v19 = *v22;
            *(_QWORD *)(v21 + 112) = *v22;
            if ( !v19 )
            {
              *(_QWORD *)(v21 + 120) = 0;
              *v22 = nullptr;
              v17->__align = 0;
              if ( !v11 )
              {
LABEL_29:
                v12 = v17;
                v14 = 1;
                goto LABEL_18;
              }
LABEL_17:
              v11->__align = (__int64)v17;
              goto LABEL_18;
            }
            *v22 = nullptr;
            v17->__align = 0;
            if ( v11 )
            {
              v11->__align = (__int64)v17;
            }
            else
            {
              v12 = v17;
              v14 = 1;
            }
            v11 = v17;
            v17 = v19;
          }
          v17->__align = 0;
          if ( !v11 )
            goto LABEL_29;
          goto LABEL_17;
        }
        v17 = v11;
LABEL_18:
        if ( ++v15 == 3 )
          break;
        v11 = v17;
      }
      if ( v14 )
        *(_QWORD *)&event = v12;
      *((_DWORD *)&v8[2].__align + 6) = -1;
      v8[4].__size[3] = 1;
      if ( v10 && v13[2].__size[12] )
      {
        mutexb = v17;
        pthread_mutex_unlock((pthread_mutex_t *)((char *)v13 + 48));
        v17 = mutexb;
      }
      *((_QWORD *)&event + 1) = v17;
      boost::asio::detail::scheduler::post_deferred_completions();
      boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::~op_queue();
      return v38 - __readfsqword(0x28u);
    }
    *a3 = nullptr;
  }
  return v38 - __readfsqword(0x28u);
}

