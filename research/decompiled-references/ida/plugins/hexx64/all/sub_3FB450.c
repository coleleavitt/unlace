void __fastcall sub_3FB450(
        __int64 a1,
        int a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        __m128i a5,
        __m128 a6,
        __m128 a7)
{
  int *v8; // rax
  int v9; // ebp
  __int64 v10; // r15
  __int64 v11; // r13
  int dtype_size; // r14d
  unsigned int v13; // r14d
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rbp
  int v23; // eax
  unsigned int v24; // [rsp+Ch] [rbp-4Ch]
  __int64 v26; // [rsp+18h] [rbp-40h]

  v8 = *(int **)(a1 + 832);
  v9 = v8[116];
  v10 = v8[114];
  v11 = v8[115];
  v24 = a3;
  dtype_size = get_dtype_size();
  if ( a3 )
  {
    v20 = get_dtype_size();
    sub_1D6310(a1, 4u, v20, 8, 0x3BEA45E214ADDC55LL, v9, *(double *)a5.m128i_i64, 0);
    v26 = *(int *)(*(_QWORD *)(a1 + 832) + 380LL);
    v21 = get_dtype_size();
    sub_1D6310(a1, 4u, v21, v26, 0x3BEA45E214ADDC55LL, v9 + dtype_size, *(double *)a5.m128i_i64, 0);
    if ( a3 == 1 )
      v13 = 2;
    else
      v13 = (a3 != 2) + 7;
  }
  else
  {
    v13 = 1;
    v14 = get_dtype_size();
    sub_1D6310(a1, 4u, v14, 8, 0x3BEA45E214ADDC55LL, v9, *(double *)a5.m128i_i64, 0);
  }
  v15 = get_dtype_size();
  sub_1D6310(a1, 4u, v15, v9, 0x3BEA45E214ADDC55LL, v11, *(double *)a5.m128i_i64, 0);
  sub_1D6840(a1, v24, v13, a2, v10, a4, a5, a6, a7);
  v16 = get_dtype_size();
  sub_1D6310(a1, a4 + 15, v16, v9, v10, v9, *(double *)a5.m128i_i64, 0);
  v17 = get_dtype_size();
  sub_1D6310(a1, a4 + 17, v17, v11, v10, v11, *(double *)a5.m128i_i64, 0);
  v18 = get_dtype_size();
  sub_1D6310(a1, 4u, v18, v9, 0x3BEA45E214ADDC55LL, 8, *(double *)a5.m128i_i64, 0);
  if ( a3 )
  {
    v22 = *(int *)(*(_QWORD *)(a1 + 832) + 380LL);
    v23 = get_dtype_size();
    sub_1D6310(a1, 4u, v23, v11, 0x3BEA45E214ADDC55LL, v22, *(double *)a5.m128i_i64, 0);
  }
  else
  {
    v19 = get_dtype_size();
    sub_1D6310(a1, 4u, v19, v11, 0x3BEA45E214ADDC55LL, 9, *(double *)a5.m128i_i64, 0);
  }
  sub_3FB370(a1, 31, *(double *)a5.m128i_i64);
}

