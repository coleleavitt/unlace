__int64 __fastcall sub_3F61E0(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  char v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __m128 v14; // xmm4
  __m128 v15; // xmm5
  unsigned int v16; // ebp

  sub_3F43F0((_QWORD *)(a1 + 24), (char *)(a1 + 424));
  v9 = *(_BYTE *)(a1 + 384);
  *(_BYTE *)(a1 + 384) = netnode_charval();
  v16 = sub_3F4C00(a1, 0, a2, a3, a4, a5, v14, v15, a8, a9, v10, v11, v12, v13);
  sub_3F43F0((_QWORD *)(a1 + 24), (char *)(a1 + 424));
  *(_BYTE *)(a1 + 384) = v9;
  return v16;
}

