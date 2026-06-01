__int64 __fastcall sub_323D0(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  _QWORD *v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  _QWORD *v14; // r8
  __int64 v15; // rax
  __int64 v16; // rbp
  unsigned __int64 v17; // rdi
  __m128i v18; // xmm0
  __m128i *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __m128i v26; // [rsp+0h] [rbp-48h] BYREF
  __int64 v27; // [rsp+10h] [rbp-38h]
  unsigned __int64 v28; // [rsp+18h] [rbp-30h]

  v28 = __readfsqword(0x28u);
  v6 = a4;
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  v7 = sub_97AE0(a4);
  if ( v7 == -1 )
    goto LABEL_16;
  v8 = v7 + 7;
  v9 = (_QWORD *)sub_5A0C0(a3 + 3, v6, 6, 4);
  LOBYTE(v27) = 0;
  v12 = v9[52];
  v13 = v9[54];
  v6 = (__int64)v9;
  v14 = v9 + 52;
  v15 = v9[53];
  v16 = (v8 >> 3 == 0) + (v8 >> 3) - 1;
  v26.m128i_i64[0] = 0;
  v26.m128i_i64[1] = v16;
  v17 = v15 + 1;
  if ( (unsigned __int64)&v26 < v12 || (v11 = v12 + 24 * v13, (unsigned __int64)&v26 >= v11) )
  {
    if ( v13 < v17 )
    {
      v24 = qvector_reserve(v14, v12, v15 + 1, 24);
      *(_QWORD *)(v6 + 416) = v24;
      v12 = v24;
      v15 = *(_QWORD *)(v6 + 424);
    }
    v18 = _mm_load_si128(&v26);
    v19 = (__m128i *)(v12 + 24 * v15);
    v19[1].m128i_i64[0] = v27;
    *v19 = v18;
  }
  else
  {
    if ( v13 < v17 )
    {
      v25 = qvector_reserve(v14, v12, v15 + 1, 24);
      *(_QWORD *)(v6 + 416) = v25;
      v12 = v25;
      v15 = *(_QWORD *)(v6 + 424);
    }
    v23 = v12 + 24 * v15;
    *(_QWORD *)v23 = 0;
    *(_QWORD *)(v23 + 8) = v16;
    *(_BYTE *)(v23 + 16) = 0;
  }
  ++*(_QWORD *)(v6 + 424);
  while ( (*(_QWORD *)(v6 + 232) & 0x7FFFFFFFFFFFFFFFLL) == 0 || *(_QWORD *)(v6 + 232) == -1 )
  {
    if ( under_debugger )
      BUG();
    interr(30478);
LABEL_16:
    v6 = sub_5A0C0(a3 + 3, v6, 2, 4);
  }
  v20 = sub_5C500(*a3, 0, v6 + 232, v10, v14, v11, v26.m128i_i64[0], v26.m128i_i64[1]);
  *(_DWORD *)a1 = 1;
  *(_DWORD *)(v6 + 392) = 3;
  *(_QWORD *)(v6 + 400) = v20;
  *(_QWORD *)(v6 + 408) = v21;
  *(_QWORD *)(a1 + 8) = v6;
  return a1;
}

