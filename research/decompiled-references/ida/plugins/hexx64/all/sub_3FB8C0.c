void __fastcall sub_3FB8C0(
        __int64 a1,
        unsigned __int8 a2,
        int a3,
        int a4,
        unsigned __int8 a5,
        __m128i a6,
        __m128 a7,
        __m128 a8)
{
  unsigned int v8; // r14d
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v12; // rbp
  char v13; // r15
  int v14; // eax
  __int64 v15; // r9
  int v16; // ebp
  int v17; // r13d
  int v18; // eax
  unsigned int v19; // r13d
  char v20; // r14
  int v21; // eax
  int v22; // ebp
  int dtype_size; // eax
  int v25; // eax
  int v26; // eax
  __int64 v27; // rax
  int v28; // r12d
  __int64 v29; // r14
  int v30; // eax
  unsigned int v31; // [rsp+0h] [rbp-88h]
  __int64 v32; // [rsp+0h] [rbp-88h]
  int v33; // [rsp+10h] [rbp-78h] BYREF
  int v34; // [rsp+14h] [rbp-74h]
  int v35; // [rsp+18h] [rbp-70h]
  _DWORD v36[4]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v37[11]; // [rsp+30h] [rbp-58h] BYREF

  v8 = a5;
  v9 = a4;
  v10 = *(_QWORD *)(a1 + 832);
  v37[3] = __readfsqword(0x28u);
  if ( a5 )
  {
    v16 = *(_DWORD *)(v10 + 460);
    dtype_size = get_dtype_size();
    sub_1D6310(a1, 4u, dtype_size, a3, 0x3BEA45E214ADDC55LL, v16, *(double *)a6.m128i_i64, 0);
    v32 = *(int *)(*(_QWORD *)(a1 + 832) + 464LL);
    v25 = get_dtype_size();
    sub_1D6310(a1, 4u, v25, v9, 0x3BEA45E214ADDC55LL, v32, *(double *)a6.m128i_i64, 0);
    v17 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 464LL);
    if ( a5 == 1 )
    {
      v31 = 2;
      v13 = 2;
    }
    else if ( a5 == 2 )
    {
      v31 = 7;
      v13 = 7;
    }
    else
    {
      v31 = 8;
      v13 = 8;
    }
  }
  else
  {
    v12 = *(int *)(v10 + 464);
    v13 = 1;
    v14 = get_dtype_size();
    v15 = v12;
    v16 = a3;
    sub_1D6310(a1, 4u, v14, v9, 0x3BEA45E214ADDC55LL, v15, *(double *)a6.m128i_i64, 0);
    v17 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 464LL);
    v31 = 1;
  }
  sub_1D6840(a1, v8, v31, v16, v16, a2, a6, a7, a8);
  sub_1D6840(a1, v8, v31, v17, v17, a2, a6, a7, a8);
  if ( *(_BYTE *)(a1 + 145) != 5 )
  {
    v18 = get_dtype_size();
    sub_1D6310(a1, 0xEu, v18, v17, v16, v16, *(double *)a6.m128i_i64, 0);
    if ( v13 != 1 )
      goto LABEL_5;
LABEL_18:
    v19 = 0;
    v20 = 0;
    goto LABEL_8;
  }
  v35 = v17;
  v33 = 1;
  v36[0] = 1;
  v34 = get_dtype_size();
  v36[1] = v34;
  v37[0] = 0xFFFFFFFF00000000LL;
  v36[2] = v16;
  v37[1] = 0;
  v26 = get_dtype_size();
  v27 = sub_32ABC0(*(_QWORD *)(a1 + 152), v26, 1, *(double *)a6.m128i_i64);
  sub_120A10((__int64)v37, *(unsigned __int64 **)(a1 + 832), v27, v34, *(_QWORD *)(a1 + 40), 0);
  sub_1D6450(a1, 14, (unsigned __int8 *)v37, (unsigned __int8 *)&v33, (unsigned __int8 *)v36, a6, a7, a8);
  sub_11CDA0((__int64)v37);
  sub_11CDA0((__int64)v36);
  sub_11CDA0((__int64)&v33);
  if ( v13 == 1 )
    goto LABEL_18;
LABEL_5:
  if ( v13 == 2 )
  {
    v19 = 1;
    v20 = 1;
  }
  else if ( v13 == 7 )
  {
    v19 = 2;
    v20 = 2;
  }
  else
  {
    v19 = 7;
    v20 = 7;
  }
LABEL_8:
  if ( a3 != v16 )
  {
    v21 = get_dtype_size();
    sub_1D6310(a1, 4u, v21, v16, 0x3BEA45E214ADDC55LL, a3, *(double *)a6.m128i_i64, 0);
    if ( (*(_BYTE *)(a1 + 68) & 8) == 0 && !*(_BYTE *)(a1 + 145) && v20 )
    {
      v28 = get_dtype_size();
      v29 = *(int *)(*(_QWORD *)(a1 + 832) + 380LL);
      v30 = get_dtype_size();
      sub_1D6310(a1, 4u, v30, v16 + v28, 0x3BEA45E214ADDC55LL, v29, *(double *)a6.m128i_i64, 0);
    }
  }
  v22 = get_dtype_size() + v16;
  sub_3FB720(a1, 0x20u, v22, v19, 0, a6, a7, a8);
  sub_3FB720(a1, 0x20u, v22, v19, 3, a6, a7, a8);
  sub_3FB370(a1, 22, *(double *)a6.m128i_i64);
}

