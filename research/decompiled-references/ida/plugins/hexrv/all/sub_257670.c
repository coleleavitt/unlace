__int64 __fastcall sub_257670(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  unsigned __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdx
  __int64 *v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 *v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx

  v1 = *(_QWORD *)(a1 + 72);
  v2 = *(_QWORD *)(v1 + 8);
  v3 = *(unsigned __int64 **)v1;
  LODWORD(v4) = v2;
  if ( *(_QWORD *)v1 )
  {
    LODWORD(v4) = 0;
    if ( v2 )
    {
      v5 = (__int64 *)v3[1];
      if ( v5 == (__int64 *)v3 )
      {
        v4 = *(_QWORD *)(v1 + 8);
      }
      else
      {
        do
        {
          v6 = *v5;
          v7 = *v5 & 2;
          if ( *((_BYTE *)v5 + 64) )
          {
            if ( !v7 )
            {
              v11 = (__int64 *)v5[2];
              if ( (*(_BYTE *)v11 & 2) != 0 )
              {
                v15 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
                v16 = *v15;
                if ( (*v15 & 2) == 0 )
                {
                  while ( v5 == (__int64 *)v15[2] )
                  {
                    v5 = v15;
                    v17 = v16 & 0xFFFFFFFFFFFFFFFCLL;
                    v16 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v16 & 2) != 0 )
                    {
                      v5 = (__int64 *)v17;
                      goto LABEL_9;
                    }
                    v15 = (__int64 *)v17;
                  }
                }
                v5 = v15;
              }
              else
              {
                do
                {
                  v5 = v11;
                  v11 = (__int64 *)v11[1];
                }
                while ( (*(_BYTE *)v11 & 2) == 0 );
              }
            }
          }
          else
          {
            v8 = (unsigned __int64)v5;
            if ( !v7 )
            {
              v9 = v5[2];
              if ( (*(_BYTE *)v9 & 2) != 0 )
              {
                v8 = v6 & 0xFFFFFFFFFFFFFFFCLL;
                v12 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v12 & 2) == 0 )
                {
                  v13 = (unsigned __int64)v5;
                  do
                  {
                    if ( v13 != *(_QWORD *)(v8 + 16) )
                      break;
                    v13 = v8;
                    v14 = v12 & 0xFFFFFFFFFFFFFFFCLL;
                    v12 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
                    v8 = v14;
                  }
                  while ( (v12 & 2) == 0 );
                }
              }
              else
              {
                do
                {
                  v8 = v9;
                  v9 = *(_QWORD *)(v9 + 8);
                }
                while ( (*(_BYTE *)v9 & 2) == 0 );
              }
            }
            sub_2572C0((unsigned __int64 **)v1, v5);
            v5 = (__int64 *)v8;
          }
LABEL_9:
          ;
        }
        while ( *(__int64 **)v1 != v5 );
        v4 = *(_QWORD *)(v1 + 8);
      }
    }
  }
  return (unsigned int)(v2 - v4);
}

