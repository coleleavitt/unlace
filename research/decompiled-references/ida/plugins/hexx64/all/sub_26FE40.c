__int64 __fastcall sub_26FE40(__int64 a1, __int64 a2, double a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  int v9; // edx
  int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 *v20; // rcx
  __int64 *v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx

  v3 = *(unsigned __int8 *)(a1 + 136);
  if ( (_BYTE)v3 )
  {
    v4 = sub_254FE0(a2);
    v7 = j__qalloc_or_throw(64, a2, v5, v6);
    v8 = sub_240F50(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL), *(_QWORD *)(a1 + 72), 0, -1, 0, 0, 0);
    *(_DWORD *)(v7 + 8) = 37;
    *(_QWORD *)(v7 + 12) = -1;
    *(_QWORD *)(v7 + 24) = 0;
    *(_QWORD *)(v7 + 32) = v8;
    *(_QWORD *)v7 = -1;
    *(_QWORD *)(v7 + 40) = 0;
    *(_QWORD *)(v7 + 48) = 0;
    *(_DWORD *)(v7 + 56) = 0;
    *(_QWORD *)v7 = *(_QWORD *)v4;
    v9 = *(_DWORD *)(v4 + 8);
    *(_QWORD *)v4 = -1;
    LODWORD(v8) = *(_DWORD *)(v7 + 8);
    *(_DWORD *)(v7 + 8) = v9;
    v10 = *(_DWORD *)(v4 + 12);
    *(_DWORD *)(v4 + 8) = v8;
    LODWORD(v8) = *(_DWORD *)(v7 + 12);
    *(_DWORD *)(v7 + 12) = v10;
    v11 = *(_QWORD *)(v4 + 24);
    *(_DWORD *)(v4 + 12) = v8;
    v12 = *(_QWORD *)(v7 + 24);
    *(_QWORD *)(v7 + 24) = v11;
    v13 = *(_QWORD *)(v4 + 32);
    *(_QWORD *)(v4 + 24) = v12;
    v14 = *(_QWORD *)(v7 + 32);
    *(_QWORD *)(v7 + 32) = v13;
    *(_QWORD *)(v4 + 32) = v14;
    v15 = *(_QWORD *)(v7 + 40);
    *(_QWORD *)(v7 + 40) = *(_QWORD *)(v4 + 40);
    v16 = *(_QWORD *)(v4 + 48);
    *(_QWORD *)(v4 + 40) = v15;
    v17 = *(_QWORD *)(v7 + 48);
    *(_QWORD *)(v7 + 48) = v16;
    LODWORD(v16) = *(_DWORD *)(v4 + 56);
    *(_QWORD *)(v4 + 48) = v17;
    LODWORD(v17) = *(_DWORD *)(v7 + 56);
    *(_DWORD *)(v7 + 56) = v16;
    *(_DWORD *)(v4 + 56) = v17;
    *(_QWORD *)(v4 + 24) = v7;
    sub_2441C0(v4, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL) + 112LL), 0, a3);
    v18 = *(_QWORD *)(a1 + 104);
    v19 = *(_QWORD *)(a1 + 112);
    v20 = (__int64 *)(v18 + 8 * v19);
    if ( (__int64 *)v18 == v20 )
      goto LABEL_7;
    v21 = *(__int64 **)(a1 + 104);
    while ( v7 != *v21 )
    {
      if ( v20 == ++v21 )
        goto LABEL_7;
    }
    if ( v20 == v21 )
    {
LABEL_7:
      v22 = v19 + 1;
      if ( *(_QWORD *)(a1 + 120) < v22 )
      {
        v24 = qvector_reserve(a1 + 104, v18, v22, 8);
        v25 = *(_QWORD *)(a1 + 112);
        *(_QWORD *)(a1 + 104) = v24;
        v20 = (__int64 *)(v24 + 8 * v25);
      }
      *v20 = v7;
      v3 = 1;
      ++*(_QWORD *)(a1 + 112);
      return v3;
    }
  }
  else
  {
    if ( (unsigned __int8)sub_245010(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8), a2) )
      return v3;
    ++*(_DWORD *)(a1 + 132);
  }
  return 1;
}

