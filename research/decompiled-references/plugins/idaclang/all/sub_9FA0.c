__int64 __fastcall sub_9FA0(__int64 a1, __int64 a2, __int64 a3)
{
  void (__fastcall *v3)(__int64, __int64); // rax

  v3 = *(void (__fastcall **)(__int64, __int64))(a2 + 24);
  if ( !v3 )
  {
    if ( !under_debugger )
      interr(0);
    BUG();
  }
  v3(a1, a3);
  return a1;
}
