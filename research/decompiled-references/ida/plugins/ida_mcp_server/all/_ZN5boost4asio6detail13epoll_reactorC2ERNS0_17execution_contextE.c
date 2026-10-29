// Alternative name is '_ZN5boost4asio6detail13epoll_reactorC1ERNS0_17execution_contextE'
unsigned __int64 __fastcall boost::asio::detail::epoll_reactor::epoll_reactor(
        __m128i *this,
        boost::asio::execution_context *a2)
{
  __int64 v3; // r13
  __m128i v4; // xmm4
  __int64 v5; // rbp
  __int64 v6; // rax
  char *v7; // rdi
  __m128i v8; // xmm2
  __int64 v9; // rdi
  __int64 *v10; // rax
  int v11; // eax
  __int64 v12; // rdi
  int v13; // ebp
  __int64 *v14; // rax
  char v15; // r13
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 *v18; // rax
  char v19; // al
  int v20; // ebp
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 *v23; // rax
  int v24; // ebp
  __int64 v25; // rdi
  __m128i v26; // xmm3
  __int64 v27; // rdx
  __int64 *v28; // rax
  char v29; // al
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 *v32; // rax
  int v33; // eax
  int v34; // r13d
  char v35; // bp
  __int64 v36; // rdi
  __m128i v37; // xmm3
  __int64 v38; // rdx
  char v39; // r13
  _QWORD *v40; // rax
  int *v41; // rax
  unsigned __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdi
  __int64 v46; // rcx
  int v47; // ebp
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  int v50; // edx
  int v51; // edi
  int v52; // edi
  int v53; // edx
  int v54; // edi
  __int64 v56; // r15
  __int64 v57; // rax
  __int64 v58; // rax
  char *v59; // rdi
  __int64 v60; // rax
  int *v61; // r13
  int v62; // eax
  int v63; // eax
  int v64; // eax
  __m128i v65; // [rsp+0h] [rbp-128h] BYREF
  __int64 v66; // [rsp+18h] [rbp-110h]
  pthread_mutex_t *v67; // [rsp+20h] [rbp-108h]
  pthread_mutex_t *mutex; // [rsp+28h] [rbp-100h]
  char v69; // [rsp+33h] [rbp-F5h] BYREF
  int v70; // [rsp+34h] [rbp-F4h] BYREF
  __int64 buf; // [rsp+38h] [rbp-F0h] BYREF
  __m128i v72; // [rsp+40h] [rbp-E8h] BYREF
  __m128i v73; // [rsp+50h] [rbp-D8h] BYREF
  __m128i v74; // [rsp+60h] [rbp-C8h] BYREF
  __m128i v75; // [rsp+70h] [rbp-B8h] BYREF
  __m128i v76; // [rsp+80h] [rbp-A8h] BYREF
  __m128i event; // [rsp+90h] [rbp-98h] BYREF
  __int64 v78; // [rsp+A0h] [rbp-88h]
  _DWORD v79[2]; // [rsp+B0h] [rbp-78h] BYREF
  __int64 (__fastcall ***v80)(boost::system::detail::system_error_category *__hidden); // [rsp+B8h] [rbp-70h]
  __int64 v81; // [rsp+C0h] [rbp-68h]
  char v82[24]; // [rsp+D0h] [rbp-58h] BYREF
  unsigned __int64 v83; // [rsp+E8h] [rbp-40h]

  v3 = *((_QWORD *)a2 + 1);
  v83 = __readfsqword(0x28u);
  *((_QWORD *)this + 4) = 0;
  v4 = _mm_loadl_epi64((const __m128i *)&`typeinfo for'boost::asio::detail::typeid_wrapper<boost::asio::config_service>);
  *((_QWORD *)this + 5) = 0;
  v65 = v4;
  *((_QWORD *)this + 6) = off_444810;
  *this = (__m128i)(unsigned __int64)off_4447D0;
  *(this + 1) = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)(unsigned __int64)a2);
  pthread_mutex_lock((pthread_mutex_t *)(v3 + 8));
  v5 = *(_QWORD *)(v3 + 56);
  if ( v5 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(v5 + 8);
      if ( v6 )
      {
        v7 = *(char **)(v6 + 8);
        if ( v7 == "N5boost4asio6detail14typeid_wrapperINS1_9schedulerEEE"
          || *v7 != 42 && !strcmp(v7, "N5boost4asio6detail14typeid_wrapperINS1_9schedulerEEE") )
        {
          break;
        }
      }
      v5 = *(_QWORD *)(v5 + 32);
      if ( !v5 )
        goto LABEL_20;
    }
  }
  else
  {
LABEL_20:
    pthread_mutex_unlock((pthread_mutex_t *)(v3 + 8));
    v56 = boost::asio::detail::service_registry::create<boost::asio::detail::scheduler,boost::asio::execution_context>();
    *(__m128i *)(v56 + 8) = _mm_loadl_epi64((const __m128i *)&`typeinfo for'boost::asio::detail::typeid_wrapper<boost::asio::detail::scheduler>);
    pthread_mutex_lock((pthread_mutex_t *)(v3 + 8));
    v57 = *(_QWORD *)(v3 + 56);
    v66 = v57;
    if ( v57 )
    {
      v5 = v57;
      while ( 1 )
      {
        v58 = *(_QWORD *)(v5 + 8);
        if ( v58 )
        {
          v59 = *(char **)(v58 + 8);
          if ( v59 == "N5boost4asio6detail14typeid_wrapperINS1_9schedulerEEE"
            || *v59 != 42 && !strcmp(v59, "N5boost4asio6detail14typeid_wrapperINS1_9schedulerEEE") )
          {
            break;
          }
        }
        v5 = *(_QWORD *)(v5 + 32);
        if ( !v5 )
          goto LABEL_29;
      }
      (*(void (__fastcall **)(__int64))(v56 + 40))(v56);
    }
    else
    {
LABEL_29:
      v5 = v56;
      *(_QWORD *)(v56 + 32) = v66;
      *(_QWORD *)(v3 + 56) = v56;
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(v3 + 8));
  v8 = _mm_load_si128(&v65);
  v9 = *((_QWORD *)a2 + 1);
  *((_QWORD *)this + 7) = v5;
  event = v8;
  v10 = boost::asio::detail::service_registry::do_use_service(v9, (__int64)&event, *(_QWORD *)(v9 + 48));
  v11 = boost::asio::detail::config_get<int>(v10, (__int64)"reactor", (__int64)"registration_locking_spin_count", 0);
  v12 = *((_QWORD *)a2 + 1);
  v13 = v11;
  event = _mm_load_si128(&v65);
  v14 = boost::asio::detail::service_registry::do_use_service(v12, (__int64)&event, *(_QWORD *)(v12 + 48));
  v15 = boost::asio::detail::config_get<bool>(v14, (__int64)"reactor", (__int64)"registration_locking", 1u);
  v67 = (pthread_mutex_t *)((char *)this + 72);
  boost::asio::detail::posix_mutex::posix_mutex((boost::asio::detail::posix_mutex *)((char *)this + 72));
  v16 = *((_QWORD *)a2 + 1);
  *((_DWORD *)this + 28) = v13;
  *((_BYTE *)this + 116) = v15;
  v17 = *(_QWORD *)(v16 + 48);
  v72 = _mm_load_si128(&v65);
  v18 = boost::asio::detail::service_registry::do_use_service(v16, (__int64)&v72, v17);
  v19 = boost::asio::detail::config_get<bool>(v18, (__int64)"reactor", (__int64)"use_eventfd", 1u);
  boost::asio::detail::eventfd_select_interrupter::open_descriptors(
    (boost::asio::detail::eventfd_select_interrupter *)((char *)this + 120),
    v19);
  v20 = epoll_create1((int)&loc_80000);
  if ( v20 != -1 )
    goto LABEL_7;
  v61 = __errno_location();
  v62 = *v61;
  if ( ((*v61 - 22) & 0xFFFFFFEF) == 0 )
  {
    v64 = epoll_create(20000);
    if ( v64 != -1 )
    {
      LODWORD(v66) = v64;
      fcntl(v64, 2, 1);
      v20 = v66;
      goto LABEL_7;
    }
    v62 = *v61;
  }
  v79[0] = v62;
  v80 = &boost::system::detail::system_cat_holder<void>::instance;
  v81 = 2 - ((v62 == 0) - 1LL);
  v79[1] = 0;
  v78 = 653;
  event = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_4429E0), (__m128i)(unsigned __int64)"do_epoll_create");
  boost::asio::detail::throw_error();
LABEL_7:
  v21 = *((_QWORD *)a2 + 1);
  *((_DWORD *)this + 32) = v20;
  v22 = *(_QWORD *)(v21 + 48);
  v73 = _mm_load_si128(&v65);
  v23 = boost::asio::detail::service_registry::do_use_service(v21, (__int64)&v73, v22);
  if ( !(unsigned __int8)boost::asio::detail::config_get<bool>(v23, (__int64)"reactor", (__int64)"use_timerfd", 1u) )
    goto LABEL_27;
  v24 = timerfd_create(1, (int)&loc_80000);
  if ( v24 != -1 )
    goto LABEL_9;
  if ( *__errno_location() == 22 && (v63 = timerfd_create(1, 0), v24 = v63, v63 != -1) )
    fcntl(v63, 2, 1);
  else
LABEL_27:
    v24 = -1;
LABEL_9:
  v25 = *((_QWORD *)a2 + 1);
  *((_DWORD *)this + 33) = v24;
  *((_QWORD *)this + 17) = 0;
  v26 = _mm_load_si128(&v65);
  *((_BYTE *)this + 144) = 0;
  v27 = *(_QWORD *)(v25 + 48);
  v74 = v26;
  v28 = boost::asio::detail::service_registry::do_use_service(v25, (__int64)&v74, v27);
  v29 = boost::asio::detail::config_get<bool>(v28, (__int64)"reactor", (__int64)"io_locking", 1u);
  v30 = *((_QWORD *)a2 + 1);
  *((_BYTE *)this + 145) = v29;
  v31 = *(_QWORD *)(v30 + 48);
  v75 = _mm_load_si128(&v65);
  v32 = boost::asio::detail::service_registry::do_use_service(v30, (__int64)&v75, v31);
  v33 = boost::asio::detail::config_get<int>(v32, (__int64)"reactor", (__int64)"io_locking_spin_count", 0);
  v34 = *((_DWORD *)this + 28);
  v35 = *((_BYTE *)this + 116);
  *((_DWORD *)this + 37) = v33;
  mutex = (pthread_mutex_t *)(this + 10);
  boost::asio::detail::posix_mutex::posix_mutex((boost::asio::detail::posix_mutex *)(this + 10));
  v36 = *((_QWORD *)a2 + 1);
  *((_DWORD *)this + 50) = v34;
  *((_BYTE *)this + 204) = v35;
  v37 = _mm_load_si128(&v65);
  v38 = *(_QWORD *)(v36 + 48);
  LODWORD(v66) = *((_DWORD *)this + 37);
  v39 = *((_BYTE *)this + 145);
  v76 = v37;
  v40 = boost::asio::detail::service_registry::do_use_service(v36, (__int64)&v76, v38);
  if ( (*(__int64 (__fastcall **)(_QWORD *, const char *, const char *, char *, __int64, _QWORD, __int64, __int64))(*v40 + 32LL))(
         v40,
         "reactor",
         "preallocated_io_objects",
         v82,
         22,
         *v40,
         v65.m128i_i64[0],
         v65.m128i_i64[1]) )
  {
    event.m128i_i64[0] = 0;
    v41 = __errno_location();
    *v41 = 0;
    v65.m128i_i64[0] = (__int64)v41;
    v42 = __isoc23_strtoull();
    if ( *(_DWORD *)v65.m128i_i64[0] == 34 || HIDWORD(v42) )
    {
      std::out_of_range::out_of_range((std::out_of_range *)v79, "config out of range");
      boost::throw_exception<std::out_of_range>((std::logic_error *)v79);
    }
    v45 = *(_QWORD *)a2;
    v46 = (unsigned int)v66;
    v69 = v39;
    v47 = v42;
    *((_QWORD *)this + 27) = 0;
    v70 = v46;
    *((_QWORD *)this + 26) = v45;
    *((_QWORD *)this + 28) = 0;
    if ( (_DWORD)v42 )
    {
      while ( 1 )
      {
        v48 = boost::asio::detail::allocate_object<boost::asio::detail::epoll_reactor::descriptor_state,boost::asio::execution_context::allocator<void>,bool &,int &>(
                v45,
                &v69,
                &v70,
                v46,
                v43,
                v44);
        v49 = *((_QWORD *)this + 28);
        *(_QWORD *)(v48 + 32) = 0;
        *((_QWORD *)this + 28) = v48;
        *(_QWORD *)(v48 + 24) = v49;
        if ( !--v47 )
          break;
        v45 = *((_QWORD *)this + 26);
      }
    }
  }
  else
  {
    v60 = *(_QWORD *)a2;
    *((_QWORD *)this + 27) = 0;
    *((_QWORD *)this + 28) = 0;
    *((_QWORD *)this + 26) = v60;
  }
  v50 = *((_DWORD *)this + 30);
  v51 = *((_DWORD *)this + 32);
  event.m128i_i32[0] = -2147483639;
  *(__int64 *)((char *)event.m128i_i64 + 4) = (__int64)this + 120;
  epoll_ctl(v51, 1, v50, (struct epoll_event *)&event);
  v52 = *((_DWORD *)this + 31);
  buf = 1;
  write(v52, &buf, 8u);
  v53 = *((_DWORD *)this + 33);
  if ( v53 != -1 )
  {
    v54 = *((_DWORD *)this + 32);
    event.m128i_i32[0] = 9;
    *(__int64 *)((char *)event.m128i_i64 + 4) = (__int64)this + 132;
    epoll_ctl(v54, 1, v53, (struct epoll_event *)&event);
  }
  return v83 - __readfsqword(0x28u);
}

