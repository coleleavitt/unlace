__int64 __fastcall sub_16340(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  switch ( a4 )
  {
    case 0:
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
    case 1:
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
    case 2:
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
  }
  return 0xFFFFFFFFLL;
}
