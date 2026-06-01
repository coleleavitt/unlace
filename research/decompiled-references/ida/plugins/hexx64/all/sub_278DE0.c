__int64 __fastcall sub_278DE0(int **a1)
{
  unsigned int v1; // r13d
  __int64 v2; // rax
  unsigned __int64 v3; // rbx
  __int64 tinfo_size; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  int *v10; // rcx

  v1 = 0;
  v2 = (__int64)*a1;
  if ( *a1 )
  {
    if ( a1[1] )
    {
      v3 = *(_QWORD *)(v2 + 8);
      if ( v2 != v3 )
      {
        while ( 1 )
        {
LABEL_4:
          if ( *(int *)(v3 + 44) >= 0 )
          {
            tinfo_size = get_tinfo_size();
            if ( tinfo_size != -1 )
            {
              v5 = *(int *)(v3 + 44) + tinfo_size;
              if ( (int)v1 < v5 )
                v1 = v5;
            }
          }
          if ( (*(_QWORD *)v3 & 2) != 0 )
            goto LABEL_11;
          v6 = *(_QWORD *)(v3 + 16);
          if ( (*(_BYTE *)v6 & 2) != 0 )
          {
            v8 = *(_QWORD *)v3 & 0xFFFFFFFFFFFFFFFCLL;
            v9 = *(_QWORD *)v8;
            if ( (*(_QWORD *)v8 & 2) == 0 )
            {
              while ( *(_QWORD *)(v8 + 16) == v3 )
              {
                v3 = v8;
                v10 = (int *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
                v9 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v9 & 2) != 0 )
                {
                  v3 = (unsigned __int64)v10;
                  if ( *a1 != v10 )
                    goto LABEL_4;
                  return v1;
                }
                v8 = (unsigned __int64)v10;
              }
            }
            v3 = v8;
            if ( *a1 == (int *)v8 )
              return v1;
          }
          else
          {
            do
            {
              v3 = v6;
              v6 = *(_QWORD *)(v6 + 8);
            }
            while ( (*(_BYTE *)v6 & 2) == 0 );
LABEL_11:
            if ( *a1 == (int *)v3 )
              return v1;
          }
        }
      }
    }
  }
  return v1;
}

