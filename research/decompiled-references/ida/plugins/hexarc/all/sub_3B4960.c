__int64 __fastcall sub_3B4960(double a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  char tinfo_property; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8

  v3 = (_QWORD *)sub_3863C0(*(_QWORD *)(a3 + 32), a3 + 80, a1);
  if ( !v3 )
    return 0;
  if ( *v3 == -1 )
    return 0;
  if ( *(_DWORD *)(v3[3] + 8LL) != 48 )
    return 0;
  get_tinfo_property();
  tinfo_property = get_tinfo_property();
  clear_tinfo_t();
  if ( (tinfo_property & 0xF) != 0xC )
    return 0;
  set_op_tinfo();
  sub_38E3C0(a3, 1u, v6, v7, v8, a1);
  return 1;
}

