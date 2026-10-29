_QWORD *__fastcall sub_298400(_QWORD *a1, __int64 a2, __int64 *a3, double a4)
{
  __int64 v5; // r13

  v5 = *(_QWORD *)*a3;
  **(_QWORD **)(*a3 + 8) = v5;
  *(_QWORD *)(*(_QWORD *)*a3 + 8LL) = *(_QWORD *)(*a3 + 8);
  sub_255050(*a3 + 16, a4);
  qfree(*a3);
  --*(_QWORD *)(a2 + 16);
  *a1 = v5;
  return a1;
}

