__int64 __fastcall sub_298120(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdi
  __int64 *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *v8; // rax

  v3 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v3 + 8) != 1 )
    return 0;
  v5 = *(__int64 **)(v3 + 24);
  sub_255850((__int64 *)v3, *(_QWORD *)(v3 + 32), a3);
  v8 = sub_2413C0(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 64LL), *v5, v6, v7, a3);
  *((_DWORD *)v8 + 2) = 72;
  v8[3] = (__int64)v5;
  return 1;
}

