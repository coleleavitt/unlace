unsigned __int64 __fastcall sub_103D90(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // rax

  if ( !a3 )
    return sub_102750(a2, 36);
  v4 = 16LL * a3;
  v5 = *(unsigned int *)(*(_QWORD *)(a1 + 72) + 4LL * a3);
  v6 = 16 * v5;
  sub_103D90(a1, a2, v5);
  v7 = *(_QWORD *)(a1 + 56);
  v8 = v7 + v6;
  v9 = v7 + v4;
  if ( *(_BYTE *)v8 == 6 )
    return sub_103BF0(30, a2, "[%d]", *(_DWORD *)(v8 + 8));
  if ( (*(_BYTE *)(v9 + 1) & 0x40) == 0 )
    v9 -= 16;
  return sub_103D10(a2, *(_DWORD *)(v9 + 4), *(_QWORD *)(v9 + 8));
}
