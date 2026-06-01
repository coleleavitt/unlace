__int64 __fastcall sub_25E00(__int64 a1, int *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 result; // rax
  int v12; // edx

  if ( a2 )
    *a2 = 0;
  v7 = *(_QWORD *)a1;
  v8 = *(unsigned int *)(*(_QWORD *)(a1 + 8) + 8LL);
  if ( (unsigned int)v8 > 0x2C )
  {
    sub_22610(a1, a2, v7, a4);
    return sub_25ED0();
  }
  else
  {
    v9 = v7 + 40 * v8 + 72;
    v10 = *(unsigned int *)(a1 + 36);
    if ( (unsigned int)v10 >= *(_DWORD *)(a1 + 32) )
    {
      return 0;
    }
    else
    {
      while ( 1 )
      {
        if ( sub_25CB0(a1, v9, v10, a4, a5, a6) )
        {
          result = sub_23850(*(_QWORD *)a1, v9, *(_DWORD *)(a1 + 36), a3);
          if ( (_BYTE)result )
            break;
        }
        v10 = (unsigned int)(*(_DWORD *)(a1 + 36) + 1);
        *(_DWORD *)(a1 + 36) = v10;
        if ( (unsigned int)v10 >= *(_DWORD *)(a1 + 32) )
          return 0;
      }
      v12 = *(_DWORD *)(a1 + 36) + 1;
      if ( a2 )
      {
        *a2 = (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) << 24) | v12;
        v12 = *(_DWORD *)(a1 + 36) + 1;
      }
      *(_DWORD *)(a1 + 36) = v12;
    }
  }
  return result;
}

