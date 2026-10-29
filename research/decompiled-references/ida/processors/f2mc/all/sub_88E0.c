__int64 __fastcall sub_88E0(__int64 a1, __int64 a2, unsigned __int8 *a3, unsigned __int8 *a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  sub_8740(a1, a2, (__int64)a3, a4, a5, a6);
  a4[32] = 25;
  result = *a3;
  a4[28] = result;
  a3[5] = 9;
  ++a3[32];
  return result;
}

