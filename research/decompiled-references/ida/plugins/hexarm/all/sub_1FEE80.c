void __fastcall sub_1FEE80(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned __int64 *v6; // rax
  unsigned __int64 *v7; // rsi
  int v8; // eax
  unsigned __int64 v9; // rax
  unsigned __int64 *v10; // rdx
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rdx

  sub_1FEB00(a1, a2);
  v6 = *(unsigned __int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    if ( *(_QWORD *)(a1 + 8) )
    {
      v7 = (unsigned __int64 *)v6[1];
      if ( v6 != v7 )
      {
        do
        {
          while ( 1 )
          {
            while ( 1 )
            {
LABEL_4:
              v8 = *((_DWORD *)v7 + 12);
              if ( v8 == a4 )
              {
                if ( !under_debugger )
                  sub_3835A0(50326);
                BUG();
              }
              if ( v8 != a3 )
                break;
              v14 = *v7;
              v15 = (unsigned __int64)v7;
              if ( (*v7 & 2) == 0 )
              {
                v16 = v7[2];
                if ( (*(_BYTE *)v16 & 2) != 0 )
                {
                  v17 = (unsigned __int64)v7;
                  v15 = v14 & 0xFFFFFFFFFFFFFFFCLL;
                  v18 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v18 & 2) == 0 )
                  {
                    while ( v17 == *(_QWORD *)(v15 + 16) )
                    {
                      v19 = v18 & 0xFFFFFFFFFFFFFFFCLL;
                      v18 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCLL);
                      if ( (v18 & 2) != 0 )
                      {
                        v15 = v19;
                        break;
                      }
                      v17 = v15;
                      v15 = v19;
                    }
                  }
                }
                else
                {
                  do
                  {
                    v15 = v16;
                    v16 = *(_QWORD *)(v16 + 8);
                  }
                  while ( (*(_BYTE *)v16 & 2) == 0 );
                }
              }
              sub_1FE750((unsigned __int64 **)a1, (__int64 *)v7);
              v7 = (unsigned __int64 *)v15;
              if ( *(_QWORD *)a1 == v15 )
                return;
            }
            if ( v8 > a3 )
            {
              *((_DWORD *)v7 + 12) = v8 - 1;
              v9 = v7[3];
              if ( *(_BYTE *)v9 == 9 )
                --*(_DWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
            }
            if ( (*v7 & 2) == 0 )
              break;
LABEL_12:
            if ( *(unsigned __int64 **)a1 == v7 )
              return;
          }
          v10 = (unsigned __int64 *)v7[2];
          if ( (*(_BYTE *)v10 & 2) == 0 )
          {
            do
            {
              v7 = v10;
              v10 = (unsigned __int64 *)v10[1];
            }
            while ( (*(_BYTE *)v10 & 2) == 0 );
            goto LABEL_12;
          }
          v11 = (unsigned __int64 *)(*v7 & 0xFFFFFFFFFFFFFFFCLL);
          v12 = *v11;
          if ( (*v11 & 2) == 0 )
          {
            while ( v7 == (unsigned __int64 *)v11[2] )
            {
              v7 = v11;
              v13 = v12 & 0xFFFFFFFFFFFFFFFCLL;
              v12 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v12 & 2) != 0 )
              {
                v7 = (unsigned __int64 *)v13;
                if ( *(_QWORD *)a1 != v13 )
                  goto LABEL_4;
                return;
              }
              v11 = (unsigned __int64 *)v13;
            }
          }
          v7 = v11;
        }
        while ( *(unsigned __int64 **)a1 != v11 );
      }
    }
  }
}

