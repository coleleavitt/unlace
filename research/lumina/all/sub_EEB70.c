int __fastcall sub_EEB70(__int64 a1, _DWORD *a2, char *a3, unsigned int a4, char *a5, unsigned int a6, double a7)
{
  __int64 *v9; // rbx

  v9 = *(__int64 **)(a1 + 24);
  if ( !*a2 )
  {
    sub_CD5F0(
      (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 40LL) + 4LL),
      (__int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 40LL) + 16LL),
      a6,
      a5,
      *(_QWORD *)(a1 + 24));
    *a2 = 1;
  }
  return sub_EE540(a4, a3, v9, 0, a7);
}
