__int64 __fastcall sub_1122B0(__int64 **a1, __int64 a2, _DWORD *a3, double a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rcx
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v10; // rdi
  char v11; // r14
  __int64 v12; // rax
  __int64 *v13; // r12
  int *v14; // r15
  __int64 v15; // r13
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax

  if ( *(_DWORD *)(a2 + 76) != 4 || *(_BYTE *)(*(_QWORD *)(a2 + 56) + 64LL) != 7 )
    return 0;
  v6 = *(_QWORD *)(a2 + 64);
  v7 = *(_QWORD *)(a2 + 8);
  v8 = (unsigned int)a3[18];
  if ( (unsigned int)v8 >= *(_DWORD *)(v6 + 64) )
    goto LABEL_25;
  v10 = *(_QWORD *)(*(_QWORD *)(v6 + 528) + 8 * v8);
  if ( *a3 == 43 )
  {
    v11 = 0;
    v10 = *(_QWORD *)(a2 + 8);
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 528) + 8 * v8);
  }
  else
  {
    v11 = 1;
    if ( *a3 != 44 )
      return 0;
  }
  v12 = sub_1120C0(v10, 1);
  v13 = (__int64 *)v12;
  if ( *(_DWORD *)(v12 + 76) != 4 )
    return 0;
  if ( *(_BYTE *)(*(_QWORD *)(v12 + 56) + 64LL) != 7 )
    return 0;
  v4 = *(_QWORD *)(v12 + 352);
  if ( v4 != 1 )
    return 0;
  if ( sub_330DE0(v12) != 1 )
    return 0;
  v14 = (int *)v13[7];
  if ( (unsigned int)(*v14 - 43) > 9 )
    return 0;
  v15 = sub_1120C0(v7, 0);
  v16 = *v14;
  if ( *v14 == 43 )
  {
    v17 = v13[8];
    v18 = (unsigned int)v14[18];
    if ( (unsigned int)v18 < *(_DWORD *)(v17 + 64) )
    {
      if ( v15 == sub_1120C0(*(_QWORD *)(*(_QWORD *)(v17 + 528) + 8 * v18), 0) )
      {
        if ( v11 )
          v4 = 3;
        goto LABEL_17;
      }
      v16 = *v14;
      goto LABEL_14;
    }
LABEL_25:
    sub_111110(a4);
  }
LABEL_14:
  if ( v16 == 44 && v15 == sub_1120C0(v13[1], 0) )
  {
    v4 = v11 == 0 ? 2 : 4;
LABEL_17:
    *a1 = v13;
    return v4;
  }
  return 0;
}

