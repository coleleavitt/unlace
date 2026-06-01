__int64 __fastcall sub_5AA0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 result; // rax

  v2 = map_code_ea();
  v3 = sub_9880(a1[77], v2);
  result = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64))(*a1 + 120LL))(a1, a2, v3, -1);
  if ( !(_BYTE)result )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 18);
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 161);
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 18);
    return remember_problem();
  }
  return result;
}

