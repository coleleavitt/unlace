__int64 __fastcall sub_469C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        double a6,
        double a7,
        __m128 a8)
{
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r14
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  unsigned int v19; // ebx
  int *v20; // r15
  __int64 v21; // r13
  __int64 v22; // rdx

  v10 = a2;
  v11 = *(_QWORD *)(a1 + 1384);
  if ( (_DWORD)a2 == -3 )
  {
    if ( !v11 )
      return 0;
    v14 = *(_QWORD *)(a1 + 1376);
    if ( !v14 )
      return 0;
    a2 = 0;
    if ( *(_DWORD *)(a1 + 1364) == -3 )
      goto LABEL_11;
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 1376);
    v13 = v12 + 112 * v11;
    if ( v12 == v13 )
      return 0;
    while ( 1 )
    {
      v14 = v12;
      if ( (_DWORD)a2 == *(_DWORD *)(v12 + 24) )
        break;
      v12 += 112;
      if ( v13 == v12 )
        return 0;
    }
    if ( !v12 )
      return 0;
    if ( (_DWORD)a2 == *(_DWORD *)(a1 + 1364) )
      goto LABEL_11;
    a2 = (unsigned int)a2;
  }
  if ( (unsigned __int8)sub_5E4F0(*(_QWORD *)(a1 + 864), a2, 0) )
  {
    *(_DWORD *)(a1 + 1364) = v10;
  }
  else if ( *(_QWORD *)(a1 + 1384) > 1u )
  {
    sub_65BB0(a1, (unsigned int)"GDB: Error setting thread\n", v15, v16, v17, v18);
    return 0;
  }
LABEL_11:
  v19 = sub_464A0(a1, v14, (int **)a4, a5, a6, a7, a8);
  if ( !(_BYTE)v19 )
    return 0;
  v20 = *(int **)a4;
  v21 = *(_QWORD *)a4 + 4LL * *(_QWORD *)(a4 + 8);
  while ( (int *)v21 != v20 )
  {
    v22 = *v20++;
    sub_46920(a1, v14, a3 + 32 * v22, v22);
  }
  return v19;
}

