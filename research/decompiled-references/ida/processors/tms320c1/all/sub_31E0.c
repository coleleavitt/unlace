__int64 __fastcall sub_31E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  if ( get_sreg() == -1 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2, 128);
  v2 = sel2para();
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 120LL))(
             a1,
             a2,
             16 * v2 + *(_QWORD *)(a2 + 16));
  if ( !(_BYTE)result )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2, 128);
    return remember_problem();
  }
  return result;
}

