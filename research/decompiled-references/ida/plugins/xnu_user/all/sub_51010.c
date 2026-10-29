__int64 __fastcall sub_51010(__int64 a1, __int64 a2, int a3)
{
  const char *v4; // r14
  __int64 v5; // rdx
  unsigned int v6; // r13d
  unsigned int v7; // ebp

  if ( (unsigned __int8)sub_63F00(*(_QWORD *)(a1 + 864)) )
  {
    v4 = src;
    v5 = 48LL * a3 + *(_QWORD *)(a1 + 1216);
    if ( *(_QWORD *)(v5 + 24) )
      v4 = *(const char **)(v5 + 16);
    v6 = *(_DWORD *)(v5 + 8);
    v7 = sub_67BB0(
           *(_QWORD *)(a1 + 864),
           v6,
           *(_QWORD *)(a2 + 56) + *(int *)(**(_QWORD **)(a2 + 48) + 48LL * a3),
           *(int *)(**(_QWORD **)(a2 + 48) + 48LL * a3 + 4));
    if ( (_BYTE)v7 )
    {
      sub_70460(a1, (unsigned int)"GDB: Sent value for register %d (gdb: %d) (%s) to remote\n", a3, v6, (_DWORD)v4);
      return v7;
    }
    sub_70460(a1, (unsigned int)"GDB: Could not push register %d (gdb: %d) (%s) to remote\n", a3, v6, (_DWORD)v4);
  }
  return 0;
}

