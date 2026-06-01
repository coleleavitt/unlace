__int64 __fastcall sub_3B260(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 (__fastcall *a4)(__m128i *, __int64, const char *, __int64),
        __int64 a5)
{
  __int64 result; // rax

  result = sub_3B010(a1, a2, a3, a4, a5);
  if ( (_DWORD)result == -1 )
  {
    result = sub_3B120(a1, a2, a3, a4, a5);
    if ( (_DWORD)result == -1 )
      return sub_3A5D0(a1, a2, a4, a5);
  }
  return result;
}

