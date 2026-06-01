_DWORD *__fastcall sub_6B180(__int64 a1, double a2)
{
  __int64 v2; // r12
  _DWORD *result; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  _QWORD *v7; // rbx
  char *v8; // rdi
  char *v9; // rcx
  char *v10; // rdx

  v2 = 0;
  result = (_DWORD *)*(unsigned int *)(a1 + 376);
  if ( (int)result > 0 )
  {
    do
    {
      v5 = *(_QWORD *)(a1 + 64);
      v6 = *(unsigned int *)(*(_QWORD *)(a1 + 368) + 4 * v2);
      if ( (unsigned int)v6 >= *(_DWORD *)(v5 + 64) )
      {
        if ( !under_debugger )
          sub_383060(0xCDEFu, a2);
        BUG();
      }
      v7 = *(_QWORD **)(*(_QWORD *)(v5 + 528) + 8 * v6);
      result = (_DWORD *)*(unsigned int *)(a1 + 72);
      v8 = (char *)v7[43];
      v9 = (char *)v7[44];
      v10 = &v8[4 * (_QWORD)v9];
      if ( v8 != v10 )
      {
        while ( (_DWORD)result != *(_DWORD *)v8 )
        {
          v8 += 4;
          if ( v10 == v8 )
            goto LABEL_9;
        }
        if ( v10 != v8 )
        {
          memmove(v8, v8 + 4, v10 - v8 - 4);
          result = (_DWORD *)v7[44];
          v9 = (char *)result - 1;
          v7[44] = (char *)result - 1;
        }
      }
LABEL_9:
      if ( !v9 )
      {
        result = (_DWORD *)v7[8];
        *result |= 0x400u;
      }
      ++v2;
    }
    while ( *(_DWORD *)(a1 + 376) > (int)v2 );
  }
  *(_QWORD *)(a1 + 376) = 0;
  return result;
}

