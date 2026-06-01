__int64 __fastcall sub_3C4570(double a1, __int64 a2, __int64 a3, double a4, __m128i a5, double a6)
{
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 result; // rax

  v6 = sub_3C4360(a3, 1);
  result = 0;
  if ( v6 )
  {
    sub_395CC0(a3, 1u, (__int64)v6, v7, v8, a1, a4, a5, a6);
    return 1;
  }
  return result;
}

