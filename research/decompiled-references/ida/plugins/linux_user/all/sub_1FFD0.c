__int64 __fastcall sub_1FFD0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, double a7)
{
  int v7; // eax
  unsigned __int8 v8; // bp
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  int v21; // eax
  unsigned int v22; // ebp
  bool v23; // zf

  v7 = dword_48130;
  if ( !dword_48130 )
  {
    sub_155C0();
    v7 = dword_48130;
    if ( dword_48130 != 1 )
      goto LABEL_3;
LABEL_9:
    sub_32190(a1, (unsigned int)"DBG: debugging of multi-threaded program is not available\n", a3, a4, a5, a6);
    return 0;
  }
  if ( dword_48130 == 1 )
    goto LABEL_9;
LABEL_3:
  if ( v7 == 2 )
  {
    sub_32190(
      a1,
      (unsigned int)"DBG: PTRACE_O_TRACECLONE ability detected, will be used in debugging multi-threaded program\n",
      a3,
      a4,
      a5,
      a6);
    v21 = dword_46588;
    v22 = *(_DWORD *)(a1 + 1340);
    if ( dword_46588 == -1 )
    {
      sub_13820(a1, "DBG: PTRACE_O_TRACECLONE ability detected, will be used in debugging multi-threaded program\n");
      v21 = dword_46588;
    }
    if ( v21 )
      ptrace(PTRACE_SETOPTIONS, v22, 0, 8);
    v23 = *(_BYTE *)(a1 + 1348) == 0;
    *(_QWORD *)(a1 + 960) = 0;
    *(_QWORD *)(a1 + 976) = 0;
    if ( v23 )
    {
      sub_32190(a1, (unsigned int)"DBG: collect threads\n", v17, v18, v19, v20);
      sub_1F510(a1);
      *(_BYTE *)(a1 + 1348) = 1;
    }
    return 1;
  }
  v8 = sub_1FD90(a1, a7, a2, a3, a4, a5, a6);
  sub_32190(a1, (unsigned int)"DBG: tdb_new returns %d\n", v8, v9, v10, v11);
  if ( v8 )
  {
    if ( *(_QWORD *)(a1 + 952) )
      sub_32190(
        a1,
        (unsigned int)"DBG: libthread_db.so will be used in debugging multi-threaded program\n",
        v12,
        v13,
        v14,
        v15);
    return 1;
  }
  return 0;
}

