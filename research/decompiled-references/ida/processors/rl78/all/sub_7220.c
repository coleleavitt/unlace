__int64 __fastcall sub_7220(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 120LL))(
             a2,
             a3,
             *(_QWORD *)(a3 + 16),
             *(_QWORD *)(a3 + 16));
  if ( !(_BYTE)result )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 64LL))(a2, 18);
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a2 + 104LL))(a2, *(_QWORD *)(a3 + 16), 16);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 72LL))(a2, 18);
    return remember_problem();
  }
  return result;
}

