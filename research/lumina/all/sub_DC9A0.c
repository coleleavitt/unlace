__int64 __fastcall sub_DC9A0(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  if ( !a2 )
    return 0;
  result = a2;
  if ( a3 )
  {
    result = sub_DC930((__int64 *)a1, (__int64 *)(a1 + 184), (void (__fastcall *)(__int64, __int64))sub_D7F20, a2);
    if ( !result )
      return 0;
  }
  if ( !*(_DWORD *)(a1 + 48) )
  {
    *(_QWORD *)(result + 8) = *(_QWORD *)(a1 + 392);
    *(_QWORD *)(a1 + 392) = result;
  }
  return result;
}
