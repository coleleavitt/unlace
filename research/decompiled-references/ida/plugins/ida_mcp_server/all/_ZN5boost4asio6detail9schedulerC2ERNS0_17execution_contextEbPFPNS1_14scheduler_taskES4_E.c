// Alternative name is '_ZN5boost4asio6detail9schedulerC1ERNS0_17execution_contextEbPFPNS1_14scheduler_taskES4_E'
unsigned __int64 __fastcall boost::asio::detail::scheduler::scheduler(
        pthread_t a1,
        unsigned __int64 a2,
        int a3,
        __int64 a4)
{
  boost::asio::detail::posix_mutex *v5; // r14
  __m128i v6; // xmm2
  __m128i v7; // xmm3
  __int64 *v8; // rax
  int v9; // eax
  __int64 v10; // rdi
  __m128i v11; // xmm2
  __int64 v12; // rdx
  __int64 *v13; // rax
  int v14; // eax
  __int64 v15; // rdi
  int v16; // r13d
  __int64 v17; // rdx
  __int64 *v18; // rax
  char v19; // r15
  unsigned int v20; // eax
  __m128i v21; // xmm6
  int v22; // edx
  __m128i v23; // xmm7
  __int64 v24; // rax
  __int64 v25; // rdi
  __m128i v26; // xmm6
  __int64 v27; // rdx
  _QWORD *v28; // rax
  int *v29; // rax
  int *v30; // r13
  __int64 v31; // rax
  __int64 v32; // rdi
  __m128i v33; // xmm7
  __int64 v34; // rdx
  _QWORD *v35; // rax
  int *v36; // rax
  int *v37; // r15
  __int64 v38; // rax
  pthread_t *v40; // r13
  int v41; // eax
  void (__fastcall **v42)(pthread_t *); // rdx
  __m128i v43; // [rsp+0h] [rbp-228h] BYREF
  __m128i v44; // [rsp+10h] [rbp-218h] BYREF
  __int64 v45; // [rsp+20h] [rbp-208h]
  int v46; // [rsp+28h] [rbp-200h]
  unsigned int v47; // [rsp+2Ch] [rbp-1FCh]
  __int64 v48; // [rsp+38h] [rbp-1F0h]
  __m128i v49; // [rsp+40h] [rbp-1E8h] BYREF
  __m128i v50; // [rsp+50h] [rbp-1D8h] BYREF
  __m128i v51; // [rsp+60h] [rbp-1C8h]
  __int64 v52; // [rsp+70h] [rbp-1B8h]
  __m128i v53; // [rsp+80h] [rbp-1A8h] BYREF
  __int64 v54; // [rsp+90h] [rbp-198h]
  pthread_condattr_t attr; // [rsp+9Ch] [rbp-18Ch] BYREF
  sigset_t set; // [rsp+A0h] [rbp-188h] BYREF
  __int64 v57; // [rsp+120h] [rbp-108h] BYREF
  __sigset_t oldmask; // [rsp+128h] [rbp-100h] BYREF
  char v59[32]; // [rsp+1B0h] [rbp-78h] BYREF
  char v60[24]; // [rsp+1D0h] [rbp-58h] BYREF
  unsigned __int64 v61; // [rsp+1E8h] [rbp-40h]

  v5 = (boost::asio::detail::posix_mutex *)(a1 + 64);
  v6 = _mm_loadl_epi64((const __m128i *)&`typeinfo for'boost::asio::detail::typeid_wrapper<boost::asio::config_service>);
  v7 = _mm_loadl_epi64((const __m128i *)off_4429E8);
  v46 = a3;
  v45 = a4;
  v61 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  v43 = v6;
  v53 = v6;
  *(__m128i *)(a1 + 16) = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)a2);
  v44 = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)"posix_event");
  *(_OWORD *)a1 = (unsigned __int64)off_444730;
  v8 = boost::asio::detail::service_registry::do_use_service(
         *(_QWORD *)(a2 + 8),
         (__int64)&v53,
         *(_QWORD *)(*(_QWORD *)(a2 + 8) + 48LL));
  v9 = boost::asio::detail::config_get<int>(v8, (__int64)"scheduler", (__int64)"concurrency_hint", 0);
  v10 = *(_QWORD *)(a2 + 8);
  v11 = _mm_load_si128(&v43);
  v12 = *(_QWORD *)(v10 + 48);
  *(_BYTE *)(a1 + 48) = v9 == 1;
  v53 = v11;
  v13 = boost::asio::detail::service_registry::do_use_service(v10, (__int64)&v53, v12);
  v14 = boost::asio::detail::config_get<int>(v13, (__int64)"scheduler", (__int64)"locking_spin_count", 0);
  v15 = *(_QWORD *)(a2 + 8);
  v16 = v14;
  v17 = *(_QWORD *)(v15 + 48);
  v53 = _mm_load_si128(&v43);
  v18 = boost::asio::detail::service_registry::do_use_service(v15, (__int64)&v53, v17);
  v19 = boost::asio::detail::config_get<bool>(v18, (__int64)"scheduler", (__int64)"locking", 1u);
  boost::asio::detail::posix_mutex::posix_mutex(v5);
  *(_DWORD *)(a1 + 104) = v16;
  *(_BYTE *)(a1 + 108) = v19;
  *(_QWORD *)(a1 + 168) = 0;
  v20 = pthread_condattr_init(&attr);
  if ( v20 )
  {
    set.__val[0] = v20;
    v52 = 54;
    v21 = _mm_load_si128(&v44);
    set.__val[2] = 3;
    set.__val[1] = (unsigned __int64)&boost::system::detail::system_cat_holder<void>::instance;
    v51 = v21;
    goto LABEL_3;
  }
  v22 = pthread_condattr_setclock(&attr, 1);
  if ( !v22 )
    v22 = pthread_cond_init((pthread_cond_t *)(a1 + 120), &attr);
  v47 = v22;
  pthread_condattr_destroy(&attr);
  v23 = _mm_load_si128(&v44);
  set.__val[0] = v47;
  v51 = v23;
  set.__val[2] = 2 - ((v47 == 0) - 1LL);
  set.__val[1] = (unsigned __int64)&boost::system::detail::system_cat_holder<void>::instance;
  if ( v47 )
  {
    v52 = 54;
LABEL_3:
    boost::system::system_error::system_error();
    boost::throw_exception<boost::system::system_error>((std::runtime_error *)&v57);
  }
  v24 = v45;
  v25 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  v26 = _mm_load_si128(&v43);
  *(_QWORD *)(a1 + 184) = v24;
  v27 = *(_QWORD *)(v25 + 48);
  *(_QWORD *)(a1 + 200) = 0;
  *(_DWORD *)(a1 + 208) = 0;
  *(_WORD *)(a1 + 216) = 1;
  *(_BYTE *)(a1 + 218) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  *(_OWORD *)(a1 + 232) = 0;
  v49 = v26;
  v28 = boost::asio::detail::service_registry::do_use_service(v25, (__int64)&v49, v27);
  if ( (*(__int64 (__fastcall **)(_QWORD *, const char *, const char *, char *, __int64, _QWORD, __int64, __int64, __int64, __int64))(*v28 + 32LL))(
         v28,
         "scheduler",
         "task_usec",
         v59,
         22,
         *v28,
         v43.m128i_i64[0],
         v43.m128i_i64[1],
         v44.m128i_i64[0],
         v44.m128i_i64[1]) )
  {
    v48 = 0;
    v29 = __errno_location();
    *v29 = 0;
    v30 = v29;
    v31 = __isoc23_strtoll();
    if ( *v30 == 34 )
    {
      std::out_of_range::out_of_range((std::out_of_range *)&set, "config out of range");
      boost::throw_exception<std::out_of_range>((std::logic_error *)&set);
    }
  }
  else
  {
    v31 = -1;
  }
  v32 = *(_QWORD *)(a2 + 8);
  v33 = _mm_load_si128(&v43);
  *(_QWORD *)(a1 + 248) = v31;
  v34 = *(_QWORD *)(v32 + 48);
  v50 = v33;
  v35 = boost::asio::detail::service_registry::do_use_service(v32, (__int64)&v50, v34);
  if ( (*(__int64 (__fastcall **)(_QWORD *, const char *, const char *, char *, __int64))(*v35 + 32LL))(
         v35,
         "scheduler",
         "wait_usec",
         v60,
         22) )
  {
    v51.m128i_i64[0] = 0;
    v36 = __errno_location();
    *v36 = 0;
    v37 = v36;
    v38 = __isoc23_strtoll();
    if ( *v37 == 34 )
    {
      std::out_of_range::out_of_range((std::out_of_range *)&v57, "config out of range");
      boost::throw_exception<std::out_of_range>((std::logic_error *)&v57);
    }
  }
  else
  {
    v38 = -1;
  }
  *(_QWORD *)(a1 + 256) = v38;
  *(_QWORD *)(a1 + 264) = 0;
  if ( (_BYTE)v46 )
  {
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 224), 1u);
    LOBYTE(v57) = 0;
    sigfillset(&set);
    LOBYTE(v57) = pthread_sigmask(0, &set, &oldmask) == 0;
    v40 = (pthread_t *)operator new(0x20u);
    v40[2] = a1;
    *v40 = (pthread_t)off_444D38;
    v41 = pthread_create(v40 + 1, nullptr, (void *(*)(void *))boost_asio_detail_posix_thread_function, v40);
    if ( v41 )
    {
      v42 = (void (__fastcall **)(pthread_t *))*v40;
      v43.m128i_i32[0] = v41;
      (*v42)(v40);
      operator delete(v40, 0x20u);
      set.__val[0] = v43.m128i_u32[0];
      set.__val[2] = 3;
      set.__val[1] = (unsigned __int64)&boost::system::detail::system_cat_holder<void>::instance;
      v54 = 67;
      v53 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_4429F0), (__m128i)(unsigned __int64)"start_thread");
      boost::asio::detail::throw_error();
    }
    *(_QWORD *)(a1 + 264) = v40;
    if ( (_BYTE)v57 )
      pthread_sigmask(2, &oldmask, nullptr);
  }
  return v61 - __readfsqword(0x28u);
}

