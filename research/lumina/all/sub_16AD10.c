__int64 __fastcall sub_16AD10(__int64 a1, __int64 a2)
{
  const char *v2; // r15
  int v4; // r8d
  int v5; // r9d
  unsigned __int64 v6; // rdx
  __int64 v7; // rbx
  int v8; // ecx
  __int64 *v9; // rbx
  size_t v10; // r12
  void *v11; // rax
  size_t v12; // rax
  size_t v13; // r15
  size_t v14; // r12
  void *v15; // rax
  __m128i si128; // xmm0
  __m128i v17; // xmm0
  _QWORD *v18; // r13
  pthread_t v19; // r12
  unsigned int v20; // r15d
  unsigned __int8 (__fastcall *v21)(char *); // r13
  unsigned int v22; // r15d
  signed __int32 v23; // eax
  struct addrinfo *v25; // rsi
  int v26; // eax
  __int64 v27; // r12
  int (__fastcall *v28)(__int64, int); // rax
  __int64 v29; // rdi
  __int64 v30; // rax
  volatile signed __int32 *v31; // rax
  volatile signed __int32 *v32; // rdi
  volatile signed __int32 *v33; // rdx
  signed __int32 v34; // eax
  __int64 v35; // rax
  size_t v36; // r12
  __int64 v37; // rdi
  __int64 v38; // rcx
  size_t v39; // r8
  size_t v40; // rdx
  char *v41; // rsi
  unsigned __int64 v42; // rdx
  __int64 v43; // r12
  size_t v44; // r9
  __int64 v45; // rdx
  const char *v46; // rsi
  __int64 v47; // r12
  unsigned __int64 v48; // rdx
  _BYTE *v49; // rsi
  const char *v50; // rcx
  const char *v51; // rsi
  __int64 v52; // rdx
  __int64 v53; // r12
  const char *v54; // rax
  int v55; // r8d
  int v56; // r9d
  struct addrinfo *ai; // [rsp+0h] [rbp-570h]
  unsigned __int64 v58; // [rsp+8h] [rbp-568h]
  size_t v59; // [rsp+8h] [rbp-568h]
  unsigned __int64 v60; // [rsp+10h] [rbp-560h]
  unsigned __int64 v61; // [rsp+10h] [rbp-560h]
  char *serv; // [rsp+28h] [rbp-548h]
  char *serva; // [rsp+28h] [rbp-548h]
  int v65; // [rsp+3Ch] [rbp-534h] BYREF
  void *v66; // [rsp+40h] [rbp-530h] BYREF
  __int128 v67; // [rsp+48h] [rbp-528h]
  void *v68; // [rsp+60h] [rbp-510h] BYREF
  __int128 v69; // [rsp+68h] [rbp-508h]
  void *ptr; // [rsp+80h] [rbp-4F0h] BYREF
  __int128 v71; // [rsp+88h] [rbp-4E8h]
  __m128i v72[3]; // [rsp+A0h] [rbp-4D0h] BYREF
  char s[48]; // [rsp+D0h] [rbp-4A0h] BYREF
  char v74[48]; // [rsp+100h] [rbp-470h] BYREF
  char host[1022]; // [rsp+130h] [rbp-440h] BYREF
  _BYTE v76[10]; // [rsp+52Eh] [rbp-42h] BYREF
  unsigned __int64 v77; // [rsp+538h] [rbp-38h]

  v2 = s1;
  v77 = __readfsqword(0x28u);
  signal(13, (__sighandler_t)((char *)&dword_0 + 1));
  v6 = *(_QWORD *)(a2 + 96);
  v7 = a2 + 8;
  v72[0].m128i_i32[0] = 2;
  *(__m128i *)((char *)v72 + 4) = 0;
  if ( v6 >= 2 )
    v7 = a2 + 88;
  memset((char *)v72[1].m128i_i64 + 4, 0, 28);
  v8 = *(unsigned __int16 *)(v7 + 24);
  v58 = v6;
  v72[0].m128i_i32[2] = 1;
  sub_19D9D0((unsigned int)s, 33, (unsigned int)"%d", v8, v4, v5);
  if ( *(_QWORD *)(v7 + 8) )
    v2 = *(const char **)v7;
  v9 = (__int64 *)operator new(0x90u);
  v9[2] = 0;
  v9[1] = 0x100000001LL;
  *v9 = (__int64)off_23C468;
  v9[5] = 0;
  *((_OWORD *)v9 + 3) = 0;
  if ( v2 )
  {
    v10 = strlen(v2);
    v11 = (void *)sub_1987B0(v9 + 5, 0, v10 + 1, 1);
    v9[5] = (__int64)v11;
    v9[6] = v10 + 1;
    memmove(v11, v2, v10);
    *(_BYTE *)(v9[5] + v10) = 0;
  }
  v9[8] = 0;
  *(_OWORD *)(v9 + 9) = 0;
  v12 = strlen(s);
  v13 = v12 + 1;
  v14 = v12;
  v15 = (void *)sub_1987B0(v9 + 8, 0, v12 + 1, 1);
  v9[8] = (__int64)v15;
  v9[9] = v13;
  memmove(v15, s, v14);
  *(_BYTE *)(v9[8] + v14) = 0;
  si128 = _mm_load_si128(v72);
  *((_DWORD *)v9 + 34) = 0;
  *(__m128i *)(v9 + 11) = si128;
  v17 = _mm_load_si128(&v72[1]);
  *((_BYTE *)v9 + 140) = 0;
  *(__m128i *)(v9 + 13) = v17;
  *(__m128i *)(v9 + 15) = _mm_load_si128(&v72[2]);
  v9[3] = sub_19A2A0();
  v9[4] = sub_199C00(nullptr, 0);
  v18 = (_QWORD *)operator new(0x10u);
  v18[1] = v9;
  *v18 = v9 + 2;
  if ( v9 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)v9 + 2, 1u);
    else
      ++*((_DWORD *)v9 + 2);
  }
  v19 = sub_19A480((void *(*)(void *))sub_16A9C0, v18);
  if ( !v19 )
  {
    *(_QWORD *)(a1 + 88) = "qthread_create";
    *(_DWORD *)(a1 + 96) = *__errno_location();
    if ( v18 )
    {
      v31 = (volatile signed __int32 *)v18[1];
      v32 = v31;
      if ( v31 )
      {
        v33 = v31 + 2;
        if ( *((_QWORD *)v31 + 1) == 0x100000001LL )
        {
          v35 = *(_QWORD *)v31;
          *((_QWORD *)v32 + 1) = 0;
          (*(void (__fastcall **)(volatile signed __int32 *, _QWORD *, volatile signed __int32 *))(v35 + 16))(
            v32,
            v18,
            v33);
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 24LL))(v32);
        }
        else
        {
          if ( &_pthread_key_create )
          {
            v34 = _InterlockedExchangeAdd(v33, 0xFFFFFFFF);
          }
          else
          {
            v34 = *((_DWORD *)v31 + 2);
            *((_DWORD *)v32 + 2) = v34 - 1;
          }
          if ( v34 == 1 )
            sub_16A8F0(v32);
        }
      }
      operator delete(v18, 0x10u);
    }
    goto LABEL_15;
  }
  v20 = *(_DWORD *)(a2 + 184);
  v21 = *(unsigned __int8 (__fastcall **)(char *))(a2 + 168);
  serv = *(char **)(a2 + 176);
  if ( !(unsigned __int8)sub_19A060(v9[4], v20) )
  {
    if ( v21 )
    {
      while ( !v21(serv) )
      {
        if ( (unsigned __int8)sub_19A060(v9[4], v20) )
          goto LABEL_25;
      }
    }
    sub_19A520(v9[3]);
    *((_BYTE *)v9 + 140) = 1;
    sub_19A570(v9[3]);
    j__pthread_detach(v19);
    *(_QWORD *)(a1 + 88) = "getaddrinfo";
    *(_DWORD *)(a1 + 96) = v21 == nullptr ? 62 : 125;
LABEL_15:
    v22 = 0;
    goto LABEL_16;
  }
LABEL_25:
  sub_199BE0(v19);
  v25 = (struct addrinfo *)v9[2];
  v26 = *((_DWORD *)v9 + 34);
  v9[2] = 0;
  *(_DWORD *)(a1 + 96) = v26;
  if ( v26 )
  {
    if ( v26 == -11 )
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
  v27 = (__int64)v25;
  if ( !v25 )
  {
    freeaddrinfo(nullptr);
    goto LABEL_15;
  }
  while ( getnameinfo(*(const struct sockaddr **)(v27 + 24), *(_DWORD *)(v27 + 16), host, 0x2Fu, v74, 0x21u, 3) )
  {
    *(_QWORD *)(a1 + 88) = "getnameinfo";
    *(_DWORD *)(a1 + 96) = *__errno_location();
LABEL_29:
    v27 = *(_QWORD *)(v27 + 40);
    if ( !v27 )
    {
      freeaddrinfo(v25);
      goto LABEL_15;
    }
  }
  if ( !(unsigned __int8)sub_16A220(a1, *(_DWORD *)(v27 + 4), *(_DWORD *)(v27 + 8), *(_DWORD *)(v27 + 12)) )
    goto LABEL_29;
  v22 = sub_16A690(a1, v27, a2 + 168);
  if ( !(_BYTE)v22 )
  {
    v28 = *(int (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 72LL);
    if ( v28 == sub_1699F0 )
    {
      v29 = *(_QWORD *)(a1 + 56);
      if ( v29 != -1 )
      {
        close(v29);
        *(_QWORD *)(a1 + 56) = -1;
      }
    }
    else
    {
      v28(a1, -1);
    }
    goto LABEL_29;
  }
  freeaddrinfo(v25);
  if ( v58 > 1 )
  {
    v66 = nullptr;
    v65 = 0;
    v67 = 0;
    sub_299F0((char **)&v66);
    v36 = *(_QWORD *)(a2 + 128);
    if ( v36 > 1 )
    {
      v37 = *(_QWORD *)(a2 + 128);
      v68 = nullptr;
      v69 = 0;
      v68 = (void *)sub_198760(v37);
      *((_QWORD *)&v69 + 1) = v36;
      memcpy(v68, *(const void **)(a2 + 120), v36);
      *(_QWORD *)&v69 = v36;
      v40 = v36 + 1;
      v41 = (char *)v68;
      if ( *((_QWORD *)&v69 + 1) < v36 + 1 )
      {
        v68 = (void *)sub_1987B0(&v68, v68, v40, 1);
        v40 = v36 + 1;
        v41 = (char *)v68;
      }
      *(_QWORD *)&v69 = v40;
      v41[v36 - 1] = 58;
      *((_BYTE *)v68 + v36) = 0;
      v42 = *(_QWORD *)(a2 + 152);
      if ( v42 )
      {
        v39 = v42 - 1;
        if ( v42 != 1 )
        {
          v43 = v69;
          v44 = v42 - 1;
          if ( (_QWORD)v69 )
          {
            v43 = v69 - 1;
            v44 = v39 + v69 - 1;
            v42 += v69 - 1;
          }
          if ( *((_QWORD *)&v69 + 1) < v42 )
          {
            ai = (struct addrinfo *)v39;
            v59 = v44;
            v61 = v42;
            v68 = (void *)sub_1987B0(&v68, v68, v42, 1);
            v39 = (size_t)ai;
            v44 = v59;
            v42 = v61;
          }
          *(_QWORD *)&v69 = v42;
          *((_BYTE *)v68 + v44) = 0;
          memcpy((char *)v68 + v43, *(const void **)(a2 + 144), v39);
        }
      }
      v45 = v69;
      ptr = nullptr;
      v46 = s1;
      v71 = 0;
      if ( (_QWORD)v69 )
      {
        v46 = (const char *)v68;
        v45 = v69 - 1;
      }
      sub_18D450(&ptr, v46, v45, v38, v39);
      sub_2AAE0((__int64 *)&v66);
      if ( ptr )
      {
        *(_QWORD *)&v71 = 0;
        j__free(ptr);
      }
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        j__free(v68);
      }
    }
    v47 = v67;
    v48 = 2;
    if ( (_QWORD)v67 )
    {
      v48 = v67 + 1;
      v47 = v67 - 1;
    }
    v49 = v66;
    if ( *((_QWORD *)&v67 + 1) < v48 )
    {
      v60 = v48;
      v66 = (void *)sub_1987B0(&v66, v66, v48, 1);
      v48 = v60;
      v49 = v66;
    }
    *(_QWORD *)&v67 = v48;
    v49[v47] = 10;
    *((_BYTE *)v66 + v47 + 1) = 0;
    if ( (*(_DWORD *)&word_2439A4 & 0x100000) != 0 )
    {
      v50 = s1;
      if ( (_QWORD)v67 )
        v50 = (const char *)v66;
      v51 = s1;
      if ( *(_QWORD *)(a2 + 96) )
        v51 = *(const char **)(a2 + 88);
      sub_4BAA0(
        (__int64 (__fastcall ***)(_QWORD))"Attempting HTTP CONNECT through proxy (%s:%d), by sending:\n---\n%s\n---\n",
        v51,
        *(unsigned __int16 *)(a2 + 112),
        v50);
    }
    v52 = v67;
    v53 = 0;
    if ( (_QWORD)v67 )
    {
      v52 = v67 - 1;
      v53 = v67 - 1;
    }
    if ( sub_1673E0(a1, (__int64)v66, v52) == v53 )
    {
      serva = host;
      while ( sub_1672E0(a1, (__int64)&ptr, 1, 10000) > 0 )
      {
        *(_WORD *)serva = (unsigned __int8)ptr;
        if ( v76 != serva )
        {
          ++serva;
          if ( !strstr(host, "\r\n\r\n") )
            continue;
        }
        v76[1] = 0;
        if ( (*(_DWORD *)&word_2439A4 & 0x100000) != 0 )
          sub_4BAA0((__int64 (__fastcall ***)(_QWORD))"Received:\n---\n%s\n---\n", host);
        if ( (unsigned int)sub_19DA80(
                             (unsigned int)host,
                             (unsigned int)"HTTP/1.%d %d",
                             (unsigned int)&ptr,
                             (unsigned int)&v65,
                             v55,
                             v56) != 2
          || v65 != 200 )
        {
          break;
        }
        goto LABEL_85;
      }
    }
    v54 = "connecting to proxy (unauthorized)";
    if ( v65 != 401 )
    {
      v54 = "connecting to proxy (authentication required)";
      if ( v65 != 407 )
        v54 = "connecting to proxy";
    }
    *(_QWORD *)(a1 + 88) = v54;
    v22 = 0;
    *(_DWORD *)(a1 + 96) = *__errno_location();
LABEL_85:
    if ( v66 )
    {
      *(_QWORD *)&v67 = 0;
      j__free(v66);
    }
  }
LABEL_16:
  if ( v9 )
  {
    if ( v9[1] == 0x100000001LL )
    {
      v30 = *v9;
      v9[1] = 0;
      (*(void (__fastcall **)(__int64 *))(v30 + 16))(v9);
      (*(void (__fastcall **)(__int64 *))(*v9 + 24))(v9);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v23 = _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 2, 0xFFFFFFFF);
      }
      else
      {
        v23 = *((_DWORD *)v9 + 2);
        *((_DWORD *)v9 + 2) = v23 - 1;
      }
      if ( v23 == 1 )
        sub_16A8F0((volatile signed __int32 *)v9);
    }
  }
  return v22;
}
