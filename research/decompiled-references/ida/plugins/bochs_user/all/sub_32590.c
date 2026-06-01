__int64 __fastcall sub_32590(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  unsigned __int64 *v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // r14
  __int64 v12; // rax
  int v13; // r13d
  unsigned int v14; // eax
  __int64 v15; // rsi
  const char *v16; // rax
  int v17; // eax
  __int64 v18; // rdi
  unsigned __int64 v19; // rax
  __int64 v20; // [rsp+8h] [rbp-50h]
  unsigned __int64 v21[9]; // [rsp+10h] [rbp-48h] BYREF

  v21[1] = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 2640) != *(_QWORD *)(a1 + 2672) )
  {
    copy_debug_event();
    if ( *(_QWORD *)(a1 + 2640) == *(_QWORD *)(a1 + 2656) - 72LL )
    {
      free_debug_event();
      operator delete(*(void **)(a1 + 2648), 0x1F8u);
      v6 = (unsigned __int64 *)(*(_QWORD *)(a1 + 2664) + 8LL);
      *(_QWORD *)(a1 + 2664) = v6;
      v7 = *v6;
      v8 = *v6 + 504;
      *(_QWORD *)(a1 + 2640) = v7;
      *(__m128i *)(a1 + 2648) = _mm_unpacklo_epi64((__m128i)v7, (__m128i)(unsigned __int64)v8);
      if ( *(_QWORD *)(a1 + 2672) != v7 )
        return 2;
    }
    else
    {
      free_debug_event();
      v4 = *(_QWORD *)(a1 + 2640) + 72LL;
      *(_QWORD *)(a1 + 2640) = v4;
      if ( *(_QWORD *)(a1 + 2672) != v4 )
        return 2;
    }
    return 1;
  }
  v9 = a1 + 8;
  v10 = a1 + 1208;
  if ( (unsigned int)sub_27640(a1 + 1208, (_QWORD *)(a1 + 8)) == 18 )
    return 0;
  sub_446A0(*(_QWORD *)(a1 + 2704), a2);
  *(_BYTE *)(a2 + 16) = 1;
  if ( *(_DWORD *)(a1 + 8) == 6 )
  {
    v15 = 2;
    set_debug_event_code();
    if ( (((*(_DWORD *)(a2 + 20) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) == 0 )
    {
      *(_DWORD *)(a2 + 24) = 0;
      return 1;
    }
    if ( under_debugger )
      BUG();
    v18 = 3296;
    interr();
    goto LABEL_52;
  }
  *(_DWORD *)(a1 + 16) = 1;
  if ( (unsigned int)sub_26100(a1, (int *)(a1 + 16)) )
  {
    *(_DWORD *)(a1 + 8) = 3;
    set_debug_event_code();
    *(_QWORD *)(a2 + 8) = -1;
    return 1;
  }
  v12 = *(_QWORD *)(a1 + 148);
  *(_QWORD *)(a2 + 8) = v12;
  v20 = v12;
  if ( !(unsigned __int8)sub_44080(*(_QWORD *)(a1 + 2704), a1 + 16) )
  {
    if ( *(_BYTE *)(a1 + 2713) )
      goto LABEL_14;
    goto LABEL_26;
  }
  if ( *(_BYTE *)(a1 + 2712) )
  {
LABEL_22:
    sub_25D80(v10);
    return 0;
  }
  if ( !*(_BYTE *)(a1 + 2713) )
  {
LABEL_26:
    v13 = sub_47AA0(*(_QWORD *)(a1 + 2704), v9, a1 + 2624);
    goto LABEL_15;
  }
  if ( !*(_WORD *)(*(_QWORD *)(a1 + 1200) + 8228LL) )
    goto LABEL_22;
LABEL_14:
  v13 = sub_485A0(*(_QWORD *)(a1 + 2704), v9, a1 + 2624);
LABEL_15:
  if ( **(_BYTE **)(a1 + 2704) )
  {
    v16 = (const char *)sub_44660();
    sub_EB00((__int64)"%s", v16);
  }
  if ( v13 >= 0 )
  {
    if ( v13 )
    {
      if ( *(_QWORD *)(a1 + 2672) != *(_QWORD *)(a1 + 2640) )
        return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, a2, a3);
      goto LABEL_32;
    }
    if ( *(_DWORD *)(a1 + 8) == 2 )
      goto LABEL_22;
  }
  if ( (unsigned __int8)sub_44680(*(_QWORD *)(a1 + 2704), v20) )
  {
    sub_445E0(*(_QWORD *)(a1 + 2704));
    v17 = sub_324C0((__int64)"Stop", (__int64)"Suspend", (__int64)"Continue");
    if ( !v17 )
      goto LABEL_32;
    if ( v17 == 1 )
    {
      sub_434D0(a2, 0);
      return 1;
    }
  }
  if ( !*(_BYTE *)(a1 + 1185) && *(_QWORD *)(a1 + 600) == v20 )
  {
    sub_434D0(a2, 0);
    if ( (*(_DWORD *)debug & 0x10000) != 0 )
      sub_E960((__int64)"Error: the machine has restarted!\n");
    sub_EB00((__int64)"AUTOHIDE NONE\nThe machine has been restarted, the debugging session is over.");
    return 1;
  }
  v14 = *(_DWORD *)(a1 + 8);
  if ( v14 == 2 )
  {
    v15 = 5;
    v18 = a2;
    set_debug_event_code();
    if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 5 )
    {
      *(_OWORD *)(a2 + 24) = -1;
      return 1;
    }
  }
  else
  {
    if ( v14 <= 2 )
    {
LABEL_32:
      set_debug_event_code();
      return 1;
    }
    if ( v14 != 5 )
      return 0;
    if ( !(unsigned __int8)sub_25B80(v10, *(_QWORD *)(a1 + 584), v21) )
    {
      set_debug_event_code();
      goto LABEL_42;
    }
    v15 = 5;
    v18 = a2;
    set_debug_event_code();
    if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 5 )
    {
      v19 = v21[0];
      *(_QWORD *)(a2 + 32) = -1;
      *(_QWORD *)(a2 + 24) = v19;
LABEL_42:
      *(_BYTE *)(a2 + 16) = 1;
      return 1;
    }
  }
LABEL_52:
  sub_31DA0(v18, v15);
  return sub_32AA0();
}

