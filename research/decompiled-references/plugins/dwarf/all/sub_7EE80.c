__int64 __fastcall sub_7EE80(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rsi

  *a1 = off_C9528;
  result = a1[2];
  if ( result )
  {
    v2 = a1[3];
    if ( v2 )
      return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(result + 88) + 480LL))(
               *(_QWORD *)(result + 160),
               v2,
               8);
  }
  return result;
}
