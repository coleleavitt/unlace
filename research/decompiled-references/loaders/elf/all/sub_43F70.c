__int64 __fastcall sub_43F70(
        double a1,
        double a2,
        double a3,
        double a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 result; // rax

  if ( a6 < a7 || (result = 1, a6 > a8) )
  {
    sub_EAA0((__int64)"%a: Invalid GOT relocation (addend 0x%a not in [%a,%a])\n", a1, a2, a3, a4);
    return 0;
  }
  return result;
}
