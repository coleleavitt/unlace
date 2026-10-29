__int64 __fastcall sub_21870(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  char v5; // r12
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rbp
  _QWORD *v11; // rdi

  v1 = *(_QWORD *)(a1 + 960);
  if ( v1 )
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 320LL))(
      a1,
      4,
      v1,
      a1 + 968,
      *(unsigned __int8 *)(a1 + 969));
  v3 = *(_QWORD *)(a1 + 976);
  *(_BYTE *)(a1 + 969) = 0;
  *(_QWORD *)(a1 + 960) = 0;
  if ( v3 )
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 320LL))(
      a1,
      4,
      v3,
      a1 + 984,
      *(unsigned __int8 *)(a1 + 985));
  v4 = *(_QWORD *)(a1 + 992);
  *(_BYTE *)(a1 + 985) = 0;
  *(_QWORD *)(a1 + 976) = 0;
  if ( v4 )
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 320LL))(
      a1,
      4,
      v4,
      a1 + 1000,
      *(unsigned __int8 *)(a1 + 1001));
  *(_BYTE *)(a1 + 1001) = 0;
  v5 = 0;
  v6 = a1 + 1216;
  *(_QWORD *)(a1 + 992) = 0;
  sub_16D80(a1);
  v7 = *(_QWORD *)(a1 + 1232);
  while ( v6 != v7 )
  {
    v8 = *(unsigned int *)(v7 + 40);
    v5 |= *(_DWORD *)(a1 + 1340) == (_DWORD)v8;
    v9 = ptrace(PTRACE_DETACH, v8, 0, 0);
    v7 = std::_Rb_tree_increment();
    if ( v9 )
      return 0xFFFFFFFFLL;
  }
  if ( !v5 && ptrace(PTRACE_DETACH, *(unsigned int *)(a1 + 1340), 0, 0) )
    return 0xFFFFFFFFLL;
  set_debug_event_code();
  *(_BYTE *)(a1 + 1414) = 0;
  v11 = *(_QWORD **)(a1 + 1224);
  *(_BYTE *)(a1 + 1349) = 1;
  sub_12030(v11);
  *(_QWORD *)(a1 + 1232) = v6;
  *(_QWORD *)(a1 + 1224) = 0;
  *(_QWORD *)(a1 + 1240) = v6;
  *(_QWORD *)(a1 + 1248) = 0;
  *(_DWORD *)(a1 + 1340) = -1;
  *(_BYTE *)(a1 + 1348) = 0;
  free_debug_event();
  return 1;
}

