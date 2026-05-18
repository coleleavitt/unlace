__int64 *__fastcall sub_E22B0(__int64 *a1, unsigned int a2)
{
  __int64 *result; // rax

  result = (__int64 *)a1[2];
  if ( result )
    return (__int64 *)sub_E1710((__int64)result, 150, a2, 0, 0);
  result = sub_E2050(a1);
  if ( result )
    return (__int64 *)sub_E1710((__int64)result, 150, a2, 0, 0);
  return result;
}
