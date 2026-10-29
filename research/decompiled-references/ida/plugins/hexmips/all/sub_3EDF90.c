unsigned __int64 __fastcall sub_3EDF90(__int64 a1, int a2, int a3, int a4, double a5)
{
  int v5; // ebx
  unsigned __int16 v6; // ax
  unsigned __int8 v9; // r10
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // rax
  signed int v14; // ebp
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // r14d
  int v18; // eax
  unsigned __int8 v20; // [rsp+0h] [rbp-78h]
  unsigned __int8 v21; // [rsp+8h] [rbp-70h]
  bool v22; // [rsp+Fh] [rbp-69h]
  unsigned __int8 v23[16]; // [rsp+10h] [rbp-68h] BYREF
  _DWORD v24[6]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v5 = *(unsigned __int16 *)(a1 + 890);
  v25 = __readfsqword(0x28u);
  if ( (((_WORD)v5 - 4) & 0xFFFB) != 0 )
  {
    if ( !under_debugger )
      sub_37E160(0xCC69u, a5);
LABEL_20:
    BUG();
  }
  v6 = *(_WORD *)(a1 + 48);
  if ( v6 > 0x6A0u )
    goto LABEL_16;
  if ( v6 > 0x69Eu )
  {
    v22 = v6 != 1695;
    v9 = 0;
    goto LABEL_7;
  }
  if ( v6 == 504 )
  {
    v22 = 0;
    v9 = 1;
    goto LABEL_7;
  }
  if ( v6 != 1694 )
  {
LABEL_16:
    if ( !under_debugger )
      sub_37E160(0xD43Bu, a5);
    goto LABEL_20;
  }
  v22 = 1;
  v9 = 1;
LABEL_7:
  v10 = *(_QWORD *)(a1 + 832);
  v11 = 2 * v5;
  v12 = **(int **)(v10 + 696);
  if ( (_DWORD)v12 == a2 || (_DWORD)v12 == a3 )
  {
    v20 = v9;
    sub_1D1F50(a1, 3u, *(_DWORD *)(v10 + 80), 0, 0x3BEA45E214ADDC55LL, v12, 0);
    v10 = *(_QWORD *)(a1 + 832);
    v9 = v20;
  }
  v13 = *(_QWORD *)(v10 + 760);
  if ( !v13
    || (v21 = v9,
        v14 = *(_DWORD *)(*(_QWORD *)(v10 + 752) + 4 * v13 - 4),
        *(_QWORD *)(v10 + 760) = v13 - 1,
        *(_QWORD *)&a5 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v11), _mm_cvtsi32_si128(v14)).m128i_u64[0],
        sub_3EDDF0((_QWORD *)a1, *(unsigned __int16 *)(a1 + 890), v11, a2, v14, v9),
        v15 = *(_QWORD *)(a1 + 832),
        (v16 = *(_QWORD *)(v15 + 760)) == 0) )
  {
    sub_3E5460(a5);
  }
  v17 = *(_DWORD *)(*(_QWORD *)(v15 + 752) + 4 * v16 - 4);
  *(_QWORD *)(v15 + 760) = v16 - 1;
  sub_3EDDF0((_QWORD *)a1, *(unsigned __int16 *)(a1 + 890), v11, a3, v17, v21);
  sub_3EAB70(a1, 0xEu, v11, v14, v17, v14, 0);
  sub_3E8540(*(_QWORD *)(a1 + 832), v17);
  v24[2] = a4;
  *(_DWORD *)v23 = 1;
  *(double *)&v23[4] = a5;
  v18 = *(unsigned __int16 *)(a1 + 890);
  v24[0] = 1;
  v24[1] = v18;
  sub_3EB6F0((_QWORD *)a1, v22 + 10, v23, nullptr, (unsigned __int8 *)v24);
  sub_3E8540(*(_QWORD *)(a1 + 832), v14);
  sub_118BA0((__int64)v24);
  sub_118BA0((__int64)v23);
  return v25 - __readfsqword(0x28u);
}

