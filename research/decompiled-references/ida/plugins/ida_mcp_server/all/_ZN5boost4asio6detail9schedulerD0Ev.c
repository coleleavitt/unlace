void __fastcall boost::asio::detail::scheduler::~scheduler(boost::asio::detail::scheduler *this)
{
  pthread_mutex_t *v2; // r12
  pthread_cond_t *v3; // r13
  char v4; // bp
  __int64 v5; // rax
  __int64 *i; // rsi
  void (__fastcall *v7)(_QWORD, __int64 *, __int128 *, _QWORD); // rax
  __int64 v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 *v11; // rdi
  __int64 v12; // rax
  __int128 v13; // [rsp+0h] [rbp-48h] BYREF
  __int64 v14; // [rsp+10h] [rbp-38h]
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  *(_QWORD *)this = off_444730;
  v2 = (pthread_mutex_t *)((char *)this + 64);
  v3 = (pthread_cond_t *)((char *)this + 120);
  if ( !*((_QWORD *)this + 33) )
    goto LABEL_7;
  if ( *((_BYTE *)this + 108) )
  {
    v2 = (pthread_mutex_t *)((char *)this + 64);
    pthread_mutex_lock((pthread_mutex_t *)((char *)this + 64));
    v4 = *((_BYTE *)this + 108);
    *(_WORD *)((char *)this + 217) = 257;
    if ( !v4 )
    {
      v3 = (pthread_cond_t *)((char *)this + 120);
      if ( !*((_BYTE *)this + 216) )
      {
        v11 = *((__int64 **)this + 22);
        if ( v11 )
        {
          v12 = *v11;
          *((_BYTE *)this + 216) = 1;
          (*(void (__fastcall **)(__int64 *))(v12 + 8))(v11);
        }
      }
      goto LABEL_18;
    }
    *((_QWORD *)this + 21) |= 1uLL;
    v3 = (pthread_cond_t *)((char *)this + 120);
    pthread_cond_broadcast((pthread_cond_t *)((char *)this + 120));
    if ( *((_BYTE *)this + 216) || (v9 = *((__int64 **)this + 22)) == nullptr )
    {
LABEL_18:
      if ( *((_BYTE *)this + 108) )
        pthread_mutex_unlock(v2);
      goto LABEL_5;
    }
LABEL_17:
    v10 = *v9;
    *((_BYTE *)this + 216) = 1;
    (*(void (__fastcall **)(__int64 *))(v10 + 8))(v9);
    if ( !v4 )
      goto LABEL_5;
    goto LABEL_18;
  }
  v4 = *((_BYTE *)this + 216);
  *(_WORD *)((char *)this + 217) = 257;
  if ( v4 )
  {
    v2 = (pthread_mutex_t *)((char *)this + 64);
    v3 = (pthread_cond_t *)((char *)this + 120);
    goto LABEL_5;
  }
  v9 = *((__int64 **)this + 22);
  v2 = (pthread_mutex_t *)((char *)this + 64);
  v3 = (pthread_cond_t *)((char *)this + 120);
  if ( v9 )
    goto LABEL_17;
LABEL_5:
  v5 = *((_QWORD *)this + 33);
  if ( v5 )
  {
    pthread_join(*(_QWORD *)(v5 + 8), nullptr);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 24LL))(*((_QWORD *)this + 33));
  }
LABEL_7:
  for ( i = *((__int64 **)this + 29); i; i = *((__int64 **)this + 29) )
  {
    v8 = *i;
    *((_QWORD *)this + 29) = *i;
    if ( v8 )
    {
      *i = 0;
      v7 = (void (__fastcall *)(_QWORD, __int64 *, __int128 *, _QWORD))i[1];
    }
    else
    {
      v7 = (void (__fastcall *)(_QWORD, __int64 *, __int128 *, _QWORD))i[1];
      *((_QWORD *)this + 30) = 0;
      *i = 0;
    }
    v13 = 0;
    v14 = 0;
    v7(0, i, &v13, 0);
  }
  pthread_cond_destroy(v3);
  pthread_mutex_destroy(v2);
  operator delete(this, 0x110u);
}

