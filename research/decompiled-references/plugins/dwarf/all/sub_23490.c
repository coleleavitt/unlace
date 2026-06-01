__int64 __fastcall sub_23490(
        __int64 a1,
        __int64 a2,
        const char *a3,
        __int64 (__fastcall *a4)(__m128i *, __int64, __int64, __int64),
        __int64 a5)
{
  __int64 result; // rax
  __int64 v9; // r9

  result = sub_23240(a1, a2, a3, a4, a5);
  if ( (_DWORD)result == -1 )
  {
    result = sub_23350(a1, a2, a3, a4, a5, v9);
    if ( (_DWORD)result == -1 )
      return sub_21B20(a1, a2, a4, a5);
  }
  return result;
}
