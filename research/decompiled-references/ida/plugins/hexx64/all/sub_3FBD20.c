unsigned __int64 __fastcall sub_3FBD20(
        __int64 a1,
        int a2,
        int a3,
        unsigned __int8 a4,
        __m128i a5,
        __m128 a6,
        __m128 a7)
{
  unsigned int v9; // r15d
  __int64 v10; // rax
  int v11; // r12d
  int v12; // r14d
  int *v13; // rax
  __int64 v14; // rsi
  unsigned int v15; // ebp
  int v16; // eax
  int v18; // ecx
  unsigned int v19; // edx
  __int64 v20; // rax
  int dtype_size; // [rsp+0h] [rbp-88h]
  int v23; // [rsp+Ch] [rbp-7Ch]
  _DWORD v24[4]; // [rsp+10h] [rbp-78h] BYREF
  _DWORD v25[4]; // [rsp+20h] [rbp-68h] BYREF
  _DWORD v26[6]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  if ( a4 != 2 && a4 != 7 )
  {
    if ( !under_debugger )
      sub_383060(0xCBF2u, *(double *)a5.m128i_i64);
    BUG();
  }
  v9 = a4;
  dtype_size = get_dtype_size();
  v10 = *(_QWORD *)(a1 + 832);
  v11 = *(_DWORD *)(v10 + 380);
  v12 = sub_3F9DC0(a1, 2, *(_DWORD *)(v10 + 460), a5, a6, a7);
  v13 = *(int **)(a1 + 832);
  if ( v13[117] == v12 )
  {
    v18 = *(_DWORD *)(a1 + 52);
    v19 = 8;
    if ( (v18 & 0x1018) != 0x1010 )
    {
      if ( (v18 & 0x1008) == 0 || (v19 = 2, (v18 & 0x1018) == 0x1008) )
        v19 = 4;
    }
    sub_3F7E20(a1, 2u, a4, v13[118], v12, v13[115], a5, a6, a7, v19);
    v20 = *(_QWORD *)(a1 + 832);
    v12 = *(_DWORD *)(v20 + 460);
    v23 = *(_DWORD *)(v20 + 464);
  }
  else
  {
    v23 = v13[116];
  }
  v14 = a4;
  v15 = (a4 != 2) + 7;
  sub_1D6840(a1, v14, v15, v11, v11, 0, a5, a6, a7);
  sub_1D6840(a1, v9, v15, v12, v12, 0, a5, a6, a7);
  v16 = get_dtype_size();
  sub_1D6310(a1, 0xEu, v16, v11, v12, v23, *(double *)a5.m128i_i64, 0);
  v24[2] = v23;
  v24[0] = 1;
  v24[1] = get_dtype_size();
  v25[0] = 1;
  v26[0] = 1;
  v25[1] = dtype_size;
  v25[2] = a2;
  v26[1] = dtype_size;
  v26[2] = a3;
  sub_1D6450(a1, 11, (unsigned __int8 *)v24, nullptr, (unsigned __int8 *)v25, a5, a6, a7);
  if ( a2 != a3 )
    sub_1D6450(a1, 10, (unsigned __int8 *)v24, nullptr, (unsigned __int8 *)v26, a5, a6, a7);
  sub_11CDA0((__int64)v26);
  sub_11CDA0((__int64)v25);
  sub_11CDA0((__int64)v24);
  return v27 - __readfsqword(0x28u);
}

