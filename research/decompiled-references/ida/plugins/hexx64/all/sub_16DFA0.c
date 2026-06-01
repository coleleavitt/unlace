__int64 __fastcall sub_16DFA0(__int64 a1, __int64 a2, __m128i a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rax
  __int64 v6; // r14
  _DWORD *v7; // rax
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13[9]; // [rsp+0h] [rbp-48h] BYREF

  v13[3] = __readfsqword(0x28u);
  if ( **(_DWORD **)(a1 + 56) == 44
    && (v5 = sub_1229A0(*(_QWORD *)(a2 + 48)), (v6 = v5) != 0)
    && *(_DWORD *)v5 == 4
    && ((v7 = *(_DWORD **)(v5 + 8)) == nullptr || *v7 == 55)
    && (unsigned __int8)sub_11FD80((char *)(v6 + 32), v13, 0)
    && v13[0] == 1
    && (LOBYTE(v8) = sub_125B60((unsigned __int8 *)(v6 + 64), *(_QWORD *)(a1 + 56) + 32LL, 0, *(double *)a3.m128i_i64),
        v3 = v8,
        (_BYTE)v8) )
  {
    sub_123A40((__int64)v13, (unsigned __int8 *)(*(_QWORD *)(a1 + 56) + 32LL), v9, v10);
    v11 = *(_QWORD *)(a1 + 64);
    v12 = *(unsigned int *)(*(_QWORD *)(a1 + 56) + 72LL);
    if ( (unsigned int)v12 >= *(_DWORD *)(v11 + 64) )
      sub_167AF0(*(double *)a3.m128i_i64);
    sub_167DA0(a1, a2, *(_QWORD *)(*(_QWORD *)(v11 + 528) + 8 * v12), 32, (__int64)v13, v6, a3);
    sub_11CDA0((__int64)v13);
    sub_66FA0(*(_QWORD *)(a1 + 64), 1);
  }
  else
  {
    return 0;
  }
  return v3;
}

