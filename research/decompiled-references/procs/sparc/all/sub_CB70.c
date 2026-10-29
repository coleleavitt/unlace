__int64 __fastcall sub_CB70(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r12
  int v3; // ebp
  __int64 v4; // r14
  int v5; // eax
  __int64 v6; // rbx
  __int64 tinfo_size; // r15
  unsigned __int8 v8; // al
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( (int)v1 <= 0 )
  {
LABEL_13:
    v11 = 0;
  }
  else
  {
    v2 = 0;
    v3 = 0;
    v4 = 16 * (5LL * (unsigned int)(v1 - 1) + 5);
    do
    {
      while ( 1 )
      {
        v6 = v2 + *(_QWORD *)a1;
        tinfo_size = get_tinfo_size(0, *(_QWORD *)(v6 + 64), 0);
        if ( tinfo_size == -1 )
          return 0;
        v8 = getinf(59);
        v9 = (tinfo_size + v8 - 1) & -v8;
        if ( v3 > 5 )
          break;
        cleanup_argloc(v6);
        v5 = v3 + 8;
        v2 += 80;
        *(_DWORD *)v6 = 3;
        v3 += v9 >> 2;
        *(_DWORD *)(v6 + 8) = v5;
        if ( v2 == v4 )
          goto LABEL_7;
      }
      cleanup_argloc(v6);
      v2 += 80;
      v10 = 4 * v3 - 24;
      *(_DWORD *)v6 = 1;
      v3 += v9 >> 2;
      *(_QWORD *)(v6 + 8) = v10;
    }
    while ( v2 != v4 );
LABEL_7:
    if ( v3 <= 6 )
      goto LABEL_13;
    v11 = 4 * v3 - 24;
  }
  *(_QWORD *)(a1 + 56) = v11;
  if ( (get_tinfo_property(*(_QWORD *)(a1 + 32), 2) & 0x3F) != 1 )
  {
    cleanup_argloc(a1 + 40);
    *(_DWORD *)(a1 + 40) = 3;
    *(_DWORD *)(a1 + 48) = 8;
  }
  return 1;
}
