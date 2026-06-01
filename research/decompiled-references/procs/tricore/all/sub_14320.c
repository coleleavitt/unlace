__int64 __fastcall sub_14320(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // ebp
  __int64 v8; // r13
  int v9; // r12d
  bool v10; // zf
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __m128i v19; // [rsp+0h] [rbp-48h] BYREF
  __int64 v20; // [rsp+10h] [rbp-38h]
  unsigned __int64 v21; // [rsp+18h] [rbp-30h]

  v6 = 0;
  v21 = __readfsqword(0x28u);
  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 8) = 0;
  v8 = *(_QWORD *)(a4 + 16);
  v9 = *(unsigned __int16 *)(a4 + 24);
  v10 = *(_BYTE *)(a4 + 81) == 5;
  v19.m128i_i64[0] = -1;
  v19.m128i_i64[1] = v8;
  LOWORD(v20) = v9;
  if ( v10 )
    v6 = *(_BYTE *)(a4 + 121) == 0;
  v11 = *(_QWORD *)a2;
  v12 = *(_QWORD *)(a2 + 16);
  WORD1(v20) = v6;
  if ( (unsigned __int64)&v19 >= v11 && (unsigned __int64)&v19 < v11 + 24 * v12 )
  {
    if ( !v12 )
    {
      v17 = qvector_reserve(a2, v11, 1, 24, a5, a6);
      v18 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v17;
      v11 = v17 + 24 * v18;
    }
    *(_QWORD *)v11 = -1;
    *(_QWORD *)(v11 + 8) = v8;
    *(_DWORD *)(v11 + 16) = v9 | (v6 << 16);
  }
  else
  {
    if ( !v12 )
    {
      v15 = qvector_reserve(a2, v11, 1, 24, a5, a6);
      v16 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v15;
      v11 = v15 + 24 * v16;
    }
    v13 = _mm_load_si128(&v19);
    *(_QWORD *)(v11 + 16) = v20;
    *(__m128i *)v11 = v13;
  }
  ++*(_QWORD *)(a2 + 8);
  return 1;
}
