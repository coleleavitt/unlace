__int64 __fastcall sub_27F80(__int64 a1, __int64 a2)
{
  const char *v2; // r15
  unsigned __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rbx
  size_t v7; // r12
  void *v8; // rax
  size_t v9; // rax
  size_t v10; // r15
  size_t v11; // r12
  void *v12; // rax
  __m128i si128; // xmm0
  __m128i v14; // xmm0
  _QWORD *v15; // r13
  __int64 v16; // rsi
  unsigned int v17; // r15d
  unsigned __int8 (__fastcall *v18)(char *, __int64); // r13
  unsigned int v19; // r15d
  signed __int32 v20; // eax
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // r12
  int v25; // eax
  int (__fastcall *v26)(__int64, int); // rax
  __int64 v27; // rdi
  __int64 v28; // rax
  volatile signed __int32 *v29; // rax
  volatile signed __int32 *v30; // rdi
  volatile signed __int32 *v31; // rdx
  signed __int32 v32; // eax
  __int64 v33; // rax
  size_t v34; // r12
  size_t v35; // rdx
  char *v36; // rsi
  unsigned __int64 v37; // rdx
  size_t v38; // r8
  __int64 v39; // r12
  size_t v40; // r9
  __int64 v41; // r12
  unsigned __int64 v42; // rdx
  __int64 v43; // rsi
  const char *v44; // rcx
  const char *v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // r12
  __int64 v48; // [rsp-10h] [rbp-580h]
  struct addrinfo *ai; // [rsp+0h] [rbp-570h]
  struct addrinfo *aia; // [rsp+0h] [rbp-570h]
  unsigned __int64 v51; // [rsp+8h] [rbp-568h]
  size_t v52; // [rsp+8h] [rbp-568h]
  unsigned __int64 v53; // [rsp+10h] [rbp-560h]
  unsigned __int64 v54; // [rsp+10h] [rbp-560h]
  char *serv; // [rsp+28h] [rbp-548h]
  char *serva; // [rsp+28h] [rbp-548h]
  const char *v58; // [rsp+40h] [rbp-530h] BYREF
  __int128 v59; // [rsp+48h] [rbp-528h]
  char *v60; // [rsp+60h] [rbp-510h]
  __int128 v61; // [rsp+68h] [rbp-508h]
  __int64 v62; // [rsp+80h] [rbp-4F0h] BYREF
  __int128 v63; // [rsp+88h] [rbp-4E8h]
  __m128i v64[3]; // [rsp+A0h] [rbp-4D0h] BYREF
  char s[48]; // [rsp+D0h] [rbp-4A0h] BYREF
  char v66[48]; // [rsp+100h] [rbp-470h] BYREF
  char host[1022]; // [rsp+130h] [rbp-440h] BYREF
  _BYTE v68[10]; // [rsp+52Eh] [rbp-42h] BYREF
  unsigned __int64 v69; // [rsp+538h] [rbp-38h]

  v2 = ::s;
  v69 = __readfsqword(0x28u);
  signal(13, (__sighandler_t)((char *)&dword_0 + 1));
  v4 = *(_QWORD *)(a2 + 96);
  v5 = a2 + 8;
  v64[0].m128i_i32[0] = 2;
  *(__m128i *)((char *)v64 + 4) = 0;
  if ( v4 >= 2 )
    v5 = a2 + 88;
  memset((char *)v64[1].m128i_i64 + 4, 0, 28);
  v51 = v4;
  v64[0].m128i_i32[2] = 1;
  qsnprintf();
  if ( *(_QWORD *)(v5 + 8) )
    v2 = *(const char **)v5;
  v6 = operator new(0x90u);
  *(_QWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 8) = 0x100000001LL;
  *(_QWORD *)v6 = off_39180;
  *(_QWORD *)(v6 + 40) = 0;
  *(_OWORD *)(v6 + 48) = 0;
  if ( v2 )
  {
    v7 = strlen(v2);
    v8 = (void *)qvector_reserve();
    *(_QWORD *)(v6 + 40) = v8;
    *(_QWORD *)(v6 + 48) = v7 + 1;
    memmove(v8, v2, v7);
    *(_BYTE *)(*(_QWORD *)(v6 + 40) + v7) = 0;
  }
  *(_QWORD *)(v6 + 64) = 0;
  *(_OWORD *)(v6 + 72) = 0;
  v9 = strlen(s);
  v10 = v9 + 1;
  v11 = v9;
  v12 = (void *)qvector_reserve();
  *(_QWORD *)(v6 + 64) = v12;
  *(_QWORD *)(v6 + 72) = v10;
  memmove(v12, s, v11);
  *(_BYTE *)(*(_QWORD *)(v6 + 64) + v11) = 0;
  si128 = _mm_load_si128(v64);
  *(_DWORD *)(v6 + 136) = 0;
  *(__m128i *)(v6 + 88) = si128;
  v14 = _mm_load_si128(&v64[1]);
  *(_BYTE *)(v6 + 140) = 0;
  *(__m128i *)(v6 + 104) = v14;
  *(__m128i *)(v6 + 120) = _mm_load_si128(&v64[2]);
  *(_QWORD *)(v6 + 24) = qmutex_create();
  *(_QWORD *)(v6 + 32) = qsem_create();
  v15 = (_QWORD *)operator new(0x10u);
  v15[1] = v6;
  *v15 = v6 + 16;
  if ( v6 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
    else
      ++*(_DWORD *)(v6 + 8);
  }
  v16 = (__int64)v15;
  if ( !qthread_create() )
  {
    *(_QWORD *)(a1 + 88) = "qthread_create";
    *(_DWORD *)(a1 + 96) = *__errno_location();
    if ( v15 )
    {
      v29 = (volatile signed __int32 *)v15[1];
      v30 = v29;
      if ( v29 )
      {
        v31 = v29 + 2;
        if ( *((_QWORD *)v29 + 1) == 0x100000001LL )
        {
          v33 = *(_QWORD *)v29;
          *((_QWORD *)v30 + 1) = 0;
          (*(void (__fastcall **)(volatile signed __int32 *, _QWORD *, volatile signed __int32 *))(v33 + 16))(
            v30,
            v15,
            v31);
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 24LL))(v30);
        }
        else
        {
          if ( &_pthread_key_create )
          {
            v32 = _InterlockedExchangeAdd(v31, 0xFFFFFFFF);
          }
          else
          {
            v32 = *((_DWORD *)v29 + 2);
            *((_DWORD *)v30 + 2) = v32 - 1;
          }
          if ( v32 == 1 )
            sub_27B60(v30);
        }
      }
      v16 = 16;
      operator delete(v15, 0x10u);
    }
    goto LABEL_15;
  }
  v17 = *(_DWORD *)(a2 + 184);
  v18 = *(unsigned __int8 (__fastcall **)(char *, __int64))(a2 + 168);
  v16 = v17;
  serv = *(char **)(a2 + 176);
  if ( !(unsigned __int8)qsem_wait() )
  {
    if ( v18 )
    {
      while ( !v18(serv, v16) )
      {
        v16 = v17;
        if ( (unsigned __int8)qsem_wait() )
          goto LABEL_25;
      }
    }
    qmutex_lock();
    *(_BYTE *)(v6 + 140) = 1;
    qmutex_unlock();
    qthread_free();
    *(_QWORD *)(a1 + 88) = "getaddrinfo";
    *(_DWORD *)(a1 + 96) = v18 == nullptr ? 62 : 125;
LABEL_15:
    v19 = 0;
    goto LABEL_16;
  }
LABEL_25:
  qthread_join();
  v16 = *(_QWORD *)(v6 + 16);
  v22 = *(_DWORD *)(v6 + 136);
  *(_QWORD *)(v6 + 16) = 0;
  *(_DWORD *)(a1 + 96) = v22;
  ai = (struct addrinfo *)v16;
  if ( v22 )
  {
    if ( v22 == -11 )
    {
      *(_QWORD *)(a1 + 88) = "getaddrinfo";
      *(_DWORD *)(a1 + 96) = *__errno_location();
    }
    else
    {
      *(_QWORD *)(a1 + 88) = "gai_strerror";
    }
    goto LABEL_15;
  }
  v23 = v16;
  v24 = v16;
  v16 = a2 + 168;
  if ( !v23 )
  {
    freeaddrinfo(nullptr);
    goto LABEL_15;
  }
  while ( 1 )
  {
    v25 = getnameinfo(*(const struct sockaddr **)(v24 + 24), *(_DWORD *)(v24 + 16), host, 0x2Fu, v66, 0x21u, 3);
    v16 = v48;
    if ( !v25 )
      break;
    *(_QWORD *)(a1 + 88) = "getnameinfo";
    *(_DWORD *)(a1 + 96) = *__errno_location();
LABEL_29:
    v24 = *(_QWORD *)(v24 + 40);
    if ( !v24 )
    {
      freeaddrinfo(ai);
      goto LABEL_15;
    }
  }
  v16 = *(unsigned int *)(v24 + 4);
  if ( !(unsigned __int8)sub_27490(a1, v16, *(_DWORD *)(v24 + 8), *(_DWORD *)(v24 + 12)) )
    goto LABEL_29;
  v16 = v24;
  v19 = sub_27900(a1, v24, a2 + 168);
  if ( !(_BYTE)v19 )
  {
    v16 = (__int64)sub_26C60;
    v26 = *(int (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 72LL);
    if ( v26 == sub_26C60 )
    {
      v27 = *(_QWORD *)(a1 + 56);
      if ( v27 != -1 )
      {
        close(v27);
        *(_QWORD *)(a1 + 56) = -1;
      }
    }
    else
    {
      v16 = 0xFFFFFFFFLL;
      v26(a1, -1);
    }
    goto LABEL_29;
  }
  freeaddrinfo(ai);
  if ( v51 > 1 )
  {
    v58 = nullptr;
    v59 = 0;
    sub_E3C0((__int64 *)&v58);
    v34 = *(_QWORD *)(a2 + 128);
    if ( v34 > 1 )
    {
      v60 = nullptr;
      v61 = 0;
      v60 = (char *)qalloc_or_throw();
      *((_QWORD *)&v61 + 1) = v34;
      memcpy(v60, *(const void **)(a2 + 120), v34);
      *(_QWORD *)&v61 = v34;
      v35 = v34 + 1;
      v36 = v60;
      if ( *((_QWORD *)&v61 + 1) < v34 + 1 )
      {
        v60 = (char *)qvector_reserve();
        v35 = v34 + 1;
        v36 = v60;
      }
      *(_QWORD *)&v61 = v35;
      v36[v34 - 1] = 58;
      v60[v34] = 0;
      v37 = *(_QWORD *)(a2 + 152);
      if ( v37 )
      {
        v38 = v37 - 1;
        if ( v37 != 1 )
        {
          v39 = v61;
          v40 = v37 - 1;
          if ( (_QWORD)v61 )
          {
            v39 = v61 - 1;
            v40 = v38 + v61 - 1;
            v37 += v61 - 1;
          }
          if ( *((_QWORD *)&v61 + 1) < v37 )
          {
            aia = (struct addrinfo *)v38;
            v52 = v40;
            v54 = v37;
            v60 = (char *)qvector_reserve();
            v38 = (size_t)aia;
            v40 = v52;
            v37 = v54;
          }
          *(_QWORD *)&v61 = v37;
          v60[v40] = 0;
          memcpy(&v60[v39], *(const void **)(a2 + 144), v38);
        }
      }
      v62 = 0;
      v63 = 0;
      base64_encode();
      sub_1D800((__int64 *)&v58);
      if ( v62 )
      {
        *(_QWORD *)&v63 = 0;
        qfree();
      }
      if ( v60 )
      {
        *(_QWORD *)&v61 = 0;
        qfree();
      }
    }
    v41 = v59;
    v42 = 2;
    if ( (_QWORD)v59 )
    {
      v42 = v59 + 1;
      v41 = v59 - 1;
    }
    v43 = (__int64)v58;
    if ( *((_QWORD *)&v59 + 1) < v42 )
    {
      v53 = v42;
      v58 = (const char *)qvector_reserve();
      v42 = v53;
      v43 = (__int64)v58;
    }
    *(_QWORD *)&v59 = v42;
    *(_BYTE *)(v43 + v41) = 10;
    v58[v41 + 1] = 0;
    if ( (*(_DWORD *)debug & 0x100000) != 0 )
    {
      v44 = ::s;
      if ( (_QWORD)v59 )
        v44 = v58;
      v45 = ::s;
      if ( *(_QWORD *)(a2 + 96) )
        v45 = *(const char **)(a2 + 88);
      sub_BC00(
        (__int64)"Attempting HTTP CONNECT through proxy (%s:%d), by sending:\n---\n%s\n---\n",
        v45,
        *(unsigned __int16 *)(a2 + 112),
        v44);
    }
    v46 = v59;
    v47 = 0;
    if ( (_QWORD)v59 )
    {
      v46 = v59 - 1;
      v47 = v59 - 1;
    }
    v16 = (__int64)v58;
    if ( sub_26290(a1, (__int64)v58, v46) == v47 )
    {
      serva = host;
      while ( 1 )
      {
        v16 = (__int64)&v62;
        if ( sub_26190(a1, (__int64)&v62, 1, 10000) <= 0 )
          break;
        *(_WORD *)serva = (unsigned __int8)v62;
        if ( v68 != serva )
        {
          ++serva;
          if ( !strstr(host, "\r\n\r\n") )
            continue;
        }
        v68[1] = 0;
        if ( (*(_DWORD *)debug & 0x100000) != 0 )
          sub_BC00((__int64)"Received:\n---\n%s\n---\n", host);
        v16 = (__int64)"HTTP/1.%d %d";
        qsscanf();
        break;
      }
    }
    *(_QWORD *)(a1 + 88) = "connecting to proxy";
    v19 = 0;
    *(_DWORD *)(a1 + 96) = *__errno_location();
    if ( v58 )
    {
      *(_QWORD *)&v59 = 0;
      qfree();
    }
  }
LABEL_16:
  if ( v6 )
  {
    if ( *(_QWORD *)(v6 + 8) == 0x100000001LL )
    {
      v28 = *(_QWORD *)v6;
      *(_QWORD *)(v6 + 8) = 0;
      (*(void (__fastcall **)(__int64, __int64))(v28 + 16))(v6, v16);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v20 = _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF);
      }
      else
      {
        v20 = *(_DWORD *)(v6 + 8);
        *(_DWORD *)(v6 + 8) = v20 - 1;
      }
      if ( v20 == 1 )
        sub_27B60((volatile signed __int32 *)v6);
    }
  }
  return v19;
}

