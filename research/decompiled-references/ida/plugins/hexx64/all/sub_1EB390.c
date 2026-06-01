_DWORD *__fastcall sub_1EB390(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        double a7,
        __m128 a8)
{
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v13; // r14
  __int64 v14; // rsi
  unsigned __int64 v15; // r13
  __int64 v16; // rax
  _DWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rbx
  _QWORD *v22; // r12
  _DWORD *result; // rax
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v30; // [rsp+8h] [rbp-50h]
  __int64 v32; // [rsp+10h] [rbp-48h]
  int v33; // [rsp+1Ch] [rbp-3Ch]
  int v34; // [rsp+1Ch] [rbp-3Ch]

  v8 = a3;
  v9 = a4;
  v13 = a2[1];
  v14 = *(_QWORD *)(a1 + 8);
  v15 = 0xAAAAAAAAAAAAAAABLL * (((__int64)a2 - **(_QWORD **)a1) >> 3);
  v16 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v16 + 1) )
  {
    v33 = a6;
    v26 = qvector_reserve(a1 + 8, v14, v16 + 1, 8);
    a6 = v33;
    v9 = a4;
    *(_QWORD *)(a1 + 8) = v26;
    v14 = v26;
    v8 = a3;
    v16 = *(_QWORD *)(a1 + 16);
  }
  v17 = (_DWORD *)(v14 + 8 * v16);
  *v17 = v15;
  v17[1] = v13;
  ++*(_QWORD *)(a1 + 16);
  v18 = a2[1];
  v19 = *a2;
  if ( a2[2] < (unsigned __int64)(v18 + 1) )
  {
    v34 = a6;
    v32 = v9;
    v30 = v8;
    v27 = qvector_reserve((__int64)a2, v19, v18 + 1, 64);
    v18 = a2[1];
    a6 = v34;
    *a2 = v27;
    v9 = v32;
    v19 = v27;
    v8 = v30;
  }
  v20 = v18 << 6;
  v21 = v19 + v20;
  *(_OWORD *)v21 = 0;
  *(_BYTE *)(v21 + 56) = 0;
  *(_QWORD *)(v21 + 16) = 0;
  *(_QWORD *)(v21 + 24) = 0;
  *(_QWORD *)(v21 + 32) = 0;
  *(_OWORD *)(v21 + 40) = 0;
  ++a2[1];
  v22 = (_QWORD *)(v19 + v20 + 16);
  *(_QWORD *)v21 = v9;
  *(_QWORD *)(v21 + 8) = a5;
  *(_BYTE *)(v21 + 56) = a6;
  if ( (_BYTE)a6 )
  {
    sub_127FE0(v8, (__int64 *)(v19 + v20 + 16), a5, 1, a5, a6, 0.0, a8);
    result = (_DWORD *)sub_64780(v22, (_QWORD *)(a1 + 56));
    if ( (_BYTE)result )
      return result;
  }
  else
  {
    sub_123EA0(v8, (__int64 *)(v19 + v20 + 16), a5, 1, 0xFFFF0000, 0.0);
    result = (_DWORD *)sub_64780(v22, (_QWORD *)(a1 + 56));
    if ( (_BYTE)result )
      return result;
  }
  result = (_DWORD *)sub_318470((unsigned __int64 **)(v21 + 32), a1 + 72);
  if ( !(_BYTE)result )
  {
    v24 = *(_QWORD *)(a1 + 40);
    v25 = *(_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(a1 + 48) < (unsigned __int64)(v24 + 1) )
    {
      v28 = qvector_reserve(a1 + 32, v25, v24 + 1, 8);
      *(_QWORD *)(a1 + 32) = v28;
      v25 = v28;
      v24 = *(_QWORD *)(a1 + 40);
    }
    result = (_DWORD *)(v25 + 8 * v24);
    *result = v15;
    result[1] = v13;
    ++*(_QWORD *)(a1 + 40);
  }
  return result;
}

