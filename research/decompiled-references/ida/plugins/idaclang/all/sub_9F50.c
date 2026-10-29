__int64 __fastcall sub_9F50(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 (__fastcall *v10)(__int64, __int64, __int64, _QWORD, __int64, _QWORD); // rax

  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64, _QWORD))(a1 + 16);
  if ( v10 )
    return v10(a2, a3, a4, a5, a6, a7);
  if ( under_debugger )
    BUG();
  interr(0);
  return sub_9FA0(0, a3);
}

