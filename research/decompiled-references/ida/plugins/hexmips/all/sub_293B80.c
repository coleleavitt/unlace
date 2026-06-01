_QWORD *__fastcall sub_293B80(_QWORD *a1, __int64 a2, __int64 **a3)
{
  __int64 v3; // r13

  v3 = **a3;
  *(_QWORD *)(*a3)[1] = v3;
  *(_QWORD *)(**a3 + 8) = (*a3)[1];
  sub_2507D0((__int64)(*a3 + 2));
  qfree();
  --*(_QWORD *)(a2 + 16);
  *a1 = v3;
  return a1;
}

