unsigned __int64 __fastcall delete_nodes_ah_t__::vfunc_6(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int **a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // rdx
  __int64 v9; // rax
  int *v10; // rax
  int *v11; // rdx
  int *v12; // rbx
  int *i; // r12
  _QWORD v15[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-20h]

  v8 = *(_QWORD *)(a3 + 64);
  v16 = __readfsqword(0x28u);
  v9 = 0;
  if ( v8 )
    v9 = *(_QWORD *)(v8 + 48);
  v15[0] = v9;
  v10 = *a4;
  v15[1] = a2;
  v15[2] = a3;
  if ( !v10 || *v10 > 1 )
  {
    sub_22070((__int64)a4, 0, 0, 0, a5, a6);
    v10 = *a4;
  }
  v11 = a4[1];
  v12 = v11;
  if ( !v10 || *v10 > 1 )
  {
    sub_22070((__int64)a4, 0, 0, 0, a5, a6);
    v11 = a4[1];
  }
  for ( i = &v11[2 * (_QWORD)a4[2]]; i != v12; v12 += 2 )
    sub_26CE0(a3, *(_QWORD **)v12);
  sub_2FB30(v15);
  return v16 - __readfsqword(0x28u);
}

