void __fastcall sub_3B130(__int64 a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 i; // r15
  __int64 *v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  __int64 v15; // r12
  __int64 v16; // [rsp+8h] [rbp-50h]
  __int64 v17; // [rsp+10h] [rbp-48h]

  v3 = *(_QWORD *)(a1 + 160);
  if ( v3 )
  {
    v17 = *(_QWORD *)(a1 + 168);
    if ( v17 )
    {
      v16 = 0;
      v4 = 0;
      do
      {
        v5 = (_QWORD *)(v3 + v4);
        v6 = *(_QWORD *)(v3 + v4 + 56);
        if ( v6 )
        {
          v7 = v5[8];
          if ( v7 )
          {
            for ( i = 0; i != v7; ++i )
            {
              v9 = (__int64 *)(v6 + 48 * i);
              v10 = v9[3];
              if ( v10 )
              {
                v9[4] = 0;
                qfree(v10);
              }
              v11 = *v9;
              if ( *v9 )
              {
                v9[1] = 0;
                qfree(v11);
              }
              v6 = v5[7];
            }
          }
          v5[8] = 0;
          qfree(v6);
        }
        v12 = v5[4];
        if ( v12 )
        {
          v5[5] = 0;
          qfree(v12);
        }
        v13 = v5[1];
        if ( v13 )
        {
          v5[2] = 0;
          qfree(v13);
        }
        ++v16;
        v3 = *(_QWORD *)(a1 + 160);
        v4 += 88;
      }
      while ( v17 != v16 );
    }
    *(_QWORD *)(a1 + 168) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 160) = 0;
    *(_QWORD *)(a1 + 176) = 0;
  }
  if ( a2 && *a2 )
  {
    if ( !strcmp(a2, "psx.cfg") )
      *(_DWORD *)(a1 + 344) = 1;
    if ( !strcmp(a2, "n64.cfg") )
      *(_DWORD *)(a1 + 344) = 2;
    read_ioports(a1 + 160, 0, a2, 0);
    if ( *(_QWORD *)(a1 + 168) )
    {
      v14 = 0;
      do
      {
        v15 = 11 * v14++;
        *(_QWORD *)(*(_QWORD *)(a1 + 160) + 8 * v15) = sub_2A800(a1, *(_QWORD *)(*(_QWORD *)(a1 + 160) + 8 * v15));
      }
      while ( v14 < *(_QWORD *)(a1 + 168) );
    }
  }
}

