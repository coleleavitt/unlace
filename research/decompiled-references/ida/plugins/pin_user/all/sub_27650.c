__int64 __fastcall sub_27650(_QWORD *a1, __int64 a2)
{
  bool v3; // zf
  __int16 v4; // cx
  __int16 v5; // ax
  bool v6; // cc
  socklen_t v7; // r12d
  int v8; // edx
  __int64 result; // rax
  __int64 v10; // r13
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  const char *v14; // rdx
  int (__fastcall *v15)(__int64, int); // rax
  __int64 v16; // rdi
  const char *v17; // rax
  int optval; // [rsp+Ch] [rbp-5Ch] BYREF
  struct sockaddr addr[2]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  signal(13, (__sighandler_t)((char *)&dword_0 + 1));
  if ( !(unsigned __int8)sub_27490((__int64)a1, 10, 1, 0) && !(unsigned __int8)sub_27490((__int64)a1, 2, 1, 0) )
    goto LABEL_15;
  v3 = *((_BYTE *)a1 + 100) == 0;
  optval = 0;
  if ( !v3 )
  {
    if ( setsockopt(*((_DWORD *)a1 + 14), 41, 26, &optval, 4u) )
    {
      a1[11] = "setsockopt(IPV6_V6ONLY)";
      if ( (*(_DWORD *)debug & 0x100000) != 0 )
      {
        v17 = (const char *)(*(__int64 (__fastcall **)(_QWORD *))(*a1 + 88LL))(a1);
        sub_BC00((__int64)"%s", v17);
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
    addr[0].sa_family = 10;
    if ( v6 )
      goto LABEL_5;
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 16) <= 1u;
    *(_WORD *)addr[0].sa_data = v5;
    v7 = 16;
    addr[0].sa_family = 2;
    if ( v6 )
      goto LABEL_5;
  }
  v10 = *(_QWORD *)(a2 + 8);
  if ( !(unsigned __int8)qhost2addr_() )
  {
    v14 = "INADDR_ANY";
    if ( *((_BYTE *)a1 + 100) )
      v14 = "in6addr_any";
    sub_28D10((unsigned int)"Cannot parse IP address \"%s\", falling back to %s\n", v10, (_DWORD)v14, v11, v12, v13);
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
    v8 = listen(*((_DWORD *)a1 + 14), 128);
    result = 1;
    if ( v8 != -1 )
      return result;
    a1[11] = "listen";
    *((_DWORD *)a1 + 24) = *__errno_location();
  }
LABEL_15:
  v15 = *(int (__fastcall **)(__int64, int))(*a1 + 72LL);
  if ( v15 == sub_26C60 )
  {
    v16 = a1[7];
    if ( v16 != -1 )
    {
      close(v16);
      a1[7] = -1;
    }
    return 0;
  }
  else
  {
    v15((__int64)a1, -1);
    return 0;
  }
}

