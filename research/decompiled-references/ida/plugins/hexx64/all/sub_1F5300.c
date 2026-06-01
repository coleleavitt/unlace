void __fastcall sub_1F5300(__int64 a1, int a2, double a3, __m128 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rdi
  int v7; // eax
  unsigned __int64 v8; // rax
  int v9; // ebp
  __int64 i; // rcx
  int *v11; // rdi
  int v12; // edx

  v5 = *(_QWORD *)(a1 + 800);
  if ( v5 )
    sub_1FEAC0(v5, a1, a2, -1);
  v6 = *(_QWORD *)(a1 + 808);
  if ( v6 )
    sub_1FEAC0(v6, a1, a2, -1);
  v7 = *(_DWORD *)(a1 + 792);
  if ( v7 > a2 )
    *(_DWORD *)(a1 + 792) = v7 - 1;
  v8 = *(_QWORD *)(a1 + 464);
  v9 = 0;
  for ( i = 0; v9 < v8; i = v9 )
  {
    while ( 1 )
    {
      v11 = (int *)(*(_QWORD *)(a1 + 456) + 4 * i);
      v12 = *v11;
      if ( a2 != *v11 )
        break;
      if ( *(_BYTE *)(a1 + 320) )
      {
        if ( !under_debugger )
          sub_383060(0xC810u, a3);
        BUG();
      }
      memmove(v11, v11 + 1, 4 * (v8 - i) - 4);
      i = v9;
      v8 = *(_QWORD *)(a1 + 464) - 1LL;
      *(_QWORD *)(a1 + 464) = v8;
      if ( v9 >= v8 )
        goto LABEL_15;
    }
    ++v9;
    if ( a2 < v12 )
      *v11 = v12 - 1;
    v8 = *(_QWORD *)(a1 + 464);
  }
LABEL_15:
  sub_1F5270(a1, a2, a3, a4);
}

