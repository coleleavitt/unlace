// Alternative name is '_ZN5boost4asio6detail9scheduler12work_cleanupD2Ev'
void __fastcall boost::asio::detail::scheduler::work_cleanup::~work_cleanup(
        boost::asio::detail::scheduler::work_cleanup *this)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  _BYTE *v5; // r12
  __int64 v6; // rdi
  __int64 v7; // rcx
  _QWORD *v8; // rsi
  volatile signed __int64 *v9; // rdi
  int v10; // ebx

  v2 = *((_QWORD **)this + 2);
  v3 = v2[16];
  if ( v3 > 1 )
  {
    _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)this + 224LL), v3 - 1);
    v2 = *((_QWORD **)this + 2);
  }
  else if ( v3 != 1 )
  {
    v9 = *(volatile signed __int64 **)this;
    if ( !_InterlockedSub64(v9 + 28, 1u) )
      boost::asio::detail::scheduler::stop((boost::asio::detail::scheduler *)v9);
    v2 = *((_QWORD **)this + 2);
  }
  v2[16] = 0;
  v4 = v2[14];
  if ( v4 )
  {
    v5 = *((_BYTE **)this + 1);
    v6 = *(_QWORD *)v5;
    if ( !*(_BYTE *)(*(_QWORD *)v5 + 52LL) || v5[8] )
      goto LABEL_5;
    v10 = *(_DWORD *)(v6 + 48);
    if ( v10 )
    {
      while ( pthread_mutex_trylock((pthread_mutex_t *)(v6 + 8)) )
      {
        v6 = *(_QWORD *)v5;
        v10 -= v10 > 0;
        if ( !v10 )
          goto LABEL_21;
      }
    }
    else
    {
LABEL_21:
      pthread_mutex_lock((pthread_mutex_t *)(v6 + 8));
    }
    v2 = *((_QWORD **)this + 2);
    v5[8] = 1;
    v4 = v2[14];
    if ( v4 )
    {
LABEL_5:
      v7 = *(_QWORD *)this;
      v8 = *(_QWORD **)(*(_QWORD *)this + 240LL);
      if ( v8 )
        *v8 = v4;
      else
        *(_QWORD *)(v7 + 232) = v4;
      *(_QWORD *)(v7 + 240) = v2[15];
      *((_OWORD *)v2 + 7) = 0;
    }
  }
}

