unsigned __int64 __fastcall boost::asio::detail::posix_thread::func<boost::asio::detail::scheduler::thread_function,std::allocator<void>>::run(
        __int64 a1)
{
  struct _Unwind_Exception *v1; // r12
  __int64 v2; // rbx
  __m128i v3; // xmm0
  volatile signed __int64 *v4; // r14
  __int64 *addr; // rax
  char v6; // bp
  __int64 *v7; // r13
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  void (__fastcall ***v11)(_QWORD, __int64, __int128 *, double); // rdi
  __int64 v12; // rsi
  void (__fastcall *v13)(_QWORD, __int64, __int128 *, double); // rax
  __int64 v14; // rdi
  int v15; // r13d
  unsigned __int64 v16; // rdx
  unsigned __int64 *v17; // rax
  void **v18; // rbx
  __int64 v20; // rdi
  __int64 v21; // r13
  char v22; // al
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  int v25; // ebp
  unsigned __int64 v26; // r13
  unsigned int v27; // ebp
  __int64 v28; // rax
  char v29; // dl
  _QWORD *v30; // rax
  __int64 v31; // rax
  int v32; // ebp
  int v33; // ebp
  _QWORD *v34; // rdx
  __int64 v35; // rdx
  __syscall_slong_t v36; // rcx
  _QWORD *v37; // rsi
  __int64 v38; // rcx
  __time_t v39; // rax
  __int64 v40; // rbp
  void *v41; // rdi
  __int64 v42; // [rsp+10h] [rbp-168h] BYREF
  char v43; // [rsp+18h] [rbp-160h]
  struct timeval v44; // [rsp+20h] [rbp-158h] BYREF
  _QWORD v45[2]; // [rsp+30h] [rbp-148h] BYREF
  __int64 v46; // [rsp+40h] [rbp-138h]
  _QWORD v47[4]; // [rsp+50h] [rbp-128h] BYREF
  struct timespec tp; // [rsp+70h] [rbp-108h] BYREF
  __int128 v49; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-D8h]
  _QWORD v51[12]; // [rsp+B0h] [rbp-C8h] BYREF
  int v52; // [rsp+110h] [rbp-68h] BYREF
  __time_t v53; // [rsp+118h] [rbp-60h] BYREF
  __int128 v54; // [rsp+120h] [rbp-58h] BYREF
  signed __int64 v55; // [rsp+130h] [rbp-48h]
  unsigned __int64 v56; // [rsp+138h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 16);
  v56 = __readfsqword(0x28u);
  v49 = 0;
  v50 = 0;
  if ( !*(_QWORD *)(v2 + 224) )
  {
    boost::asio::detail::scheduler::stop((boost::asio::detail::scheduler *)v2);
    return v56 - __readfsqword(0x28u);
  }
  v3.m128i_i64[0] = 0;
  v52 = 0;
  v4 = (volatile signed __int64 *)(v2 + 224);
  memset(v51, 0, sizeof(v51));
  v53 = 0;
  v55 = 0;
  v45[0] = v2;
  v45[1] = v51;
  v54 = 0;
  addr = (__int64 *)__tls_get_addr();
  v6 = *(_BYTE *)(v2 + 108);
  v46 = *addr;
  *addr = (__int64)v45;
  v42 = v2 + 56;
  if ( v6 )
    pthread_mutex_lock((pthread_mutex_t *)(v2 + 64));
  v43 = v6;
  while ( !*(_BYTE *)(v2 + 217) )
  {
    v7 = *(__int64 **)(v2 + 232);
    if ( !v7 )
    {
      v20 = v42;
      v21 = *(_QWORD *)(v2 + 256);
      v22 = *(_BYTE *)(v42 + 52);
      if ( v21 )
      {
        if ( v22 )
        {
          v24 = *(_QWORD *)(v2 + 168) & 0xFFFFFFFFFFFFFFFELL;
          if ( v21 <= 0 )
          {
            while ( 1 )
            {
              *(_QWORD *)(v2 + 168) = v24 + 2;
              pthread_cond_wait((pthread_cond_t *)(v2 + 120), (pthread_mutex_t *)(v20 + 8));
              v24 = *(_QWORD *)(v2 + 168) - 2LL;
              *(_QWORD *)(v2 + 168) = v24;
              if ( (v24 & 1) != 0 )
                break;
              v20 = v42;
            }
          }
          else
          {
            *(_QWORD *)(v2 + 168) = v24 + 2;
            if ( !clock_gettime(1, &tp) )
            {
              v36 = tp.tv_nsec + 1000 * (v21 % 1000000);
              tp.tv_sec += v21 / 1000000 + v36 / 1000000000;
              tp.tv_nsec = v36 % 1000000000;
              pthread_cond_timedwait((pthread_cond_t *)(v2 + 120), (pthread_mutex_t *)(v42 + 8), &tp);
            }
            *(_QWORD *)(v2 + 168) -= 2LL;
          }
        }
        else if ( v21 <= 0 )
        {
          pause();
        }
        else
        {
          v44.tv_sec = v21 / 1000000;
          v44.tv_usec = v21 % 1000000;
          select(0, nullptr, nullptr, nullptr, &v44);
        }
      }
      else
      {
        if ( v43 )
        {
          if ( !v22 )
          {
            v43 = 0;
            continue;
          }
          pthread_mutex_unlock((pthread_mutex_t *)(v42 + 8));
          v20 = v42;
          v43 = 0;
          v22 = *(_BYTE *)(v42 + 52);
        }
        if ( v22 )
        {
          v25 = *(_DWORD *)(v20 + 48);
          if ( !v25 )
          {
LABEL_102:
            pthread_mutex_lock((pthread_mutex_t *)(v20 + 8));
            v43 = 1;
            continue;
          }
          while ( pthread_mutex_trylock((pthread_mutex_t *)(v20 + 8)) )
          {
            v20 = v42;
            v25 -= v25 > 0;
            if ( !v25 )
              goto LABEL_102;
          }
          goto LABEL_63;
        }
      }
      continue;
    }
    v8 = *v7;
    *(_QWORD *)(v2 + 232) = *v7;
    if ( v8 )
    {
      v9 = v2 + 192;
      *v7 = 0;
      if ( v7 != (__int64 *)(v2 + 192) )
      {
        v27 = *((_DWORD *)v7 + 4);
        if ( *(_BYTE *)(v2 + 48) )
        {
LABEL_79:
          if ( v43 )
          {
            if ( *(_BYTE *)(v42 + 52) )
              pthread_mutex_unlock((pthread_mutex_t *)(v42 + 8));
            v43 = 0;
          }
        }
        else
        {
          boost::asio::detail::scheduler::wake_one_thread_and_unlock();
        }
        ((void (__fastcall *)(__int64, __int64 *, __int128 *, _QWORD, double))v7[1])(
          v2,
          v7,
          &v49,
          v27,
          *(double *)v3.m128i_i64);
        if ( v52 > 0 )
        {
          v39 = v53;
          v52 = 0;
          v53 = 0;
          v47[0] = v39;
          tp.tv_sec = v39;
          if ( v39 )
            std::__exception_ptr::exception_ptr::_M_addref((std::__exception_ptr::exception_ptr *)&tp);
          std::rethrow_exception();
          v47[0] = v2;
          v47[1] = &v42;
          v47[2] = v51;
          boost::asio::detail::scheduler::task_cleanup::~task_cleanup((boost::asio::detail::scheduler::task_cleanup *)v47);
          if ( v43 )
            pthread_mutex_unlock((pthread_mutex_t *)(v42 + 8));
          v40 = 0;
          *(_QWORD *)__tls_get_addr() = v46;
          boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::~op_queue();
          while ( 1 )
          {
            v41 = (void *)v51[v40];
            if ( v41 )
              free(v41);
            if ( ++v40 == 12 )
            {
              if ( v53 )
                std::__exception_ptr::exception_ptr::_M_release((std::__exception_ptr::exception_ptr *)&v53);
              _Unwind_Resume(v1);
            }
          }
        }
        if ( v55 > 1 )
        {
          _InterlockedAdd64(v4, v55 - 1);
        }
        else if ( v55 != 1 && !_InterlockedSub64(v4, 1u) )
        {
          boost::asio::detail::scheduler::stop((boost::asio::detail::scheduler *)v2);
        }
        v28 = v42;
        v55 = 0;
        v29 = *(_BYTE *)(v42 + 52);
        if ( !(_QWORD)v54 )
          goto LABEL_95;
        if ( !v29 )
        {
          v30 = *(_QWORD **)(v2 + 240);
          if ( v30 )
          {
            *v30 = v54;
            v31 = *((_QWORD *)&v54 + 1);
            v3.m128i_i64[0] = 0;
          }
          else
          {
            v31 = *((_QWORD *)&v54 + 1);
            v3.m128i_i64[0] = 0;
            *(_QWORD *)(v2 + 232) = v54;
          }
          v54 = 0;
          *(_QWORD *)(v2 + 240) = v31;
          continue;
        }
        if ( v43 )
        {
          v34 = *(_QWORD **)(v2 + 240);
          if ( v34 )
          {
            *v34 = v54;
            v35 = *((_QWORD *)&v54 + 1);
            v3.m128i_i64[0] = 0;
          }
          else
          {
            v35 = *((_QWORD *)&v54 + 1);
            v3.m128i_i64[0] = 0;
            *(_QWORD *)(v2 + 232) = v54;
          }
          v54 = 0;
          *(_QWORD *)(v2 + 240) = v35;
        }
        else
        {
          v33 = *(_DWORD *)(v42 + 48);
          if ( v33 )
          {
            while ( pthread_mutex_trylock((pthread_mutex_t *)(v28 + 8)) )
            {
              v28 = v42;
              v33 -= v33 > 0;
              if ( !v33 )
                goto LABEL_93;
            }
          }
          else
          {
LABEL_93:
            pthread_mutex_lock((pthread_mutex_t *)(v28 + 8));
          }
          v28 = v42;
          v43 = 1;
          v29 = *(_BYTE *)(v42 + 52);
          if ( (_QWORD)v54 )
          {
            v37 = *(_QWORD **)(v2 + 240);
            if ( v37 )
              *v37 = v54;
            else
              *(_QWORD *)(v2 + 232) = v54;
            v38 = *((_QWORD *)&v54 + 1);
            v3.m128i_i64[0] = 0;
            v54 = 0;
            *(_QWORD *)(v2 + 240) = v38;
          }
LABEL_95:
          if ( !v29 )
            continue;
        }
        if ( v43 )
          continue;
        v32 = *(_DWORD *)(v28 + 48);
        if ( !v32 )
        {
LABEL_105:
          pthread_mutex_lock((pthread_mutex_t *)(v28 + 8));
          v43 = 1;
          continue;
        }
        while ( pthread_mutex_trylock((pthread_mutex_t *)(v28 + 8)) )
        {
          v28 = v42;
          v32 -= v32 > 0;
          if ( !v32 )
            goto LABEL_105;
        }
LABEL_63:
        v43 = 1;
        continue;
      }
      *(_BYTE *)(v2 + 216) = 1;
      if ( !*(_BYTE *)(v2 + 48) && *(_QWORD *)(v2 + 256) )
      {
        v10 = v42;
        if ( *(_BYTE *)(v42 + 52) )
        {
          v26 = *(_QWORD *)(v2 + 168);
          *(_QWORD *)(v2 + 168) = v26 | 1;
          if ( v43 )
          {
            pthread_mutex_unlock((pthread_mutex_t *)(v10 + 8));
            v43 = 0;
          }
          if ( v26 > 1 )
            pthread_cond_signal((pthread_cond_t *)(v2 + 120));
        }
LABEL_12:
        v11 = *(void (__fastcall ****)(_QWORD, __int64, __int128 *, double))(v2 + 176);
        v12 = 0;
        v13 = **v11;
        goto LABEL_13;
      }
      if ( !v43 )
        goto LABEL_12;
      if ( *(_BYTE *)(v42 + 52) )
        pthread_mutex_unlock((pthread_mutex_t *)(v42 + 8));
      v11 = *(void (__fastcall ****)(_QWORD, __int64, __int128 *, double))(v2 + 176);
      v43 = 0;
      v12 = 0;
      v13 = **v11;
    }
    else
    {
      v9 = v2 + 192;
      *(_QWORD *)(v2 + 240) = 0;
      *v7 = 0;
      if ( v7 != (__int64 *)(v2 + 192) )
      {
        v27 = *((_DWORD *)v7 + 4);
        goto LABEL_79;
      }
      v12 = *(_QWORD *)(v2 + 248);
      v23 = v12;
      *(_BYTE *)(v2 + 216) = v12 == 0;
      if ( v43 )
      {
        if ( *(_BYTE *)(v42 + 52) )
        {
          pthread_mutex_unlock((pthread_mutex_t *)(v42 + 8));
          v11 = *(void (__fastcall ****)(_QWORD, __int64, __int128 *, double))(v2 + 176);
          v43 = 0;
          v23 = *(_QWORD *)(v2 + 248);
        }
        else
        {
          v11 = *(void (__fastcall ****)(_QWORD, __int64, __int128 *, double))(v2 + 176);
          v43 = 0;
        }
        v13 = **v11;
        v12 = v23;
      }
      else
      {
        v11 = *(void (__fastcall ****)(_QWORD, __int64, __int128 *, double))(v2 + 176);
        v13 = **v11;
      }
    }
LABEL_13:
    v13(v11, v12, &v54, *(double *)v3.m128i_i64);
    if ( v55 > 0 )
      _InterlockedAdd64(v4, v55);
    v14 = v42;
    v55 = 0;
    if ( *(_BYTE *)(v42 + 52) && !v43 )
    {
      v15 = *(_DWORD *)(v42 + 48);
      if ( v15 )
      {
        while ( pthread_mutex_trylock((pthread_mutex_t *)(v14 + 8)) )
        {
          v14 = v42;
          v15 -= v15 > 0;
          if ( !v15 )
            goto LABEL_65;
        }
      }
      else
      {
LABEL_65:
        pthread_mutex_lock((pthread_mutex_t *)(v14 + 8));
      }
      v43 = 1;
    }
    v16 = v54;
    *(_BYTE *)(v2 + 216) = 1;
    v17 = *(unsigned __int64 **)(v2 + 240);
    if ( v16 )
    {
      if ( v17 )
        *v17 = v16;
      else
        *(_QWORD *)(v2 + 232) = v16;
      v3.m128i_i64[0] = 0;
      v17 = *((unsigned __int64 **)&v54 + 1);
      v54 = 0;
    }
    *(_QWORD *)(v2 + 192) = 0;
    if ( !v17 )
    {
      v3 = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
      *(__m128i *)(v2 + 232) = v3;
      continue;
    }
    *v17 = v9;
    *(_QWORD *)(v2 + 240) = v9;
  }
  if ( v43 )
    pthread_mutex_unlock((pthread_mutex_t *)(v42 + 8));
  *(_QWORD *)__tls_get_addr() = v46;
  boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::~op_queue();
  v18 = (void **)v51;
  do
  {
    if ( *v18 )
      free(*v18);
    ++v18;
  }
  while ( v18 != (void **)&v52 );
  if ( v53 )
    std::__exception_ptr::exception_ptr::_M_release((std::__exception_ptr::exception_ptr *)&v53);
  return v56 - __readfsqword(0x28u);
}

