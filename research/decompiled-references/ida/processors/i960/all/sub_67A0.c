__int64 __fastcall sub_67A0(_QWORD *a1, int a2, double a3)
{
  if ( a2 > 73 )
    return sub_65F0((__int64)"%a: outreg: illegal reg %d", a3, a1[30]);
  else
    return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
             a1,
             *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 8LL * a2),
             33);
}

