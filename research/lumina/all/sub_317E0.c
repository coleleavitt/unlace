__int64 __fastcall sub_317E0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r13
  __int64 v5; // rax
  const char *v6; // rdx
  unsigned int v7; // ebp

  v4 = *(_QWORD *)(a1 + 320) + 24LL * *(_QWORD *)(a1 + 328) - 24;
  *(_QWORD *)(v4 + 16) = sub_199140(a1, a2);
  if ( a3[1] > 4u )
    *(_DWORD *)(v4 + 4) = *(unsigned __int8 *)(*a3 + 4LL);
  v5 = sub_168AC0(a1 + 192, (unsigned int)a2);
  v6 = "<unknown>";
  if ( v5 )
    v6 = *(const char **)(v5 + 8);
  sub_2F0E0(a1, (__int64)"%s response: sending %u bytes\n", v6, *((_DWORD *)a3 + 2));
  v7 = sub_168B00(a1 + 192, a3);
  if ( !v7 || *(_QWORD *)(a1 + 216) <= 1u )
    return v7;
  sub_2F0E0(a1, (__int64)"%s\n", *(const char **)(a1 + 208));
  return v7;
}
