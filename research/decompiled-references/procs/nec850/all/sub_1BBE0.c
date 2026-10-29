__int64 __fastcall sub_1BBE0(__int64 *a1, unsigned int *a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rsi

  v2 = *a1;
  v3 = *a2;
  **(_QWORD **)(*a1 + 8) -= 4LL;
  sub_1B290(*(_QWORD *)v2, v3, **(_QWORD **)(v2 + 8), 4, *(_QWORD *)(v2 + 16));
  return 0;
}
