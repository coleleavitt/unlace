// Alternative name is '_ZN5boost4asio6detail23buffer_sequence_adapterINS0_12const_bufferENS_5beast6detail11buffers_refINS4_19buffers_prefix_viewIRKNS4_14buffers_suffixINS4_16buffers_cat_viewIJS3_S3_NS4_4http10chunk_crlfEEEEEEEEEEEC1ERKSH_'
__int64 __fastcall boost::asio::detail::buffer_sequence_adapter<boost::asio::const_buffer,boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>::buffer_sequence_adapter(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbp
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int8 v7; // r8
  unsigned __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // r9
  _QWORD *v12; // r10
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  bool v20; // zf
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rbp
  __int64 v26; // rdx
  _QWORD *v27; // rax
  void *v28; // rbp
  _QWORD *v29; // r11
  _QWORD *v30; // rbp
  _QWORD *v31; // rax
  _QWORD *v33; // rbp
  unsigned __int64 v34; // r11
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rdx
  unsigned __int8 v40; // [rsp+1h] [rbp-101h]
  __int64 v41; // [rsp+Ah] [rbp-F8h]
  _QWORD *v42; // [rsp+12h] [rbp-F0h]
  char v43; // [rsp+1Ah] [rbp-E8h]
  __int64 v44; // [rsp+22h] [rbp-E0h]
  __int64 v45; // [rsp+3Ah] [rbp-C8h]
  unsigned __int8 v46[8]; // [rsp+42h] [rbp-C0h] BYREF
  unsigned __int8 v47; // [rsp+4Ah] [rbp-B8h]
  __int64 v48; // [rsp+52h] [rbp-B0h]
  __int64 v49; // [rsp+5Ah] [rbp-A8h]
  __int64 v50; // [rsp+62h] [rbp-A0h]
  __int64 v51; // [rsp+6Ah] [rbp-98h]
  _QWORD *v52; // [rsp+72h] [rbp-90h] BYREF
  char v53; // [rsp+7Ah] [rbp-88h]
  __int64 v54; // [rsp+82h] [rbp-80h]
  __int64 v55; // [rsp+8Ah] [rbp-78h]
  unsigned __int64 v56; // [rsp+92h] [rbp-70h]
  __int64 v57; // [rsp+9Ah] [rbp-68h]
  _QWORD *v58; // [rsp+A2h] [rbp-60h] BYREF
  char v59; // [rsp+AAh] [rbp-58h]
  __int64 v60; // [rsp+B2h] [rbp-50h]
  unsigned __int64 v61; // [rsp+C2h] [rbp-40h]
  __int64 v62; // [rsp+DAh] [rbp-28h]

  v62 = v2;
  v3 = *a2;
  v61 = __readfsqword(0x28u);
  v53 = 0;
  v49 = v3;
  *(_OWORD *)(a1 + 1024) = 0;
  v5 = *(unsigned __int8 *)(v3 + 40);
  v50 = *(_QWORD *)(v3 + 16);
  v51 = *(_QWORD *)(v3 + 24);
  boost::mp11::detail::mp_with_index_impl_<5ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v5,
    (__int64)&v52,
    (unsigned __int8 *)(v3 + 32));
  v6 = *(_QWORD *)(v3 + 8);
  v54 = *(_QWORD *)(v3 + 48);
  boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>::begin();
  v56 = v6;
  v55 = v3;
  v57 = v45;
  v40 = v47;
  v59 = 0;
  boost::mp11::detail::mp_with_index_impl_<5ul>::call<0ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::copy>(
    v47,
    (__int64)&v58,
    v46);
  v7 = v59;
  v60 = v48;
  v8 = 0;
LABEL_28:
  if ( v60 == v54 && v57 == v51 && v7 == v53 )
  {
    switch ( v7 )
    {
      case 0u:
      case 4u:
        goto LABEL_61;
      case 1u:
      case 2u:
      case 3u:
        if ( v52 == v58 )
          goto LABEL_61;
        break;
      default:
        return boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator::increment();
    }
  }
  while ( v8 <= 0x3F )
  {
    v9 = v60;
    v10 = v57;
    if ( v57 == *(_QWORD *)(v60 + 40) && v7 == *(_BYTE *)(v60 + 56) )
    {
      v29 = (_QWORD *)(v60 + 48);
      v11 = v7;
      switch ( v7 )
      {
        case 0u:
        case 4u:
          goto LABEL_42;
        case 1u:
          v12 = v58;
          if ( v58 == (_QWORD *)*v29 )
            goto LABEL_75;
          goto LABEL_6;
        case 2u:
        case 3u:
          v12 = v58;
          if ( (_QWORD *)*v29 != v58 )
            goto LABEL_6;
LABEL_75:
          v34 = v12[1];
          v35 = *(_QWORD *)(v60 + 64);
          if ( v34 <= v35 )
            v35 = v12[1];
          v14 = v34 - v35;
          v13 = v35 + *v12;
          goto LABEL_7;
        default:
          return boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator::increment();
      }
    }
    v11 = v7;
    switch ( v7 )
    {
      case 0u:
      case 4u:
LABEL_42:
        v14 = 0;
        v13 = 0;
        goto LABEL_7;
      case 1u:
      case 2u:
      case 3u:
LABEL_6:
        v13 = *v58;
        v14 = v58[1];
LABEL_7:
        v15 = v56;
        v41 = v57;
        if ( v14 <= v56 )
          v15 = v14;
        break;
      default:
        return boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator::increment();
    }
    v16 = 16 * v8;
    *(_QWORD *)(a1 + v16) = v13;
    *(_QWORD *)(a1 + v16 + 8) = v15;
    *(_QWORD *)(a1 + 1032) += v15;
    switch ( v11 )
    {
      case 1LL:
        v23 = v58;
        v58 += 2;
        v43 = 1;
        v42 = v23;
        v24 = v58;
        v44 = v9;
        if ( (_QWORD *)(v10 + 16) == v58 )
          goto LABEL_55;
        while ( !v24[1] )
        {
          v24 += 2;
          v58 = v24;
          if ( v24 == (_QWORD *)(v10 + 16) )
          {
LABEL_55:
            v58 = (_QWORD *)(v10 + 16);
            v31 = (_QWORD *)(v10 + 16);
            v59 = 2;
            if ( v10 + 32 == v10 + 16 )
            {
LABEL_63:
              if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
                boost::beast::http::chunk_crlf::begin();
              v59 = 3;
              v58 = &boost::beast::http::chunk_crlf::begin(void)const::cb;
              v33 = &boost::beast::http::chunk_crlf::begin(void)const::cb;
              while ( 1 )
              {
                if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb
                  && __cxa_guard_acquire(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb) )
                {
                  unk_448FA8 = 2;
                  boost::beast::http::chunk_crlf::begin(void)const::cb = "\r\n";
                  __cxa_guard_release(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
                }
                if ( v33 == (_QWORD *)&`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
                  goto LABEL_39;
                if ( v58[1] )
                  goto LABEL_40;
                v33 = v58 + 2;
                v58 += 2;
              }
            }
            while ( !v31[1] )
            {
              v31 += 2;
              v58 = v31;
              if ( v31 == (_QWORD *)(v10 + 32) )
                goto LABEL_63;
            }
            v7 = v59;
            break;
          }
        }
        if ( v10 != *(_QWORD *)(v9 + 40) )
          goto LABEL_26;
        v19 = (_QWORD *)(v9 + 48);
        if ( *(_BYTE *)(v9 + 56) != 1 )
          goto LABEL_26;
LABEL_84:
        if ( (_QWORD *)*v19 == v42 )
        {
          v38 = v42[1];
          v39 = *(_QWORD *)(v9 + 64);
          if ( v39 > v38 )
            v39 = v42[1];
          v21 = v38 - v39;
        }
        else
        {
          v21 = v42[1];
        }
        goto LABEL_27;
      case 2LL:
        v17 = v58;
        v58 += 2;
        v43 = 2;
        v42 = v17;
        v18 = v58;
        v44 = v9;
        if ( v58 == (_QWORD *)(v10 + 32) )
          goto LABEL_46;
        break;
      case 3LL:
        v27 = v58;
        v43 = 3;
        v58 += 2;
        v28 = v58;
        v42 = v27;
        v44 = v9;
        while ( 2 )
        {
          if ( (_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb
            || !__cxa_guard_acquire(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb) )
          {
            if ( v28 == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
              goto LABEL_39;
          }
          else
          {
            unk_448FA8 = 2;
            boost::beast::http::chunk_crlf::begin(void)const::cb = "\r\n";
            __cxa_guard_release(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
            if ( v28 == &`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
              goto LABEL_39;
          }
          if ( !v58[1] )
          {
            v28 = v58 + 2;
            v58 += 2;
            continue;
          }
          goto LABEL_40;
        }
      default:
        return boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator::increment();
    }
    do
    {
      if ( v18[1] )
      {
        if ( v10 == *(_QWORD *)(v9 + 40) && (v19 = (_QWORD *)(v9 + 48), *(_BYTE *)(v9 + 56) == 2) )
        {
LABEL_16:
          v20 = *v19 == (_QWORD)v42;
          v21 = v42[1];
          if ( v20 )
          {
            v22 = *(_QWORD *)(v9 + 64);
            if ( v21 <= v22 )
              v22 = v42[1];
            v21 -= v22;
          }
        }
        else
        {
LABEL_26:
          v21 = v42[1];
        }
        goto LABEL_27;
      }
      v18 += 2;
      v58 = v18;
    }
    while ( v18 != (_QWORD *)(v10 + 32) );
LABEL_46:
    if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb )
      boost::beast::http::chunk_crlf::begin();
    v59 = 3;
    v58 = &boost::beast::http::chunk_crlf::begin(void)const::cb;
    v30 = &boost::beast::http::chunk_crlf::begin(void)const::cb;
    while ( 1 )
    {
      if ( !(_BYTE)`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb
        && __cxa_guard_acquire(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb) )
      {
        unk_448FA8 = 2;
        boost::beast::http::chunk_crlf::begin(void)const::cb = "\r\n";
        __cxa_guard_release(&`guard variable for'boost::beast::http::chunk_crlf::begin(void)::cb);
      }
      if ( v30 == (_QWORD *)&`guard variable for'boost::beast::http::detail::chunk_last(void)::cb )
        break;
      if ( v58[1] )
        goto LABEL_40;
      v30 = v58 + 2;
      v58 += 2;
    }
LABEL_39:
    LOBYTE(v58) = 0;
    v59 = 4;
LABEL_40:
    v9 = v44;
    if ( v41 == *(_QWORD *)(v44 + 40) && v43 == *(_BYTE *)(v44 + 56) )
    {
      v19 = (_QWORD *)(v44 + 48);
      switch ( v43 )
      {
        case 1:
          v7 = v59;
          goto LABEL_84;
        case 2:
          v7 = v59;
          goto LABEL_16;
        case 3:
          if ( (_QWORD *)*v19 == v42 )
          {
            v36 = v42[1];
            v37 = *(_QWORD *)(v44 + 64);
            v7 = v59;
            if ( v37 > v36 )
              v37 = v42[1];
            v21 = v36 - v37;
          }
          else
          {
            v7 = v59;
            v21 = v42[1];
          }
          break;
      }
    }
    else
    {
      switch ( v43 )
      {
        case 1:
        case 2:
          v7 = v59;
          goto LABEL_26;
        case 3:
          v7 = v59;
          v21 = v42[1];
          break;
      }
    }
LABEL_27:
    v56 -= v21;
    v25 = v55;
    v26 = v49;
    v8 = *(_QWORD *)(a1 + 1024) + 1LL;
    *(_QWORD *)(a1 + 1024) = v8;
    if ( v26 == v25 )
      goto LABEL_28;
  }
LABEL_61:
  if ( v40 > 4u )
    return boost::beast::http::detail::basic_parsed_list<boost::beast::http::detail::opt_token_list_policy>::const_iterator::increment();
  else
    return v61 - __readfsqword(0x28u);
}

