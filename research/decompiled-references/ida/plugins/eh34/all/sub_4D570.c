// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall sub_4D570(__int64 a1, int a2, int a3, int a4, int a5, unsigned __int8 a6)
{
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r12
  int v14; // r14d
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 result; // rax
  __int64 v23; // rax

  if ( a4 < 0 || a4 >= *(_DWORD *)(a1 + 8) )
    v10 = 0;
  else
    v10 = *(_QWORD *)a1 + 56LL * a4;
  sub_4C070(v10);
  v11 = 3 - a6;
  if ( a2 < 0 )
  {
    v13 = 0x1003E0003LL;
    MEMORY[0x1003E0003] = v11;
    MEMORY[0x1003E0023] = 0;
    MEMORY[0x1003E0027] = 1;
    v14 = *(_DWORD *)sub_4D3C0((unsigned __int64 *)a1, 22, a5 + *(_DWORD *)(a1 + 24), 1);
    v15 = 0;
  }
  else
  {
    if ( a2 >= *(_DWORD *)(a1 + 8) )
      v12 = 0;
    else
      v12 = *(_QWORD *)a1 + 56LL * a2;
    v13 = *(_QWORD *)(v12 + 16);
    *(_DWORD *)v13 = v11;
    *(_DWORD *)(v13 + 32) = 0;
    *(_BYTE *)(v13 + 36) = 1;
    v14 = *(_DWORD *)sub_4D3C0((unsigned __int64 *)a1, 22, a5 + *(_DWORD *)(a1 + 24), 1);
    if ( a2 >= *(_DWORD *)(a1 + 8) )
      v15 = 0;
    else
      v15 = *(_QWORD *)a1 + 56LL * a2;
  }
  v16 = *(_QWORD *)(v15 + 24);
  if ( *(_DWORD *)(v15 + 32) )
  {
    v23 = sub_4C640((unsigned __int64 *)a1);
    *(_DWORD *)(v23 + 32) = 1;
    v18 = *(_DWORD *)v23;
    *(_QWORD *)(v23 + 4) = 0x100000000LL;
    *(_QWORD *)(v23 + 24) = v16;
    if ( v14 < 0 )
    {
LABEL_17:
      LODWORD(qword_20) = 0;
      LODWORD(qword_18) = v18;
      if ( a2 < 0 )
        goto LABEL_18;
      goto LABEL_13;
    }
  }
  else
  {
    v17 = sub_4C640((unsigned __int64 *)a1);
    *(_DWORD *)(v17 + 32) = 0;
    v18 = *(_DWORD *)v17;
    *(_QWORD *)(v17 + 4) = 0x100000000LL;
    *(_DWORD *)(v17 + 24) = v16;
    if ( v14 < 0 )
      goto LABEL_17;
  }
  if ( v14 >= *(_DWORD *)(a1 + 8) )
    goto LABEL_17;
  v19 = *(_QWORD *)a1 + 56LL * v14;
  *(_DWORD *)(v19 + 32) = 0;
  *(_DWORD *)(v19 + 24) = v18;
  if ( a2 < 0 )
  {
LABEL_18:
    v20 = 0;
    goto LABEL_15;
  }
LABEL_13:
  if ( a2 >= *(_DWORD *)(a1 + 8) )
    goto LABEL_18;
  v20 = *(_QWORD *)a1 + 56LL * a2;
LABEL_15:
  *(_QWORD *)(v20 + 4) = 0x300000003LL;
  v21 = operator new(0x10u);
  *(_BYTE *)(v21 + 8) = 0;
  *(_QWORD *)(v20 + 16) = v21;
  *(_QWORD *)v21 = v13;
  result = *(_QWORD *)(v20 + 16);
  *(_BYTE *)(result + 8) = 1;
  *(_DWORD *)(v20 + 32) = 0;
  *(_DWORD *)(v20 + 24) = a3;
  *(_DWORD *)(v20 + 48) = 0;
  *(_DWORD *)(v20 + 40) = v14;
  return result;
}

