__int64 __fastcall sub_42940(__int64 a1, int a2, const void *a3, __int64 a4, size_t a5)
{
  unsigned __int64 v5; // r12
  int *v9; // rdi
  size_t v10; // rdx
  size_t v11; // rax
  char v12; // si
  __int64 result; // rax
  __int64 v14; // rdi

  v5 = a2;
  v9 = (int *)(**(_QWORD **)a1 + 48LL * a2);
  v10 = v9[1];
  if ( v10 > a5 )
    v10 = a5;
  if ( a4 && v10 )
  {
    v11 = 0;
    while ( 1 )
    {
      v12 = *(_BYTE *)(a4 + v11++);
      if ( v11 >= v10 )
        break;
      if ( v12 )
        goto LABEL_8;
    }
    if ( v12 )
    {
LABEL_8:
      if ( a2 >= 0 && v5 < *(_QWORD *)(a1 + 40) )
      {
        result = *(_QWORD *)(a1 + 32);
        *(_BYTE *)(result + v5) = -1;
        return result;
      }
      goto LABEL_16;
    }
  }
  v14 = *v9;
  if ( *(_QWORD *)(a1 + 16) < v14 + v10 )
    goto LABEL_18;
  memcpy((void *)(*(_QWORD *)(a1 + 8) + v14), a3, v10);
  if ( a2 < 0 || v5 >= *(_QWORD *)(a1 + 40) )
  {
LABEL_16:
    if ( under_debugger )
      goto LABEL_20;
    interr();
LABEL_18:
    if ( !under_debugger )
      interr();
LABEL_20:
    BUG();
  }
  result = *(_QWORD *)(a1 + 32);
  *(_BYTE *)(result + v5) = 1;
  return result;
}

