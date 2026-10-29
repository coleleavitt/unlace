__int64 __fastcall sub_3BB180(__int64 a1, _QWORD *a2, double a3, __int64 a4, __int64 a5, unsigned __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // r12
  unsigned __int64 i; // rbx

  if ( a6 >= *(_QWORD *)(a1 + 200) || (result = *(_QWORD *)(a1 + 192), (v7 = result + 40 * a6) == 0) )
  {
    if ( !under_debugger )
      sub_3835A0(0x231u, a3);
    BUG();
  }
  for ( i = 0; i < a2[1]; ++i )
    result = ((__int64 (__fastcall *)(__int64, unsigned __int64))funcs_3BB149[i])(v7, *a2 + 24 * i);
  return result;
}

