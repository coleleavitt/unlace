__int64 __fastcall sub_1C3400(__int64 *a1, signed __int64 *a2, __int64 a3, int a4, double a5)
{
  int v5; // eax
  __int64 v8; // rsi
  signed __int64 v9; // rdx
  __int64 *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r10
  __int64 v14; // r9

  v5 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 == 2 )
  {
    v11 = *(__int64 **)(a3 + 8);
    v12 = *v11;
    v13 = *v11 + 24 * v11[1];
    if ( *v11 != v13 )
    {
      v9 = 0x8000000000000000LL;
      v8 = 0x7FFFFFFFFFFFFFFFLL;
      do
      {
        if ( *(_DWORD *)v12 == 1 )
        {
          v14 = *(_QWORD *)(v12 + 8);
          if ( v8 > v14 )
            v8 = *(_QWORD *)(v12 + 8);
          if ( v9 < v14 + *(unsigned __int16 *)(v12 + 18) )
            v9 = v14 + *(unsigned __int16 *)(v12 + 18);
        }
        v12 += 24;
      }
      while ( v12 != v13 );
      if ( v8 != 0x7FFFFFFFFFFFFFFFLL )
        goto LABEL_5;
    }
    return 0;
  }
  if ( v5 > 2 )
  {
    if ( (unsigned int)(v5 - 3) > 3 )
    {
LABEL_22:
      if ( !under_debugger )
        sub_383060(0xC7CBu, a5);
      BUG();
    }
    return 0;
  }
  if ( v5 != 1 )
    goto LABEL_22;
  v8 = *(_QWORD *)(a3 + 8);
  v9 = a4 + v8;
LABEL_5:
  if ( a1 )
    *a1 = v8;
  if ( a2 )
    *a2 = v9;
  return 1;
}

