void __fastcall sub_3E8C70(__int64 a1, int a2, double a3)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // r12

  if ( *(_BYTE *)(a1 + 105) != 7 )
  {
    if ( !under_debugger )
      sub_37CFE0(0xCE30u, a3);
    BUG();
  }
  v3 = *(_QWORD *)(a1 + 832);
  v4 = *(_QWORD *)(v3 + 584);
  if ( !v4 )
    sub_3E4140(a3);
  v5 = *(int *)(*(_QWORD *)(v3 + 576) + 4 * v4 - 4);
  *(_QWORD *)(v3 + 584) = v4 - 1;
  sub_1D14D0(a1, 3u, *(unsigned __int16 *)(a1 + 842), 1, 0x3BEA45E214ADDC55LL, v5, 0);
  sub_3E8420(a1, 0x23u, *(unsigned __int16 *)(a1 + 842), a2, v5, 0, 0);
  sub_3E8420(a1, 0x1Eu, *(unsigned __int16 *)(a1 + 842), a2, v5, 3, 0);
  sub_3E8420(a1, 0xDu, *(unsigned __int16 *)(a1 + 842), a2, v5, a2, 0);
  sub_3E8420(a1, 0x21u, *(unsigned __int16 *)(a1 + 842), a2, **(int **)(*(_QWORD *)(a1 + 832) + 528LL), 1, 0);
  sub_3E8420(a1, 0x1Du, *(unsigned __int16 *)(a1 + 842), a2, 0x3BEA45E214ADDC55LL, 2, 0);
  sub_3E8420(a1, 0x2Au, *(unsigned __int16 *)(a1 + 842), a2, 0x3BEA45E214ADDC55LL, *(_QWORD *)(a1 + 120), 0);
  sub_3E62F0(*(_QWORD *)(a1 + 832), v5);
}

