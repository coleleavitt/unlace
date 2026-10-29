__int64 __fastcall sub_4510(__int64 *a1, __int64 a2)
{
  __int64 sreg; // rax
  __int64 v3; // r8
  __int64 v4; // rbp
  __int64 result; // rax

  sreg = get_sreg();
  v3 = *a1;
  if ( sreg == -1 )
    return (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v3 + 24))(a1, a2, 145);
  v4 = *(_QWORD *)(a2 + 16) | (sreg << 8);
  result = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64))(v3 + 120))(a1, a2, v4, -1);
  if ( !(_BYTE)result )
  {
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 64))(a1, 18);
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 104))(a1, v4, 16);
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 72))(a1, 18);
    return remember_problem();
  }
  return result;
}

