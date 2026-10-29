__int64 __fastcall sub_312C40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 i; // rdi
  __int64 v15; // rax
  __int64 v16; // r12
  void *v17; // rax

  v5 = *(_DWORD *)a2;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  v6 = *(unsigned int *)(a2 + 4);
  result = v5 & 0xF;
  *(_DWORD *)(a1 + 4) = v6;
  switch ( (int)result )
  {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 8:
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
      result = *(_QWORD *)(a2 + 24);
      *(_QWORD *)(a1 + 24) = result;
      break;
    case 2:
      *(_QWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 16) = 0;
      v16 = *(_QWORD *)(a2 + 16);
      if ( v16 )
      {
        v17 = (void *)qalloc_or_throw(16 * v16, a2, v6, a4);
        *(_QWORD *)(a1 + 24) = v16;
        *(_QWORD *)(a1 + 8) = v17;
        result = (__int64)memcpy(v17, *(const void **)(a2 + 8), 16 * v16);
        *(_QWORD *)(a1 + 16) = v16;
      }
      break;
    case 6:
    case 7:
      *(_QWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 16) = 0;
      v9 = *(_QWORD *)(a2 + 16);
      if ( v9 )
      {
        v10 = 0;
        v11 = qalloc_or_throw(32 * v9, a2, v6, a4);
        *(_QWORD *)(a1 + 24) = v9;
        *(_QWORD *)(a1 + 8) = v11;
        for ( i = v11; ; i = *(_QWORD *)(a1 + 8) )
        {
          v15 = v10++;
          result = sub_312C40(32 * v15 + i, 32 * v15 + *(_QWORD *)(a2 + 8), v12, v13);
          if ( v9 == v10 )
            break;
        }
        *(_QWORD *)(a1 + 16) = v9;
      }
      break;
    default:
      if ( !under_debugger )
        sub_383060(0xCA1Au, a5);
      BUG();
  }
  return result;
}

