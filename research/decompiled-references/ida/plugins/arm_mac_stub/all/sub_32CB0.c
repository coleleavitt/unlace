__int64 __fastcall sub_32CB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  char v6; // r13
  int v7; // eax
  int *v9; // rbp
  int v10; // eax
  int v11; // r13d
  __int64 v12; // r15
  unsigned __int8 (__fastcall *v13)(__int64); // r14
  int v14; // eax
  int v15; // edi
  int optval; // [rsp+8h] [rbp-50h] BYREF
  socklen_t optlen; // [rsp+Ch] [rbp-4Ch] BYREF
  struct pollfd fds; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 56);
  v19 = __readfsqword(0x28u);
  v6 = sub_31D30(v4, 0);
  v7 = connect(*(_DWORD *)(a1 + 56), *(const struct sockaddr **)(a2 + 24), *(_DWORD *)(a2 + 16));
  if ( v6 )
  {
    if ( v7 != -1 )
    {
LABEL_9:
      sub_31D30(*(_QWORD *)(a1 + 56), 1);
      return 1;
    }
    v9 = __errno_location();
    if ( *v9 == 11 || *v9 == 115 )
    {
      v11 = *(_DWORD *)(a3 + 16);
      v12 = *(_QWORD *)(a3 + 8);
      v13 = *(unsigned __int8 (__fastcall **)(__int64))a3;
      fds.fd = *(_QWORD *)(a1 + 56);
      fds.events = 4;
      while ( 1 )
      {
        while ( 1 )
        {
          v14 = poll(&fds, 1u, v11);
          if ( v14 != -1 )
            break;
          if ( *v9 != 4 )
            goto LABEL_23;
        }
        if ( v14 )
          break;
        if ( !v13 )
        {
          *(_QWORD *)(a1 + 88) = "poll";
          v10 = 62;
          goto LABEL_8;
        }
        if ( v13(v12) )
        {
          *(_QWORD *)(a1 + 88) = "poll";
          v10 = 125;
          goto LABEL_8;
        }
      }
      if ( v14 < 0 )
      {
LABEL_23:
        *(_QWORD *)(a1 + 88) = "poll";
        v10 = *v9;
        goto LABEL_8;
      }
      v15 = *(_DWORD *)(a1 + 56);
      optlen = 4;
      if ( getsockopt(v15, 1, 4, &optval, &optlen) )
      {
        *(_QWORD *)(a1 + 88) = "getsockopt";
        v10 = *v9;
      }
      else
      {
        v10 = optval;
        if ( !optval )
          goto LABEL_9;
        *(_QWORD *)(a1 + 88) = "connect";
      }
    }
    else
    {
      *(_QWORD *)(a1 + 88) = "connect";
      v10 = *v9;
    }
LABEL_8:
    *(_DWORD *)(a1 + 96) = v10;
    return 0;
  }
  else
  {
    if ( v7 != -1 )
      return 1;
    *(_QWORD *)(a1 + 88) = "connect";
    *(_DWORD *)(a1 + 96) = *__errno_location();
    return 0;
  }
}

