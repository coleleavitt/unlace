__int64 __fastcall sub_B5B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 120LL))(a1, a2, a3, -1);
  if ( !(_BYTE)result )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 18);
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 104LL))(a1, *(_QWORD *)(a2 + 16), 16);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 18);
    return remember_problem();
  }
  return result;
}

