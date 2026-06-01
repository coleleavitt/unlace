unsigned __int64 __fastcall sub_3EA3B0(__int64 a1, int a2, int a3, int a4, double a5)
{
  unsigned __int16 v5; // ax
  unsigned __int8 v7; // r10
  __int64 v9; // rdx
  int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rax
  signed int v13; // ebp
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // r14d
  int v17; // eax
  unsigned __int8 v19; // [rsp+7h] [rbp-71h]
  unsigned __int8 v20; // [rsp+8h] [rbp-70h]
  unsigned __int8 v21[16]; // [rsp+10h] [rbp-68h] BYREF
  _DWORD v22[6]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v5 = *(_WORD *)(a1 + 48) - 69;
  if ( v5 > 2u )
  {
    if ( !under_debugger )
      sub_37DDE0(0xCE25u, a5);
    BUG();
  }
  v7 = byte_40C227[v5];
  v9 = *(_QWORD *)(a1 + 832);
  v19 = byte_40C224[v5];
  v10 = 2 * *(unsigned __int16 *)(a1 + 842);
  v11 = **(int **)(v9 + 632);
  if ( (_DWORD)v11 == a2 || (_DWORD)v11 == a3 )
  {
    v20 = byte_40C227[v5];
    sub_1D1C90(a1, 3u, *(_DWORD *)(v9 + 80), 0, 0x3BEA45E214ADDC55LL, v11, 0);
    v9 = *(_QWORD *)(a1 + 832);
    v7 = v20;
  }
  v12 = *(_QWORD *)(v9 + 712);
  if ( !v12
    || (v13 = *(_DWORD *)(*(_QWORD *)(v9 + 704) + 4 * v12 - 4),
        *(_QWORD *)(v9 + 712) = v12 - 1,
        *(_QWORD *)&a5 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v10), _mm_cvtsi32_si128(v13)).m128i_u64[0],
        sub_3EA150(a1, *(unsigned __int16 *)(a1 + 842), v10, a2, v13, v7, a5),
        v14 = *(_QWORD *)(a1 + 832),
        (v15 = *(_QWORD *)(v14 + 712)) == 0) )
  {
    sub_3E4E50(a5);
  }
  v16 = *(_DWORD *)(*(_QWORD *)(v14 + 704) + 4 * v15 - 4);
  *(_QWORD *)(v14 + 712) = v15 - 1;
  sub_3EA150(a1, *(unsigned __int16 *)(a1 + 842), v10, a3, v16, v19, a5);
  sub_3E8D60(a1, 0xEu, v10, v13, v16, v13, 0);
  sub_3E6F70(*(_QWORD *)(a1 + 832), v16);
  *(_DWORD *)v21 = 1;
  *(double *)&v21[4] = a5;
  v17 = *(unsigned __int16 *)(a1 + 842);
  v22[0] = 1;
  v22[2] = a4;
  v22[1] = v17;
  sub_3E9430(a1, 11, v21, nullptr, (unsigned __int8 *)v22);
  sub_3E6F70(*(_QWORD *)(a1 + 832), v13);
  sub_1188E0((__int64)v22);
  sub_1188E0((__int64)v21);
  return v23 - __readfsqword(0x28u);
}

