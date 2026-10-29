__int64 __fastcall sub_5140(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax

  v5 = getseg();
  v6 = a2;
  if ( v5 )
    v6 = a2 - get_segm_base();
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 120LL))(a1, a3, a2, v6);
  if ( !(_BYTE)result )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 18);
    sub_4E80(a1, (__int64)"%a", a4);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 18);
    return remember_problem();
  }
  return result;
}

