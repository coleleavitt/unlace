__int64 __fastcall sub_19D620(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, double a7, __m128 a8)
{
  __int64 v8; // rax
  __int64 v9; // r12
  _QWORD *v10; // rdx
  unsigned __int64 *v11; // r14
  __int64 v12; // rax
  _QWORD *v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // ebp
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // r9d
  unsigned int v21; // r13d
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // r8d
  int v27; // r9d

  if ( (unsigned __int8)*(_QWORD *)(a2 + 328) )
  {
    a7 = 0.0;
    get_tinfo_details();
    cleanup_argloc();
    clear_tinfo_t();
  }
  v8 = sub_1108E0(*(_QWORD *)(a2 + 784), 0, a3, a4, a5, a6, a7, a8);
  v9 = v8;
  if ( !v8 )
  {
    if ( !under_debugger )
      sub_383060(0xC50Eu, a7);
    BUG();
  }
  ++*(_DWORD *)(v8 + 24);
  v10 = (_QWORD *)a1[3];
  v11 = *(unsigned __int64 **)v8;
  v12 = v10[1];
  if ( v12 )
  {
    v17 = sub_19D0B0((__int64)a1, a2, v11, *(_DWORD *)(*v10 + 4 * v12 - 4));
    v13 = (_QWORD *)a1[10];
    v21 = v17;
    v14 = v13[1];
    if ( !v14 )
      goto LABEL_9;
  }
  else
  {
    v13 = (_QWORD *)a1[10];
    v14 = v13[1];
    if ( !v14 )
    {
LABEL_6:
      v15 = 0;
      goto LABEL_7;
    }
    v21 = 0;
  }
  v22 = sub_19D0B0((__int64)a1, a2, v11, *(_DWORD *)(*v13 + 4 * v14 - 4));
  if ( v22 )
  {
    if ( !v21 )
      v21 = v22;
    goto LABEL_11;
  }
LABEL_9:
  if ( !v21 )
    goto LABEL_6;
  v22 = v21;
LABEL_11:
  if ( v21 >= *(_DWORD *)(a2 + 64) )
    sub_195140(a7);
  a1[4] = *(_QWORD *)(*(_QWORD *)(a2 + 528) + 8LL * v21);
  if ( v22 >= *(_DWORD *)(a2 + 64) )
    sub_195140(a7);
  v23 = *(_QWORD *)(a2 + 528);
  a1[11] = *(_QWORD *)(v23 + 8LL * v22);
  sub_19D2A0((__int64)a1, a2, v23, v18, v19, v20);
  sub_19D2A0((__int64)(a1 + 7), a2, v24, v25, v26, v27);
  v15 = 1;
  if ( !a1[1] )
    LOBYTE(v15) = a1[8] != 0;
LABEL_7:
  sub_104E10(v9, a7);
  return v15;
}

