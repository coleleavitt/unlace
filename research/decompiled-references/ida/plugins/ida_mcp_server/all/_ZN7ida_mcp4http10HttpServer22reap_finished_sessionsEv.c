void __fastcall ida_mcp::http::HttpServer::reap_finished_sessions(ida_mcp::http::HttpServer *this)
{
  __m128i *v1; // r12
  double *v2; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rdx
  __int64 v7; // rax
  double *v8; // rbp
  __int128 v9; // xmm1
  __m128 v10; // xmm0
  __int64 v11; // rdi
  std::thread *v12; // rdi
  __m128i *v13; // r15
  __m128i *v14; // r14
  __m128i *v15; // rbp
  __m128i v16; // xmm1
  __m128i v17; // xmm0
  __int64 v18; // rdi
  __m128i *v19; // rbp
  __m128i *v20; // rbx

  v1 = *((__m128i **)this + 17);
  v2 = *((double **)this + 16);
  if ( v1 == (__m128i *)v2 )
    return;
  v4 = ((unsigned __int8)((unsigned __int64)((char *)v1 - (char *)v2 - 16) >> 4) + 1) & 3;
  if ( (((unsigned __int8)((unsigned __int64)((char *)v1 - (char *)v2 - 16) >> 4) + 1) & 3) == 0 )
    goto LABEL_11;
  if ( v4 != 1 )
  {
    if ( v4 != 2 )
    {
      if ( *(_BYTE *)(*(_QWORD *)v2 + 8LL) )
        goto LABEL_17;
      v2 += 2;
    }
    if ( *(_BYTE *)(*(_QWORD *)v2 + 8LL) )
      goto LABEL_17;
    v2 += 2;
  }
  if ( !*(_BYTE *)(*(_QWORD *)v2 + 8LL) )
  {
    v2 += 2;
    if ( v1 == (__m128i *)v2 )
      return;
LABEL_11:
    while ( !*(_BYTE *)(*(_QWORD *)v2 + 8LL) )
    {
      v5 = *((_QWORD *)v2 + 2);
      v6 = v2 + 2;
      v2 += 2;
      if ( *(_BYTE *)(v5 + 8) )
        break;
      v7 = *((_QWORD *)v2 + 2);
      v2 += 2;
      if ( *(_BYTE *)(v7 + 8) )
        break;
      v2 = (double *)(v6 + 4);
      if ( *(_BYTE *)(v6[4] + 8LL) )
        break;
      v2 = (double *)(v6 + 6);
      if ( v1 == (__m128i *)(v6 + 6) )
        return;
    }
  }
LABEL_17:
  if ( **(_QWORD **)v2 )
    std::thread::join(*(std::thread **)v2);
  if ( v1 == (__m128i *)v2 )
    return;
  v8 = v2 + 2;
  if ( v1 == (__m128i *)(v2 + 2) )
  {
LABEL_30:
    v13 = *((__m128i **)this + 17);
    if ( v1 != v13 )
    {
      v14 = (__m128i *)v2;
      v15 = v1;
      v16 = 0;
      do
      {
        v17 = _mm_loadu_si128(v15);
        *v15 = v16;
        v18 = v14->m128i_i64[1];
        *v14 = v17;
        if ( v18 )
        {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release();
          v16 = 0;
        }
        ++v15;
        ++v14;
      }
      while ( v13 != v15 );
      v13 = *((__m128i **)this + 17);
    }
    v19 = (__m128i *)((char *)v2 + (char *)v13 - (char *)v1);
    if ( v19 != v13 )
    {
      v20 = (__m128i *)((char *)v2 + (char *)v13 - (char *)v1);
      do
      {
        while ( v20->m128i_i64[1] )
        {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release();
          if ( ++v20 == v13 )
          {
            *((_QWORD *)this + 17) = v19;
            return;
          }
        }
        ++v20;
      }
      while ( v20 != v13 );
      *((_QWORD *)this + 17) = v19;
    }
    return;
  }
  v9 = 0;
  do
  {
    while ( 1 )
    {
      v12 = *(std::thread **)v8;
      if ( !*(_BYTE *)(*(_QWORD *)v8 + 8LL) )
      {
        v10 = _mm_loadh_ps(v8 + 1);
        *(_OWORD *)v8 = v9;
        v11 = *((_QWORD *)v2 + 1);
        *(__m128 *)v2 = v10;
        if ( v11 )
        {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release();
          v9 = 0;
        }
        v2 += 2;
        goto LABEL_25;
      }
      if ( *(_QWORD *)v12 )
        break;
LABEL_25:
      v8 += 2;
      if ( v1 == (__m128i *)v8 )
        goto LABEL_29;
    }
    std::thread::join(v12);
    v8 += 2;
    v9 = 0;
  }
  while ( v1 != (__m128i *)v8 );
LABEL_29:
  if ( v1 != (__m128i *)v2 )
    goto LABEL_30;
}

