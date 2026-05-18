__int64 __fastcall sub_F3B90(
        __int64 a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        char a4,
        unsigned int a5,
        unsigned int a6,
        double a7,
        unsigned int a8,
        char a9,
        int a10)
{
  char v14; // al
  char v15; // al
  __int64 v16; // r12
  char v17; // bl
  unsigned int v18; // r13d
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v24; // [rsp+8h] [rbp-40h]

  if ( a10 )
    v24 = sub_F3B40(a1, a3, a2, a7);
  else
    v24 = sub_F3B40(a1, a2, a3, a7);
  v14 = sub_C6820(a3);
  v15 = sub_C68F0(a2, v14);
  v16 = *(_QWORD *)(a1 + 16);
  v17 = v15;
  v18 = sub_E1710(v16, a4, a6, a8, a5);
  sub_DCC50(v16, v18, v24, 4294967294LL, v19, v20);
  v21 = *(_QWORD *)(a1 + 16);
  v22 = *(int *)(v21 + 144);
  if ( (int)v22 > 0 )
    *(_WORD *)(*(_QWORD *)(v21 + 136) + 24 * v22 - 22) = (unsigned __int8)(a9 | v17);
  return v18;
}
