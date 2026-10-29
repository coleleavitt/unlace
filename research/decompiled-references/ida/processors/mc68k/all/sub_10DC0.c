__int64 __fastcall sub_10DC0(_QWORD *a1, char a2, char a3)
{
  __int64 v4; // rax
  __int64 result; // rax

  v4 = 8LL * (a2 & 0xF);
  if ( (~a2 & 0xF) == 0 )
    v4 = 376;
  result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 56LL))(
             a1,
             *(_QWORD *)(*(_QWORD *)(a1[78] + 56LL) + v4),
             33);
  if ( a3 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 46);
    return (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 32LL))(a1, (a2 & 0x10) == 0 ? 108 : 117);
  }
  return result;
}

