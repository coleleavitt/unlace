__int64 __fastcall sub_B2B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v3)(__int64, __int64); // rax

  v3 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 624);
  if ( v3 )
    return v3(a2, a3);
  if ( under_debugger )
    BUG();
  interr(0);
  return sub_B2E0();
}
