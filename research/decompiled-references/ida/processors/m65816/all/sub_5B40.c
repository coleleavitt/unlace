__int64 __fastcall sub_5B40(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = sub_9880(a1[77], *(_QWORD *)(a2 + 16));
  result = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64))(*a1 + 120LL))(a1, a2, v2, -1);
  if ( !(_BYTE)result )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 18);
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 177);
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 18);
    return remember_problem();
  }
  return result;
}

