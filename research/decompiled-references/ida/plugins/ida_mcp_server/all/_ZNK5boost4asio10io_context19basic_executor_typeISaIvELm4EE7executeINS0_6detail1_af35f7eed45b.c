int __fastcall boost::asio::io_context::basic_executor_type<std::allocator<void>,4ul>::execute<boost::asio::detail::executor_function>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 v3; // rbp
  _QWORD *addr; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  void (__fastcall **v7)(_QWORD, __int64); // rax
  __int64 *v8; // rax
  _BYTE *v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rax
  __m128i v14; // xmm0
  void (__fastcall **v15)(_QWORD, __int64); // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  _QWORD **v18; // rax
  _QWORD *v19; // rax
  __m128i *v20; // rax
  __int64 *v21; // rdx
  __int64 v22; // rax
  char v23; // r12
  __int64 *v24; // rax
  __int64 *v25; // rdi
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __m128i v29; // [rsp+0h] [rbp-58h] BYREF
  char *v30; // [rsp+18h] [rbp-40h]
  _QWORD *v31; // [rsp+20h] [rbp-38h]
  __m128i v32; // [rsp+28h] [rbp-30h]
  unsigned __int64 v33; // [rsp+38h] [rbp-20h]

  v3 = *a1;
  v33 = __readfsqword(0x28u);
  addr = (_QWORD *)__tls_get_addr();
  v5 = (_QWORD *)*addr;
  if ( (v3 & 1) == 0 )
  {
    if ( v5 )
    {
      v6 = (_QWORD *)*addr;
      while ( *(_QWORD *)((v3 & 0xFFFFFFFFFFFFFFFCLL) + 16) != *v6 )
      {
        v6 = (_QWORD *)v6[2];
        if ( !v6 )
          goto LABEL_44;
      }
      if ( !v6[1] )
      {
LABEL_44:
        v31 = a1;
        goto LABEL_11;
      }
      v7 = *a2;
      *a2 = nullptr;
      if ( v7 )
        (*v7)(v7, 1);
      return v33 - __readfsqword(0x28u);
    }
    v31 = a1;
    goto LABEL_21;
  }
  v31 = a1;
  if ( !v5 )
  {
LABEL_21:
    v13 = aligned_alloc();
    v10 = v13;
    if ( !v13 )
    {
      v30 = (char *)&`vtable for'std::bad_alloc + 16;
      boost::throw_exception<std::bad_alloc>(16);
    }
    *(_BYTE *)(v13 + 40) = 10;
    goto LABEL_23;
  }
LABEL_11:
  v8 = (__int64 *)v5[1];
  if ( !v8 )
    goto LABEL_21;
  v9 = (_BYTE *)*v8;
  if ( *v8 )
  {
    if ( *v9 <= 9u || ((unsigned __int8)v9 & 7) != 0 )
    {
      v10 = v8[1];
      if ( v10 )
      {
        if ( *(_BYTE *)v10 > 9u )
        {
          v11 = 1;
          if ( (v10 & 7) == 0 )
            goto LABEL_18;
        }
      }
      v12 = 0;
      goto LABEL_20;
    }
    v10 = *v8;
    v11 = 0;
  }
  else
  {
    v9 = (_BYTE *)v8[1];
    if ( !v9 )
      goto LABEL_21;
    if ( *v9 <= 9u || ((unsigned __int8)v9 & 7) != 0 )
    {
      v12 = 1;
LABEL_20:
      v8[v12] = 0;
      free(v9);
      goto LABEL_21;
    }
    v10 = v8[1];
    v11 = 1;
  }
LABEL_18:
  v8[v11] = 0;
  *(_BYTE *)(v10 + 40) = *(_BYTE *)v10;
LABEL_23:
  *(_QWORD *)v10 = 0;
  v14 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, (__m128i)(unsigned __int64)v10);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 8) = boost::asio::detail::executor_op<boost::asio::detail::executor_function,std::allocator<void>,boost::asio::detail::scheduler_operation>::do_complete;
  v15 = *a2;
  v32 = v14;
  *(_QWORD *)(v10 + 24) = v15;
  v16 = *a1;
  *a2 = nullptr;
  v17 = *(_QWORD *)((v16 & 0xFFFFFFFFFFFFFFFCLL) + 16);
  if ( (v16 & 2) != 0 || *(_BYTE *)(v17 + 48) )
  {
    v29 = v14;
    v18 = (_QWORD **)__tls_get_addr();
    v14 = _mm_load_si128(&v29);
    v19 = *v18;
    if ( v19 )
    {
      while ( v17 != *v19 )
      {
        v19 = (_QWORD *)v19[2];
        if ( !v19 )
          goto LABEL_33;
      }
      v20 = (__m128i *)v19[1];
      if ( v20 )
      {
        v21 = (__int64 *)v20[7].m128i_i64[1];
        ++v20[8].m128i_i64[0];
        *(_QWORD *)v10 = 0;
        if ( v21 )
        {
          *v21 = v10;
          v20[7].m128i_i64[1] = v10;
        }
        else
        {
          v20[7] = v14;
        }
        return v33 - __readfsqword(0x28u);
      }
    }
  }
LABEL_33:
  _InterlockedAdd64((volatile signed __int64 *)(v17 + 224), 1u);
  v23 = *(_BYTE *)(v17 + 108);
  if ( v23 )
  {
    v29 = v14;
    pthread_mutex_lock((pthread_mutex_t *)(v17 + 64));
    v14 = _mm_load_si128(&v29);
  }
  v24 = *(__int64 **)(v17 + 240);
  *(_QWORD *)v10 = 0;
  if ( v24 )
  {
    *v24 = v10;
    *(_QWORD *)(v17 + 240) = v10;
  }
  else
  {
    *(__m128i *)(v17 + 232) = v14;
  }
  if ( !*(_QWORD *)(v17 + 256)
    || !*(_BYTE *)(v17 + 108)
    || (v27 = *(_QWORD *)(v17 + 168), *(_QWORD *)(v17 + 168) = v27 | 1, v27 <= 1) )
  {
    if ( !*(_BYTE *)(v17 + 216) )
    {
      v25 = *(__int64 **)(v17 + 176);
      if ( v25 )
      {
        v26 = *v25;
        *(_BYTE *)(v17 + 216) = 1;
        (*(void (__fastcall **)(__int64 *))(v26 + 8))(v25);
      }
    }
    if ( v23 && *(_BYTE *)(v17 + 108) )
    {
      LODWORD(v22) = pthread_mutex_unlock((pthread_mutex_t *)(v17 + 64));
      return v22;
    }
    return v33 - __readfsqword(0x28u);
  }
  if ( v23 )
    pthread_mutex_unlock((pthread_mutex_t *)(v17 + 64));
  LODWORD(v22) = pthread_cond_signal((pthread_cond_t *)(v17 + 120));
  return v22;
}

