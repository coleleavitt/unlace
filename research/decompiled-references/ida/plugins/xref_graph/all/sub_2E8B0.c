void __fastcall sub_2E8B0(__int64 *a1, const char *a2)
{
  __int64 v2; // rdx
  __int64 v4; // r12
  __int64 i; // rbp
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 j; // rbp
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // r12
  __int64 k; // rbp
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // r12
  __int64 m; // rbp
  __int64 v20; // rax

  v2 = a1[9];
  if ( v2 )
  {
    v4 = a1[10];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = v2 + 40 * i;
        v7 = *(_QWORD *)(v6 + 16);
        if ( v7 )
        {
          *(_QWORD *)(v6 + 24) = 0;
          qfree(v7, a2);
          v2 = a1[9];
        }
      }
    }
    a1[10] = 0;
    qfree(v2, a2);
  }
  v8 = a1[6];
  if ( v8 )
  {
    v9 = a1[7];
    if ( v9 )
    {
      for ( j = 0; j != v9; ++j )
      {
        v11 = v8 + 40 * j;
        v12 = *(_QWORD *)(v11 + 16);
        if ( v12 )
        {
          *(_QWORD *)(v11 + 24) = 0;
          qfree(v12, a2);
          v8 = a1[6];
        }
      }
    }
    a1[7] = 0;
    qfree(v8, a2);
  }
  v13 = a1[3];
  if ( v13 )
  {
    v14 = a1[4];
    if ( v14 )
    {
      for ( k = 0; k != v14; ++k )
      {
        v16 = k;
        QT::QPainterPath::~QPainterPath((QT::QPainterPath *)(v13 + 16 * v16 + 8));
        v13 = a1[3];
      }
    }
    a1[4] = 0;
    qfree(v13, a2);
  }
  v17 = *a1;
  if ( *a1 )
  {
    v18 = a1[1];
    if ( v18 )
    {
      for ( m = 0; m != v18; ++m )
      {
        v20 = m;
        QT::QPainterPath::~QPainterPath((QT::QPainterPath *)(v17 + 16 * v20 + 8));
        v17 = *a1;
      }
    }
    a1[1] = 0;
    qfree(v17, a2);
  }
}

