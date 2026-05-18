__int64 __fastcall sub_16A3E0(_QWORD *a1, __int64 a2)
{
  bool v3; // zf
  __int16 v4; // cx
  __int16 v5; // ax
  bool v6; // cc
  socklen_t v7; // r12d
  __int64 v8; // rdx
  int v9; // edx
  __int64 result; // rax
  __int64 v11; // r13
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  const char *v15; // rdx
  int (__fastcall *v16)(__int64, int); // rax
  __int64 v17; // rdi
  const char *v18; // rax
  int optval; // [rsp+Ch] [rbp-5Ch] BYREF
  struct sockaddr addr[2]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  signal(13, (__sighandler_t)((char *)&dword_0 + 1));
  if ( !(unsigned __int8)sub_16A220((__int64)a1, 10, 1, 0) && !(unsigned __int8)sub_16A220((__int64)a1, 2, 1, 0) )
    goto LABEL_15;
  v3 = *((_BYTE *)a1 + 100) == 0;
  optval = 0;
  if ( !v3 )
  {
    if ( setsockopt(*((_DWORD *)a1 + 14), 41, 26, &optval, 4u) )
    {
      a1[11] = "setsockopt(IPV6_V6ONLY)";
      if ( (*(_DWORD *)&word_2439A4 & 0x100000) != 0 )
      {
        v18 = (const char *)(*(__int64 (__fastcall **)(_QWORD *))(*a1 + 88LL))(a1);
        sub_4BAA0((__int64 (__fastcall ***)(_QWORD))"%s", v18);
      }
    }
  }
  v4 = *(_WORD *)(a2 + 32);
  memset(addr, 0, 28);
  v5 = __ROL2__(v4, 8);
  if ( *((_BYTE *)a1 + 100) )
  {
    v6 = *(_QWORD *)(a2 + 16) <= 1u;
    *(_WORD *)addr[0].sa_data = v5;
    v7 = 28;
    strcpy((char *)addr, "\n");
    v8 = 10;
    if ( v6 )
      goto LABEL_5;
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 16) <= 1u;
    *(_WORD *)addr[0].sa_data = v5;
    v7 = 16;
    addr[0].sa_family = 2;
    v8 = 2;
    if ( v6 )
      goto LABEL_5;
  }
  v11 = *(_QWORD *)(a2 + 8);
  if ( !(unsigned __int8)sub_198840(addr, v11, v8) )
  {
    v15 = "INADDR_ANY";
    if ( *((_BYTE *)a1 + 100) )
      v15 = "in6addr_any";
    sub_16B870((unsigned int)"Cannot parse IP address \"%s\", falling back to %s\n", v11, (_DWORD)v15, v12, v13, v14);
    if ( *((_BYTE *)a1 + 100) )
      *(__m128i *)&addr[0].sa_data[6] = _mm_loadu_si128((const __m128i *)&in6addr_any);
    else
      *(_DWORD *)&addr[0].sa_data[2] = 0;
  }
LABEL_5:
  if ( bind(*((_DWORD *)a1 + 14), addr, v7) == -1 )
  {
    a1[11] = "bind";
    *((_DWORD *)a1 + 24) = *__errno_location();
  }
  else
  {
    v9 = listen(*((_DWORD *)a1 + 14), 128);
    result = 1;
    if ( v9 != -1 )
      return result;
    a1[11] = "listen";
    *((_DWORD *)a1 + 24) = *__errno_location();
  }
LABEL_15:
  v16 = *(int (__fastcall **)(__int64, int))(*a1 + 72LL);
  if ( v16 == sub_1699F0 )
  {
    v17 = a1[7];
    if ( v17 != -1 )
    {
      close(v17);
      a1[7] = -1;
    }
    return 0;
  }
  else
  {
    v16((__int64)a1, -1);
    return 0;
  }
}
