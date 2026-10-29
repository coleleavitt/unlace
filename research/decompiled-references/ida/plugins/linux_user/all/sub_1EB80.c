__int64 __fastcall sub_1EB80(__int64 a1, int a2, int a3)
{
  __int64 v4; // rax
  __int64 v6; // rdi
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdx
  _QWORD *v12; // rdi
  unsigned __int64 v13; // [rsp+48h] [rbp-30h]

  v4 = *(_QWORD *)(a1 + 1224);
  v13 = __readfsqword(0x28u);
  if ( !v4 )
    return sub_B0B0((__int64)"unknown thread %d died\n", a2);
  v6 = a1 + 1216;
  v8 = v6;
  do
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(v4 + 16);
      v10 = *(_QWORD *)(v4 + 24);
      if ( *(_DWORD *)(v4 + 32) < a2 )
        break;
      v8 = v4;
      v4 = *(_QWORD *)(v4 + 16);
      if ( !v9 )
        goto LABEL_6;
    }
    v4 = *(_QWORD *)(v4 + 24);
  }
  while ( v10 );
LABEL_6:
  if ( v6 == v8 || *(_DWORD *)(v8 + 32) > a2 )
    return sub_B0B0((__int64)"unknown thread %d died\n", a2);
  *(_DWORD *)(v8 + 60) = a3;
  set_debug_event_code();
  sub_10260();
  v12 = *(_QWORD **)(a1 + 168);
  if ( v12 == (_QWORD *)(*(_QWORD *)(a1 + 184) - 72LL) )
  {
    sub_1E980((_QWORD *)(a1 + 120));
  }
  else
  {
    *v12 = 0xFFFFFFFFLL;
    v12[1] = -1;
    v12[2] = 0;
    copy_debug_event();
    *(_QWORD *)(a1 + 168) += 72LL;
  }
  *(_BYTE *)(a1 + 1412) = 0;
  if ( a3 == 3 )
    sub_16C00(a1, a2);
  free_debug_event();
  return v13 - __readfsqword(0x28u);
}

