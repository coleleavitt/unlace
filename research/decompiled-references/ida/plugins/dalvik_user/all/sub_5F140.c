__int64 __fastcall sub_5F140(__int64 *a1)
{
  volatile signed __int32 *v1; // r12
  __int64 v2; // rbx
  volatile signed __int32 *v4; // r13
  volatile signed __int32 *v5; // rdx
  signed __int32 v6; // eax
  bool v7; // zf
  const char *v8; // rsi
  const char *v9; // rdi
  int v10; // ebp
  struct addrinfo *v11; // rdi
  volatile signed __int32 *v12; // rdx
  signed __int32 v13; // eax
  __int64 v15; // rax
  __int64 v16; // rdi
  struct addrinfo *ai[7]; // [rsp+0h] [rbp-38h] BYREF

  v1 = (volatile signed __int32 *)a1[1];
  v2 = *a1;
  ai[1] = (struct addrinfo *)__readfsqword(0x28u);
  if ( v1 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd(v1 + 2, 1u);
    else
      ++*((_DWORD *)v1 + 2);
    if ( a1 )
    {
      v4 = (volatile signed __int32 *)a1[1];
      if ( v4 )
      {
        v5 = v4 + 2;
        if ( *((_QWORD *)v4 + 1) == 0x100000001LL )
        {
          v15 = *(_QWORD *)v4;
          v16 = a1[1];
          *((_QWORD *)v4 + 1) = 0;
          (*(void (__fastcall **)(__int64, __int64, volatile signed __int32 *))(v15 + 16))(v16, 0x100000001LL, v5);
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 24LL))(v4);
        }
        else
        {
          if ( &_pthread_key_create )
          {
            v6 = _InterlockedExchangeAdd(v5, 0xFFFFFFFF);
          }
          else
          {
            v6 = *((_DWORD *)v4 + 2);
            *((_DWORD *)v4 + 2) = v6 - 1;
          }
          if ( v6 == 1 )
            sub_5F070(v4);
        }
      }
      operator delete(a1, 0x10u);
    }
  }
  else if ( a1 )
  {
    operator delete(a1, 0x10u);
  }
  v7 = *(_QWORD *)(v2 + 56) == 0;
  ai[0] = nullptr;
  v8 = nptr;
  if ( !v7 )
    v8 = *(const char **)(v2 + 48);
  v9 = nptr;
  if ( *(_QWORD *)(v2 + 32) )
    v9 = *(const char **)(v2 + 24);
  v10 = getaddrinfo(v9, v8, (const struct addrinfo *)(v2 + 72), ai);
  qmutex_lock();
  v11 = ai[0];
  if ( *(_BYTE *)(v2 + 124) )
  {
    if ( ai[0] )
    {
      freeaddrinfo(ai[0]);
      ai[0] = nullptr;
    }
  }
  else
  {
    *(_DWORD *)(v2 + 120) = v10;
    *(_QWORD *)v2 = v11;
  }
  qmutex_unlock();
  qsem_post();
  if ( v1 )
  {
    v12 = v1 + 2;
    if ( *((_QWORD *)v1 + 1) == 0x100000001LL )
    {
      *((_QWORD *)v1 + 1) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, const char *, volatile signed __int32 *))(*(_QWORD *)v1 + 16LL))(
        v1,
        v8,
        v12);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 24LL))(v1);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v13 = _InterlockedExchangeAdd(v12, 0xFFFFFFFF);
      }
      else
      {
        v13 = *((_DWORD *)v1 + 2);
        *((_DWORD *)v1 + 2) = v13 - 1;
      }
      if ( v13 == 1 )
        sub_5F070(v1);
    }
  }
  return 0;
}

