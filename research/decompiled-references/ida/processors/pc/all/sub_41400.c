__int64 __fastcall sub_41400(_QWORD *a1, __int64 *a2)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rcx
  __int64 v5; // rbp
  int v6; // r12d
  __int64 i; // r14
  double v8; // xmm0_8
  __int64 v9; // rdx
  int v10; // ecx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rax

  v3 = a1[2];
  v4 = a2[1];
  if ( v4 < v3 )
  {
    v13 = *a2;
    if ( a2[2] < v3 )
    {
      v14 = qvector_reserve();
      v4 = a2[1];
      *a2 = v14;
      v13 = v14;
    }
    memset((void *)(v13 + 8 * v4), 0, 8 * (v3 - v4));
    a2[1] = v3;
  }
  else if ( v3 != v4 )
  {
    a2[1] = v3;
  }
  v5 = 0;
  v6 = 0;
  for ( i = Clp_primalColumnSolution(); (unsigned __int64)v6 < a1[11]; *(_QWORD *)(*a2 + 8 * v9) = (unsigned int)(int)v8 )
  {
    ++v6;
    v8 = floor(*(double *)(i + 8 * v5) + 0.5);
    v9 = *(int *)(a1[10] + 4 * v5);
    v5 = v6;
  }
  v10 = 0;
  for ( result = 0; (unsigned __int64)v10 < a1[2]; result = v10 )
  {
    v12 = *(int *)(a1[1] + 4 * result);
    if ( (v12 & 0x40000000) == 0 )
      *(_QWORD *)(*a2 + 8 * result) = *(_QWORD *)(*a2 + 8 * v12);
    ++v10;
  }
  return result;
}
