__int64 __fastcall sub_238E0(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // rbx
  unsigned int v7; // r13d
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  const void *v12; // r12
  unsigned __int64 v13; // rax
  __int64 v14; // r13
  unsigned int v15; // ebx
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v21; // r13
  __int64 v22; // rax
  char v23; // [rsp+0h] [rbp-58h]
  __int64 v24; // [rsp+8h] [rbp-50h]
  unsigned int v25; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v27; // [rsp+18h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v25 = 0;
  v4 = sub_23020(a1, 2u, a2, &v25);
  if ( !v4 )
    return 0;
  v26 = 0;
  v5 = v25;
  v6 = v4;
  v7 = sub_231F0(a1, a2, (int *)&v26, 2u);
  v8 = sub_23020(a1, 2u, v7, &v25);
  v12 = (const void *)v8;
  if ( !v8 )
    return 0;
  v13 = v8 + v26;
  if ( v13 > v6 + v5 || v13 < (unsigned __int64)v12 )
    sub_DA00((__int64)"Stream offset overrun for stream %d (offset %u)", 2, v7, v9, v10, v11, v23);
  v14 = a3[1];
  v15 = v26 >> 1;
  v16 = v26 >> 1;
  v17 = v16;
  if ( v14 )
  {
    v21 = v14 - 1;
    v18 = *a3;
    v17 = v16 + v21;
    v14 = 2 * v21;
    v19 = v17 + 1;
    if ( a3[2] >= (unsigned __int64)(v17 + 1) )
      goto LABEL_7;
LABEL_11:
    v24 = v19;
    v22 = qvector_reserve();
    v19 = v24;
    *a3 = v22;
    v18 = v22;
    goto LABEL_7;
  }
  v18 = *a3;
  v19 = v16 + 1;
  if ( a3[2] < (unsigned __int64)(v16 + 1) )
    goto LABEL_11;
LABEL_7:
  a3[1] = v19;
  *(_WORD *)(v18 + 2 * v17) = 0;
  memmove((void *)(v14 + *a3), v12, 2 * v16);
  return v15;
}
