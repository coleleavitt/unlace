__int64 __fastcall sub_C7080(__int64 a1, char *a2, int a3, __int64 a4)
{
  int v4; // r12d
  __int64 v5; // r14
  __int64 result; // rax
  __int64 v8; // rdi
  int v10; // ebx
  _QWORD *v11; // rbp
  __int64 v12; // rsi
  __int64 i; // rdx
  int v14; // ebx
  int v15; // r15d

  v4 = a3;
  v5 = a4 + a3;
  result = 522;
  if ( v5 <= *(_QWORD *)(a1 + 24) )
  {
    v8 = *(int *)(a1 + 8);
    v10 = v8;
    if ( *(_QWORD *)(a1 + 40) == a4 && a4 )
    {
      v11 = *(_QWORD **)(a1 + 48);
    }
    else
    {
      v11 = *(_QWORD **)(a1 + 16);
      if ( v11 && a4 >= v8 )
      {
        v12 = v8;
        do
        {
          v11 = (_QWORD *)*v11;
          if ( !v11 )
            break;
          v12 += v8;
        }
        while ( a4 >= v12 );
      }
    }
    for ( i = a4 % v8; ; LODWORD(i) = 0 )
    {
      v14 = v10 - i;
      v15 = v14;
      if ( v4 <= v14 )
        v15 = v4;
      a2 = (char *)memcpy(a2, (char *)v11 + (int)i + 8, v15) + v15;
      v4 -= v14;
      if ( v4 < 0 )
      {
        if ( !v11 )
          v5 = 0;
LABEL_18:
        *(_QWORD *)(a1 + 40) = v5;
        *(_QWORD *)(a1 + 48) = v11;
        return 0;
      }
      v11 = (_QWORD *)*v11;
      if ( !v11 )
        break;
      if ( !v4 )
        goto LABEL_18;
      v10 = *(_DWORD *)(a1 + 8);
    }
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 40) = 0;
    return 0;
  }
  return result;
}
