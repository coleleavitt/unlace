unsigned __int64 __fastcall boost::asio::detail::scheduler::shutdown(boost::asio::detail::scheduler *this)
{
  char v1; // bp
  __int64 v3; // rax
  char *v4; // rbp
  char *v5; // rax
  char *v6; // rsi
  void (__fastcall *v7)(_QWORD, char *, __int128 *, _QWORD); // rax
  char v9; // al
  __int64 *v10; // rdi
  __int64 v11; // rax
  __int128 v12; // [rsp+0h] [rbp-38h] BYREF
  __int64 v13; // [rsp+10h] [rbp-28h]
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v1 = *((_BYTE *)this + 108);
  v14 = __readfsqword(0x28u);
  if ( v1 )
  {
    pthread_mutex_lock((pthread_mutex_t *)((char *)this + 64));
    *((_BYTE *)this + 218) = 1;
    if ( !*((_QWORD *)this + 33) )
      goto LABEL_19;
    v9 = *((_BYTE *)this + 108);
    *((_BYTE *)this + 217) = 1;
    if ( v9 )
    {
      *((_QWORD *)this + 21) |= 1uLL;
      v1 = v9;
      pthread_cond_broadcast((pthread_cond_t *)((char *)this + 120));
      if ( *((_BYTE *)this + 216) )
        goto LABEL_18;
    }
    else if ( *((_BYTE *)this + 216) )
    {
      goto LABEL_19;
    }
LABEL_16:
    v10 = *((__int64 **)this + 22);
    if ( v10 )
    {
      v11 = *v10;
      *((_BYTE *)this + 216) = 1;
      (*(void (__fastcall **)(__int64 *))(v11 + 8))(v10);
    }
LABEL_18:
    if ( !v1 )
    {
LABEL_4:
      v3 = *((_QWORD *)this + 33);
      if ( v3 )
      {
        pthread_join(*(_QWORD *)(v3 + 8), nullptr);
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 24LL))(*((_QWORD *)this + 33));
        *((_QWORD *)this + 33) = 0;
      }
      goto LABEL_6;
    }
LABEL_19:
    if ( *((_BYTE *)this + 108) )
      pthread_mutex_unlock((pthread_mutex_t *)((char *)this + 64));
    goto LABEL_4;
  }
  *((_BYTE *)this + 218) = 1;
  if ( *((_QWORD *)this + 33) )
  {
    v1 = *((_BYTE *)this + 216);
    *((_BYTE *)this + 217) = 1;
    if ( v1 )
      goto LABEL_4;
    goto LABEL_16;
  }
LABEL_6:
  v4 = (char *)this + 192;
  while ( 2 )
  {
    v5 = *((char **)this + 29);
    if ( v5 )
    {
      while ( 1 )
      {
        v6 = v5;
        v5 = *(char **)v5;
        *((_QWORD *)this + 29) = v5;
        if ( !v5 )
          break;
        *(_QWORD *)v6 = 0;
        if ( v6 != v4 )
          goto LABEL_10;
      }
      *((_QWORD *)this + 30) = 0;
      *(_QWORD *)v6 = 0;
      if ( v6 != v4 )
      {
LABEL_10:
        v7 = *((void (__fastcall **)(_QWORD, char *, __int128 *, _QWORD))v6 + 1);
        v13 = 0;
        v12 = 0;
        v7(0, v6, &v12, 0);
        continue;
      }
    }
    break;
  }
  *((_QWORD *)this + 22) = 0;
  return v14 - __readfsqword(0x28u);
}

