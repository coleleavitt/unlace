__int64 __fastcall sub_27090(__int64 a1, __m128i *a2, __int64 a3, double a4)
{
  __int64 v4; // rbp
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 616);
  result = sub_26E20(a1, a2, a3, a4);
  *(_QWORD *)(a1 + 616) = v4;
  return result;
}

