__int64 *__fastcall sub_F07D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r12
  __int64 *v6; // rax

  if ( !a2 )
    return (__int64 *)a3;
  if ( !a3 )
    return (__int64 *)a2;
  if ( (*(_DWORD *)(a2 + 4) & 0x20000001) != 0x20000000 && (*(_DWORD *)(a3 + 4) & 0x20000001) != 0x20000000
    || *(_BYTE *)(a1 + 292) > 1u )
  {
    return sub_F04A0((__int64 *)a1, 44, a2, a3);
  }
  v5 = *(_QWORD *)a1;
  v6 = sub_E0F20((__int64 *)a1, *(int **)(a1 + 88), a2);
  *(_QWORD *)(a1 + 88) = v6;
  *(_QWORD *)(a1 + 88) = sub_E0F20((__int64 *)a1, (int *)v6, a3);
  return sub_DEEF0(v5, 155, "0");
}
