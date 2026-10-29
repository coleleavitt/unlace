__int64 __fastcall sub_2CDD0(__int64 a1, unsigned __int64 *a2, __int64 *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rbx
  bool v8; // cc
  _DWORD *v9; // rsi
  char v10; // al
  __int64 v11; // rax
  int v12; // esi
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 result; // rax
  int v16; // edx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rsi
  int v20; // r14d
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // rsi
  _DWORD *v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax

  v5 = a3[1];
  v6 = *a3;
  if ( a3[2] < (unsigned __int64)(v5 + 1) )
  {
    v22 = qvector_reserve();
    v5 = a3[1];
    *a3 = v22;
    v6 = v22;
  }
  v7 = v6 + 80 * v5;
  *(_OWORD *)v7 = 0;
  *(_QWORD *)(v7 + 40) = 0;
  *(_OWORD *)(v7 + 48) = 0;
  *(_QWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 64) = 0;
  *(_WORD *)(v7 + 72) = 0;
  *(_OWORD *)(v7 + 24) = 0;
  ++a3[1];
  v8 = *(_QWORD *)(v7 + 56) <= 4u;
  v9 = *(_DWORD **)(v7 + 40);
  *(_QWORD *)v7 = *a2;
  *(_QWORD *)(v7 + 8) = a2[1];
  if ( v8 )
  {
    v21 = qvector_reserve();
    *(_QWORD *)(v7 + 40) = v21;
    v9 = (_DWORD *)v21;
  }
  *(_QWORD *)(v7 + 48) = 5;
  *v9 = 1096040772;
  *(_BYTE *)(*(_QWORD *)(v7 + 40) + 4LL) = 0;
  v10 = *(_BYTE *)(a1 + 1188);
  *(_BYTE *)(v7 + 73) = 4;
  *(_BYTE *)(v7 + 72) = v10 + 1;
  v11 = *(_QWORD *)(a1 + 2616);
  v12 = *(_DWORD *)(v11 + 464) - 1;
  if ( v12 >= 0 )
  {
    v13 = (_QWORD *)(*(_QWORD *)(v11 + 456) + 80LL * v12);
    v14 = (__int64)&v13[-10 * (unsigned int)v12 - 10];
    while ( *v13 != *(_QWORD *)v7 )
    {
      v13 -= 10;
      if ( (_QWORD *)v14 == v13 )
        goto LABEL_10;
    }
    *(_QWORD *)(v7 + 64) = v13[8];
  }
LABEL_10:
  LODWORD(result) = *(_DWORD *)(a1 + 2772);
  if ( (_DWORD)result
    && (v16 = *(_DWORD *)(a1 + 2776)) != 0
    && (v17 = *(_QWORD *)(a1 + 2792), v18 = *a2, v17 >= *a2)
    && v17 < a2[1] )
  {
    v20 = 0;
  }
  else
  {
    result = *(unsigned int *)(a1 + 2780);
    if ( !(_DWORD)result )
      return result;
    v16 = *(_DWORD *)(a1 + 2784);
    if ( !v16 )
      return result;
    v19 = *(_QWORD *)(a1 + 2800);
    v18 = *a2;
    if ( v19 < *a2 )
      return result;
    v20 = 1;
    if ( v19 >= a2[1] )
      return result;
  }
  v23 = v20;
  if ( v16 != v18 )
  {
    *(_QWORD *)(v7 + 8) = (unsigned int)(v16 - 1);
    v24 = a3[1];
    v25 = *a3;
    if ( a3[2] < (unsigned __int64)(v24 + 1) )
    {
      v27 = qvector_reserve();
      *a3 = v27;
      v25 = v27;
      v24 = a3[1];
    }
    v23 = v20;
    v7 = v25 + 80 * v24;
    *(_OWORD *)v7 = 0;
    *(_WORD *)(v7 + 72) = 0;
    *(_QWORD *)(v7 + 16) = 0;
    *(_QWORD *)(v7 + 40) = 0;
    *(_QWORD *)(v7 + 64) = 0;
    *(_OWORD *)(v7 + 24) = 0;
    *(_OWORD *)(v7 + 48) = 0;
    ++a3[1];
    *(_QWORD *)(v7 + 8) = a2[1];
    result = *(unsigned int *)(a1 + 8LL * v20 + 2776);
    *(_BYTE *)(v7 + 73) = 4;
    *(_QWORD *)v7 = result;
    LODWORD(result) = *(_DWORD *)(a1 + 8LL * v20 + 2772);
  }
  *(_BYTE *)(v7 + 72) = (result & 4) != 0;
  result = *(_DWORD *)(a1 + 8 * v23 + 2776) >> 4;
  *(_QWORD *)(v7 + 64) = result;
  if ( !v20 )
  {
    v26 = *(_DWORD **)(v7 + 40);
    if ( *(_QWORD *)(v7 + 56) <= 4u )
    {
      v28 = qvector_reserve();
      *(_QWORD *)(v7 + 40) = v28;
      v26 = (_DWORD *)v28;
    }
    *(_QWORD *)(v7 + 48) = 5;
    *v26 = 1162104643;
    result = *(_QWORD *)(v7 + 40);
    *(_BYTE *)(result + 4) = 0;
    *(_BYTE *)(v7 + 73) |= 1u;
  }
  if ( (*(_BYTE *)(a1 + 8 * v23 + 2772) & 1) != 0 )
    *(_BYTE *)(v7 + 73) |= 2u;
  return result;
}

