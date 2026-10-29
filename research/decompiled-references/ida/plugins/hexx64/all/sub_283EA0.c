__int64 __fastcall sub_283EA0(__int64 a1, __int64 a2, int a3, double a4)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v7; // rax
  int v8; // eax
  __int64 *v9; // rsi
  __int64 v10; // r11
  _QWORD *v11; // r9
  int v12; // eax
  _QWORD *v14; // rax
  _QWORD **v15; // rdi
  _QWORD *v16; // rdx
  _QWORD *v17; // r8

  v5 = *(_QWORD *)(a1 + 24);
  if ( (int)v5 > 0 )
  {
    v7 = (int)v5;
    while ( 1 )
    {
      if ( v7 < v5 )
        a2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v7);
      if ( a2 && (unsigned int)(*(_DWORD *)(a2 + 8) - 74) <= 3 )
        break;
      if ( (int)--v7 <= 0 )
        return 0;
    }
    v8 = v7 - 1;
    v9 = (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL * v8);
    v10 = (__int64)&v9[-v8 - 1];
    while ( 1 )
    {
      v11 = (_QWORD *)a2;
      a2 = *v9;
      if ( !*v9 )
        break;
      v12 = *(_DWORD *)(a2 + 8);
      if ( v12 == 71 )
      {
        v15 = *(_QWORD ***)(a2 + 24);
        v16 = *v15;
        do
        {
          if ( v15 == v16 )
          {
            if ( !under_debugger )
              sub_383060(0xC5ADu, a4);
            BUG();
          }
          v17 = v16 + 2;
          v14 = v16;
          v16 = (_QWORD *)*v16;
        }
        while ( v17 != v11 );
        while ( 1 )
        {
          v14 = (_QWORD *)*v14;
          if ( v15 == v14 )
            break;
          if ( *((_DWORD *)v14 + 7) == a3 )
            return 1;
          if ( *((_DWORD *)v14 + 6) != 70 )
            return 0;
        }
      }
      else if ( (unsigned int)(v12 - 74) <= 3 )
      {
        return 0;
      }
      if ( --v9 == (__int64 *)v10 )
        return 0;
    }
  }
  return 0;
}

