__int64 __fastcall sub_A1D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void (__fastcall *v4)(__int64, __int64, __int64, __int64); // rax

  v4 = *(void (__fastcall **)(__int64, __int64, __int64, __int64))(a2 + 72);
  if ( !v4 )
  {
    if ( !under_debugger )
      interr(0);
    BUG();
  }
  v4(a1, a2, a3, a4);
  return a1;
}

