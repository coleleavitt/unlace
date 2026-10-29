int __fastcall boost::asio::detail::scheduler::stop(boost::asio::detail::scheduler *this)
{
  char v2; // bp
  __int64 *v3; // rdi
  __int64 v4; // rax
  int result; // eax
  pthread_mutex_t *v6; // r14
  __int64 *v7; // rdi
  __int64 v8; // rax

  if ( *((_BYTE *)this + 108) )
  {
    v6 = (pthread_mutex_t *)((char *)this + 64);
    pthread_mutex_lock((pthread_mutex_t *)((char *)this + 64));
    v2 = *((_BYTE *)this + 108);
    *((_BYTE *)this + 217) = 1;
    if ( !v2 )
    {
      if ( !*((_BYTE *)this + 216) )
      {
        v7 = *((__int64 **)this + 22);
        if ( v7 )
        {
          v8 = *v7;
          *((_BYTE *)this + 216) = 1;
          (*(void (__fastcall **)(__int64 *))(v8 + 8))(v7);
        }
      }
      return pthread_mutex_unlock(v6);
    }
    *((_QWORD *)this + 21) |= 1uLL;
    pthread_cond_broadcast((pthread_cond_t *)((char *)this + 120));
    if ( *((_BYTE *)this + 216) )
      return pthread_mutex_unlock(v6);
    v3 = *((__int64 **)this + 22);
    if ( !v3 )
      return pthread_mutex_unlock(v6);
LABEL_4:
    v4 = *v3;
    *((_BYTE *)this + 216) = 1;
    result = (*(__int64 (__fastcall **)(__int64 *))(v4 + 8))(v3);
    v6 = (pthread_mutex_t *)((char *)this + 64);
    if ( !v2 )
      return result;
    return pthread_mutex_unlock(v6);
  }
  v2 = *((_BYTE *)this + 216);
  *((_BYTE *)this + 217) = 1;
  if ( !v2 )
  {
    v3 = *((__int64 **)this + 22);
    if ( v3 )
      goto LABEL_4;
  }
  return result;
}

