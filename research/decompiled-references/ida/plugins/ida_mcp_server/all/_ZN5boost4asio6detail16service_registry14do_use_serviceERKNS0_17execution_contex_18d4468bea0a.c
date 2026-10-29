_QWORD *__fastcall boost::asio::detail::service_registry::do_use_service(__int64 a1, __int64 a2, __int64 a3)
{
  const __m128i *v4; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r13
  __int8 v8; // cl
  bool v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  const char *v12; // rdi
  bool v13; // zf
  int v14; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdi
  __int64 (__fastcall *v21)(); // rax
  unsigned __int64 v22; // r15
  __m128i v23; // xmm3
  __m128i si128; // xmm4
  pthread_mutex_t *v25; // rdi
  __m128i v26; // xmm0
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r13
  __int64 v30; // rcx
  __int64 v31; // rbp
  bool v32; // r14
  __int64 v33; // rax
  __int64 v34; // rax
  const char *v35; // rdi
  int v36; // eax
  __m128i v37; // [rsp+0h] [rbp-68h] BYREF
  pthread_mutex_t *mutex; // [rsp+18h] [rbp-50h]
  __m128i v39[4]; // [rsp+20h] [rbp-48h] BYREF

  v4 = (const __m128i *)a2;
  v39[0].m128i_i64[0] = a3;
  mutex = (pthread_mutex_t *)(a1 + 8);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 8));
  v5 = *(_QWORD **)(a1 + 56);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a2 + 8);
    v7 = *(_QWORD *)a2;
    v8 = v6 != 0;
    v9 = *(_QWORD *)a2 != 0;
    while ( 1 )
    {
      v10 = v5[2];
      LOBYTE(a2) = v10 == v6;
      if ( v10 != 0 && v10 == v6 )
      {
        if ( v8 )
          break;
      }
      v11 = v5[1];
      if ( v11 )
      {
        if ( v9 )
        {
          v12 = *(const char **)(v11 + 8);
          a2 = *(_QWORD *)(v7 + 8);
          if ( v12 == (const char *)a2 )
            break;
          if ( *v12 != 42 )
          {
            v13 = *(_BYTE *)a2 == 42;
            v37.m128i_i8[0] = v8;
            a2 += v13;
            v14 = strcmp(v12, (const char *)a2);
            v8 = v37.m128i_i8[0];
            if ( !v14 )
              break;
          }
        }
      }
      v5 = (_QWORD *)v5[4];
      if ( !v5 )
        goto LABEL_12;
    }
  }
  else
  {
LABEL_12:
    v39[0] = (__m128i)_mm_loadh_ps((const double *)v39[0].m128i_i64);
    v37 = (__m128i)(unsigned __int64)off_444760;
    pthread_mutex_unlock(mutex);
    v20 = **(_QWORD **)(a1 + 48);
    v21 = *(__int64 (__fastcall **)())(*(_QWORD *)v20 + 8LL);
    if ( v21 == boost::asio::execution_context::allocator_impl<std::allocator<void>>::allocate )
    {
      v22 = boost::asio::execution_context::allocator_impl<std::allocator<void>>::allocate(
              0x30u,
              a2,
              v16,
              v17,
              v18,
              v19,
              v37.m128i_i64[0]);
    }
    else
    {
      a2 = 48;
      v22 = ((__int64 (__fastcall *)(__int64, __int64, __int64))v21)(v20, 48, 8);
    }
    v23 = _mm_load_si128(&v37);
    si128 = _mm_load_si128(v39);
    *(_QWORD *)(v22 + 32) = 0;
    v25 = mutex;
    *(__m128i *)v22 = v23;
    *(__m128i *)(v22 + 16) = si128;
    v26 = _mm_loadu_si128(v4);
    *(_QWORD *)(v22 + 40) = boost::asio::detail::service_registry::destroy_allocated<boost::asio::config_service>;
    *(__m128i *)(v22 + 8) = v26;
    pthread_mutex_lock(v25);
    v29 = *(_QWORD *)(a1 + 56);
    if ( v29 )
    {
      v30 = v4->m128i_i64[0];
      v31 = v4->m128i_i64[1];
      v5 = *(_QWORD **)(a1 + 56);
      LOBYTE(v28) = v31 != 0;
      v32 = v30 != 0;
      while ( 1 )
      {
        v33 = v5[2];
        LOBYTE(a2) = v33 == v31;
        if ( v33 != 0 && v33 == v31 )
        {
          if ( (_BYTE)v28 )
            break;
        }
        v34 = v5[1];
        if ( v34 )
        {
          if ( v32 )
          {
            v35 = *(const char **)(v34 + 8);
            a2 = *(_QWORD *)(v30 + 8);
            if ( v35 == (const char *)a2 )
              break;
            if ( *v35 != 42 )
            {
              v13 = *(_BYTE *)a2 == 42;
              v39[0].m128i_i8[0] = v28;
              v37.m128i_i64[0] = v30;
              a2 += v13;
              v36 = strcmp(v35, (const char *)a2);
              v30 = v37.m128i_i64[0];
              v28 = v39[0].m128i_u8[0];
              if ( !v36 )
                break;
            }
          }
        }
        v5 = (_QWORD *)v5[4];
        if ( !v5 )
          goto LABEL_25;
      }
      (*(void (__fastcall **)(unsigned __int64, __int64, __int64, __int64, __int64))(v22 + 40))(v22, a2, v27, v30, v28);
    }
    else
    {
LABEL_25:
      *(_QWORD *)(v22 + 32) = v29;
      v5 = (_QWORD *)v22;
      *(_QWORD *)(a1 + 56) = v22;
    }
  }
  pthread_mutex_unlock(mutex);
  return v5;
}

