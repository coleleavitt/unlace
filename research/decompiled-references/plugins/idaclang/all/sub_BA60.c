__int64 __fastcall sub_BA60(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 (__fastcall *v3)(__int64, _QWORD); // rax

  v3 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 872);
  if ( v3 )
    return v3(a2, a3);
  if ( under_debugger )
    BUG();
  interr(0);
  return sub_BA90();
}
