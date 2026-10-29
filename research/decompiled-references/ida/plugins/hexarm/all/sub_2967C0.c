__int64 __fastcall sub_2967C0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi

  if ( sub_259E60(a2, *(_QWORD *)(a1 + 72)) )
    return 0;
  sub_25B3B0(a2, *(_QWORD *)(a1 + 80));
  v4 = *(_QWORD *)(a1 + 24);
  ++*(_DWORD *)(a1 + 88);
  *(_DWORD *)(a1 + 8) |= 1u;
  if ( !v4 )
    return 0;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v4 - 8);
  if ( !v5 || *(int *)(v5 + 8) > 69 )
    return 0;
  sub_2822D0(v5, *(_QWORD *)(a1 + 64), 0, 0);
  return 0;
}

