__int64 __fastcall sub_59D0(_QWORD *a1, __int64 a2)
{
  __int64 sreg; // rax
  __int64 result; // rax
  __int64 v4; // rax

  sreg = get_sreg();
  if ( sreg == -1 )
    return (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 161);
  v4 = sub_9880(a1[77], *(_QWORD *)(a2 + 16) + (sreg << 16));
  result = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64))(*a1 + 120LL))(a1, a2, v4, -1);
  if ( !(_BYTE)result )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 18);
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 161);
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 18);
    return remember_problem();
  }
  return result;
}

