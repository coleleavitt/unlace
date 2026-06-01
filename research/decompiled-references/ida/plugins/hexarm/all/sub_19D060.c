__int64 __fastcall sub_19D060(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  _QWORD *v4; // rdx
  unsigned __int64 *v5; // r14
  __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // ebp
  unsigned int v11; // eax
  unsigned int v12; // r13d
  unsigned int v13; // eax

  if ( (unsigned __int8)*(_QWORD *)(a2 + 328) )
  {
    get_tinfo_details();
    cleanup_argloc();
    clear_tinfo_t();
  }
  v2 = sub_110320(*(_QWORD *)(a2 + 784), 0);
  v3 = v2;
  if ( !v2 )
  {
    if ( !under_debugger )
      sub_3835A0(50446);
    BUG();
  }
  ++*(_DWORD *)(v2 + 24);
  v4 = (_QWORD *)a1[3];
  v5 = *(unsigned __int64 **)v2;
  v6 = v4[1];
  if ( v6 )
  {
    v11 = sub_19CAF0((__int64)a1, a2, v5, *(_DWORD *)(*v4 + 4 * v6 - 4));
    v7 = (_QWORD *)a1[10];
    v12 = v11;
    v8 = v7[1];
    if ( !v8 )
      goto LABEL_9;
  }
  else
  {
    v7 = (_QWORD *)a1[10];
    v8 = v7[1];
    if ( !v8 )
    {
LABEL_6:
      v9 = 0;
      goto LABEL_7;
    }
    v12 = 0;
  }
  v13 = sub_19CAF0((__int64)a1, a2, v5, *(_DWORD *)(*v7 + 4 * v8 - 4));
  if ( v13 )
  {
    if ( !v12 )
      v12 = v13;
    goto LABEL_11;
  }
LABEL_9:
  if ( !v12 )
    goto LABEL_6;
  v13 = v12;
LABEL_11:
  if ( v12 >= *(_DWORD *)(a2 + 64) )
    sub_194B80();
  a1[4] = *(_QWORD *)(*(_QWORD *)(a2 + 528) + 8LL * v12);
  if ( v13 >= *(_DWORD *)(a2 + 64) )
    sub_194B80();
  a1[11] = *(_QWORD *)(*(_QWORD *)(a2 + 528) + 8LL * v13);
  sub_19CCE0((__int64)a1);
  sub_19CCE0((__int64)(a1 + 7));
  v9 = 1;
  if ( !a1[1] )
    LOBYTE(v9) = a1[8] != 0;
LABEL_7:
  sub_104850(v3);
  return v9;
}

