unsigned __int64 __fastcall ida_mcp::http::HttpServer::run(ida_mcp::http::HttpServer *this)
{
  void **v2; // rbx
  pthread_mutex_t *v3; // rbp
  __m128i *v4; // r13
  __int64 v5; // rax
  char *v6; // rdi
  __m128 v7; // xmm1
  __int64 v8; // rax
  __m128i si128; // xmm0
  __m128i v10; // xmm1
  int v11; // ebp
  char v12; // r14
  int v13; // r12d
  int *v14; // rax
  __int64 (__fastcall ***v15)(boost::system::detail::system_error_category *__hidden); // rbx
  unsigned __int32 v16; // ecx
  int *v17; // r13
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  char v20; // al
  unsigned __int64 v21; // r8
  _BOOL8 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __m128i *v27; // r14
  __m128i v28; // xmm0
  __int64 v29; // rdx
  __int64 v30; // r13
  __m128i *v31; // rbx
  __int64 v32; // rax
  char *v33; // rdi
  unsigned __int64 v34; // r12
  unsigned __int64 v35; // rax
  __m128i v36; // xmm1
  unsigned __int64 v37; // rbp
  __m128i v38; // xmm0
  __m128i v39; // xmm0
  __m128i v40; // xmm1
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  void *v52; // rcx
  char v53; // al
  __m128i v54; // xmm0
  int v55; // eax
  __m128i v56; // xmm3
  __m128i v57; // xmm0
  __int64 v58; // rbx
  __int64 v59; // r13
  int v60; // ebp
  __int64 *v61; // rcx
  int v62; // eax
  __int64 v63; // rax
  __int64 v64; // r12
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rdx
  __m128i v68; // xmm0
  int v69; // eax
  __m128i *v70; // rsi
  __int64 v71; // rdi
  int v72; // r12d
  __int64 v73; // r13
  pthread_mutex_t *v74; // r9
  char v75; // dl
  __int64 v76; // rdi
  char v77; // r11
  char v78; // r10
  _QWORD *v79; // rsi
  _QWORD *v80; // r9
  _QWORD *v81; // r12
  __int64 v82; // r8
  _QWORD *v83; // rdx
  __m128i v84; // xmm0
  __int64 v85; // rcx
  _QWORD *v86; // rax
  __int64 v87; // rax
  pthread_mutex_t *v88; // r9
  __int64 v89; // rbp
  char v90; // dl
  __int64 v91; // r12
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  int v95; // eax
  int v96; // ebx
  __int64 v97; // r12
  __int64 v98; // rbp
  __int64 v99; // r13
  __int8 v100; // dl
  __int64 v101; // rax
  char v102; // r14
  __int64 v103; // r11
  _QWORD *v104; // rsi
  char v105; // r8
  _QWORD *v106; // rcx
  _QWORD *v107; // rbx
  _QWORD *v108; // rdi
  __m128i v109; // xmm0
  _QWORD *v110; // rdx
  __int64 v111; // rbx
  __int64 v112; // rbp
  char v113; // dl
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v118; // r9
  char *v119; // r14
  __int64 v120; // rdx
  __int64 v121; // rax
  unsigned __int64 v122; // rax
  __int64 v123; // rax
  pthread_mutex_t *v124; // rcx
  pthread_mutex_t *v125; // r8
  pthread_mutex_t *v126; // r9
  __int64 v127; // rax
  unsigned __int64 v128; // rdx
  __int64 v129; // rax
  __int64 v130; // rsi
  char *v131; // r8
  __int64 v132; // rax
  _DWORD *v133; // r8
  __int64 v134; // rdi
  _DWORD *v135; // rcx
  __int64 v136; // rsi
  _DWORD *v137; // r8
  _DWORD *v138; // rsi
  __int64 v139; // rcx
  __int64 v140; // rdi
  _DWORD *v141; // r8
  _DWORD *v142; // rsi
  __int64 v143; // rcx
  __int64 v144; // rdi
  __int64 v145; // rbx
  unsigned __int32 v146; // eax
  __int64 v147; // rsi
  __int64 v148; // rdi
  int owner; // edi
  __int64 v150; // rsi
  __int64 v151; // rdi
  __int64 v152; // rcx
  __int64 v153; // rsi
  __m128i v154; // xmm0
  char v155; // al
  __int32 v156; // eax
  __m128i v157; // xmm0
  char v158; // al
  __m128i v159; // xmm0
  char v160; // al
  struct epoll_event *event[2]; // [rsp+0h] [rbp-258h] BYREF
  __m128i v163; // [rsp+10h] [rbp-248h] BYREF
  void **v164; // [rsp+20h] [rbp-238h] BYREF
  _BYTE *v165; // [rsp+28h] [rbp-230h]
  __m128i v166; // [rsp+30h] [rbp-228h] BYREF
  __int64 v167; // [rsp+40h] [rbp-218h]
  pthread_mutex_t *mutex; // [rsp+48h] [rbp-210h]
  __int64 v169; // [rsp+50h] [rbp-208h]
  _QWORD *v170; // [rsp+58h] [rbp-200h]
  pthread_mutex_t *v171; // [rsp+60h] [rbp-1F8h]
  char v172; // [rsp+6Fh] [rbp-1E9h]
  struct pollfd fds; // [rsp+78h] [rbp-1E0h] BYREF
  __m128i v174; // [rsp+80h] [rbp-1D8h] BYREF
  __int64 v175; // [rsp+90h] [rbp-1C8h]
  __m128i v176; // [rsp+A0h] [rbp-1B8h] BYREF
  unsigned __int64 v177; // [rsp+B0h] [rbp-1A8h]
  void *v178[2]; // [rsp+C0h] [rbp-198h] BYREF
  _QWORD v179[2]; // [rsp+D0h] [rbp-188h] BYREF
  void *v180; // [rsp+E0h] [rbp-178h]
  unsigned __int64 v181; // [rsp+E8h] [rbp-170h]
  _QWORD v182[2]; // [rsp+F0h] [rbp-168h] BYREF
  void *v183; // [rsp+100h] [rbp-158h]
  __int64 v184; // [rsp+108h] [rbp-150h]
  _QWORD v185[2]; // [rsp+110h] [rbp-148h] BYREF
  void *v186[2]; // [rsp+120h] [rbp-138h] BYREF
  __int64 v187; // [rsp+130h] [rbp-128h] BYREF
  __int64 v188; // [rsp+140h] [rbp-118h]
  int v189; // [rsp+148h] [rbp-110h]
  char v190[4]; // [rsp+14Ch] [rbp-10Ch] BYREF
  __int64 v191; // [rsp+150h] [rbp-108h]
  int v192; // [rsp+158h] [rbp-100h]
  char *v193; // [rsp+160h] [rbp-F8h] BYREF
  __m128i v194; // [rsp+178h] [rbp-E0h]
  __m128i v195; // [rsp+188h] [rbp-D0h]
  __m128i v196; // [rsp+1A0h] [rbp-B8h] BYREF
  int fd[2]; // [rsp+1B0h] [rbp-A8h] BYREF
  __int64 v198; // [rsp+1B8h] [rbp-A0h]
  int v199; // [rsp+1C0h] [rbp-98h]
  _BYTE v200[24]; // [rsp+1C8h] [rbp-90h] BYREF
  __int128 v201; // [rsp+1E0h] [rbp-78h]
  __int64 v202; // [rsp+1F0h] [rbp-68h]
  __int64 v203; // [rsp+1F8h] [rbp-60h]
  __m128i v204; // [rsp+200h] [rbp-58h] BYREF
  unsigned __int64 v205; // [rsp+218h] [rbp-40h]

  v205 = __readfsqword(0x28u);
  v165 = (char *)this + 80;
  *((_BYTE *)this + 80) = 1;
  v166 = _mm_unpacklo_epi64(
           _mm_loadl_epi64((const __m128i *)off_442A00),
           (__m128i)(unsigned __int64)"accept<boost::asio::ip::tcp, boost::asio::any_io_executor>");
LABEL_2:
  if ( *v165 )
  {
LABEL_3:
    v2 = *((void ***)this + 7);
    v3 = (pthread_mutex_t *)(v2 + 1);
    pthread_mutex_lock((pthread_mutex_t *)(v2 + 1));
    v4 = (__m128i *)v2[7];
    if ( v4 )
    {
      while ( 1 )
      {
        v5 = v4->m128i_i64[1];
        if ( v5 )
        {
          v6 = *(char **)(v5 + 8);
          if ( v6 == "N5boost4asio6detail14typeid_wrapperINS1_23reactive_socket_serviceINS0_2ip3tcpEEEEE"
            || *v6 != 42
            && !strcmp(v6, "N5boost4asio6detail14typeid_wrapperINS1_23reactive_socket_serviceINS0_2ip3tcpEEEEE") )
          {
            break;
          }
        }
        v4 = (__m128i *)v4[2].m128i_i64[0];
        if ( !v4 )
          goto LABEL_19;
      }
    }
    else
    {
LABEL_19:
      pthread_mutex_unlock((pthread_mutex_t *)(v2 + 1));
      v27 = boost::asio::detail::allocate_object<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::execution_context::allocator<void>,boost::asio::io_context &>(
              *(_QWORD **)v2[6],
              (__int64)this + 48,
              v23,
              v24,
              v25,
              v26);
      v28 = _mm_loadl_epi64((const __m128i *)&`typeinfo for'boost::asio::detail::typeid_wrapper<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>);
      v27[2].m128i_i64[1] = (__int64)boost::asio::detail::service_registry::destroy_allocated<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>;
      *(__m128i *)((char *)v27 + 8) = v28;
      pthread_mutex_lock((pthread_mutex_t *)(v2 + 1));
      v29 = (__int64)v2[7];
      if ( v29 )
      {
        v164 = v2;
        v30 = v29;
        v31 = (__m128i *)v29;
        do
        {
          v32 = v31->m128i_i64[1];
          if ( v32 )
          {
            v33 = *(char **)(v32 + 8);
            if ( v33 == "N5boost4asio6detail14typeid_wrapperINS1_23reactive_socket_serviceINS0_2ip3tcpEEEEE"
              || *v33 != 42
              && !strcmp(v33, "N5boost4asio6detail14typeid_wrapperINS1_23reactive_socket_serviceINS0_2ip3tcpEEEEE") )
            {
              v4 = v31;
              ((void (__fastcall *)(__m128i *))v27[2].m128i_i64[1])(v27);
              goto LABEL_8;
            }
          }
          v31 = (__m128i *)v31[2].m128i_i64[0];
        }
        while ( v31 );
        v2 = v164;
        v29 = v30;
      }
      v27[2].m128i_i64[0] = v29;
      v4 = v27;
      v2[7] = v27;
    }
LABEL_8:
    v164 = (void **)&v193;
    v7 = _mm_loadh_ps((const double *)&v164);
    *(__m128 *)event = _mm_loadh_ps((const double *)ZZN5boost4asio9execution12any_executorIJNS1_12context_as_tIRNS0_17execution_contextEEENS1_6detail8blocking7never_tILi0EEENS1_11prefer_onlyINS8_10possibly_tILi0EEEEENSB_INS7_16outstanding_work9tracked_tILi0EEEEENSB_INSF_11untracked_tILi0EEEEENSB_INS7_12relationship6fork_tILi0EEEEENSB_INSM_14continuation_tILi0EEEEEEE14prop_fns_tableINS0_10io_context19basic_executor_typeISaIvELm0EEEEEPKNS7_17any_executor_base8prop_fnsIST_EEvE3fns_ptr);
    v163 = (__m128i)v7;
    pthread_mutex_unlock(v3);
    v8 = *((_QWORD *)this + 9);
    si128 = _mm_load_si128((const __m128i *)event);
    v189 = -1;
    v10 = _mm_load_si128(&v163);
    v190[0] = 0;
    v195 = si128;
    v194 = v10;
    v11 = *(_DWORD *)(v8 + 8);
    v188 = (__int64)v4;
    v192 = 2;
    v193 = (char *)this + 48;
    v191 = 0;
    v12 = *(_BYTE *)(v8 + 12);
    v167 = v8;
    v177 = 0;
    v176 = 0;
    if ( v11 != -1 )
    {
      v13 = accept(v11, nullptr, nullptr);
      if ( v13 == -1 )
      {
        while ( 1 )
        {
          v14 = __errno_location();
          v15 = &boost::system::detail::system_cat_holder<void>::instance;
          v16 = *v14;
          v17 = v14;
          v196.m128i_i64[1] = (__int64)&boost::system::detail::system_cat_holder<void>::instance;
          v196.m128i_i64[0] = v16;
          v18 = _mm_load_si128(&v196);
          *(_QWORD *)fd = 2 - ((v16 == 0) - 1LL);
          v177 = *(_QWORD *)fd;
          v176 = v18;
          if ( v16 == 11 )
          {
            if ( (v12 & 1) != 0 )
              goto LABEL_30;
          }
          else
          {
            v163.m128i_i64[0] = 2 - ((v16 == 0) - 1LL);
            v196.m128i_i64[0] = 103;
            v19 = _mm_load_si128(&v196);
            LODWORD(event[0]) = v16;
            *(_QWORD *)fd = 3;
            v187 = 3;
            *(__m128i *)v186 = v19;
            v20 = boost::system::operator==();
            v16 = (unsigned __int32)event[0];
            v21 = v163.m128i_i64[0];
            if ( v20 )
            {
              if ( (v12 & 4) != 0 )
                goto LABEL_31;
            }
            else
            {
              if ( LODWORD(event[0]) != 71 )
                goto LABEL_31;
              if ( (v12 & 4) != 0 )
              {
LABEL_30:
                v21 = 3;
LABEL_31:
                v34 = (unsigned __int64)&boost::system::detail::system_cat_holder<void>::instance;
LABEL_32:
                v35 = v21 & 1;
LABEL_33:
                v176.m128i_i32[0] = v16;
                v176.m128i_i64[1] = v34;
                v196 = _mm_load_si128(&v176);
                if ( v21 > 1 )
                {
                  v196.m128i_i32[0] = v16;
                  v196.m128i_i64[1] = v34;
                  v36 = _mm_load_si128(&v196);
                  *(_QWORD *)fd = (unsigned __int64)boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::accept<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::any_io_executor>>(boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::implementation_type &,boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::any_io_executor> &,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> *,boost::system::error_code&)::loc
                                | v35;
                  v37 = ((unsigned __int64)boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::accept<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::any_io_executor>>(boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::implementation_type &,boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::any_io_executor> &,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> *,boost::system::error_code&)::loc
                       | v35)
                      & 1;
                  v177 = (unsigned __int64)boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::accept<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::any_io_executor>>(boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::implementation_type &,boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::any_io_executor> &,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> *,boost::system::error_code&)::loc
                       | v35;
                  v38 = _mm_unpacklo_epi64(
                          _mm_loadl_epi64((const __m128i *)off_442A00),
                          (__m128i)(unsigned __int64)"accept<boost::asio::ip::tcp, boost::asio::any_io_executor>");
                  v176 = v36;
                  goto LABEL_38;
                }
LABEL_60:
                v196.m128i_i32[0] = v16;
                v56 = _mm_load_si128(&v166);
                v196.m128i_i64[1] = v34;
                v57 = _mm_load_si128(&v196);
                *(_QWORD *)fd = v21;
                v177 = v21;
                v175 = 1292;
                v176 = v57;
                v174 = v56;
                if ( v35 && (v21 != 1 || v16) )
                  goto LABEL_39;
LABEL_63:
                if ( !*v165 )
                {
                  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>,boost::asio::any_io_executor>::~io_object_impl();
                  return v205 - __readfsqword(0x28u);
                }
                v58 = operator new(0x20u);
                v163.m128i_i64[0] = v58 + 8;
                v59 = v58 + 16;
                *(_OWORD *)(v58 + 16) = 0;
                *(_QWORD *)(v58 + 8) = 0x100000001LL;
                *(_QWORD *)v58 = off_444E40;
                v60 = pthread_mutex_lock((pthread_mutex_t *)((char *)this + 88));
                if ( v60 )
                  ida_mcp::http::HttpServer::run((ida_mcp::http::HttpServer *)((char *)this + 88));
                ida_mcp::http::HttpServer::reap_finished_sessions(this);
                v61 = *((__int64 **)this + 17);
                if ( v61 != *((__int64 **)this + 18) )
                {
                  *v61 = v59;
                  v61[1] = v58;
                  if ( _libc_single_threaded )
                  {
                    ++*(_DWORD *)(v58 + 8);
                  }
                  else
                  {
                    _InterlockedAdd((volatile signed __int32 *)(v58 + 8), 1u);
                    v61 = *((__int64 **)this + 17);
                  }
                  *((_QWORD *)this + 17) = v61 + 2;
LABEL_69:
                  pthread_mutex_unlock((pthread_mutex_t *)((char *)this + 88));
                  v196.m128i_i64[0] = (__int64)this;
                  v199 = 2;
                  v196.m128i_i64[1] = v188;
                  if ( v194.m128i_i64[1] )
                  {
                    *(_QWORD *)&v201 = v194.m128i_i64[0];
                    v202 = v195.m128i_i64[0];
                    (*(void (__fastcall **)(_BYTE *, void **))(v194.m128i_i64[0] + 8))(v200, v164);
                  }
                  else
                  {
                    v202 = 0;
                    v201 = 0;
                  }
                  v204.m128i_i64[0] = v58 + 16;
                  v204.m128i_i64[1] = v58;
                  v203 = v195.m128i_i64[1];
                  v62 = v189;
                  v189 = -1;
                  fd[0] = v62;
                  LOBYTE(v62) = v190[0];
                  v190[0] = 0;
                  LOBYTE(fd[1]) = v62;
                  v63 = v191;
                  v191 = 0;
                  v198 = v63;
                  LODWORD(v63) = v192;
                  v192 = 2;
                  v199 = v63;
                  if ( _libc_single_threaded )
                    ++*(_DWORD *)(v58 + 8);
                  else
                    _InterlockedAdd((volatile signed __int32 *)(v58 + 8), 1u);
                  fds = 0;
                  v64 = operator new(0x78u);
                  *(_QWORD *)v64 = off_4429B8;
                  v65 = v196.m128i_i64[0];
                  *(_DWORD *)(v64 + 40) = 2;
                  *(_OWORD *)(v64 + 8) = __PAIR128__(v196.m128i_u64[1], v65);
                  if ( *((_QWORD *)&v201 + 1) )
                  {
                    v66 = v201;
                    v67 = v202;
                    *(_QWORD *)(v64 + 72) = v201;
                    *(_QWORD *)(v64 + 88) = v67;
                    (*(void (__fastcall **)(__int64, _BYTE *))(v66 + 8))(v64 + 48, v200);
                  }
                  else
                  {
                    *(_QWORD *)(v64 + 88) = 0;
                    *(_OWORD *)(v64 + 72) = 0;
                  }
                  v174.m128i_i64[0] = v64;
                  v68 = _mm_load_si128(&v204);
                  *(_QWORD *)(v64 + 96) = v203;
                  v69 = fd[0];
                  *(__m128i *)(v64 + 104) = v68;
                  *(_DWORD *)(v64 + 24) = v69;
                  fd[0] = -1;
                  *(_BYTE *)(v64 + 28) = fd[1];
                  LOBYTE(fd[1]) = 0;
                  *(_QWORD *)(v64 + 32) = v198;
                  v198 = 0;
                  *(_DWORD *)(v64 + 40) = v199;
                  v70 = &v174;
                  event[0] = (struct epoll_event *)&v174;
                  v199 = 2;
                  v204 = 0;
                  std::thread::_M_start_thread();
                  if ( v174.m128i_i64[0] )
                    (*(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v174.m128i_i64[0] + 8LL))(
                      v174.m128i_i64[0],
                      &v174);
                  if ( *(_QWORD *)(v58 + 16) )
                    JUMPOUT(0x4DDED);
                  v71 = v204.m128i_i64[1];
                  *(struct pollfd *)(v58 + 16) = fds;
                  if ( v71 )
                    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release();
                  v72 = fd[0];
                  if ( fd[0] != -1 )
                  {
                    v73 = v198;
                    v167 = v196.m128i_i64[1];
                    if ( v198 )
                    {
                      v74 = *(pthread_mutex_t **)(v196.m128i_i64[1] + 48);
                      v75 = fd[1];
                      if ( *(_BYTE *)(v198 + 92) )
                      {
                        v172 = fd[1];
                        v171 = v74;
                        mutex = (pthread_mutex_t *)(v198 + 48);
                        pthread_mutex_lock((pthread_mutex_t *)(v198 + 48));
                        v74 = v171;
                        v75 = v172;
                        v76 = v198;
                        if ( *(_BYTE *)(v198 + 163) )
                        {
                          v198 = 0;
                          pthread_mutex_unlock(mutex);
                          v72 = fd[0];
                        }
                        else
                        {
                          v77 = 1;
LABEL_85:
                          if ( (v75 & 0x40) != 0 && *(_DWORD *)(v76 + 108) )
                          {
                            LOBYTE(v171) = v77;
                            v174.m128i_i32[0] = 0;
                            *(__int64 *)((char *)v174.m128i_i64 + 4) = 0;
                            owner = v74[3].__owner;
                            mutex = v74;
                            epoll_ctl(owner, 2, v72, event[0]);
                            v77 = (char)v171;
                            v74 = mutex;
                            v76 = v198;
                          }
                          mutex = (pthread_mutex_t *)v58;
                          v78 = 0;
                          v79 = nullptr;
                          v174.m128i_i64[0] = 0;
                          v171 = v74;
                          v80 = v170;
                          while ( 1 )
                          {
                            v81 = *(_QWORD **)(16LL * v60 + v76 + 112);
                            if ( v81 )
                            {
                              v82 = 16LL * v60;
                              while ( 1 )
                              {
                                v186[0] = &dword_7C + 1;
                                v186[1] = &boost::system::detail::system_cat_holder<void>::instance;
                                v84 = _mm_load_si128((const __m128i *)v186);
                                v187 = 3;
                                *(__m128i *)(v81 + 3) = v84;
                                v81[5] = v187;
                                v76 = v198;
                                v85 = v198 + v82;
                                v86 = *(_QWORD **)(v198 + v82 + 112);
                                if ( !v86 )
                                  break;
                                v83 = (_QWORD *)*v86;
                                *(_QWORD *)(v85 + 112) = *v86;
                                if ( !v83 )
                                {
                                  *(_QWORD *)(v85 + 120) = 0;
                                  *v86 = 0;
                                  *v81 = 0;
                                  if ( !v79 )
                                  {
LABEL_185:
                                    v80 = v81;
                                    v78 = 1;
                                    goto LABEL_98;
                                  }
LABEL_97:
                                  *v79 = v81;
                                  goto LABEL_98;
                                }
                                *v86 = 0;
                                *v81 = 0;
                                if ( v79 )
                                {
                                  *v79 = v81;
                                }
                                else
                                {
                                  v80 = v81;
                                  v78 = 1;
                                }
                                v79 = v81;
                                v81 = v83;
                              }
                              *v81 = 0;
                              if ( !v79 )
                                goto LABEL_185;
                              goto LABEL_97;
                            }
                            v81 = v79;
LABEL_98:
                            if ( ++v60 == 3 )
                              break;
                            v79 = v81;
                          }
                          v170 = v80;
                          v87 = (__int64)v80;
                          v58 = (__int64)mutex;
                          v88 = v171;
                          if ( v78 )
                            v174.m128i_i64[0] = v87;
                          *(_DWORD *)(v76 + 104) = -1;
                          *(_BYTE *)(v76 + 163) = 1;
                          if ( v77 && *(_BYTE *)(v73 + 92) )
                          {
                            mutex = v88;
                            pthread_mutex_unlock((pthread_mutex_t *)(v73 + 48));
                          }
                          v174.m128i_i64[1] = (__int64)v81;
                          boost::asio::detail::scheduler::post_deferred_completions();
                          boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::~op_queue();
                          v72 = fd[0];
                        }
                      }
                      else
                      {
                        if ( !*(_BYTE *)(v198 + 163) )
                        {
                          v76 = v198;
                          v77 = 0;
                          goto LABEL_85;
                        }
                        v198 = 0;
                      }
                    }
                    v70 = (__m128i *)&fd[1];
                    *(_OWORD *)v186 = 0;
                    v187 = 0;
                    boost::asio::detail::socket_ops::close(v72, (char *)&fd[1], 1, (__m128i *)v186);
                    v89 = v198;
                    if ( v198 )
                    {
                      v90 = 0;
                      v91 = *(_QWORD *)(v167 + 48);
                      if ( *(_BYTE *)(v91 + 204) )
                      {
                        pthread_mutex_lock((pthread_mutex_t *)(v91 + 160));
                        v90 = 1;
                        if ( v89 == *(_QWORD *)(v91 + 216) )
                          goto LABEL_215;
                      }
                      else
                      {
                        if ( v198 != *(_QWORD *)(v91 + 216) )
                          goto LABEL_109;
LABEL_215:
                        *(_QWORD *)(v91 + 216) = *(_QWORD *)(v89 + 24);
                      }
LABEL_109:
                      v92 = *(_QWORD *)(v89 + 32);
                      if ( v92 )
                        *(_QWORD *)(v92 + 24) = *(_QWORD *)(v89 + 24);
                      v93 = *(_QWORD *)(v89 + 24);
                      if ( v93 )
                        *(_QWORD *)(v93 + 32) = *(_QWORD *)(v89 + 32);
                      v94 = *(_QWORD *)(v91 + 224);
                      *(_QWORD *)(v89 + 32) = 0;
                      *(_QWORD *)(v89 + 24) = v94;
                      *(_QWORD *)(v91 + 224) = v89;
                      if ( v90 )
                        pthread_mutex_unlock((pthread_mutex_t *)(v91 + 160));
                      v198 = 0;
                    }
                  }
                  if ( *((_QWORD *)&v201 + 1) )
                    (*(void (__fastcall **)(_BYTE *, __m128i *))v201)(v200, v70);
                  if ( *(_QWORD *)(v58 + 8) == 0x100000001LL )
                  {
                    v132 = *(_QWORD *)v58;
                    *(_QWORD *)(v58 + 8) = 0;
                    (*(void (__fastcall **)(__int64, __m128i *))(v132 + 16))(v58, v70);
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 24LL))(v58);
                  }
                  else if ( _libc_single_threaded )
                  {
                    v95 = *(_DWORD *)(v58 + 8);
                    *(_DWORD *)(v58 + 8) = v95 - 1;
                    if ( v95 != 1 )
                      goto LABEL_121;
LABEL_176:
                    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold();
                  }
                  else if ( _InterlockedExchangeAdd((volatile signed __int32 *)v163.m128i_i64[0], 0xFFFFFFFF) == 1 )
                  {
                    goto LABEL_176;
                  }
LABEL_121:
                  v96 = v189;
                  if ( v189 != -1 )
                  {
                    v97 = v191;
                    v98 = v188;
                    if ( v191 )
                    {
                      v99 = *(_QWORD *)(v188 + 48);
                      v100 = v190[0];
                      if ( *(_BYTE *)(v191 + 92) )
                      {
                        v163.m128i_i8[0] = v190[0];
                        pthread_mutex_lock((pthread_mutex_t *)(v191 + 48));
                        v101 = v191;
                        v100 = v163.m128i_i8[0];
                        if ( *(_BYTE *)(v191 + 163) )
                        {
                          v191 = 0;
                          pthread_mutex_unlock((pthread_mutex_t *)(v97 + 48));
                          v96 = v189;
                        }
                        else
                        {
                          v102 = 1;
LABEL_126:
                          if ( (v100 & 0x40) != 0 && *(_DWORD *)(v101 + 108) )
                          {
                            v174.m128i_i32[0] = 0;
                            *(__int64 *)((char *)v174.m128i_i64 + 4) = 0;
                            epoll_ctl(*(_DWORD *)(v99 + 128), 2, v96, event[0]);
                            v101 = v191;
                          }
                          v103 = v169;
                          v104 = (_QWORD *)(v101 + 112);
                          v105 = 0;
                          v106 = nullptr;
                          v174.m128i_i64[0] = 0;
                          while ( 1 )
                          {
                            v107 = (_QWORD *)*v104;
                            if ( *v104 )
                            {
                              while ( 1 )
                              {
                                v196.m128i_i64[0] = 125;
                                v196.m128i_i64[1] = (__int64)&boost::system::detail::system_cat_holder<void>::instance;
                                v109 = _mm_load_si128(&v196);
                                *(_QWORD *)fd = 3;
                                *(__m128i *)(v107 + 3) = v109;
                                v107[5] = *(_QWORD *)fd;
                                v110 = (_QWORD *)*v104;
                                if ( !*v104 )
                                  break;
                                v108 = (_QWORD *)*v110;
                                *v104 = *v110;
                                if ( !v108 )
                                {
                                  v104[1] = 0;
                                  *v110 = 0;
                                  *v107 = 0;
                                  if ( !v106 )
                                  {
LABEL_183:
                                    v103 = (__int64)v107;
                                    v105 = 1;
                                    goto LABEL_139;
                                  }
LABEL_138:
                                  *v106 = v107;
                                  goto LABEL_139;
                                }
                                *v110 = 0;
                                *v107 = 0;
                                if ( v106 )
                                {
                                  *v106 = v107;
                                }
                                else
                                {
                                  v103 = (__int64)v107;
                                  v105 = 1;
                                }
                                v106 = v107;
                                v107 = v108;
                              }
                              *v107 = 0;
                              if ( !v106 )
                                goto LABEL_183;
                              goto LABEL_138;
                            }
                            v107 = v106;
LABEL_139:
                            v104 += 2;
                            if ( (_QWORD *)(v101 + 160) == v104 )
                              break;
                            v106 = v107;
                          }
                          v169 = v103;
                          if ( v105 )
                            v174.m128i_i64[0] = v103;
                          *(_DWORD *)(v101 + 104) = -1;
                          *(_BYTE *)(v101 + 163) = 1;
                          if ( v102 && *(_BYTE *)(v97 + 92) )
                            pthread_mutex_unlock((pthread_mutex_t *)(v97 + 48));
                          v174.m128i_i64[1] = (__int64)v107;
                          boost::asio::detail::scheduler::post_deferred_completions();
                          boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::~op_queue();
                          v96 = v189;
                        }
                      }
                      else
                      {
                        if ( !*(_BYTE *)(v191 + 163) )
                        {
                          v101 = v191;
                          v102 = 0;
                          goto LABEL_126;
                        }
                        v191 = 0;
                      }
                    }
                    v70 = (__m128i *)v190;
                    v196 = 0;
                    *(_QWORD *)fd = 0;
                    boost::asio::detail::socket_ops::close(v96, v190, 1, &v196);
                    v111 = v191;
                    if ( v191 )
                    {
                      v112 = *(_QWORD *)(v98 + 48);
                      v113 = 0;
                      if ( *(_BYTE *)(v112 + 204) )
                      {
                        pthread_mutex_lock((pthread_mutex_t *)(v112 + 160));
                        v113 = 1;
                        if ( v111 == *(_QWORD *)(v112 + 216) )
                          goto LABEL_213;
                      }
                      else
                      {
                        if ( v191 != *(_QWORD *)(v112 + 216) )
                          goto LABEL_150;
LABEL_213:
                        *(_QWORD *)(v112 + 216) = *(_QWORD *)(v111 + 24);
                      }
LABEL_150:
                      v114 = *(_QWORD *)(v111 + 32);
                      if ( v114 )
                        *(_QWORD *)(v114 + 24) = *(_QWORD *)(v111 + 24);
                      v115 = *(_QWORD *)(v111 + 24);
                      if ( v115 )
                        *(_QWORD *)(v115 + 32) = *(_QWORD *)(v111 + 32);
                      v116 = *(_QWORD *)(v112 + 224);
                      *(_QWORD *)(v111 + 32) = 0;
                      *(_QWORD *)(v111 + 24) = v116;
                      *(_QWORD *)(v112 + 224) = v111;
                      if ( v113 )
                        pthread_mutex_unlock((pthread_mutex_t *)(v112 + 160));
                      v191 = 0;
                    }
                  }
                  if ( !v194.m128i_i64[1] )
                    goto LABEL_2;
                  (*(void (__fastcall **)(void **, __m128i *))v194.m128i_i64[0])(v164, v70);
                  if ( !*v165 )
                    return v205 - __readfsqword(0x28u);
                  goto LABEL_3;
                }
                v118 = *((_QWORD *)this + 16);
                v119 = (char *)v61 - v118;
                v120 = ((__int64)v61 - v118) >> 4;
                if ( v120 == 0x7FFFFFFFFFFFFFFLL )
                  JUMPOUT(0x4E0B6);
                v121 = 1;
                mutex = *((pthread_mutex_t **)this + 16);
                if ( v120 )
                  v121 = ((__int64)v61 - v118) >> 4;
                v167 = (__int64)v61;
                v122 = v120 + v121;
                if ( v122 > 0x7FFFFFFFFFFFFFFLL )
                  v122 = 0x7FFFFFFFFFFFFFFLL;
                event[0] = (struct epoll_event *)(16 * v122);
                v123 = operator new(16 * v122);
                *(_QWORD *)&v119[v123] = v59;
                v124 = (pthread_mutex_t *)v167;
                v125 = (pthread_mutex_t *)v123;
                *(_QWORD *)&v119[v123 + 8] = v58;
                v126 = mutex;
                if ( _libc_single_threaded )
                  ++*(_DWORD *)(v58 + 8);
                else
                  _InterlockedAdd((volatile signed __int32 *)(v58 + 8), 1u);
                if ( v124 == v126 )
                {
                  v129 = v123 + 16;
                  if ( v126 )
                    goto LABEL_173;
                }
                else
                {
                  v127 = 0;
                  v128 = 0;
                  do
                  {
                    ++v128;
                    *(__m128i *)((char *)&v125->__lock + v127) = _mm_loadu_si128((const __m128i *)((char *)v126 + v127));
                    v127 += 16;
                  }
                  while ( v128 < ((unsigned __int64)((char *)(&v124[-1].__align + 3) - (char *)v126) >> 4) + 1 );
                  v129 = (__int64)&v125->__size[(char *)v124 - (char *)v126 + 16];
LABEL_173:
                  v130 = *((_QWORD *)this + 18);
                  mutex = v125;
                  v167 = v129;
                  operator delete(v126, v130 - (_QWORD)v126);
                  v125 = mutex;
                  v129 = v167;
                }
                *((_QWORD *)this + 16) = v125;
                v131 = (char *)event[0] + (unsigned __int64)v125;
                *((_QWORD *)this + 17) = v129;
                *((_QWORD *)this + 18) = v131;
                goto LABEL_69;
              }
            }
          }
          fds.fd = v11;
          *(_DWORD *)&fds.events = 1;
          if ( poll(&fds, 1u, -1) < 0 )
            break;
          v177 = 0;
          v176 = 0;
          v13 = accept(v11, nullptr, nullptr);
          if ( v13 != -1 )
            goto LABEL_15;
        }
        v16 = *v17;
        v196.m128i_i64[1] = (__int64)&boost::system::detail::system_cat_holder<void>::instance;
        v196.m128i_i64[0] = v16;
        v176 = _mm_load_si128(&v196);
        v22 = v16 != 0;
      }
      else
      {
LABEL_15:
        v177 = 0;
        v176 = 0;
        if ( v189 == -1 )
        {
          v145 = v188;
          v146 = boost::asio::detail::epoll_reactor::register_descriptor();
          v16 = v146;
          if ( !v146 )
          {
            v189 = v13;
            v53 = *(_BYTE *)(v145 + 80);
            v34 = 0;
            v176 = 0;
            v21 = 0;
            v54 = _mm_load_si128(&v176);
            v177 = 0;
            v190[0] = v53 | 0x50;
            v55 = *(_DWORD *)(v167 + 24);
            v196 = v54;
            v192 = v55;
            v35 = 0;
            goto LABEL_60;
          }
          v15 = &boost::system::detail::system_cat_holder<void>::instance;
          v196.m128i_i64[0] = v146;
          v196.m128i_i64[1] = (__int64)&boost::system::detail::system_cat_holder<void>::instance;
          v176 = _mm_load_si128(&v196);
        }
        else
        {
          v15 = &boost::asio::error::get_misc_category(void)::instance;
          v16 = 1;
          v196.m128i_i64[0] = 1;
          v196.m128i_i64[1] = (__int64)&boost::asio::error::get_misc_category(void)::instance;
          v176 = _mm_load_si128(&v196);
        }
        v176.m128i_i32[0] = v16;
        v22 = 1;
        v176.m128i_i64[1] = (__int64)v15;
      }
      v176.m128i_i32[0] = v16;
      v176.m128i_i64[1] = (__int64)v15;
      v39 = _mm_load_si128(&v176);
      *(_QWORD *)fd = (unsigned __int64)boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::accept<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::any_io_executor>>(boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::implementation_type &,boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::any_io_executor> &,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> *,boost::system::error_code&)::loc
                    | v22;
      v37 = ((unsigned __int64)boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::accept<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::any_io_executor>>(boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::implementation_type &,boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::any_io_executor> &,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> *,boost::system::error_code&)::loc
           | v22)
          & 1;
      v196.m128i_i64[0] = __PAIR64__(v39.m128i_u32[1], v16);
      v196.m128i_i64[1] = (__int64)v15;
      v38 = _mm_unpacklo_epi64(
              _mm_loadl_epi64((const __m128i *)off_442A00),
              (__m128i)(unsigned __int64)"accept<boost::asio::ip::tcp, boost::asio::any_io_executor>");
      v40 = _mm_load_si128(&v196);
      v177 = (unsigned __int64)boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::accept<boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::any_io_executor>>(boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>::implementation_type &,boost::asio::basic_socket<boost::asio::ip::tcp,boost::asio::any_io_executor> &,boost::asio::ip::basic_endpoint<boost::asio::ip::tcp> *,boost::system::error_code&)::loc
           | v22;
      v176 = v40;
      if ( v13 != -1 )
      {
        *(__m128i *)event = v38;
        *(_QWORD *)fd = 0;
        LOBYTE(fds.fd) = 0;
        v196 = 0;
        boost::asio::detail::socket_ops::close(v13, (char *)&fds, 1, &v196);
        v38 = _mm_load_si128((const __m128i *)event);
      }
LABEL_38:
      v175 = 1292;
      v174 = v38;
      if ( !v37 )
        goto LABEL_63;
LABEL_39:
      boost::system::error_code::what[abi:cxx11]();
      std::string::basic_string<std::allocator<char>>(
        (__int64 *)v186,
        "accept",
        v41,
        v42,
        v43,
        v44,
        (int)event[0],
        (int)event[1],
        v163.m128i_i64[0]);
      v45 = std::string::append();
      v46 = v45 + 16;
      v183 = v185;
      if ( *(_QWORD *)v45 == v45 + 16 )
      {
        v137 = v185;
        v138 = (_DWORD *)(v45 + 16);
        v139 = *(_QWORD *)(v45 + 8) + 1LL;
        if ( (unsigned int)v139 >= 8 )
        {
          LODWORD(v147) = 0;
          do
          {
            v148 = (unsigned int)v147;
            v147 = (unsigned int)(v147 + 8);
            *(_QWORD *)((char *)v185 + v148) = *(_QWORD *)(v46 + v148);
          }
          while ( (unsigned int)v147 < ((unsigned int)v139 & 0xFFFFFFF8) );
          v137 = (_DWORD *)((char *)v185 + v147);
          v138 = (_DWORD *)(v46 + v147);
        }
        v140 = 0;
        if ( (v139 & 4) != 0 )
        {
          *v137 = *v138;
          v140 = 4;
        }
        if ( (v139 & 2) != 0 )
        {
          *(_WORD *)((char *)v137 + v140) = *(_WORD *)((char *)v138 + v140);
          v140 += 2;
        }
        if ( (v139 & 1) != 0 )
          *((_BYTE *)v137 + v140) = *((_BYTE *)v138 + v140);
      }
      else
      {
        v183 = *(void **)v45;
        v185[0] = *(_QWORD *)(v45 + 16);
      }
      v47 = *(_QWORD *)(v45 + 8);
      *(_QWORD *)v45 = v46;
      *(_QWORD *)(v45 + 8) = 0;
      v48 = v181;
      v184 = v47;
      *(_BYTE *)(v45 + 16) = 0;
      v49 = v184 + v48;
      if ( v183 == v185 )
      {
        if ( v49 <= 0xF || v180 == v182 )
        {
LABEL_46:
          v50 = std::string::_M_append();
          v51 = v50 + 16;
          v178[0] = v179;
          v52 = *(void **)v50;
          if ( *(_QWORD *)v50 != v50 + 16 )
          {
LABEL_47:
            v178[0] = v52;
            v179[0] = *(_QWORD *)(v50 + 16);
            goto LABEL_48;
          }
          v141 = v179;
          v142 = (_DWORD *)(v50 + 16);
          v143 = *(_QWORD *)(v50 + 8) + 1LL;
          if ( (unsigned int)v143 >= 8 )
          {
            LODWORD(v150) = 0;
            do
            {
              v151 = (unsigned int)v150;
              v150 = (unsigned int)(v150 + 8);
              *(_QWORD *)((char *)v179 + v151) = *(_QWORD *)(v51 + v151);
            }
            while ( (unsigned int)v150 < ((unsigned int)v143 & 0xFFFFFFF8) );
            v141 = (_DWORD *)((char *)v179 + v150);
            v142 = (_DWORD *)(v51 + v150);
          }
          v144 = 0;
          if ( (v143 & 4) != 0 )
          {
            *v141 = *v142;
            v144 = 4;
          }
          if ( (v143 & 2) != 0 )
          {
            *(_WORD *)((char *)v141 + v144) = *(_WORD *)((char *)v142 + v144);
            v144 += 2;
          }
          if ( (v143 & 1) != 0 )
            *((_BYTE *)v141 + v144) = *((_BYTE *)v142 + v144);
LABEL_48:
          v178[1] = *(void **)(v50 + 8);
          *(_QWORD *)v50 = v51;
          *(_QWORD *)(v50 + 8) = 0;
          *(_BYTE *)(v50 + 16) = 0;
          v164 = v178;
          std::runtime_error::runtime_error();
          if ( v178[0] != v179 )
            operator delete(v178[0], v179[0] + 1LL);
          if ( v183 != v185 )
            operator delete(v183, v185[0] + 1LL);
          if ( v186[0] != &v187 )
            operator delete(v186[0], v187 + 1);
          if ( v180 != v182 )
            operator delete(v180, v182[0] + 1LL);
          JUMPOUT(0x4DDF2);
        }
      }
      else if ( v185[0] >= v49 || v180 == v182 )
      {
LABEL_45:
        if ( 0x7FFFFFFFFFFFFFFELL - v184 < v48 )
          JUMPOUT(0x4E08F);
        goto LABEL_46;
      }
      if ( v182[0] >= v49 )
      {
        v50 = std::string::_M_replace();
        v51 = v50 + 16;
        v178[0] = v179;
        v52 = *(void **)v50;
        if ( *(_QWORD *)v50 != v50 + 16 )
          goto LABEL_47;
        v133 = v179;
        v134 = *(_QWORD *)(v50 + 8) + 1LL;
        v135 = (_DWORD *)(v50 + 16);
        if ( (unsigned int)v134 >= 8 )
        {
          LODWORD(v152) = 0;
          do
          {
            v153 = (unsigned int)v152;
            v152 = (unsigned int)(v152 + 8);
            *(_QWORD *)((char *)v179 + v153) = *(_QWORD *)(v51 + v153);
          }
          while ( (unsigned int)v152 < ((unsigned int)v134 & 0xFFFFFFF8) );
          v133 = (_DWORD *)((char *)v179 + v152);
          v135 = (_DWORD *)(v51 + v152);
        }
        v136 = 0;
        if ( (v134 & 4) != 0 )
        {
          *v133 = *v135;
          v136 = 4;
        }
        if ( (v134 & 2) != 0 )
        {
          *(_WORD *)((char *)v133 + v136) = *(_WORD *)((char *)v135 + v136);
          v136 += 2;
        }
        if ( (v134 & 1) != 0 )
          *((_BYTE *)v133 + v136) = *((_BYTE *)v135 + v136);
        goto LABEL_48;
      }
      goto LABEL_45;
    }
    if ( (v12 & 1) != 0 )
    {
      boost::asio::error::make_error_code();
      v21 = v177;
      v16 = v176.m128i_i32[0];
      v34 = v176.m128i_u64[1];
      if ( v177 == 1 )
      {
        v163.m128i_i64[0] = 1;
        v196.m128i_i64[0] = 103;
        v196.m128i_i64[1] = (__int64)&boost::system::detail::system_cat_holder<void>::instance;
        v157 = _mm_load_si128(&v196);
        LODWORD(event[0]) = v176.m128i_i32[0];
        *(_QWORD *)fd = 3;
        v187 = 3;
        *(__m128i *)v186 = v157;
        v158 = boost::system::operator==();
        v16 = (unsigned __int32)event[0];
        v21 = v163.m128i_i64[0];
        if ( v158 )
          goto LABEL_246;
        v156 = LODWORD(event[0]) + 1000 * (v34 % 0x1FFFF7);
        goto LABEL_245;
      }
      if ( v176.m128i_i32[0] == 11 )
      {
        if ( !v177 )
          goto LABEL_32;
        if ( unk_448928
           ? *(_QWORD *)(v176.m128i_i64[1] + 8) == unk_448928
           : v176.m128i_i64[1] == (_QWORD)&boost::system::detail::system_cat_holder<void>::instance )
        {
          goto LABEL_32;
        }
        if ( unk_448928 )
        {
          if ( unk_448928 == *(_QWORD *)(v176.m128i_i64[1] + 8) )
            goto LABEL_32;
        }
        else if ( (__int64 (__fastcall ***)(boost::system::detail::system_error_category *__hidden))v176.m128i_i64[1] == &boost::system::detail::system_cat_holder<void>::instance )
        {
          goto LABEL_32;
        }
      }
      goto LABEL_252;
    }
    boost::asio::error::make_error_code();
    v21 = v177;
    v16 = v176.m128i_i32[0];
    v34 = v176.m128i_u64[1];
    if ( v177 == 1 )
    {
      v163.m128i_i64[0] = 1;
      v196.m128i_i64[0] = 103;
      v196.m128i_i64[1] = (__int64)&boost::system::detail::system_cat_holder<void>::instance;
      v154 = _mm_load_si128(&v196);
      LODWORD(event[0]) = v176.m128i_i32[0];
      *(_QWORD *)fd = 3;
      v187 = 3;
      *(__m128i *)v186 = v154;
      v155 = boost::system::operator==();
      v16 = (unsigned __int32)event[0];
      v21 = v163.m128i_i64[0];
      if ( v155 )
        goto LABEL_246;
      v156 = LODWORD(event[0]) + 1000 * (v34 % 0x1FFFF7);
      goto LABEL_245;
    }
    if ( v176.m128i_i32[0] != 11 )
    {
LABEL_252:
      v196.m128i_i64[1] = (__int64)&boost::system::detail::system_cat_holder<void>::instance;
      v196.m128i_i64[0] = 103;
      v159 = _mm_load_si128(&v196);
      v163.m128i_i32[0] = v16;
      v177 = v21;
      event[0] = (struct epoll_event *)v21;
      *(_QWORD *)fd = 3;
      v187 = 3;
      *(__m128i *)v186 = v159;
      v160 = boost::system::operator==();
      v21 = (unsigned __int64)event[0];
      v16 = v163.m128i_i32[0];
      if ( v160 )
        goto LABEL_246;
      v156 = v163.m128i_i32[0];
LABEL_245:
      if ( v156 != 71 )
        goto LABEL_32;
LABEL_246:
      if ( (v12 & 4) != 0 )
        goto LABEL_32;
      goto LABEL_247;
    }
    if ( v177 )
    {
      if ( unk_448928 )
      {
        if ( unk_448928 != *(_QWORD *)(v176.m128i_i64[1] + 8) )
          goto LABEL_252;
      }
      else if ( (__int64 (__fastcall ***)(boost::system::detail::system_error_category *__hidden))v176.m128i_i64[1] != &boost::system::detail::system_cat_holder<void>::instance )
      {
        goto LABEL_252;
      }
    }
LABEL_247:
    boost::asio::error::make_error_code();
    v21 = v177;
    v16 = v176.m128i_i32[0];
    v34 = v176.m128i_u64[1];
    v35 = v177 & 1;
    goto LABEL_33;
  }
  return v205 - __readfsqword(0x28u);
}

