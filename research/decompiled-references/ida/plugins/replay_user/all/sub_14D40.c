__int64 __fastcall sub_14D40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  char v8; // [rsp+0h] [rbp-8h]

  v6 = *(_QWORD *)(a1 + 680);
  if ( !v6 )
    sub_14C90((__int64)"debmod_t::get_reginfo is not implemented", a2, 0, a4, a5, a6, v8);
  if ( (int)a2 < v6 )
    return *(_QWORD *)(a1 + 672) + 32LL * (int)a2;
  if ( under_debugger )
    BUG();
  interr();
  return sub_14D90();
}

