__int64 __fastcall sub_8C90(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 120LL))(a1, a3, a2, -1);
  if ( !(_BYTE)result )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 18);
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, a3, 160);
    sub_89D0(a1, (__int64)" (ea = %a)", a4);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 18);
    return remember_problem();
  }
  return result;
}

