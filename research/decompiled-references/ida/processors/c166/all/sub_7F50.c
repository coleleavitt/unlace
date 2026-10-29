__int64 __fastcall sub_7F50(_QWORD *a1, int a2, double a3)
{
  __int64 v4; // rsi
  __int64 result; // rax

  if ( a2 )
  {
    if ( a2 != 1 )
    {
      if ( (a2 & 1) != 0 )
        v4 = 45;
      else
        v4 = 43;
      result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, v4);
      if ( a2 > 3 )
        return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
                 a1,
                 *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + (-(__int64)((a2 & 2) == 0) & 0xFFFFFFFFFFFFFFF8LL) + 352),
                 33);
    }
  }
  else
  {
    sub_7010((__int64)(a1 + 28), a3);
    return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 43);
  }
  return result;
}

