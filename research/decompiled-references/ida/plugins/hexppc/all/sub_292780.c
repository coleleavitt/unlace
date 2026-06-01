__int64 __fastcall sub_292780(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi

  if ( sub_255E20(a2, *(_QWORD *)(a1 + 72)) )
    return 0;
  sub_257370(a2, *(_QWORD *)(a1 + 80));
  v4 = *(_QWORD *)(a1 + 24);
  ++*(_DWORD *)(a1 + 88);
  *(_DWORD *)(a1 + 8) |= 1u;
  if ( !v4 )
    return 0;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v4 - 8);
  if ( !v5 || *(int *)(v5 + 8) > 69 )
    return 0;
  sub_27E290(v5, *(_QWORD *)(a1 + 64), 0, 0);
  return 0;
}

