__int64 __fastcall sub_67590(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, unsigned int a7)
{
  __int64 v7; // rax
  unsigned int v8; // edx
  int v9; // ebp

  v7 = sub_85560(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 16LL) + 168LL), a7);
  v8 = 0;
  if ( v7 )
  {
    v9 = *(_DWORD *)(v7 + 4);
    cleanup_argloc(a2);
    *a2 = 3;
    v8 = 1;
    a2[2] = v9;
  }
  return v8;
}

