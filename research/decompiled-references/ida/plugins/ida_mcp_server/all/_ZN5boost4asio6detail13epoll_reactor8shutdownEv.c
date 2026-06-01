unsigned __int64 __fastcall boost::asio::detail::epoll_reactor::shutdown(boost::asio::detail::epoll_reactor *this)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  _QWORD *j; // rbx
  _QWORD *v13; // rbx
  _QWORD *v14; // rsi
  void (__fastcall *v15)(_QWORD, _QWORD *, __int128 *, _QWORD); // rax
  _QWORD *k; // rsi
  void (__fastcall *v17)(_QWORD, _QWORD *, __int128 *, _QWORD); // rax
  __int128 i; // [rsp+0h] [rbp-48h] BYREF
  __int128 v20; // [rsp+10h] [rbp-38h] BYREF
  __int64 v21; // [rsp+20h] [rbp-28h]
  unsigned __int64 v22; // [rsp+28h] [rbp-20h]

  v22 = __readfsqword(0x28u);
  if ( *((_BYTE *)this + 116) )
  {
    pthread_mutex_lock((pthread_mutex_t *)((char *)this + 72));
    *((_BYTE *)this + 144) = 1;
    if ( *((_BYTE *)this + 116) )
      pthread_mutex_unlock((pthread_mutex_t *)((char *)this + 72));
  }
  else
  {
    *((_BYTE *)this + 144) = 1;
  }
  v1 = *((_QWORD *)this + 27);
  for ( i = 0; v1; v1 = *((_QWORD *)this + 27) )
  {
    v11 = *(_QWORD *)(v1 + 112);
    if ( v11 )
    {
      if ( *((_QWORD *)&i + 1) )
        **((_QWORD **)&i + 1) = v11;
      else
        *(_QWORD *)&i = *(_QWORD *)(v1 + 112);
      v2 = *(_QWORD *)(v1 + 120);
      *(_OWORD *)(v1 + 112) = 0;
      *((_QWORD *)&i + 1) = v2;
    }
    v3 = *(_QWORD *)(v1 + 128);
    if ( v3 )
    {
      if ( *((_QWORD *)&i + 1) )
        **((_QWORD **)&i + 1) = v3;
      else
        *(_QWORD *)&i = *(_QWORD *)(v1 + 128);
      v4 = *(_QWORD *)(v1 + 136);
      *(_OWORD *)(v1 + 128) = 0;
      *((_QWORD *)&i + 1) = v4;
    }
    v5 = *(_QWORD *)(v1 + 144);
    if ( v5 )
    {
      if ( *((_QWORD *)&i + 1) )
        **((_QWORD **)&i + 1) = v5;
      else
        *(_QWORD *)&i = *(_QWORD *)(v1 + 144);
      v6 = *(_QWORD *)(v1 + 152);
      *(_OWORD *)(v1 + 144) = 0;
      *((_QWORD *)&i + 1) = v6;
    }
    v7 = *(_QWORD *)(v1 + 24);
    *(_BYTE *)(v1 + 163) = 1;
    *((_QWORD *)this + 27) = v7;
    v8 = *(_QWORD *)(v1 + 32);
    if ( v8 )
      *(_QWORD *)(v8 + 24) = v7;
    v9 = *(_QWORD *)(v1 + 24);
    if ( v9 )
      *(_QWORD *)(v9 + 32) = *(_QWORD *)(v1 + 32);
    v10 = *((_QWORD *)this + 28);
    *(_QWORD *)(v1 + 32) = 0;
    *(_QWORD *)(v1 + 24) = v10;
    *((_QWORD *)this + 28) = v1;
  }
  for ( j = *((_QWORD **)this + 17); j; j = (_QWORD *)j[1] )
    (*(void (__fastcall **)(_QWORD *, __int128 *))(*j + 48LL))(j, &i);
  v13 = (_QWORD *)i;
  if ( (_QWORD)i )
  {
    i = 0;
    do
    {
      v14 = v13;
      v13 = (_QWORD *)*v13;
      *v14 = 0;
      v15 = (void (__fastcall *)(_QWORD, _QWORD *, __int128 *, _QWORD))v14[1];
      v21 = 0;
      v20 = 0;
      v15(0, v14, &v20, 0);
    }
    while ( v13 );
    for ( k = (_QWORD *)i; (_QWORD)i; k = (_QWORD *)i )
    {
      *(_QWORD *)&i = *k;
      if ( (_QWORD)i )
      {
        *k = 0;
        v17 = (void (__fastcall *)(_QWORD, _QWORD *, __int128 *, _QWORD))k[1];
      }
      else
      {
        i = 0u;
        v17 = (void (__fastcall *)(_QWORD, _QWORD *, __int128 *, _QWORD))k[1];
        *k = 0;
      }
      v20 = 0;
      v21 = 0;
      v17(0, k, &v20, 0);
    }
  }
  return v22 - __readfsqword(0x28u);
}

