__int64 __fastcall sub_3B31C0(__int64 a1, _QWORD *a2, double a3, __int64 a4, __int64 a5, unsigned __int64 a6)
{
  __int64 v6; // r12
  unsigned __int64 i; // rbx
  __int64 result; // rax

  if ( a6 >= *(_QWORD *)(a1 + 232) || (v6 = *(_QWORD *)(a1 + 224) + 48 * a6) == 0 )
  {
    if ( !under_debugger )
      sub_37B760(0x231u, a3);
    BUG();
  }
  for ( i = 0; i < a2[1]; ++i )
    result = ((__int64 (__fastcall *)(__int64, unsigned __int64))funcs_3B3206[i])(v6, *a2 + 24 * i);
  return result;
}

