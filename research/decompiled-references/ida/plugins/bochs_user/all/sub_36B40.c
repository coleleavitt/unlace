__int64 __fastcall sub_36B40(__int64 a1, char a2)
{
  int v3; // eax
  __int64 result; // rax
  __int64 v5; // rdi
  _QWORD *i; // r13
  _QWORD *v7; // rbp
  _QWORD *j; // rbx
  _QWORD *v9; // r15

  v3 = *(_DWORD *)(a1 + 808) - 1;
  *(_DWORD *)(a1 + 808) = v3;
  if ( v3 <= 0 || (result = 29, a2) )
  {
    sub_347B0(*(void **)(a1 + 676));
    v5 = *(_QWORD *)(a1 + 708);
    *(_QWORD *)(a1 + 676) = 0;
    *(_QWORD *)(a1 + 684) = a1 + 668;
    *(_QWORD *)(a1 + 692) = a1 + 668;
    *(_QWORD *)(a1 + 700) = 0;
    if ( v5 )
    {
      *(_QWORD *)(a1 + 716) = 0;
      qfree();
      *(_QWORD *)(a1 + 708) = 0;
      *(_QWORD *)(a1 + 724) = 0;
    }
    for ( i = *(_QWORD **)(a1 + 636); (_QWORD *)(a1 + 636) != i; --*(_QWORD *)(a1 + 652) )
    {
      v7 = i;
      i = (_QWORD *)*i;
      *(_QWORD *)v7[1] = i;
      i[1] = v7[1];
      for ( j = (_QWORD *)v7[7]; v7 + 7 != j; --v7[9] )
      {
        v9 = j;
        j = (_QWORD *)*j;
        *(_QWORD *)v9[1] = j;
        j[1] = v9[1];
        if ( v9[2] )
        {
          v9[3] = 0;
          qfree();
        }
        qfree();
      }
      if ( v7[2] )
      {
        v7[3] = 0;
        qfree();
      }
      qfree();
    }
    if ( *(_QWORD *)a1 )
    {
      close_linput();
      *(_QWORD *)a1 = 0;
    }
    return 0;
  }
  return result;
}

