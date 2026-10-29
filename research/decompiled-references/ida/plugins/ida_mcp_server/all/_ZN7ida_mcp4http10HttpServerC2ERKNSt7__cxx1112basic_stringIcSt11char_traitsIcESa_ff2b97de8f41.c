// Alternative name is '_ZN7ida_mcp4http10HttpServerC1ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEtRNS_3mcp9McpServerE'
unsigned __int64 __fastcall ida_mcp::http::HttpServer::HttpServer(
        __int64 a1,
        const char *a2,
        __int16 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        int a11,
        void (__fastcall **a12)(boost::asio::invalid_service_owner *__hidden this),
        int a13,
        int a14,
        __int64 a15)
{
  _BYTE *v17; // rdi
  unsigned __int64 v18; // rdx
  const char *v20; // r13
  size_t v21; // rcx
  __int64 v22; // rax
  _QWORD *v23; // rbp
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rax
  pthread_mutex_t *v29; // r14
  __m128i *v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdi
  __int64 (__fastcall *v36)(); // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rbp
  __int64 v39; // rcx
  __int64 v40; // r15
  __int64 v41; // r13
  __int64 v42; // rax
  char *v43; // rdi
  __m128i v44; // xmm0
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r12
  _QWORD *v50; // r15
  __int64 (__fastcall *v51)(); // rax
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rbp
  __int64 v54; // r15
  __int64 v55; // r14
  __int64 v56; // rax
  char *v57; // rdi
  __m128i v58; // xmm1
  __m128i v59; // xmm0
  __int64 v61; // rax
  unsigned __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __m128i v67; // [rsp+0h] [rbp-88h] BYREF
  __m128i v68; // [rsp+10h] [rbp-78h] BYREF
  unsigned __int64 v69; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v70[3]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v71; // [rsp+48h] [rbp-40h]

  v17 = (_BYTE *)(a1 + 16);
  v18 = *((_QWORD *)a2 + 1);
  v71 = __readfsqword(0x28u);
  *(_QWORD *)a1 = v17;
  v20 = *(const char **)a2;
  v69 = v18;
  if ( v18 <= 0xF )
  {
    v21 = v18 + 1;
    if ( v18 )
    {
LABEL_3:
      a2 = v20;
      memcpy(v17, v20, v21);
      v22 = v69;
      goto LABEL_4;
    }
    goto LABEL_14;
  }
  a2 = (const char *)&v69;
  v61 = std::string::_M_create();
  *(_QWORD *)a1 = v61;
  v17 = (_BYTE *)v61;
  v62 = v69;
  *(_QWORD *)(a1 + 16) = v69;
  v21 = v62 + 1;
  if ( !v62 )
  {
LABEL_14:
    *v17 = *v20;
    v22 = v69;
    goto LABEL_4;
  }
  v22 = -1;
  if ( v21 )
    goto LABEL_3;
LABEL_4:
  *(_QWORD *)(a1 + 8) = v22;
  *(_WORD *)(a1 + 32) = a3;
  *(_QWORD *)(a1 + 40) = a4;
  v67.m128i_i64[0] = a1 + 48;
  v23 = (_QWORD *)operator new(0x10u);
  *(_QWORD *)(a1 + 48) = v23;
  *v23 = off_4446F8;
  v28 = boost::asio::execution_context::allocator_impl<std::allocator<void>>::allocate(
          0x40u,
          (__int64)a2,
          v24,
          v25,
          v26,
          v27,
          v67.m128i_i64[0]);
  v29 = (pthread_mutex_t *)(v28 + 8);
  v30 = (__m128i *)v28;
  v68 = (__m128i)(unsigned __int64)(a1 + 48);
  boost::asio::detail::posix_mutex::posix_mutex((boost::asio::detail::posix_mutex *)(v28 + 8));
  v30[3] = _mm_load_si128(&v68);
  v35 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 56) = v30;
  v36 = *(__int64 (__fastcall **)())(*(_QWORD *)v35 + 8LL);
  if ( v36 == boost::asio::execution_context::allocator_impl<std::allocator<void>>::allocate )
  {
    v37 = boost::asio::execution_context::allocator_impl<std::allocator<void>>::allocate(
            0x38u,
            (__int64)a2,
            v31,
            v32,
            v33,
            v34,
            v67.m128i_i64[0]);
  }
  else
  {
    a2 = (const char *)&word_38;
    v37 = ((__int64 (__fastcall *)(__int64, __int64, __int64))v36)(v35, 56, 8);
  }
  *(_QWORD *)(v37 + 32) = 0;
  v38 = v37;
  v39 = v67.m128i_i64[0];
  *(_DWORD *)(v37 + 48) = -1;
  *(_OWORD *)v37 = (unsigned __int64)off_444798;
  *(_QWORD *)(v37 + 40) = boost::asio::detail::service_registry::destroy_allocated<boost::asio::detail::config_from_concurrency_hint_service>;
  *(__m128i *)(v37 + 16) = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)(unsigned __int64)v39);
  if ( v39 != v30[3].m128i_i64[0] )
  {
    std::logic_error::logic_error((std::logic_error *)v70, "Invalid service owner.");
    ida_mcp::http::HttpServer::HttpServer(
      (__int64)v70,
      (__int64)"Invalid service owner.",
      v63,
      v64,
      v65,
      v66,
      a7,
      a8,
      a9,
      a10,
      a11,
      a12,
      a13,
      a14,
      a15);
  }
  pthread_mutex_lock(v29);
  v40 = v30[3].m128i_i64[1];
  if ( v40 )
  {
    v41 = v30[3].m128i_i64[1];
    do
    {
      v42 = *(_QWORD *)(v41 + 8);
      if ( v42 )
      {
        v43 = *(char **)(v42 + 8);
        a2 = "N5boost4asio6detail14typeid_wrapperINS0_14config_serviceEEE";
        if ( v43 == "N5boost4asio6detail14typeid_wrapperINS0_14config_serviceEEE"
          || *v43 != 42 && !strcmp(v43, "N5boost4asio6detail14typeid_wrapperINS0_14config_serviceEEE") )
        {
          std::logic_error::logic_error((std::logic_error *)v70, "Service already exists.");
          v70[0] = off_4446A8;
          boost::throw_exception<boost::asio::service_already_exists>((std::logic_error *)v70);
        }
      }
      v41 = *(_QWORD *)(v41 + 32);
    }
    while ( v41 );
  }
  if ( !*(_QWORD *)(v38 + 40) )
    *(_QWORD *)(v38 + 40) = boost::asio::detail::service_registry::destroy_added;
  v44 = _mm_loadl_epi64((const __m128i *)&`typeinfo for'boost::asio::detail::typeid_wrapper<boost::asio::config_service>);
  *(_QWORD *)(v38 + 32) = v40;
  *(__m128i *)(v38 + 8) = v44;
  v30[3].m128i_i64[1] = v38;
  pthread_mutex_unlock(v29);
  v49 = *(_QWORD *)(a1 + 56);
  v50 = *(_QWORD **)(v49 + 48);
  v51 = *(__int64 (__fastcall **)())(*(_QWORD *)*v50 + 8LL);
  if ( v51 == boost::asio::execution_context::allocator_impl<std::allocator<void>>::allocate )
    v52 = boost::asio::execution_context::allocator_impl<std::allocator<void>>::allocate(
            0x110u,
            (__int64)a2,
            v45,
            v46,
            v47,
            v48,
            v67.m128i_i64[0]);
  else
    v52 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64))v51)(*v50, 272, 8);
  v53 = v52;
  boost::asio::detail::scheduler::scheduler();
  *(_QWORD *)(v53 + 40) = boost::asio::detail::service_registry::destroy_allocated<boost::asio::detail::scheduler>;
  if ( *(_QWORD *)(v49 + 48) != *(_QWORD *)(v53 + 24) )
  {
    std::logic_error::logic_error((std::logic_error *)v70, "Invalid service owner.");
    v70[0] = off_4446D0;
    boost::throw_exception<boost::asio::invalid_service_owner>((std::logic_error *)v70);
  }
  pthread_mutex_lock((pthread_mutex_t *)(v49 + 8));
  v54 = *(_QWORD *)(v49 + 56);
  if ( v54 )
  {
    v55 = *(_QWORD *)(v49 + 56);
    do
    {
      v56 = *(_QWORD *)(v55 + 8);
      if ( v56 )
      {
        v57 = *(char **)(v56 + 8);
        if ( v57 == "N5boost4asio6detail14typeid_wrapperINS1_9schedulerEEE"
          || *v57 != 42 && !strcmp(v57, "N5boost4asio6detail14typeid_wrapperINS1_9schedulerEEE") )
        {
          std::logic_error::logic_error((std::logic_error *)v70, "Service already exists.");
          JUMPOUT(0x4D784);
        }
      }
      v55 = *(_QWORD *)(v55 + 32);
    }
    while ( v55 );
  }
  if ( !*(_QWORD *)(v53 + 40) )
    *(_QWORD *)(v53 + 40) = boost::asio::detail::service_registry::destroy_added;
  v58 = _mm_loadl_epi64((const __m128i *)&`typeinfo for'boost::asio::detail::typeid_wrapper<boost::asio::detail::scheduler>);
  *(_QWORD *)(v53 + 32) = v54;
  v67 = (__m128i)v53;
  *(__m128i *)(v53 + 8) = v58;
  *(_QWORD *)(v49 + 56) = v53;
  pthread_mutex_unlock((pthread_mutex_t *)(v49 + 8));
  v59 = _mm_load_si128(&v67);
  *(_BYTE *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(__m128i *)(a1 + 64) = v59;
  *(_QWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 128) = 0;
  return v71 - __readfsqword(0x28u);
}

