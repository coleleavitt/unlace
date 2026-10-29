__int64 __fastcall sub_1E280(__int64 a1)
{
  int v1; // eax
  unsigned __int64 v2; // rcx
  __int64 k; // rax
  unsigned __int64 v4; // rcx
  __int64 m; // rax
  int v6; // eax
  unsigned __int64 v8; // rcx
  __int64 i; // rax
  unsigned __int64 v10; // rcx
  __int64 j; // rax
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax

  v1 = getinf(5);
  if ( v1 == 18 || v1 == 25 )
  {
    v8 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)a1 = 2;
    if ( v8 <= 5 )
    {
      v14 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(a1 + 24) <= 5u )
      {
        v18 = qvector_reserve(a1 + 8, v14, 6, 4);
        v8 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = v18;
        v14 = v18;
      }
      memset((void *)(v14 + 4 * v8), 0, 4 * (6 - v8));
    }
    else if ( v8 == 6 )
    {
LABEL_20:
      for ( i = 0; i != 6; ++i )
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + i * 4) = dword_28600[i];
      v10 = *(_QWORD *)(a1 + 40);
      if ( v10 <= 7 )
      {
        v13 = *(_QWORD *)(a1 + 32);
        if ( *(_QWORD *)(a1 + 48) <= 7u )
        {
          v19 = qvector_reserve(a1 + 32, v13, 8, 4);
          v10 = *(_QWORD *)(a1 + 40);
          *(_QWORD *)(a1 + 32) = v19;
          v13 = v19;
        }
        memset((void *)(v13 + 4 * v10), 0, 4 * (8 - v10));
      }
      else if ( v10 == 8 )
      {
        goto LABEL_25;
      }
      *(_QWORD *)(a1 + 40) = 8;
LABEL_25:
      for ( j = 0; j != 8; ++j )
        *(_DWORD *)(*(_QWORD *)(a1 + 32) + j * 4) = dword_285E0[j];
      v6 = 14;
      goto LABEL_15;
    }
    *(_QWORD *)(a1 + 16) = 6;
    goto LABEL_20;
  }
  if ( v1 == 11 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)a1 = 3;
    if ( v2 <= 3 )
    {
      v12 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(a1 + 24) <= 3u )
      {
        v16 = qvector_reserve(a1 + 8, v12, 4, 4);
        v2 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = v16;
        v12 = v16;
      }
      memset((void *)(v12 + 4 * v2), 0, 4 * (4 - v2));
    }
    else if ( v2 == 4 )
    {
LABEL_7:
      for ( k = 0; k != 4; ++k )
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + k * 4) = dword_285C0[k];
      v4 = *(_QWORD *)(a1 + 40);
      if ( v4 <= 3 )
      {
        v15 = *(_QWORD *)(a1 + 32);
        if ( *(_QWORD *)(a1 + 48) <= 3u )
        {
          v17 = qvector_reserve(a1 + 32, v15, 4, 4);
          v4 = *(_QWORD *)(a1 + 40);
          *(_QWORD *)(a1 + 32) = v17;
          v15 = v17;
        }
        memset((void *)(v15 + 4 * v4), 0, 4 * (4 - v4));
      }
      else if ( v4 == 4 )
      {
        goto LABEL_12;
      }
      *(_QWORD *)(a1 + 40) = 4;
LABEL_12:
      for ( m = 0; m != 4; ++m )
        *(_DWORD *)(*(_QWORD *)(a1 + 32) + m * 4) = dword_285B0[m];
      v6 = 4;
LABEL_15:
      *(_DWORD *)(a1 + 4) = v6;
      return 1;
    }
    *(_QWORD *)(a1 + 16) = 4;
    goto LABEL_7;
  }
  return 0;
}
