__int64 __fastcall sub_B610(__int64 a1, unsigned int a2)
{
  __int64 (__fastcall *v2)(_QWORD); // rax

  v2 = *(__int64 (__fastcall **)(_QWORD))(a1 + 752);
  if ( v2 )
    return v2(a2);
  if ( under_debugger )
    BUG();
  interr(0);
  return sub_B640();
}

