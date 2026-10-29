__int64 __fastcall sub_7DF0(_QWORD *a1, char a2, double a3)
{
  __int64 result; // rax
  __int64 v5; // rsi

  if ( (a2 & 7) != 0 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
               a1,
               *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + (-(__int64)((a2 & 8) == 0) & 0xFFFFFFFFFFFFFFF8LL) + 320),
               33);
    if ( (a2 & 7) == 1 )
      return result;
    if ( (a2 & 1) != 0 )
      v5 = 45;
    else
      v5 = 43;
    result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, v5);
  }
  else
  {
    sub_7010((__int64)(a1 + 28), a3);
    if ( (a2 & 8) != 0 )
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
        a1,
        *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 320LL),
        33);
      return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 43);
    }
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
      a1,
      *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + 312LL),
      33);
    result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 43);
  }
  if ( (a2 & 4) != 0 )
    return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
             a1,
             *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + (-(__int64)((a2 & 2) == 0) & 0xFFFFFFFFFFFFFFF8LL) + 336),
             33);
  return result;
}

