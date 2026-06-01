void __fastcall sub_1FEAC0(__int64 a1, __int64 a2, int a3, int a4, double a5)
{
  unsigned __int64 *v7; // rax
  unsigned __int64 *v8; // rsi
  int v9; // eax
  unsigned __int64 v10; // rax
  unsigned __int64 *v11; // rdx
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx

  sub_1FE740(a1, a2);
  v7 = *(unsigned __int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    if ( *(_QWORD *)(a1 + 8) )
    {
      v8 = (unsigned __int64 *)v7[1];
      if ( v7 != v8 )
      {
        do
        {
          while ( 1 )
          {
            while ( 1 )
            {
LABEL_4:
              v9 = *((_DWORD *)v8 + 12);
              if ( v9 == a4 )
              {
                if ( !under_debugger )
                  sub_383060(0xC496u, a5);
                BUG();
              }
              if ( v9 != a3 )
                break;
              v15 = *v8;
              v16 = (unsigned __int64)v8;
              if ( (*v8 & 2) == 0 )
              {
                v17 = v8[2];
                if ( (*(_BYTE *)v17 & 2) != 0 )
                {
                  v18 = (unsigned __int64)v8;
                  v16 = v15 & 0xFFFFFFFFFFFFFFFCLL;
                  v19 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v19 & 2) == 0 )
                  {
                    while ( v18 == *(_QWORD *)(v16 + 16) )
                    {
                      v20 = v19 & 0xFFFFFFFFFFFFFFFCLL;
                      v19 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCLL);
                      if ( (v19 & 2) != 0 )
                      {
                        v16 = v20;
                        break;
                      }
                      v18 = v16;
                      v16 = v20;
                    }
                  }
                }
                else
                {
                  do
                  {
                    v16 = v17;
                    v17 = *(_QWORD *)(v17 + 8);
                  }
                  while ( (*(_BYTE *)v17 & 2) == 0 );
                }
              }
              sub_1FE390((unsigned __int64 **)a1, (__int64 *)v8);
              v8 = (unsigned __int64 *)v16;
              if ( *(_QWORD *)a1 == v16 )
                return;
            }
            if ( v9 > a3 )
            {
              *((_DWORD *)v8 + 12) = v9 - 1;
              v10 = v8[3];
              if ( *(_BYTE *)v10 == 9 )
                --*(_DWORD *)(*(_QWORD *)(v10 + 8) + 16LL);
            }
            if ( (*v8 & 2) == 0 )
              break;
LABEL_12:
            if ( *(unsigned __int64 **)a1 == v8 )
              return;
          }
          v11 = (unsigned __int64 *)v8[2];
          if ( (*(_BYTE *)v11 & 2) == 0 )
          {
            do
            {
              v8 = v11;
              v11 = (unsigned __int64 *)v11[1];
            }
            while ( (*(_BYTE *)v11 & 2) == 0 );
            goto LABEL_12;
          }
          v12 = (unsigned __int64 *)(*v8 & 0xFFFFFFFFFFFFFFFCLL);
          v13 = *v12;
          if ( (*v12 & 2) == 0 )
          {
            while ( v8 == (unsigned __int64 *)v12[2] )
            {
              v8 = v12;
              v14 = v13 & 0xFFFFFFFFFFFFFFFCLL;
              v13 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v13 & 2) != 0 )
              {
                v8 = (unsigned __int64 *)v14;
                if ( *(_QWORD *)a1 != v14 )
                  goto LABEL_4;
                return;
              }
              v12 = (unsigned __int64 *)v14;
            }
          }
          v8 = v12;
        }
        while ( *(unsigned __int64 **)a1 != v12 );
      }
    }
  }
}

