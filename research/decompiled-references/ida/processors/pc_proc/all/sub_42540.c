__int64 __fastcall sub_42540(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  int v8; // edx
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  double *v15; // rax
  unsigned int v16; // ebx
  __int64 aflags; // rax
  __int64 v19; // [rsp+0h] [rbp-68h]
  int v20; // [rsp+Ch] [rbp-5Ch]
  _QWORD *v21; // [rsp+10h] [rbp-58h]

  v3 = a1[11];
  v21 = nullptr;
  v5 = *(_QWORD *)(a1[29] + 8LL);
  v6 = 2 * v5;
  if ( v3 )
  {
    v21 = (_QWORD *)qvector_reserve();
    *v21 = 0xC1EFFFFFFFE00000LL;
    v7 = 1;
    if ( v3 > 1 )
    {
      do
        v21[v7++] = 0xC1EFFFFFFFE00000LL;
      while ( v3 != v7 );
    }
  }
  v8 = 1;
  v9 = 1;
  if ( v6 <= 1 )
  {
LABEL_15:
    Clp_chgColumnLower();
    v16 = 1;
    goto LABEL_19;
  }
  while ( 1 )
  {
    v10 = *(_QWORD *)a1[29];
    if ( v9 >= v5 )
    {
      v12 = *(_QWORD *)(v10 + 80 * (v9 - v5) + 64);
    }
    else
    {
      v11 = 80 * v9 + v10;
      v12 = *(_QWORD *)(v11 + 56);
      if ( (*(_BYTE *)(v11 + 76) & 0x10) != 0 && v12 < a3 )
      {
        v20 = v8;
        v19 = *(_QWORD *)(v11 + 56);
        aflags = get_aflags();
        v12 = v19;
        v8 = v20;
        if ( (aflags & 0x800000) == 0 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(a1[28] + 72LL) + (v9 << 6) + 48) )
            v12 = a3;
        }
      }
    }
    v13 = a1[1];
    v14 = *(int *)(v13 + 4 * v9);
    if ( (_DWORD)v14 != -1 )
    {
      if ( (v14 & 0x40000000) == 0 )
      {
        LODWORD(v14) = *(_DWORD *)(v13 + 4 * v14);
        if ( (_DWORD)v14 == -1 || (v14 & 0x40000000) == 0 )
        {
          if ( !under_debugger )
            interr();
          BUG();
        }
      }
      v15 = (double *)&v21[(int)(v14 & 0xBFFFFFFF)];
      if ( (double)(int)v12 > *v15 )
        *v15 = (double)(int)v12;
      goto LABEL_14;
    }
    if ( v12 > 0 )
      break;
LABEL_14:
    v9 = ++v8;
    if ( v8 >= v6 )
      goto LABEL_15;
  }
  v16 = 0;
LABEL_19:
  if ( v21 )
    qfree();
  return v16;
}

