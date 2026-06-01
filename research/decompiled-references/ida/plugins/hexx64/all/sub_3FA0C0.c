__int64 __fastcall sub_3FA0C0(__int64 a1, int a2, int a3, double a4)
{
  __int64 v4; // r12
  __int64 v5; // r13
  int dtype_size; // eax
  __int64 v7; // r13
  int v8; // eax
  __int64 v9; // r13
  int v10; // eax

  v4 = a3;
  v5 = *(int *)(*(_QWORD *)(a1 + 832) + 688LL);
  dtype_size = get_dtype_size();
  sub_1D6310(a1, 0x23u, dtype_size, a2, v4, v5, a4, -1);
  v7 = *(int *)(*(_QWORD *)(a1 + 832) + 692LL);
  v8 = get_dtype_size();
  sub_1D6310(a1, 0x1Fu, v8, a2, v4, v7, a4, -1);
  v9 = *(int *)(*(_QWORD *)(a1 + 832) + 696LL);
  v10 = get_dtype_size();
  return sub_1D6310(a1, 0x21u, v10, a2, v4, v9, a4, -1);
}

