__int64 __fastcall sub_BA30(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64); // rax

  v2 = *(__int64 (__fastcall **)(__int64))(a1 + 864);
  if ( v2 )
    return v2(a2);
  if ( under_debugger )
    BUG();
  interr(0);
  return sub_BA60();
}
