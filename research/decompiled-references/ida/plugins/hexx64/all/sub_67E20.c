__int64 __fastcall sub_67E20(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r9d
  __int64 v13; // rsi
  __int64 v14; // rbp
  int v15; // r14d
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __m128i v25; // xmm0
  int v26; // r12d
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v31; // rax
  __int64 v32; // rax

  v5 = sub_1D5170((__int64)a1, a2, a3, a4);
  *(_DWORD *)(v5 + 76) = 0;
  v6 = *(_DWORD *)(v5 + 24);
  BYTE1(v6) &= ~2u;
  LOBYTE(v6) = v6 | 0x80;
  *(_DWORD *)(v5 + 24) = v6;
  v9 = sub_1D5170((__int64)a1, a2, v7, v8);
  *(_DWORD *)(v5 + 76) = 3;
  v13 = *(_QWORD *)(v5 + 368);
  v14 = v9;
  v15 = *(_DWORD *)(v5 + 72) + 1;
  v16 = *(_QWORD *)(v5 + 376);
  v17 = v16 + 1;
  if ( *(_QWORD *)(v5 + 384) < (unsigned __int64)(v16 + 1) )
  {
    v31 = qvector_reserve(v5 + 368, v13, v17, 4);
    *(_QWORD *)(v5 + 368) = v31;
    v13 = v31;
    v16 = *(_QWORD *)(v5 + 376);
  }
  *(_DWORD *)(v13 + 4 * v16) = v15;
  ++*(_QWORD *)(v5 + 376);
  sub_338690(v5, a2, v17, v10, v11, v12);
  v18 = sub_330F80(a1, *(_QWORD *)(a2 + 24));
  sub_330D80(v5, v18, 0);
  v20 = *(_QWORD *)(v14 + 160);
  *(_QWORD *)(v14 + 160) = *(_QWORD *)(v5 + 160);
  v21 = *(_QWORD *)(v5 + 168);
  *(_QWORD *)(v5 + 160) = v20;
  v22 = *(_QWORD *)(v14 + 168);
  *(_QWORD *)(v14 + 168) = v21;
  v23 = *(_QWORD *)(v5 + 176);
  *(_QWORD *)(v5 + 168) = v22;
  v24 = *(_QWORD *)(v14 + 176);
  *(_QWORD *)(v14 + 176) = v23;
  v25 = _mm_loadu_si128((const __m128i *)(v14 + 184));
  *(_QWORD *)(v14 + 184) = *(_QWORD *)(v5 + 184);
  *(_QWORD *)(v14 + 192) = *(_QWORD *)(v5 + 192);
  v26 = *(_DWORD *)(v5 + 72);
  *(_QWORD *)(v5 + 176) = v24;
  *(__m128i *)(v5 + 184) = v25;
  v27 = *(_QWORD *)(v14 + 352);
  v28 = *(_QWORD *)(v14 + 344);
  v29 = v27 + 1;
  if ( *(_QWORD *)(v14 + 360) < (unsigned __int64)(v27 + 1) )
  {
    v32 = qvector_reserve(v14 + 344, v28, v29, 4);
    *(_QWORD *)(v14 + 344) = v32;
    v28 = v32;
    v27 = *(_QWORD *)(v14 + 352);
  }
  *(_DWORD *)(v28 + 4 * v27) = v26;
  ++*(_QWORD *)(v14 + 352);
  sub_1D51C0(v5, v14, v29, v19);
  return v5;
}

