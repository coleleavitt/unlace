__int64 __fastcall sub_241920(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  int v5; // eax
  __int64 v6; // rdx
  int v8; // eax
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rsi
  __int64 *v12; // rax
  __int64 *v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax

  if ( *(_DWORD *)(a1 + 8) != 71 )
  {
    if ( !under_debugger )
      sub_383060(0xC4CBu, a5);
    BUG();
  }
  v5 = *(_DWORD *)(a2 + 8);
  v6 = a1;
  if ( v5 != 1 && (unsigned int)(v5 - 17) > 1
    || ((a4 = *(_QWORD *)(a2 + 32), v8 = *(_DWORD *)(a4 + 8), v8 != 1) && (unsigned int)(v8 - 17) > 1
     || ((v9 = *(_QWORD *)(a4 + 32), v10 = *(_DWORD *)(v9 + 8), v10 != 1) && (unsigned int)(v10 - 17) > 1
      || (v11 = sub_2418B0(*(_QWORD *)(v9 + 32)), v11 == -1))
     && (v11 = *(_QWORD *)v9, *(_QWORD *)v9 == -1))
    && (v11 = *(_QWORD *)a4, *(_QWORD *)a4 == -1) )
  {
    v11 = *(_QWORD *)a2;
  }
  v12 = sub_2413C0(v6, v11, v6, a4, a5);
  *((_DWORD *)v12 + 2) = 73;
  v13 = v12;
  v16 = j__qalloc_or_throw(80, v11, v14, v15);
  *(_QWORD *)v16 = -1;
  v17 = v16;
  *(_QWORD *)(v16 + 8) = 0xFFFFFFFF00000000LL;
  *(_OWORD *)(v16 + 24) = 0;
  *(_QWORD *)(v16 + 40) = 0;
  *(_QWORD *)(v16 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v16 + 48) = 0;
  *(_QWORD *)(v16 + 56) = 0;
  *(_OWORD *)(v16 + 64) = 0;
  v13[3] = v16;
  v18 = *(_QWORD *)v16;
  v19 = *(_QWORD *)a2;
  *(_QWORD *)a2 = v18;
  LODWORD(v18) = *(_DWORD *)(v17 + 8);
  *(_QWORD *)v17 = v19;
  LODWORD(v19) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = v18;
  LODWORD(v18) = *(_DWORD *)(v17 + 12);
  *(_DWORD *)(v17 + 8) = v19;
  LODWORD(v19) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 12) = v18;
  v20 = *(_QWORD *)(v17 + 24);
  *(_DWORD *)(v17 + 12) = v19;
  v21 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = v20;
  v22 = *(_QWORD *)(v17 + 32);
  *(_QWORD *)(v17 + 24) = v21;
  v23 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 32) = v22;
  v24 = *(_QWORD *)(v17 + 40);
  *(_QWORD *)(v17 + 32) = v23;
  v25 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 40) = v24;
  *(_QWORD *)(v17 + 40) = v25;
  v26 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(v17 + 48);
  LODWORD(v24) = *(_DWORD *)(v17 + 56);
  *(_QWORD *)(v17 + 48) = v26;
  LODWORD(v26) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(a2 + 56) = v24;
  *(_DWORD *)(v17 + 56) = v26;
  if ( a2 )
  {
    sub_255630(a2);
    clear_tinfo_t();
    j__qfree(a2);
  }
  return v17;
}

