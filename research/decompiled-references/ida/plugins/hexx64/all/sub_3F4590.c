unsigned __int64 __fastcall sub_3F4590(__int64 *a1, int a2, int a3, int a4, int a5)
{
  __int64 v8; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rsi
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rbp
  unsigned __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 *v50; // [rsp+0h] [rbp-58h]
  int v51; // [rsp+Ch] [rbp-4Ch]
  int v52; // [rsp+Ch] [rbp-4Ch]
  unsigned __int64 v53; // [rsp+18h] [rbp-40h]

  v8 = a1[9];
  v53 = __readfsqword(0x28u);
  v50 = a1 + 9;
  v10 = a1[10];
  if ( a1[11] < (unsigned __int64)(v10 + 1) )
  {
    v51 = a2;
    v39 = qvector_reserve((__int64)v50, v8, v10 + 1, 8);
    a2 = v51;
    a1[9] = v39;
    v8 = v39;
    v10 = a1[10];
  }
  *(_QWORD *)(v8 + 8 * v10) = 0x3FF0000000000000LL;
  v11 = a1[7];
  ++a1[10];
  v12 = a1[6];
  if ( a1[8] < (unsigned __int64)(v11 + 1) )
  {
    v52 = a2;
    v49 = qvector_reserve((__int64)(a1 + 6), v12, v11 + 1, 4);
    a2 = v52;
    a1[6] = v49;
    v12 = v49;
    v11 = a1[7];
  }
  *(_DWORD *)(v12 + 4 * v11) = a2;
  v13 = a1[10];
  v14 = a1[11];
  ++a1[7];
  v15 = a1[9];
  if ( v14 < v13 + 1 )
  {
    v48 = qvector_reserve((__int64)v50, v15, v13 + 1, 8);
    a1[9] = v48;
    v15 = v48;
    v13 = a1[10];
  }
  *(_QWORD *)(v15 + 8 * v13) = 0xBFF0000000000000LL;
  v16 = a1[7];
  v17 = a1[6];
  ++a1[10];
  if ( a1[8] < (unsigned __int64)(v16 + 1) )
  {
    v47 = qvector_reserve((__int64)(a1 + 6), v17, v16 + 1, 4);
    a1[6] = v47;
    v17 = v47;
    v16 = a1[7];
  }
  *(_DWORD *)(v17 + 4 * v16) = a3;
  v18 = a1[10];
  v19 = a1[11];
  v20 = a1[9];
  ++a1[7];
  if ( v19 < v18 + 1 )
  {
    v46 = qvector_reserve((__int64)v50, v20, v18 + 1, 8);
    a1[9] = v46;
    v20 = v46;
    v18 = a1[10];
  }
  *(_QWORD *)(v20 + 8 * v18) = 0xBFF0000000000000LL;
  v21 = a1[7];
  v22 = a1[6];
  ++a1[10];
  if ( a1[8] < (unsigned __int64)(v21 + 1) )
  {
    v45 = qvector_reserve((__int64)(a1 + 6), v22, v21 + 1, 4);
    a1[6] = v45;
    v22 = v45;
    v21 = a1[7];
  }
  *(_DWORD *)(v22 + 4 * v21) = a4;
  v23 = a1[11];
  ++a1[7];
  v24 = a1[10];
  v25 = a1[9];
  if ( v23 < v24 + 1 )
  {
    v44 = qvector_reserve((__int64)v50, v25, v24 + 1, 8);
    a1[9] = v44;
    v25 = v44;
    v24 = a1[10];
  }
  *(_QWORD *)(v25 + 8 * v24) = 0x3FF0000000000000LL;
  v26 = a1[7];
  ++a1[10];
  v27 = a1[6];
  if ( a1[8] < (unsigned __int64)(v26 + 1) )
  {
    v43 = qvector_reserve((__int64)(a1 + 6), v27, v26 + 1, 4);
    a1[6] = v43;
    v27 = v43;
    v26 = a1[7];
  }
  *(_DWORD *)(v27 + 4 * v26) = a5;
  v28 = a1[1];
  v29 = a1[2];
  ++a1[7];
  v30 = *a1;
  if ( v29 < v28 + 1 )
  {
    v42 = qvector_reserve((__int64)a1, v30, v28 + 1, 8);
    *a1 = v42;
    v30 = v42;
    v28 = a1[1];
  }
  *(_QWORD *)(v30 + 8 * v28) = 0;
  v31 = a1[4];
  v32 = a1[5];
  ++a1[1];
  v33 = a1[3];
  if ( v32 < v31 + 1 )
  {
    v41 = qvector_reserve((__int64)(a1 + 3), v33, v31 + 1, 8);
    a1[3] = v41;
    v33 = v41;
    v31 = a1[4];
  }
  *(_QWORD *)(v33 + 8 * v31) = 0;
  v34 = a1[13];
  v35 = a1[7];
  v36 = a1[14];
  ++a1[4];
  v37 = a1[12];
  if ( v36 < v34 + 1 )
  {
    v40 = qvector_reserve((__int64)(a1 + 12), v37, v34 + 1, 4);
    a1[12] = v40;
    v37 = v40;
    v34 = a1[13];
  }
  *(_DWORD *)(v37 + 4 * v34) = v35;
  ++a1[13];
  return v53 - __readfsqword(0x28u);
}

