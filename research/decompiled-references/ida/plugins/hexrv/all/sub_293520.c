__int64 __fastcall sub_293520(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 *v4; // rbp
  _QWORD *v5; // rax

  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v2 + 8) != 1 )
    return 0;
  v4 = *(__int64 **)(v2 + 24);
  sub_250C50((__int64 *)v2, *(_QWORD *)(v2 + 32));
  v5 = sub_23C7C0(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 64LL), *v4);
  *((_DWORD *)v5 + 2) = 72;
  v5[3] = v4;
  return 1;
}

