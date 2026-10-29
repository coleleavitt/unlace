__int64 __fastcall sub_A3B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall *v4)(__int64, __int64, __int64); // rax

  v4 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 104);
  if ( v4 )
    return v4(a2, a3, a4);
  if ( under_debugger )
    BUG();
  interr(0);
  return sub_A3E0();
}
