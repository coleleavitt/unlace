void __fastcall sub_CF130(__int64 *a1, _DWORD *a2, unsigned int **a3, unsigned int *a4, double a5)
{
  unsigned int *v5; // r13
  int v7; // eax
  int v8; // r12d
  unsigned int *v9; // rbx
  int v10; // esi

  v5 = a3[1];
  if ( v5 )
  {
    if ( a4 != (unsigned int *)-1LL )
      v5 = a4;
    v7 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a2 + 32LL))(a2, **a3);
    v8 = a2[20];
    if ( v8 < 8 )
      v8 = 8;
    if ( v8 > v7 )
      v8 = v7;
    v9 = nullptr;
    do
    {
      v10 = (*a3)[(_QWORD)v9];
      v9 = (unsigned int *)((char *)v9 + 1);
      sub_63E80(a1, v10, v8, a5);
    }
    while ( v9 != v5 );
  }
}

