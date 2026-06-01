__int64 __fastcall sub_3EDC20(__int64 a1, int a2, double a3)
{
  unsigned int v3; // r13d
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // r14

  if ( *(_BYTE *)(a1 + 65) != 10 || (v3 = *(_QWORD *)(a1 + 72), v3 > 0xF) )
  {
    if ( !under_debugger )
      sub_37CFE0(0, a3);
    BUG();
  }
  v4 = *(_QWORD *)(a1 + 832);
  v5 = *(_QWORD *)(v4 + 584);
  if ( !v5 )
    sub_3E4140(a3);
  v6 = a2;
  v7 = *(int *)(*(_QWORD *)(v4 + 576) + 4 * v5 - 4);
  *(_QWORD *)(v4 + 584) = v5 - 1;
  sub_1D14D0(a1, 3u, 1, 1, 0x3BEA45E214ADDC55LL, v7, 0);
  sub_3E8420(a1, 0x16u, *(unsigned __int16 *)(a1 + 842), v6, v7, v6, 0);
  sub_3ED6D0(a1, v3, v7, a3);
  sub_3EC660(a1, 1, *(unsigned __int16 *)(a1 + 842), v7, v7, 0, a3);
  return sub_3E8420(a1, 0x13u, *(unsigned __int16 *)(a1 + 842), v6, v7, v6, 0);
}

