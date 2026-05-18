__int64 __fastcall sub_D61F0(__int64 a1)
{
  __int64 v1; // r13
  int *v3; // rsi
  int *v4; // rsi
  __int64 v5; // r14
  int v6; // ebx
  __int64 v7; // r12
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  _QWORD *v14; // rax
  __int64 v15; // r9
  int v16; // edx

  v1 = 0;
  v3 = *(int **)(a1 + 24);
  if ( v3 )
    v1 = sub_D0930(a1 + 608, v3);
  v4 = *(int **)(a1 + 16);
  if ( v4 )
    v1 |= sub_D0930(a1 + 608, v4);
  v5 = -1;
  v6 = *(unsigned __int8 *)(a1 + 72) - 1;
  if ( v6 <= 0 )
    return v5;
  v7 = a1 + 112LL * v6 + 968;
  do
  {
    v8 = *(_QWORD *)v7;
    v9 = *(_QWORD *)(a1 + 8);
    v10 = *(unsigned __int8 *)(*(_QWORD *)v7 + 16LL);
    if ( (*(_BYTE *)(v9 + 104 * v10 + 68) & 8) == 0
      || (*(_BYTE *)(a1 + 69) & 1) == 0 && (*(_BYTE *)(v8 + 49) & 0x10) == 0 )
    {
      goto LABEL_25;
    }
    v11 = *(_QWORD *)(v8 + 8);
    if ( (v1 & v11) != 0 )
      goto LABEL_25;
    v12 = *(_QWORD *)(a1 + 152);
    v13 = v12 + 56LL * *(int *)(a1 + 140);
    if ( v12 >= v13 )
    {
      v5 &= ~v11;
      goto LABEL_22;
    }
    v14 = *(_QWORD **)(a1 + 152);
    v15 = v9 + 104 * v10;
    while ( (v11 & v14[6]) == 0 )
    {
LABEL_16:
      v14 += 7;
      if ( v13 <= (unsigned __int64)v14 )
        goto LABEL_17;
    }
    if ( (*(_BYTE *)(*v14 + 4LL) & 1) != 0 )
    {
      if ( *(_DWORD *)(*v14 + 52LL) != *(_DWORD *)(v15 + 72) )
        goto LABEL_25;
      goto LABEL_16;
    }
    if ( v13 > (unsigned __int64)v14 )
      goto LABEL_25;
LABEL_17:
    v5 &= ~v11;
    while ( 1 )
    {
      if ( (v11 & *(_QWORD *)(v12 + 48)) != 0 )
        *(_WORD *)(v12 + 18) |= 4u;
      v12 += 56LL;
      if ( v13 <= v12 )
        break;
      v11 = *(_QWORD *)(v8 + 8);
    }
LABEL_22:
    v16 = *(unsigned __int8 *)(a1 + 72);
    if ( v16 - 1 != v6 )
    {
      memmove((void *)(v7 - 96), (const void *)(a1 + 112LL * (v6 + 1) + 872), 112 * (v16 - 1 - v6));
      LOBYTE(v16) = *(_BYTE *)(a1 + 72);
    }
    *(_BYTE *)(a1 + 72) = v16 - 1;
LABEL_25:
    v7 -= 112;
    --v6;
  }
  while ( v6 );
  return v5;
}
