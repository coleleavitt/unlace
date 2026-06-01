__int64 __fastcall sub_109B0(
        __int64 a1,
        double a2,
        double a3,
        __m128 a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  __int64 v9; // rax
  __int64 v10; // r14
  void *v12; // rcx
  __int64 v13; // r15
  __int64 v14; // rsi
  double v15; // xmm4_8
  double v16; // xmm5_8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // [rsp+Ch] [rbp-74h] BYREF
  _QWORD v22[4]; // [rsp+10h] [rbp-70h] BYREF
  _BYTE v23[4]; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v24; // [rsp+34h] [rbp-4Ch]
  unsigned __int16 v25; // [rsp+38h] [rbp-48h]
  unsigned __int16 v26; // [rsp+3Ah] [rbp-46h]
  unsigned __int8 v27; // [rsp+3Ch] [rbp-44h]
  unsigned __int8 v28; // [rsp+3Dh] [rbp-43h]
  unsigned __int8 v29; // [rsp+3Eh] [rbp-42h]
  unsigned __int8 v30; // [rsp+3Fh] [rbp-41h]
  unsigned __int8 v31; // [rsp+40h] [rbp-40h]
  unsigned __int8 v32; // [rsp+41h] [rbp-3Fh]
  unsigned __int8 v33; // [rsp+42h] [rbp-3Eh]
  unsigned __int8 v34; // [rsp+43h] [rbp-3Dh]
  unsigned __int64 v35; // [rsp+48h] [rbp-38h]

  v9 = *(_QWORD *)(a1 + 616);
  v35 = __readfsqword(0x28u);
  v10 = v9;
  if ( netnode_supval(*(_QWORD *)(v9 + 144), 0, &v21, 4, 1) != 4
    || netnode_supval(*(_QWORD *)(v10 + 144), v21, v23, 20, 97) <= 0 )
  {
    return 0;
  }
  sub_7630((__int64)v22, a1, v21, a2, a3, a4);
  v12 = (void *)v22[0];
  v13 = v22[0];
  if ( !v22[1] )
    v12 = &unk_15584;
  sub_4D60(a1, 0, (__int64)&unk_153B8, v12, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34);
  v14 = v21;
  sub_108C0(a1, v21, a2, a3, a4, a5, v15, v16, a8, a9);
  if ( v13 )
    qfree(v13, v14, v17, v18, v19, v20);
  return 1;
}

