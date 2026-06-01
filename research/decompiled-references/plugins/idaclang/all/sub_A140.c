__int64 __fastcall sub_A140(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(a1 + 88);
  if ( v5 )
    return v5(a2, a3, a4, a5);
  if ( under_debugger )
    BUG();
  interr(0);
  return sub_A170();
}
