__int64 __fastcall sub_3BC260(double a1, __int64 a2, __int64 a3, double a4, __m128i a5, double a6)
{
  _QWORD *v6; // rax
  char tinfo_property; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8

  v6 = (_QWORD *)sub_38DCC0(*(_QWORD *)(a3 + 32), a3 + 80, a1);
  if ( !v6 )
    return 0;
  if ( *v6 == -1 )
    return 0;
  if ( *(_DWORD *)(v6[3] + 8LL) != 48 )
    return 0;
  get_tinfo_property();
  tinfo_property = get_tinfo_property();
  clear_tinfo_t();
  if ( (tinfo_property & 0xF) != 0xC )
    return 0;
  set_op_tinfo();
  sub_395CC0(a3, 1u, v9, v10, v11, a1, a4, a5, a6);
  return 1;
}

