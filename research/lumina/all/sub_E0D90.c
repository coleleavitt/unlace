__int64 *__fastcall sub_E0D90(__int64 a1, _QWORD *a2, const __m128i *a3)
{
  __int64 v4; // r14
  __int64 *v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rax

  v4 = *(_QWORD *)a1;
  if ( !a2 )
  {
    v5 = sub_DC1C0(*(_QWORD *)a1, 0x18u);
    if ( v5 )
      goto LABEL_3;
    return v5;
  }
  v5 = sub_DFAD0(*(_QWORD *)a1, a2, 16LL * *(int *)a2 + 24);
  if ( !v5 )
  {
    sub_CF6E0(v4, a2);
    return v5;
  }
LABEL_3:
  v6 = *(int *)v5;
  *(_DWORD *)v5 = v6 + 1;
  v7 = sub_DCE50(v4, (__int64)a3);
  v5[2 * v6 + 1] = v7;
  if ( *(_BYTE *)(a1 + 292) == 3 || *(_BYTE *)(a1 + 292) <= 1u || !v7 )
    return v5;
  sub_DC5F0((__int64 *)a1, v7, a3);
  return v5;
}
