__int64 __fastcall sub_2D310(__int64 a1, __int64 a2)
{
  __int64 v5; // r12
  int v6; // eax
  __int64 *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdi

  if ( *(_QWORD *)(a1 + 2640) != *(_QWORD *)(a1 + 2672) )
  {
    copy_debug_event();
    if ( *(_QWORD *)(a1 + 2640) == *(_QWORD *)(a1 + 2656) - 72LL )
    {
      free_debug_event();
      operator delete(*(void **)(a1 + 2648), 0x1F8u);
      v7 = (__int64 *)(*(_QWORD *)(a1 + 2664) + 8LL);
      *(_QWORD *)(a1 + 2664) = v7;
      v8 = *v7;
      v9 = *v7 + 504;
      *(_QWORD *)(a1 + 2648) = v8;
      *(_QWORD *)(a1 + 2656) = v9;
      *(_QWORD *)(a1 + 2640) = v8;
    }
    else
    {
      free_debug_event();
      *(_QWORD *)(a1 + 2640) += 72LL;
    }
    return 1;
  }
  v5 = a1 + 1208;
  if ( (unsigned int)sub_27640(a1 + 1208, (_QWORD *)(a1 + 8)) == 18 )
    return 0;
  *(_BYTE *)(a2 + 16) = 1;
  *(_QWORD *)a2 = 0x100000001LL;
  if ( *(_DWORD *)(a1 + 8) == 6 )
  {
    v10 = 2;
    set_debug_event_code();
    if ( (((*(_DWORD *)(a2 + 20) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) == 0 )
    {
      *(_DWORD *)(a2 + 24) = 0;
      return 1;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 16) = 3;
    if ( (unsigned int)sub_26100(a1, (int *)(a1 + 16)) )
      *(_DWORD *)(a1 + 8) = 3;
    sub_2D270((_BYTE *)a1, *(_DWORD *)(a1 + 180), *(_QWORD *)(a1 + 148), (_QWORD *)(a1 + 2792), a1 + 2772);
    sub_2D270((_BYTE *)a1, *(_DWORD *)(a1 + 212), *(_QWORD *)(a1 + 52), (_QWORD *)(a1 + 2800), a1 + 2780);
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 2792);
    v6 = *(_DWORD *)(a1 + 8);
    if ( v6 == 2 )
    {
      v10 = 5;
      v11 = a2;
      set_debug_event_code();
      if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 5 )
      {
        *(_OWORD *)(a2 + 24) = -1;
        return 1;
      }
    }
    else
    {
      if ( v6 != 5 )
      {
        set_debug_event_code();
        return 1;
      }
      v10 = 5;
      v11 = a2;
      set_debug_event_code();
      if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 5 )
      {
        if ( (unsigned __int8)sub_25B80(v5, *(_QWORD *)(a1 + 584), (unsigned __int64 *)(a2 + 24)) )
          *(_QWORD *)(a2 + 32) = -1;
        else
          set_debug_event_code();
        *(_BYTE *)(a2 + 16) = 1;
        return 1;
      }
    }
    sub_2BD40(v11, 5);
  }
  if ( under_debugger )
    BUG();
  interr();
  return sub_2D5B0(3296, v10);
}

