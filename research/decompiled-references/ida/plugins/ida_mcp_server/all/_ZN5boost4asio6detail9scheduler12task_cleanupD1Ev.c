// Alternative name is '_ZN5boost4asio6detail9scheduler12task_cleanupD2Ev'
void __fastcall boost::asio::detail::scheduler::task_cleanup::~task_cleanup(
        boost::asio::detail::scheduler::task_cleanup *this)
{
  _QWORD *v2; // rdx
  signed __int64 v3; // rax
  _BYTE *v4; // r12
  __int64 v5; // rdi
  int v6; // ebx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rsi
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx

  v2 = *((_QWORD **)this + 2);
  v3 = v2[16];
  if ( v3 > 0 )
  {
    _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)this + 224LL), v3);
    v2 = *((_QWORD **)this + 2);
  }
  v2[16] = 0;
  v4 = *((_BYTE **)this + 1);
  v5 = *(_QWORD *)v4;
  if ( *(_BYTE *)(*(_QWORD *)v4 + 52LL) && !v4[8] )
  {
    v6 = *(_DWORD *)(v5 + 48);
    if ( v6 )
    {
      while ( pthread_mutex_trylock((pthread_mutex_t *)(v5 + 8)) )
      {
        v5 = *(_QWORD *)v4;
        v6 -= v6 > 0;
        if ( !v6 )
          goto LABEL_18;
      }
      v4[8] = 1;
      v2 = *((_QWORD **)this + 2);
    }
    else
    {
LABEL_18:
      pthread_mutex_lock((pthread_mutex_t *)(v5 + 8));
      v4[8] = 1;
      v2 = *((_QWORD **)this + 2);
    }
  }
  v7 = *(_QWORD **)this;
  v8 = v2[14];
  *(_BYTE *)(*(_QWORD *)this + 216LL) = 1;
  if ( v8 )
  {
    v9 = (_QWORD *)v7[30];
    if ( v9 )
      *v9 = v8;
    else
      v7[29] = v8;
    v7[30] = v2[15];
    *((_OWORD *)v2 + 7) = 0;
  }
  v10 = (_QWORD *)v7[30];
  v11 = v7 + 24;
  v7[24] = 0;
  if ( v10 )
  {
    *v10 = v11;
    v7[30] = v11;
  }
  else
  {
    *(__m128i *)(v7 + 29) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)(unsigned __int64)v11);
  }
}

