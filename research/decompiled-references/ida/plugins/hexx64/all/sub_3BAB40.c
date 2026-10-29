unsigned __int64 __fastcall sub_3BAB40(__int64 a1, _QWORD *a2, double a3, __int64 a4, __int64 a5, unsigned __int64 a6)
{
  __int64 v6; // r12
  unsigned __int64 i; // rbx
  unsigned __int64 result; // rax

  if ( a6 >= *(_QWORD *)(a1 + 200) || (v6 = *(_QWORD *)(a1 + 192) + 48 * a6) == 0 )
  {
    if ( !under_debugger )
      sub_383060(0x231u, a3);
    BUG();
  }
  for ( i = 0; i < a2[1]; ++i )
    result = ((unsigned __int64 (__fastcall *)(__int64, __int64 *))funcs_3BAB06[i])(v6, (__int64 *)(*a2 + 24 * i));
  return result;
}

