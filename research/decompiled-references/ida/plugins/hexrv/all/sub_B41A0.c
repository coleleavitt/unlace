__int64 __fastcall sub_B41A0(__int64 a1, char *a2, __int64 a3, char a4)
{
  char v4; // al
  unsigned __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // r15
  signed int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebp
  unsigned __int64 v14; // rbp
  _QWORD v16[11]; // [rsp+0h] [rbp-58h] BYREF

  v4 = *a2;
  v16[3] = __readfsqword(0x28u);
  if ( !a4 )
  {
    if ( v4 != 9 )
      return 0;
    if ( (unsigned __int64)*(int *)(*((_QWORD *)a2 + 1) + 16LL) < *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL) )
    {
      sub_120CC0(a2);
      *(_BYTE *)(a1 + 40) = 1;
      return 0;
    }
    if ( !under_debugger )
      sub_37DDE0(50046);
LABEL_17:
    BUG();
  }
  if ( v4 != 9 )
  {
    if ( !under_debugger )
      sub_37DDE0(50044);
    goto LABEL_17;
  }
  v5 = *(int *)(*((_QWORD *)a2 + 1) + 16LL);
  if ( v5 >= *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL) )
  {
    if ( !under_debugger )
      sub_37DDE0(50045);
    goto LABEL_17;
  }
  v6 = *(_QWORD *)(a1 + 48);
  v7 = *((int *)a2 + 1);
  v8 = sub_133C80(*(_QWORD *)(v6 + 328), v7, 1);
  v13 = v8;
  if ( v8 != -1 )
  {
    v16[1] = v7;
    v16[0] = v8;
    ((void (__fastcall *)(__int64, _QWORD *, __int64, __int64, __int64, __int64))sub_311AB0)(
      v6 + 192,
      v16,
      v9,
      v10,
      v11,
      v12);
    *(_QWORD *)(**(_QWORD **)(a1 + 56) + 8 * v5) = a2;
    v14 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*((_DWORD *)a2 + 1)), _mm_cvtsi32_si128(v13)).m128i_u64[0];
    sub_1188E0(a2);
    *a2 = 1;
    *(_QWORD *)(a2 + 4) = v14;
    return 0;
  }
  return v13;
}

