__int64 __fastcall sub_3DE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
  if ( !(_BYTE)result )
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, a2, a5 == 0 ? 161 : 164);
    return remember_problem();
  }
  return result;
}

