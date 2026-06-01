__int64 __fastcall sub_3BA990(double a1, __m128 a2, __m128 a3, __int64 a4, __int64 a5, double a6)
{
  __int64 result; // rax

  sub_38B490(a5, 0);
  result = 0;
  if ( *(_DWORD *)(a5 + 80) == 1 )
    return (unsigned __int8)sub_396680(a5, *(_QWORD *)(a5 + 88), a1, a2, a3, a6);
  return result;
}

