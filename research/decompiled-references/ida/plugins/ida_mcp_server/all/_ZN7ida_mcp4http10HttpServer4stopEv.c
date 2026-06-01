unsigned __int64 __fastcall ida_mcp::http::HttpServer::stop(ida_mcp::http::HttpServer *this)
{
  signed __int8 v1; // al
  __int64 *v3; // rbx
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rax
  char *v8; // rdi
  __m128i v9; // xmm1
  __m128i si128; // xmm0
  const char *v11; // rbx
  __int16 v12; // r12
  int *v13; // rax
  int *v14; // r15
  char *v15; // rax
  signed __int64 v16; // r13
  int v17; // eax
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int32 v21; // r9d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __m128i *v26; // r15
  __m128i v27; // xmm0
  __int64 v28; // rax
  __int64 v29; // rax
  char *v30; // rdi
  const char *v31; // rax
  __int64 v32; // r8
  int v33; // ebx
  __int64 v34; // r15
  int v35; // r13d
  int v36; // ebx
  unsigned __int64 v37; // rdx
  __int32 v38; // eax
  __int64 v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // r13
  __int64 v42; // r12
  __int64 v43; // r13
  char v44; // dl
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __m128i v48; // xmm2
  int v49; // ebx
  __int32 v50; // edx
  __int64 v51; // rax
  int v52; // ecx
  socklen_t v53; // edx
  int v54; // r14d
  __int64 v55; // r15
  __m128i v56; // xmm0
  int v57; // eax
  std::thread **v58; // rbx
  std::thread **v59; // r13
  __int64 v60; // r14
  __int64 v61; // r13
  __int64 v62; // rbx
  __m128i v63; // xmm0
  char v64; // dl
  __m128i v65; // xmm0
  __m128i v66; // xmm6
  __m128 v67; // [rsp+0h] [rbp-1E8h] BYREF
  __m128i v68; // [rsp+10h] [rbp-1D8h] BYREF
  char v69; // [rsp+2Bh] [rbp-1BDh]
  int optval; // [rsp+2Ch] [rbp-1BCh] BYREF
  struct pollfd fds[2]; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v72; // [rsp+40h] [rbp-1A8h]
  __m128i v73; // [rsp+50h] [rbp-198h] BYREF
  unsigned __int64 v74; // [rsp+60h] [rbp-188h]
  __m128i v75; // [rsp+70h] [rbp-178h]
  __int64 v76; // [rsp+80h] [rbp-168h]
  __m128i v77; // [rsp+90h] [rbp-158h]
  __int64 v78; // [rsp+A0h] [rbp-148h]
  __m128i v79; // [rsp+B0h] [rbp-138h] BYREF
  unsigned __int64 v80; // [rsp+C0h] [rbp-128h]
  __int64 buf; // [rsp+D0h] [rbp-118h] BYREF
  __int128 v82; // [rsp+D8h] [rbp-110h]
  int v83; // [rsp+E8h] [rbp-100h]
  __int64 v84; // [rsp+100h] [rbp-E8h]
  int fd; // [rsp+108h] [rbp-E0h]
  char v86; // [rsp+10Ch] [rbp-DCh]
  __int64 v87; // [rsp+110h] [rbp-D8h]
  int v88; // [rsp+118h] [rbp-D0h]
  char *v89; // [rsp+120h] [rbp-C8h] BYREF
  __m128i v90; // [rsp+138h] [rbp-B0h]
  __m128i v91; // [rsp+148h] [rbp-A0h]
  _BYTE v92[72]; // [rsp+160h] [rbp-88h]
  unsigned __int64 v93; // [rsp+1A8h] [rbp-40h]

  v93 = __readfsqword(0x28u);
  v69 = 1;
  v1 = _InterlockedCompareExchange8((volatile signed __int8 *)this + 80, 0, 1);
  if ( v1 != 1 )
  {
    v69 = v1;
    return v93 - __readfsqword(0x28u);
  }
  v3 = *((__int64 **)this + 9);
  v74 = 0;
  v73 = 0;
  if ( v3 && *((_DWORD *)v3 + 2) != -1 )
  {
    v41 = *v3;
    boost::asio::detail::epoll_reactor::deregister_descriptor();
    boost::asio::detail::socket_ops::close(*((_DWORD *)v3 + 2), (char *)v3 + 12, 0, &v73);
    v42 = v3[2];
    if ( v42 )
    {
      v43 = *(_QWORD *)(v41 + 48);
      v44 = 0;
      if ( *(_BYTE *)(v43 + 204) )
      {
        pthread_mutex_lock((pthread_mutex_t *)(v43 + 160));
        v44 = 1;
      }
      if ( v42 == *(_QWORD *)(v43 + 216) )
        *(_QWORD *)(v43 + 216) = *(_QWORD *)(v42 + 24);
      v45 = *(_QWORD *)(v42 + 32);
      if ( v45 )
        *(_QWORD *)(v45 + 24) = *(_QWORD *)(v42 + 24);
      v46 = *(_QWORD *)(v42 + 24);
      if ( v46 )
        *(_QWORD *)(v46 + 32) = *(_QWORD *)(v42 + 32);
      v47 = *(_QWORD *)(v43 + 224);
      *(_QWORD *)(v42 + 32) = 0;
      *(_QWORD *)(v42 + 24) = v47;
      *(_QWORD *)(v43 + 224) = v42;
      if ( v44 )
        pthread_mutex_unlock((pthread_mutex_t *)(v43 + 160));
    }
    *((_DWORD *)v3 + 2) = -1;
    *((_BYTE *)v3 + 12) = 0;
    v3[2] = 0;
  }
  v5 = *((_QWORD *)this + 7);
  pthread_mutex_lock((pthread_mutex_t *)(v5 + 8));
  v6 = *(_QWORD *)(v5 + 56);
  if ( v6 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(v6 + 8);
      if ( v7 )
      {
        v8 = *(char **)(v7 + 8);
        if ( v8 == "N5boost4asio6detail14typeid_wrapperINS1_23reactive_socket_serviceINS0_2ip3tcpEEEEE"
          || *v8 != 42
          && !strcmp(v8, "N5boost4asio6detail14typeid_wrapperINS1_23reactive_socket_serviceINS0_2ip3tcpEEEEE") )
        {
          break;
        }
      }
      v6 = *(_QWORD *)(v6 + 32);
      if ( !v6 )
        goto LABEL_18;
    }
  }
  else
  {
LABEL_18:
    pthread_mutex_unlock((pthread_mutex_t *)(v5 + 8));
    v26 = boost::asio::detail::allocate_object<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::execution_context::allocator<void>,boost::asio::io_context &>(
            **(_QWORD ***)(v5 + 48),
            (__int64)this + 48,
            v22,
            v23,
            v24,
            v25);
    v27 = _mm_loadl_epi64((const __m128i *)&`typeinfo for'boost::asio::detail::typeid_wrapper<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>);
    v26[2].m128i_i64[1] = (__int64)boost::asio::detail::service_registry::destroy_allocated<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>;
    *(__m128i *)((char *)v26 + 8) = v27;
    pthread_mutex_lock((pthread_mutex_t *)(v5 + 8));
    v28 = *(_QWORD *)(v5 + 56);
    v67.m128_u64[0] = v28;
    if ( v28 )
    {
      v6 = v28;
      while ( 1 )
      {
        v29 = *(_QWORD *)(v6 + 8);
        if ( v29 )
        {
          v30 = *(char **)(v29 + 8);
          if ( v30 == "N5boost4asio6detail14typeid_wrapperINS1_23reactive_socket_serviceINS0_2ip3tcpEEEEE"
            || *v30 != 42
            && !strcmp(v30, "N5boost4asio6detail14typeid_wrapperINS1_23reactive_socket_serviceINS0_2ip3tcpEEEEE") )
          {
            break;
          }
        }
        v6 = *(_QWORD *)(v6 + 32);
        if ( !v6 )
          goto LABEL_75;
      }
      ((void (__fastcall *)(__m128i *))v26[2].m128i_i64[1])(v26);
    }
    else
    {
LABEL_75:
      v6 = (__int64)v26;
      v26[2].m128i_i64[0] = v67.m128_u64[0];
      *(_QWORD *)(v5 + 56) = v26;
    }
  }
  v67 = _mm_loadh_ps((const double *)ZZN5boost4asio9execution12any_executorIJNS1_12context_as_tIRNS0_17execution_contextEEENS1_6detail8blocking7never_tILi0EEENS1_11prefer_onlyINS8_10possibly_tILi0EEEEENSB_INS7_16outstanding_work9tracked_tILi0EEEEENSB_INSF_11untracked_tILi0EEEEENSB_INS7_12relationship6fork_tILi0EEEEENSB_INSM_14continuation_tILi0EEEEEEE14prop_fns_tableINS0_10io_context19basic_executor_typeISaIvELm0EEEEEPKNS7_17any_executor_base8prop_fnsIST_EEvE3fns_ptr);
  v68 = _mm_unpacklo_epi64(
          _mm_loadl_epi64((const __m128i *)ZZN5boost4asio9execution6detail17any_executor_base16object_fns_tableINS0_10io_context19basic_executor_typeISaIvELm0EEEEEPKNS3_10object_fnsEPNSt9enable_ifIXaantsrSt7is_sameIT_vE5valuentsrSD_ISE_NS2_22shared_target_executorEE5valueEvE4typeEE3fns_ptr),
          (__m128i)(unsigned __int64)&v89);
  pthread_mutex_unlock((pthread_mutex_t *)(v5 + 8));
  v9 = _mm_load_si128(&v68);
  si128 = _mm_load_si128((const __m128i *)&v67);
  v84 = v6;
  v88 = 2;
  v11 = *(const char **)this;
  v89 = (char *)this + 48;
  v12 = *((_WORD *)this + 16);
  fd = -1;
  v86 = 0;
  v87 = 0;
  v90 = v9;
  v91 = si128;
  v13 = __errno_location();
  *v13 = 0;
  v14 = v13;
  v15 = strchr(v11, 37);
  if ( !v15 )
  {
    v67.m128_i32[0] = inet_pton(10, v11, &buf);
    boost::asio::detail::socket_ops::get_last_error(&v79);
    v21 = v79.m128i_i32[0];
    v20 = v80;
    if ( v67.m128_i32[0] > 0 )
    {
      v17 = 0;
      goto LABEL_29;
    }
LABEL_79:
    if ( (v20 & 1) != 0 && (v20 != 1 || v21) )
    {
LABEL_50:
      v48 = _mm_loadl_epi64((const __m128i *)off_4429F8);
      *v14 = 0;
      v67 = (__m128)_mm_unpacklo_epi64(v48, (__m128i)(unsigned __int64)"make_address");
      v49 = inet_pton(2, v11, &buf);
      boost::asio::detail::socket_ops::get_last_error(&v79);
      v50 = v79.m128i_i32[0];
      v51 = v80;
      v52 = buf;
      if ( v49 <= 0 )
      {
        if ( (v80 & 1) != 0 )
        {
          if ( v80 != 1 )
            goto LABEL_98;
          if ( v79.m128i_i32[0] )
          {
LABEL_104:
            v66 = _mm_load_si128((const __m128i *)&v67);
            v51 = 1;
            v72 = 108;
            *(__m128i *)&fds[0].fd = v66;
LABEL_99:
            v79.m128i_i32[0] = v50;
            v80 = v51;
            boost::system::system_error::system_error();
            ida_mcp::http::HttpServer::stop((ida_mcp::http::HttpServer *)&buf);
          }
        }
        boost::asio::error::make_error_code();
        v50 = v79.m128i_i32[0];
        v51 = v80;
        v52 = 0;
      }
      if ( (v51 & 1) == 0 )
        goto LABEL_54;
      if ( v51 == 1 )
      {
        if ( !v50 )
        {
LABEL_54:
          v33 = fd;
          LOWORD(buf) = 2;
          v53 = 16;
          v83 = 0;
          WORD1(buf) = __ROL2__(v12, 8);
          HIDWORD(buf) = v52;
          v82 = 0;
          if ( fd == -1 )
          {
            v34 = v84;
            v35 = 2;
            goto LABEL_32;
          }
LABEL_55:
          v54 = connect(v33, (const struct sockaddr *)&buf, v53);
          if ( !v54 )
          {
            v73.m128i_i32[1] = 0;
            v55 = 0;
            v67.m128_u64[0] = 0;
            goto LABEL_57;
          }
          boost::asio::detail::socket_ops::get_last_error(&v73);
          v54 = v73.m128i_i32[0];
          v55 = v73.m128i_i64[1];
          v79.m128i_i64[0] = 11;
          v67.m128_u64[0] = v74;
          v80 = 3;
          v79.m128i_i64[1] = (__int64)&boost::system::detail::system_cat_holder<void>::instance;
          v63 = _mm_load_si128(&v79);
          v78 = 3;
          v77 = v63;
          if ( !(unsigned __int8)boost::system::operator==() )
          {
LABEL_57:
            boost::asio::error::make_error_code();
            v73.m128i_i32[0] = v54;
            v73.m128i_i64[1] = v55;
            v74 = v67.m128_u64[0];
            if ( (unsigned __int8)boost::system::operator==()
              || (v79.m128i_i64[0] = 11,
                  v80 = 3,
                  v79.m128i_i64[1] = (__int64)&boost::system::detail::system_cat_holder<void>::instance,
                  v56 = _mm_load_si128(&v79),
                  v76 = 3,
                  v75 = v56,
                  (unsigned __int8)boost::system::operator==()) )
            {
              if ( v33 != -1 )
              {
                fds[0].fd = v33;
                *(_DWORD *)&fds[0].events = 4;
                if ( poll(fds, 1u, -1) >= 0 )
                {
                  optval = 0;
                  fds[0].fd = 4;
                  getsockopt(v33, 1, 4, &optval, (socklen_t *)fds);
                }
              }
            }
            goto LABEL_62;
          }
LABEL_84:
          boost::asio::error::make_error_code();
          v54 = v73.m128i_i32[0];
          v55 = v73.m128i_i64[1];
          v67.m128_u64[0] = v74;
          goto LABEL_57;
        }
        goto LABEL_104;
      }
LABEL_98:
      v72 = 108;
      *(__m128i *)&fds[0].fd = _mm_load_si128((const __m128i *)&v67);
      goto LABEL_99;
    }
    goto LABEL_13;
  }
  v16 = v15 - v11;
  if ( v15 - v11 > 63 )
  {
LABEL_13:
    boost::asio::error::make_error_code();
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = v80;
    v21 = v79.m128i_i32[0];
    if ( (v80 & 1) == 0 )
      goto LABEL_30;
    goto LABEL_14;
  }
  v68.m128i_i64[0] = (__int64)v15;
  v31 = (const char *)__memcpy_chk();
  v92[v16] = 0;
  v67.m128_i32[0] = inet_pton(10, v31, &buf);
  boost::asio::detail::socket_ops::get_last_error(&v79);
  v32 = v68.m128i_i64[0];
  v21 = v79.m128i_i32[0];
  v20 = v80;
  if ( v67.m128_i32[0] <= 0 )
    goto LABEL_79;
  if ( (_BYTE)buf == 0xFE )
  {
    if ( (BYTE1(buf) & 0xC0) != 0x80 )
    {
LABEL_28:
      v68.m128i_i32[0] = v21;
      v67.m128_u64[0] = v20;
      v17 = __isoc23_strtol();
      v20 = v67.m128_u64[0];
      v21 = v68.m128i_i32[0];
      goto LABEL_29;
    }
  }
  else if ( (_BYTE)buf != 0xFF || (BYTE1(buf) & 0xF) != 2 )
  {
    goto LABEL_28;
  }
  v68.m128i_i32[0] = v79.m128i_i32[0];
  v67.m128_u64[0] = v80;
  v17 = if_nametoindex((const char *)(v32 + 1));
  v20 = v67.m128_u64[0];
  v21 = v68.m128i_i32[0];
  if ( !v17 )
    goto LABEL_28;
LABEL_29:
  v18 = buf;
  v19 = v82;
  if ( (v20 & 1) == 0 )
    goto LABEL_30;
LABEL_14:
  if ( v20 != 1 || v21 )
    goto LABEL_50;
LABEL_30:
  buf = 10;
  WORD1(buf) = __ROL2__(v12, 8);
  v33 = fd;
  *(_QWORD *)&v82 = v18;
  *((_QWORD *)&v82 + 1) = v19;
  v83 = v17;
  if ( fd != -1 )
  {
    v53 = 28;
    goto LABEL_55;
  }
  v34 = v84;
  v35 = 10;
LABEL_32:
  v36 = socket(v35, 1, 6);
  if ( v36 < 0 && (boost::asio::detail::socket_ops::get_last_error(&v73), v36 == -1) )
  {
    v37 = v74;
    v38 = v73.m128i_i32[0];
    v39 = v73.m128i_i64[1];
    if ( (v74 & 1) != 0 )
    {
      if ( v74 != 1 || v73.m128i_i32[0] )
        goto LABEL_62;
      v40 = 1;
      goto LABEL_92;
    }
  }
  else
  {
    v38 = boost::asio::detail::epoll_reactor::register_descriptor();
    if ( v38 )
    {
      LOBYTE(fds[0].fd) = 0;
      v80 = 0;
      v79 = 0;
      boost::asio::detail::socket_ops::close(v36, (char *)fds, 1, &v79);
      goto LABEL_62;
    }
    v64 = *(_BYTE *)(v34 + 80);
    fd = v36;
    v39 = 0;
    v73.m128i_i32[1] = 0;
    v86 = v64 | 0x10;
    v37 = 0;
  }
  v40 = 0;
LABEL_92:
  v73.m128i_i32[0] = v38;
  v73.m128i_i64[1] = v39;
  v65 = _mm_load_si128(&v73);
  v88 = v35;
  v74 = v37;
  v80 = v37;
  v79 = v65;
  if ( v37 <= 1 )
  {
    v79.m128i_i32[0] = v38;
    v79.m128i_i64[1] = v39;
    v73 = _mm_load_si128(&v79);
    if ( !v40 || v37 == 1 && !v38 )
    {
LABEL_94:
      v33 = fd;
      v53 = 28;
      if ( (_WORD)buf == 2 )
        v53 = 16;
      if ( fd == -1 )
        goto LABEL_84;
      goto LABEL_55;
    }
  }
  else
  {
    v80 = v40
        | (unsigned __int64)&boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::open(boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::implementation_type &,boost::asio::ip::tcp const&,boost::system::error_code &)::loc;
    v74 = v40
        | (unsigned __int64)&boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::open(boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::implementation_type &,boost::asio::ip::tcp const&,boost::system::error_code &)::loc;
    if ( ((v40
         | (unsigned __int64)&boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::open(boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::implementation_type &,boost::asio::ip::tcp const&,boost::system::error_code &)::loc)
        & 1) == 0 )
      goto LABEL_94;
  }
LABEL_62:
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::any_io_executor>::~io_object_impl();
  v57 = pthread_mutex_lock((pthread_mutex_t *)((char *)this + 88));
  if ( v57 )
    std::__throw_system_error(v57);
  v58 = *((std::thread ***)this + 16);
  v59 = *((std::thread ***)this + 17);
  if ( v59 != v58 )
  {
    do
    {
      while ( !*(_QWORD *)*v58 )
      {
        v58 += 2;
        if ( v59 == v58 )
          goto LABEL_68;
      }
      std::thread::join(*v58);
      v58 += 2;
    }
    while ( v59 != v58 );
LABEL_68:
    v60 = *((_QWORD *)this + 16);
    v61 = *((_QWORD *)this + 17);
    if ( v61 != v60 )
    {
      v62 = *((_QWORD *)this + 16);
      do
      {
        while ( *(_QWORD *)(v62 + 8) )
        {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release();
          v62 += 16;
          if ( v62 == v61 )
          {
            *((_QWORD *)this + 17) = v60;
            goto LABEL_73;
          }
        }
        v62 += 16;
      }
      while ( v62 != v61 );
      *((_QWORD *)this + 17) = v60;
    }
  }
LABEL_73:
  pthread_mutex_unlock((pthread_mutex_t *)((char *)this + 88));
  return v93 - __readfsqword(0x28u);
}

