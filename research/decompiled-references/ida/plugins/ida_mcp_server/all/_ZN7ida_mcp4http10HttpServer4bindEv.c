unsigned __int64 __fastcall ida_mcp::http::HttpServer::bind(ida_mcp::http::HttpServer *this)
{
  const char *v1; // r13
  int *v3; // rax
  int *v4; // r14
  char *v5; // rax
  char *v6; // r15
  signed __int64 v7; // rbx
  int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // rax
  __m128i *v11; // r13
  __int64 v12; // rbx
  pthread_mutex_t *v13; // r14
  __m128i *v14; // r15
  __int64 v15; // rax
  char *v16; // rdi
  void *v17; // r13
  __int64 (__fastcall ***v18)(boost::system::detail::system_error_category *__hidden); // rax
  __int32 v19; // r14d
  __m128i v20; // xmm0
  char *v21; // rdx
  const char *v22; // rax
  const char *v23; // r15
  unsigned int v24; // eax
  int v25; // r13d
  int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __m128i *v32; // rax
  __m128i v33; // xmm0
  __int64 v34; // rsi
  __m128i *v35; // rdx
  __m128i *v36; // r15
  __m128i *v37; // r13
  __int64 v38; // rax
  char *v39; // rdi
  __m128i *v40; // rdx
  int v41; // r15d
  unsigned int v42; // eax
  int v43; // r13d
  __int64 v44; // rsi
  __m128i v45; // xmm0
  __int64 v46; // rax
  int v47; // edi
  int v48; // ecx
  unsigned __int64 v49; // rdx
  __m128i v50; // xmm1
  __m128i v51; // xmm0
  unsigned __int64 v52; // rax
  __int16 v53; // ax
  __int64 v54; // rdx
  int v55; // edi
  socklen_t v56; // edx
  __int32 v57; // ecx
  unsigned __int64 v58; // rdx
  __m128i v59; // xmm1
  unsigned __int64 v60; // rax
  __m128i v61; // xmm0
  unsigned __int32 v62; // eax
  int v63; // edi
  int v64; // ecx
  __int64 v65; // rax
  __m128i v67; // xmm7
  __m128i si128; // xmm0
  __m128i v69; // xmm0
  char *v70; // [rsp+8h] [rbp-160h]
  int v71; // [rsp+8h] [rbp-160h]
  int v72; // [rsp+8h] [rbp-160h]
  int v73; // [rsp+8h] [rbp-160h]
  __m128i v74; // [rsp+10h] [rbp-158h] BYREF
  __int64 v75; // [rsp+20h] [rbp-148h]
  unsigned int v76; // [rsp+28h] [rbp-140h]
  int v77; // [rsp+2Ch] [rbp-13Ch]
  __m128i *v78; // [rsp+30h] [rbp-138h]
  __int64 v79; // [rsp+38h] [rbp-130h]
  int optval; // [rsp+4Ch] [rbp-11Ch] BYREF
  __m128i v81; // [rsp+50h] [rbp-118h] BYREF
  __int64 v82; // [rsp+60h] [rbp-108h]
  __m128i v83; // [rsp+70h] [rbp-F8h] BYREF
  unsigned __int64 v84; // [rsp+80h] [rbp-E8h]
  struct sockaddr addr[2]; // [rsp+90h] [rbp-D8h] BYREF
  __m128i buf; // [rsp+B0h] [rbp-B8h] BYREF
  char *v87; // [rsp+C0h] [rbp-A8h]
  _BYTE v88[72]; // [rsp+E0h] [rbp-88h]
  unsigned __int64 v89; // [rsp+128h] [rbp-40h]

  v1 = *(const char **)this;
  v89 = __readfsqword(0x28u);
  v3 = __errno_location();
  *v3 = 0;
  v4 = v3;
  v5 = strchr(v1, 37);
  if ( !v5 )
  {
    v41 = inet_pton(10, v1, &buf);
    boost::asio::detail::socket_ops::get_last_error((__m128i *)addr);
    v8 = *(_DWORD *)&addr[0].sa_family;
    v9 = *(_QWORD *)&addr[1].sa_family;
    if ( v41 > 0 )
    {
      v76 = 0;
      goto LABEL_22;
    }
    goto LABEL_44;
  }
  v6 = v5;
  v7 = v5 - v1;
  if ( v5 - v1 <= 63 )
  {
    v22 = (const char *)__memcpy_chk();
    v88[v7] = 0;
    v71 = inet_pton(10, v22, &buf);
    boost::asio::detail::socket_ops::get_last_error((__m128i *)addr);
    v8 = *(_DWORD *)&addr[0].sa_family;
    v9 = *(_QWORD *)&addr[1].sa_family;
    if ( v71 > 0 )
    {
      v23 = v6 + 1;
      if ( buf.m128i_i8[0] == -2 )
      {
        if ( (buf.m128i_i8[1] & 0xC0) == 0x80 )
          goto LABEL_50;
      }
      else if ( buf.m128i_i8[0] == -1 && (buf.m128i_i8[1] & 0xF) == 2 )
      {
LABEL_50:
        v75 = *(_QWORD *)&addr[1].sa_family;
        v73 = *(_DWORD *)&addr[0].sa_family;
        v42 = if_nametoindex(v23);
        v8 = v73;
        v9 = v75;
        v76 = v42;
        if ( v42 )
          goto LABEL_22;
      }
      v75 = v9;
      v72 = v8;
      v24 = __isoc23_strtol();
      v8 = v72;
      v9 = v75;
      v76 = v24;
LABEL_22:
      v74 = _mm_load_si128(&buf);
      goto LABEL_4;
    }
LABEL_44:
    if ( (v9 & 1) != 0 && (v9 != 1 || v8) )
      goto LABEL_23;
  }
  boost::asio::error::make_error_code();
  v76 = 0;
  v8 = *(_DWORD *)&addr[0].sa_family;
  v74 = 0u;
  v9 = *(_QWORD *)&addr[1].sa_family;
LABEL_4:
  if ( (v9 & 1) == 0 || v9 == 1 && !v8 )
  {
    LODWORD(v75) = 0;
    v77 = 1;
    goto LABEL_8;
  }
LABEL_23:
  *v4 = 0;
  v25 = inet_pton(2, v1, &buf);
  boost::asio::detail::socket_ops::get_last_error((__m128i *)addr);
  v26 = *(_DWORD *)&addr[0].sa_family;
  v27 = *(_QWORD *)&addr[1].sa_family;
  LODWORD(v75) = buf.m128i_i32[0];
  if ( v25 <= 0 )
  {
    if ( (addr[1].sa_family & 1) != 0 && (*(_QWORD *)&addr[1].sa_family != 1 || *(_DWORD *)&addr[0].sa_family) )
    {
LABEL_31:
      *(_QWORD *)&addr[1].sa_family = v27;
      *(_DWORD *)&addr[0].sa_family = v26;
      v82 = 108;
      v81 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_4429F8), (__m128i)(unsigned __int64)"make_address");
      boost::system::system_error::system_error();
      boost::throw_exception<boost::system::system_error>((std::runtime_error *)&buf);
    }
    boost::asio::error::make_error_code();
    LODWORD(v75) = 0;
    v26 = *(_DWORD *)&addr[0].sa_family;
    v27 = *(_QWORD *)&addr[1].sa_family;
  }
  if ( (v27 & 1) != 0 && (v27 != 1 || v26) )
    goto LABEL_31;
  v76 = 0;
  v74 = 0u;
  v77 = 0;
LABEL_8:
  v70 = (char *)this + 48;
  v10 = operator new(0x58u);
  v11 = *((__m128i **)this + 7);
  v12 = v10;
  v13 = (pthread_mutex_t *)&v11->m128i_u64[1];
  pthread_mutex_lock((pthread_mutex_t *)&v11->m128i_u64[1]);
  v14 = (__m128i *)v11[3].m128i_i64[1];
  if ( v14 )
  {
    while ( 1 )
    {
      v15 = v14->m128i_i64[1];
      if ( v15 )
      {
        v16 = *(char **)(v15 + 8);
        if ( v16 == "N5boost4asio6detail14typeid_wrapperINS1_23reactive_socket_serviceINS0_2ip3tcpEEEEE"
          || *v16 != 42
          && !strcmp(v16, "N5boost4asio6detail14typeid_wrapperINS1_23reactive_socket_serviceINS0_2ip3tcpEEEEE") )
        {
          break;
        }
      }
      v14 = (__m128i *)v14[2].m128i_i64[0];
      if ( !v14 )
        goto LABEL_33;
    }
  }
  else
  {
LABEL_33:
    pthread_mutex_unlock((pthread_mutex_t *)&v11->m128i_u64[1]);
    v32 = boost::asio::detail::allocate_object<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::execution_context::allocator<void>,boost::asio::io_context &>(
            *(_QWORD **)v11[3].m128i_i64[0],
            (__int64)v70,
            v28,
            v29,
            v30,
            v31);
    v33 = _mm_loadl_epi64((const __m128i *)&`typeinfo for'boost::asio::detail::typeid_wrapper<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>);
    v78 = v32;
    v32[2].m128i_i64[1] = (__int64)boost::asio::detail::service_registry::destroy_allocated<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>;
    *(__m128i *)((char *)v32 + 8) = v33;
    pthread_mutex_lock((pthread_mutex_t *)&v11->m128i_u64[1]);
    v34 = v11[3].m128i_i64[1];
    v35 = v78;
    if ( v34 )
    {
      v79 = v11[3].m128i_i64[1];
      v36 = v78;
      v78 = v11;
      v37 = (__m128i *)v34;
      do
      {
        v38 = v37->m128i_i64[1];
        if ( v38 )
        {
          v39 = *(char **)(v38 + 8);
          if ( v39 == "N5boost4asio6detail14typeid_wrapperINS1_23reactive_socket_serviceINS0_2ip3tcpEEEEE"
            || *v39 != 42
            && !strcmp(v39, "N5boost4asio6detail14typeid_wrapperINS1_23reactive_socket_serviceINS0_2ip3tcpEEEEE") )
          {
            v40 = v36;
            v14 = v37;
            ((void (__fastcall *)(__m128i *))v40[2].m128i_i64[1])(v40);
            goto LABEL_13;
          }
        }
        v37 = (__m128i *)v37[2].m128i_i64[0];
      }
      while ( v37 );
      v11 = v78;
      v34 = v79;
      v35 = v36;
    }
    v35[2].m128i_i64[0] = v34;
    v14 = v35;
    v11[3].m128i_i64[1] = (__int64)v35;
  }
LABEL_13:
  pthread_mutex_unlock(v13);
  v17 = *((void **)this + 9);
  *(_QWORD *)v12 = v14;
  *(_DWORD *)(v12 + 24) = 2;
  *(_QWORD *)(v12 + 72) = boost::asio::execution::detail::any_executor_base::target_fns_table<boost::asio::io_context::basic_executor_type<std::allocator<void>,0ul>>(bool,std::enable_if<!(std::is_same<boost::asio::io_context::basic_executor_type<std::allocator<void>,0ul>,void>::value),void>::type *)::fns_with_execute;
  *(_DWORD *)(v12 + 8) = -1;
  *(_QWORD *)(v12 + 56) = boost::asio::execution::detail::any_executor_base::object_fns_table<boost::asio::io_context::basic_executor_type<std::allocator<void>,0ul>>(std::enable_if<(!(std::is_same<boost::asio::io_context::basic_executor_type<std::allocator<void>,0ul>,void>::value))&&(!(std::is_same<boost::asio::io_context::basic_executor_type<std::allocator<void>,0ul>,boost::asio::execution::detail::shared_target_executor>::value)),void>::type *)::fns;
  *(_BYTE *)(v12 + 12) = 0;
  *(_QWORD *)(v12 + 32) = v70;
  *(_QWORD *)(v12 + 64) = v12 + 32;
  *(_QWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 80) = boost::asio::execution::any_executor<boost::asio::execution::context_as_t<boost::asio::execution_context &>,boost::asio::execution::detail::blocking::never_t<0>,boost::asio::execution::prefer_only<boost::asio::execution::detail::blocking::possibly_t<0>>,boost::asio::execution::prefer_only<boost::asio::execution::detail::outstanding_work::tracked_t<0>>,boost::asio::execution::prefer_only<boost::asio::execution::detail::outstanding_work::untracked_t<0>>,boost::asio::execution::prefer_only<boost::asio::execution::detail::relationship::fork_t<0>>,boost::asio::execution::prefer_only<boost::asio::execution::detail::relationship::continuation_t<0>>>::prop_fns_table<boost::asio::io_context::basic_executor_type<std::allocator<void>,0ul>>(void)::fns;
  *((_QWORD *)this + 9) = v12;
  if ( v17 )
  {
    boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::any_io_executor>::~io_object_impl();
    operator delete(v17, 0x58u);
    v12 = *((_QWORD *)this + 9);
    if ( *(_DWORD *)(v12 + 8) != -1 )
    {
      v18 = &boost::asio::error::get_misc_category(void)::instance;
      v19 = 1;
      buf.m128i_i64[0] = 1;
      buf.m128i_i64[1] = (__int64)&boost::asio::error::get_misc_category(void)::instance;
      *(_DWORD *)&addr[0].sa_data[2] = _mm_load_si128(&buf).m128i_i32[1];
      *(_DWORD *)&addr[0].sa_family = 1;
      *(_QWORD *)&addr[0].sa_data[6] = &boost::asio::error::get_misc_category(void)::instance;
      buf = _mm_load_si128((const __m128i *)addr);
LABEL_16:
      v20 = _mm_load_si128(&buf);
      v82 = 477;
      v21 = (char *)&boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::open(boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::implementation_type &,boost::asio::ip::tcp const&,boost::system::error_code &)::loc
          + 1;
      addr[0] = (struct sockaddr)v20;
      v87 = (char *)&boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::open(boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::implementation_type &,boost::asio::ip::tcp const&,boost::system::error_code &)::loc
          + 1;
      v81 = _mm_unpacklo_epi64(
              (__m128i)(unsigned __int64)"/usr/include/boost/asio/basic_socket_acceptor.hpp",
              (__m128i)(unsigned __int64)"open");
      goto LABEL_17;
    }
    v14 = *(__m128i **)v12;
  }
  v43 = socket(2, 1, 6);
  if ( v43 >= 0 || (boost::asio::detail::socket_ops::get_last_error((__m128i *)addr), v43 != -1) )
  {
    v62 = boost::asio::detail::epoll_reactor::register_descriptor();
    v19 = v62;
    if ( v62 )
    {
      buf.m128i_i64[0] = v62;
      buf.m128i_i64[1] = (__int64)&boost::system::detail::system_cat_holder<void>::instance;
      v69 = _mm_load_si128(&buf);
      *(_QWORD *)&addr[1].sa_family = 3;
      addr[0] = (struct sockaddr)v69;
      buf = 0;
      v87 = nullptr;
      v81.m128i_i8[0] = 0;
      boost::asio::detail::socket_ops::close(v43, v81.m128i_i8, 1, &buf);
      *(_DWORD *)&addr[0].sa_family = v19;
      v18 = &boost::system::detail::system_cat_holder<void>::instance;
      *(_QWORD *)&addr[0].sa_data[6] = &boost::system::detail::system_cat_holder<void>::instance;
      buf = _mm_load_si128((const __m128i *)addr);
      goto LABEL_16;
    }
    *(_DWORD *)(v12 + 8) = v43;
    v21 = nullptr;
    *(_BYTE *)(v12 + 12) = v14[5].m128i_i8[0] | 0x10;
    v18 = nullptr;
    *(_DWORD *)&addr[0].sa_data[2] = 0;
    goto LABEL_84;
  }
  v21 = *(char **)&addr[1].sa_family;
  v19 = *(_DWORD *)&addr[0].sa_family;
  v18 = *(__int64 (__fastcall ****)(boost::system::detail::system_error_category *__hidden))&addr[0].sa_data[6];
  v44 = addr[1].sa_family & 1;
  if ( (addr[1].sa_family & 1) == 0 )
  {
LABEL_84:
    v44 = 0;
    goto LABEL_60;
  }
  if ( *(_QWORD *)&addr[1].sa_family != 1 )
  {
    buf = _mm_load_si128((const __m128i *)addr);
LABEL_61:
    v82 = 477;
    addr[0] = (struct sockaddr)_mm_load_si128(&buf);
    v21 = (char *)(v44
                 | (unsigned __int64)&boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::open(boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::implementation_type &,boost::asio::ip::tcp const&,boost::system::error_code &)::loc);
    v87 = (char *)(v44
                 | (unsigned __int64)&boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::open(boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::implementation_type &,boost::asio::ip::tcp const&,boost::system::error_code &)::loc);
    *(_QWORD *)&addr[1].sa_family = v44
                                  | (unsigned __int64)&boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::open(boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::implementation_type &,boost::asio::ip::tcp const&,boost::system::error_code &)::loc;
    v81 = _mm_unpacklo_epi64(
            (__m128i)(unsigned __int64)"/usr/include/boost/asio/basic_socket_acceptor.hpp",
            (__m128i)(unsigned __int64)"open");
    if ( ((v44
         | (unsigned __int64)&boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::open(boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::implementation_type &,boost::asio::ip::tcp const&,boost::system::error_code &)::loc)
        & 1) == 0 )
      goto LABEL_62;
LABEL_17:
    *(_QWORD *)&addr[1].sa_family = v21;
    *(_QWORD *)&addr[0].sa_data[6] = v18;
    *(_DWORD *)&addr[0].sa_family = v19;
    boost::system::system_error::system_error();
    boost::throw_exception<boost::system::system_error>((std::runtime_error *)&buf);
  }
  if ( *(_DWORD *)&addr[0].sa_family )
  {
    si128 = _mm_load_si128((const __m128i *)addr);
    v87 = (_BYTE *)(&dword_0 + 1);
    v82 = 477;
    buf.m128i_i64[0] = __PAIR64__(si128.m128i_u32[1], *(unsigned int *)&addr[0].sa_family);
    buf.m128i_i64[1] = *(_QWORD *)&addr[0].sa_data[6];
    addr[0] = (struct sockaddr)_mm_load_si128(&buf);
    v81 = _mm_unpacklo_epi64(
            (__m128i)(unsigned __int64)"/usr/include/boost/asio/basic_socket_acceptor.hpp",
            (__m128i)(unsigned __int64)"open");
    goto LABEL_17;
  }
  v44 = 1;
LABEL_60:
  *(_DWORD *)(v12 + 24) = 2;
  *(_DWORD *)&addr[0].sa_family = v19;
  *(_QWORD *)&addr[0].sa_data[6] = v18;
  v45 = _mm_load_si128((const __m128i *)addr);
  *(_QWORD *)&addr[1].sa_family = v21;
  v87 = v21;
  buf = v45;
  if ( (unsigned __int64)v21 > 1 )
    goto LABEL_61;
  buf.m128i_i32[0] = v19;
  buf.m128i_i64[1] = (__int64)v18;
  v82 = 477;
  addr[0] = (struct sockaddr)_mm_load_si128(&buf);
  v81 = _mm_unpacklo_epi64(
          (__m128i)(unsigned __int64)"/usr/include/boost/asio/basic_socket_acceptor.hpp",
          (__m128i)(unsigned __int64)"open");
  if ( v44 )
  {
    if ( v21 != (_BYTE *)&dword_0 + 1 )
    {
      v21 = nullptr;
      goto LABEL_17;
    }
    if ( v19 )
      goto LABEL_17;
  }
LABEL_62:
  v46 = *((_QWORD *)this + 9);
  optval = 1;
  v47 = *(_DWORD *)(v46 + 8);
  if ( v47 == -1 )
  {
    boost::asio::error::make_error_code();
    v48 = *(_DWORD *)&addr[0].sa_family;
    v49 = *(_QWORD *)&addr[1].sa_family;
  }
  else
  {
    if ( !setsockopt(v47, 1, 2, &optval, 4u) )
      goto LABEL_70;
    boost::asio::detail::socket_ops::get_last_error((__m128i *)addr);
    v48 = *(_DWORD *)&addr[0].sa_family;
    v49 = *(_QWORD *)&addr[1].sa_family;
  }
  *(_DWORD *)&addr[0].sa_family = v48;
  v50 = _mm_load_si128((const __m128i *)addr);
  v87 = (char *)v49;
  v51 = _mm_unpacklo_epi64(
          (__m128i)(unsigned __int64)"/usr/include/boost/asio/basic_socket_acceptor.hpp",
          (__m128i)(unsigned __int64)"set_option<boost::asio::detail::socket_option::boolean<1, 2> >");
  buf = v50;
  v52 = v49 & 1;
  if ( v49 <= 1 )
  {
    v82 = 813;
    v81 = v51;
    if ( (v49 & 1) != 0 && v48 )
    {
LABEL_67:
      *(_QWORD *)&addr[1].sa_family = v52;
      *(_DWORD *)&addr[0].sa_family = v48;
      boost::system::system_error::system_error();
      boost::throw_exception<boost::system::system_error>((std::runtime_error *)&buf);
    }
  }
  else
  {
    v52 |= (unsigned __int64)boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::set_option<boost::asio::detail::socket_option::boolean<1,2>>(boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::implementation_type &,boost::asio::detail::socket_option::boolean<1,2> const&,boost::system::error_code&)::loc;
    v81 = v51;
    v87 = (char *)v52;
    v82 = 813;
    if ( (v52 & 1) != 0 )
      goto LABEL_67;
  }
LABEL_70:
  v53 = *((_WORD *)this + 16);
  memset(addr, 0, 28);
  v54 = *((_QWORD *)this + 9);
  *(_WORD *)addr[0].sa_data = __ROL2__(v53, 8);
  if ( v77 )
  {
    v67 = _mm_load_si128(&v74);
    strcpy((char *)addr, "\n");
    *(__m128i *)&addr[0].sa_data[6] = v67;
    *(_DWORD *)&addr[1].sa_data[6] = v76;
    v55 = *(_DWORD *)(v54 + 8);
    v56 = 28;
  }
  else
  {
    addr[0].sa_family = 2;
    *(_DWORD *)&addr[0].sa_data[2] = v75;
    v55 = *(_DWORD *)(v54 + 8);
    v56 = 16;
  }
  if ( v55 == -1 )
  {
    boost::asio::error::make_error_code();
    v57 = v83.m128i_i32[0];
    v58 = v84;
  }
  else
  {
    if ( !bind(v55, addr, v56) )
      goto LABEL_87;
    boost::asio::detail::socket_ops::get_last_error(&v83);
    v57 = v83.m128i_i32[0];
    v58 = v84;
  }
  v83.m128i_i32[0] = v57;
  v59 = _mm_load_si128(&v83);
  v60 = v58 & 1;
  v84 = v58;
  v87 = (char *)v58;
  v61 = _mm_unpacklo_epi64(
          (__m128i)(unsigned __int64)"/usr/include/boost/asio/basic_socket_acceptor.hpp",
          (__m128i)(unsigned __int64)"bind");
  buf = v59;
  if ( v58 <= 1 )
  {
    v82 = 572;
    v81 = v61;
    if ( (v58 & 1) != 0 && v57 )
    {
LABEL_77:
      v83.m128i_i32[0] = v57;
      v84 = v60;
      boost::system::system_error::system_error();
      boost::throw_exception<boost::system::system_error>((std::runtime_error *)&buf);
    }
  }
  else
  {
    v60 |= (unsigned __int64)boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::bind(boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::implementation_type &,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> const&,boost::system::error_code &)::loc;
    v81 = v61;
    v87 = (char *)v60;
    v84 = v60;
    v82 = 572;
    if ( (v60 & 1) != 0 )
      goto LABEL_77;
  }
LABEL_87:
  v63 = *(_DWORD *)(*((_QWORD *)this + 9) + 8LL);
  if ( v63 == -1 )
  {
    boost::asio::error::make_error_code();
    v64 = *(_DWORD *)&addr[0].sa_family;
    v65 = *(_QWORD *)&addr[1].sa_family;
  }
  else
  {
    if ( !listen(v63, 4096) )
      return v89 - __readfsqword(0x28u);
    boost::asio::detail::socket_ops::get_last_error((__m128i *)addr);
    v64 = *(_DWORD *)&addr[0].sa_family;
    v65 = *(_QWORD *)&addr[1].sa_family;
  }
  v82 = 619;
  v81 = _mm_unpacklo_epi64(
          (__m128i)(unsigned __int64)"/usr/include/boost/asio/basic_socket_acceptor.hpp",
          (__m128i)(unsigned __int64)"listen");
  if ( (v65 & 1) != 0 && (v65 != 1 || v64) )
  {
    *(_QWORD *)&addr[1].sa_family = v65;
    *(_DWORD *)&addr[0].sa_family = v64;
    boost::system::system_error::system_error();
    boost::throw_exception<boost::system::system_error>((std::runtime_error *)&buf);
  }
  return v89 - __readfsqword(0x28u);
}

