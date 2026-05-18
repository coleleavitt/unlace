__int64 __fastcall sub_EB730(__int64 a1, __off64_t a2)
{
  __off64_t v2; // rbx
  __int64 v3; // rcx
  int *v5; // rax
  char *v6; // rdx

  v2 = a2;
  v3 = *(int *)(a1 + 72);
  if ( (int)v3 > 0 )
    v2 = (v3 + a2 - 1) / v3 * v3;
  if ( (unsigned int)sub_C77F0(*(_DWORD *)(a1 + 24), v2) )
  {
    v5 = __errno_location();
    v6 = *(char **)(a1 + 56);
    *(_DWORD *)(a1 + 32) = *v5;
    return sub_EABB0(0x60Au, (__int64)"ftruncate", v6, 0x98D3u);
  }
  else
  {
    if ( *(_QWORD *)(a1 + 80) > v2 )
      *(_QWORD *)(a1 + 80) = v2;
    return 0;
  }
}
