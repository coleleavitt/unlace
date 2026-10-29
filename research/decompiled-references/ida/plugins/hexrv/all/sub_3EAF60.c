unsigned int *__fastcall sub_3EAF60(__int64 a1, int a2, int a3, int a4, double a5)
{
  int dtype_size; // eax
  __int64 v7; // rdx
  int v8; // r12d
  int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // r13
  int v12; // edx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r10
  int v16; // r12d
  __int64 v19; // [rsp+8h] [rbp-40h]

  dtype_size = get_dtype_size();
  v7 = *(_QWORD *)(a1 + 832);
  v8 = dtype_size;
  v9 = dtype_size;
  v10 = *(_QWORD *)(v7 + 712);
  if ( !v10 )
    goto LABEL_7;
  v11 = *(int *)(*(_QWORD *)(v7 + 704) + 4 * v10 - 4);
  *(_QWORD *)(v7 + 712) = v10 - 1;
  sub_3E8D60(a1, 4u, v8, a3, 0x3BEA45E214ADDC55LL, v11, 0);
  v12 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL);
  if ( v12 <= v8 )
  {
    sub_3E8D60(a1, 0xEu, v12, v11, a4, v11, 0);
    return sub_3E8D60(
             a1,
             (unsigned int)((unsigned __int16)(*(_WORD *)(a1 + 48) - 500) > 2u) + 12,
             *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
             a2,
             v11,
             a2,
             0);
  }
  sub_3EA150(a1, v8, v12, v11, v11, 1u, a5);
  v13 = *(_QWORD *)(a1 + 832);
  v14 = *(_QWORD *)(v13 + 712);
  if ( !v14 )
LABEL_7:
    sub_3E4E50(a5);
  v15 = *(int *)(*(_QWORD *)(v13 + 704) + 4 * v14 - 4);
  *(_QWORD *)(v13 + 712) = v14 - 1;
  v16 = v15;
  v19 = v15;
  sub_3E8D60(a1, 4u, v9, a4, 0x3BEA45E214ADDC55LL, v15, 0);
  sub_3EA150(a1, v9, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), v16, v16, 1u, a5);
  sub_3E8D60(a1, 0xEu, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), v11, v19, v11, 0);
  sub_3E6F70(*(_QWORD *)(a1 + 832), v16);
  return sub_3E8D60(
           a1,
           (unsigned int)((unsigned __int16)(*(_WORD *)(a1 + 48) - 500) > 2u) + 12,
           *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
           a2,
           v11,
           a2,
           0);
}

