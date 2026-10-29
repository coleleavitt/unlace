int __fastcall boost::asio::execution::detail::any_executor_base::destroy_object<boost::asio::io_context::basic_executor_type<std::allocator<void>,4ul>>(
        __int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  char v3; // r14
  __int64 *v4; // rdi
  __int64 v5; // rax
  pthread_mutex_t *v6; // rbp
  char v7; // al
  __int64 *v8; // rdi
  __int64 v9; // rax

  v1 = *a1;
  if ( (unsigned __int64)*a1 > 3 )
  {
    v1 &= 0xFFFFFFFFFFFFFFFCLL;
    v2 = *(_QWORD *)(v1 + 16);
    if ( !_InterlockedSub64((volatile signed __int64 *)(v2 + 224), 1u) )
    {
      if ( !*(_BYTE *)(v2 + 108) )
      {
        LODWORD(v1) = *(unsigned __int8 *)(v2 + 216);
        *(_BYTE *)(v2 + 217) = 1;
        v3 = v1;
        if ( (_BYTE)v1 )
          return v1;
        v4 = *(__int64 **)(v2 + 176);
        if ( !v4 )
          return v1;
        goto LABEL_7;
      }
      v6 = (pthread_mutex_t *)(v2 + 64);
      pthread_mutex_lock((pthread_mutex_t *)(v2 + 64));
      v7 = *(_BYTE *)(v2 + 108);
      *(_BYTE *)(v2 + 217) = 1;
      v3 = v7;
      if ( v7 )
      {
        *(_QWORD *)(v2 + 168) |= 1uLL;
        pthread_cond_broadcast((pthread_cond_t *)(v2 + 120));
        if ( !*(_BYTE *)(v2 + 216) )
        {
          v4 = *(__int64 **)(v2 + 176);
          if ( v4 )
          {
LABEL_7:
            v5 = *v4;
            *(_BYTE *)(v2 + 216) = 1;
            LODWORD(v1) = (*(__int64 (__fastcall **)(__int64 *))(v5 + 8))(v4);
            v6 = (pthread_mutex_t *)(v2 + 64);
            if ( !v3 )
              return v1;
          }
        }
      }
      else if ( !*(_BYTE *)(v2 + 216) )
      {
        v8 = *(__int64 **)(v2 + 176);
        if ( v8 )
        {
          v9 = *v8;
          *(_BYTE *)(v2 + 216) = 1;
          (*(void (__fastcall **)(__int64 *))(v9 + 8))(v8);
        }
      }
      LODWORD(v1) = pthread_mutex_unlock(v6);
    }
  }
  return v1;
}

