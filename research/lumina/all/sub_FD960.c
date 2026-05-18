int __fastcall sub_FD960(__int64 a1, double a2, __int64 a3, __int64 *a4)
{
  int result; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  result = sub_EE420(
             *a4,
             a4[1],
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 136LL) + 24LL * *(int *)(a1 + 32) - 8),
             a2);
  if ( result )
    return sub_FD650(a1, (const __m128i *)*a4, v6, v7, v8, v9);
  return result;
}
