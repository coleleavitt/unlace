void __fastcall sub_3ED490(__int64 a1, int a2, int a3, int a4, int a5, int a6, double a7, char a8)
{
  __int64 v8; // r13
  __int64 v10; // rbx
  int v11; // r11d
  unsigned int v12; // r14d
  unsigned int v13; // r15d
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rsi
  unsigned int v19; // [rsp+18h] [rbp-50h]
  __int64 v21; // [rsp+28h] [rbp-40h]

  v8 = a3;
  v10 = a5;
  if ( a8 )
  {
    v11 = 35;
    v12 = 13;
    v13 = 30;
  }
  else
  {
    v11 = 25;
    v12 = 12;
    v13 = 26;
  }
  v14 = *(_QWORD *)(a1 + 832);
  if ( a5 < *(_DWORD *)(v14 + 488) || a5 > *(_DWORD *)(v14 + 500) )
  {
    if ( !under_debugger )
      sub_37CFE0(0, a7);
    BUG();
  }
  v19 = v11;
  sub_3EC660(a1, 1, a2, a5, a5, 0, a7);
  sub_3E8420(a1, v19, a2, v8, v10, 0, 0);
  sub_3E8420(a1, v13, a2, v8, v10, 3, 0);
  sub_3E8420(a1, v12, a2, v8, v10, v10, 0);
  v15 = *(_QWORD *)(a1 + 832);
  v16 = *(_QWORD *)(v15 + 584);
  if ( !v16 )
    sub_3E4140(a7);
  v17 = *(int *)(*(_QWORD *)(v15 + 576) + 4 * v16 - 4);
  *(_QWORD *)(v15 + 584) = v16 - 1;
  sub_3E8420(a1, v19, a2, v10, a4, v17, 0);
  v21 = (int)v17 + 1;
  sub_3E8420(a1, v13, a2, v10, a4, v21, 0);
  sub_3E8420(a1, 0x13u, 1, 0, v17, 0, 0);
  sub_3E8420(a1, 0x13u, 1, 3, v21, 3, 0);
  sub_3E8420(a1, v12, a2, v10, a4, a6, 0);
  sub_3E62F0(*(_QWORD *)(a1 + 832), v17);
}

