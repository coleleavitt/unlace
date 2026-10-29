bool __fastcall sub_19B880(__int64 a1, char *a2, __int64 a3, double a4)
{
  char v5; // al
  __int64 v6; // rax
  __int64 *v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v14; // rax

  v5 = *a2;
  if ( *a2 == 9 )
  {
    v14 = *((_QWORD *)a2 + 1);
    if ( *(_QWORD *)(v14 + 8) )
      return 0;
    if ( *(_QWORD *)(*(_QWORD *)v14 + 440LL) < (unsigned __int64)*(int *)(v14 + 16) )
LABEL_20:
      sub_1953E0(a4);
    if ( !(unsigned int)lexcompare_tinfo() )
      return 1;
    v5 = *a2;
  }
  if ( !a3 )
    return 0;
  if ( v5 != 10 )
    return 0;
  v6 = *((_QWORD *)a2 + 1);
  if ( *(_BYTE *)v6 != 9 )
    return 0;
  v7 = *(__int64 **)(v6 + 8);
  if ( v7[1] )
    return 0;
  v8 = *v7;
  v9 = *((int *)v7 + 4);
  if ( *(_QWORD *)(v8 + 440) < v9 )
    goto LABEL_20;
  v10 = *(_QWORD *)(v8 + 432) + 104 * v9;
  if ( !(unsigned int)lexcompare_tinfo() )
    return 1;
  if ( *(_DWORD *)v10 != 1 )
    return 0;
  v11 = *(_QWORD **)a3;
  v12 = *(_QWORD *)a3 + 8LL * *(_QWORD *)(a3 + 8);
  if ( *(_QWORD *)a3 != v12 )
  {
    do
    {
      if ( *(_QWORD *)(v10 + 8) == *v11 )
        break;
      ++v11;
    }
    while ( (_QWORD *)v12 != v11 );
  }
  return v11 != (_QWORD *)v12;
}

