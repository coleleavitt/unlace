__int64 __fastcall sub_15770(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  int v4; // ebp
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rax

  v3 = 0;
  v4 = ptrace(PTRACE_PEEKUSER, *(unsigned int *)(a2 + 4), 896, 0);
  while ( 1 )
  {
    if ( (v4 & (1 << v3)) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 8 * v3 + 864);
      if ( v6 == ptrace(PTRACE_PEEKUSER, *(unsigned int *)(a2 + 4), 8 * v3 + 848, 0) )
        break;
    }
    if ( ++v3 == 4 )
      return 0;
  }
  set_debug_event_code();
  if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 5 )
  {
    v7 = *(unsigned int *)(a2 + 4);
    v8 = *(_QWORD *)(a1 + 8LL * (int)v3 + 864);
    *(_QWORD *)(a2 + 32) = -1;
    *(_QWORD *)(a2 + 24) = v8;
    ptrace(PTRACE_POKEUSER, v7, 896, 0);
    return 1;
  }
  else
  {
    sub_102A0();
    return sub_15850(a2, 5);
  }
}

