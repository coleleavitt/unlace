__int64 __fastcall sub_26F00(__int64 a1, signed int a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int v4; // ebx
  int v5; // eax
  unsigned int v6; // r15d
  int v7; // eax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  struct pollfd v16[9]; // [rsp+0h] [rbp-48h] BYREF

  v16[1] = (struct pollfd)__readfsqword(0x28u);
  while ( 1 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1) )
    {
      v6 = -1;
      *(_QWORD *)(a1 + 88) = "select";
      return v6;
    }
    v2 = *(_QWORD *)(a1 + 40);
    if ( v2 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32 * v2 - 16);
      if ( a2 >= 0 && (v13 = qtime64(), v14 = sub_24F60(v13, a2), (v3 = v14) != 0) )
      {
        if ( v8 >= v14 || !v8 )
LABEL_20:
          v8 = v3;
      }
      else
      {
        if ( !v8 )
          goto LABEL_5;
        v3 = 0;
      }
      v9 = qtime64();
      v10 = (unsigned int)v9 + 1000000 * HIDWORD(v9);
      v11 = (unsigned int)v8 + 1000000 * HIDWORD(v8);
      v4 = 0;
      if ( v10 < v11 )
        v4 = (v11 - v10) / 0x3E8;
      goto LABEL_6;
    }
    if ( a2 >= 0 )
    {
      v12 = qtime64();
      v3 = sub_24F60(v12, a2);
      if ( v3 )
        goto LABEL_20;
    }
LABEL_5:
    v3 = 0;
    v4 = -1;
LABEL_6:
    v16[0].fd = *(_QWORD *)(a1 + 56);
    v16[0].events = 1;
    while ( 1 )
    {
      v5 = poll(v16, 1u, v4);
      v6 = v5;
      if ( v5 != -1 )
        break;
      if ( *__errno_location() != 4 )
        goto LABEL_28;
    }
    if ( v5 )
      break;
    if ( v3 && qtime64() >= v3 )
    {
      v6 = -1;
      *(_QWORD *)(a1 + 88) = "poll";
      v7 = 62;
LABEL_13:
      *(_DWORD *)(a1 + 96) = v7;
      return v6;
    }
  }
  if ( v5 < 0 )
  {
LABEL_28:
    *(_QWORD *)(a1 + 88) = "poll";
    v7 = *__errno_location();
    goto LABEL_13;
  }
  return v6;
}

