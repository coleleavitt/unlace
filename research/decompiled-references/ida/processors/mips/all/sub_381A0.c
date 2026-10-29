__int64 __fastcall sub_381A0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax

  v3 = sub_3B330(a1[77], a2, 0);
  v4 = *a1;
  if ( v3 )
    return (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(v4 + 56))(a1, v3, 34);
  (*(void (__fastcall **)(_QWORD *, __int64))(v4 + 64))(a1, 18);
  (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 104LL))(a1, a2, 16);
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 18);
  return remember_problem(2, a1[30], 0);
}

