__int64 __fastcall sub_E8780(__int64 *a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  const char *v8; // rdx
  unsigned int v9; // esi
  __int64 v10; // rcx

  v6 = *(__int16 *)(a3 + 52);
  v7 = *a1;
  v8 = *(const char **)a3;
  if ( (v6 & 0x8000u) != 0LL )
  {
    v9 = 2579;
    v10 = sub_E8280(v7, "%s.rowid", v8);
  }
  else
  {
    v9 = 1555;
    v10 = sub_E8280(v7, "%s.%s", v8, *(const char **)(*(_QWORD *)(a3 + 8) + 16 * v6));
  }
  return sub_E2080(a1, v9, a2, v10, -6, 2u);
}
