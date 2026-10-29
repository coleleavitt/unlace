__int64 __fastcall sub_B8660(__int64 a1, char *a2, __int64 a3, char a4, double a5, __m128 a6)
{
  char v6; // al
  unsigned __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // r15
  signed int v10; // eax
  unsigned int v11; // ebp
  unsigned __int64 v12; // xmm0_8
  _QWORD *v14; // rdx
  unsigned __int64 v15; // rax
  __m128i v16; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v6 = *a2;
  v17 = __readfsqword(0x28u);
  if ( !a4 )
  {
    if ( v6 != 9 )
      return 0;
    v14 = *(_QWORD **)(a1 + 56);
    v15 = *(int *)(*((_QWORD *)a2 + 1) + 16LL);
    if ( v15 < v14[1] )
    {
      sub_125180((__int64)a2, *(unsigned __int8 **)(*v14 + 8 * v15));
      *(_BYTE *)(a1 + 40) = 1;
      return 0;
    }
    if ( !under_debugger )
      sub_383060(0xC37Eu, a5);
LABEL_17:
    BUG();
  }
  if ( v6 != 9 )
  {
    if ( !under_debugger )
      sub_383060(0xC37Cu, a5);
    goto LABEL_17;
  }
  v7 = *(int *)(*((_QWORD *)a2 + 1) + 16LL);
  if ( v7 >= *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL) )
  {
    if ( !under_debugger )
      sub_383060(0xC37Du, a5);
    goto LABEL_17;
  }
  v8 = *(_QWORD *)(a1 + 48);
  v9 = *((int *)a2 + 1);
  v10 = sub_138140(*(_QWORD **)(v8 + 328), v9, 1);
  v11 = v10;
  if ( v10 != -1 )
  {
    v16.m128i_i64[1] = v9;
    v16.m128i_i64[0] = v10;
    sub_316BB0((__int64 *)(v8 + 192), &v16, a5, a6);
    *(_QWORD *)(**(_QWORD **)(a1 + 56) + 8 * v7) = a2;
    v12 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*((_DWORD *)a2 + 1)), _mm_cvtsi32_si128(v11)).m128i_u64[0];
    sub_11CDA0((__int64)a2);
    *a2 = 1;
    *(_QWORD *)(a2 + 4) = v12;
    return 0;
  }
  return v11;
}

