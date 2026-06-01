// Alternative name is '_ZN5boost4asio6detail9schedulerD2Ev'
void __fastcall boost::asio::detail::scheduler::~scheduler(boost::asio::detail::scheduler *this)
{
  char v2; // bp
  __int64 *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 *i; // rsi
  void (__fastcall *v7)(_QWORD, __int64 *, __int128 *, _QWORD); // rax
  __int64 v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rax
  __int128 v11; // [rsp+0h] [rbp-38h] BYREF
  __int64 v12; // [rsp+10h] [rbp-28h]
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  *(_QWORD *)this = off_444730;
  if ( !*((_QWORD *)this + 33) )
    goto LABEL_10;
  if ( *((_BYTE *)this + 108) )
  {
    pthread_mutex_lock((pthread_mutex_t *)((char *)this + 64));
    v2 = *((_BYTE *)this + 108);
    *(_WORD *)((char *)this + 217) = 257;
    if ( !v2 )
    {
      if ( !*((_BYTE *)this + 216) )
      {
        v9 = *((__int64 **)this + 22);
        if ( v9 )
        {
          v10 = *v9;
          *((_BYTE *)this + 216) = 1;
          (*(void (__fastcall **)(__int64 *))(v10 + 8))(v9);
        }
      }
      goto LABEL_6;
    }
    *((_QWORD *)this + 21) |= 1uLL;
    pthread_cond_broadcast((pthread_cond_t *)((char *)this + 120));
    if ( *((_BYTE *)this + 216) || (v3 = *((__int64 **)this + 22)) == nullptr )
    {
LABEL_6:
      if ( *((_BYTE *)this + 108) )
        pthread_mutex_unlock((pthread_mutex_t *)((char *)this + 64));
      goto LABEL_8;
    }
  }
  else
  {
    v2 = *((_BYTE *)this + 216);
    *(_WORD *)((char *)this + 217) = 257;
    if ( v2 )
      goto LABEL_8;
    v3 = *((__int64 **)this + 22);
    if ( !v3 )
      goto LABEL_8;
  }
  v4 = *v3;
  *((_BYTE *)this + 216) = 1;
  (*(void (__fastcall **)(__int64 *))(v4 + 8))(v3);
  if ( v2 )
    goto LABEL_6;
LABEL_8:
  v5 = *((_QWORD *)this + 33);
  if ( v5 )
  {
    pthread_join(*(_QWORD *)(v5 + 8), nullptr);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 24LL))(*((_QWORD *)this + 33));
  }
LABEL_10:
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
    v11 = 0;
    v12 = 0;
    v7(0, i, &v11, 0);
  }
  pthread_cond_destroy((pthread_cond_t *)((char *)this + 120));
  pthread_mutex_destroy((pthread_mutex_t *)((char *)this + 64));
}

