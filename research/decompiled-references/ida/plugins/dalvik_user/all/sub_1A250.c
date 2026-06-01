__int64 __fastcall sub_1A250(__int64 a1)
{
  _QWORD *v1; // r14
  void **v2; // rax
  char *v3; // rcx
  unsigned __int64 v4; // rdx
  _QWORD *v5; // rbx
  _QWORD *v6; // r12
  _QWORD *v7; // rbp
  _QWORD *v8; // r13
  _QWORD *v9; // rbx
  _QWORD *v10; // r15
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rbp
  __int64 v14; // r13
  __int64 v15; // r12
  __int64 v16; // rdx
  _QWORD *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r12
  __int64 v20; // rbp
  __int64 j; // r15
  void **v22; // r15
  __int64 v23; // rdx
  __int64 v24; // r14
  __int64 v25; // r13
  __int64 k; // rbp
  void *v27; // rdi
  void **v28; // rbx
  unsigned __int64 v29; // rbp
  void **v30; // r12
  void *v31; // rdi
  __int64 result; // rax
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // r14
  __int64 v36; // r13
  __int64 i; // r12
  _QWORD *v38; // [rsp+0h] [rbp-78h]
  void **v39; // [rsp+0h] [rbp-78h]
  _QWORD *v40; // [rsp+0h] [rbp-78h]
  void **v41; // [rsp+0h] [rbp-78h]
  unsigned __int64 v42; // [rsp+8h] [rbp-70h]
  _QWORD *v43; // [rsp+8h] [rbp-70h]
  void **v44; // [rsp+10h] [rbp-68h]
  _QWORD *v45; // [rsp+10h] [rbp-68h]
  _QWORD *v46; // [rsp+18h] [rbp-60h]
  _QWORD *v47; // [rsp+20h] [rbp-58h]
  char *v48; // [rsp+28h] [rbp-50h]
  _QWORD *v49; // [rsp+30h] [rbp-48h]

  v1 = (_QWORD *)a1;
  if ( *(_BYTE *)(a1 + 32) )
    sub_4A2D0(a1);
  v2 = *(void ***)(a1 + 144);
  if ( v2 )
  {
    v3 = (char *)v2[5];
    v4 = (unsigned __int64)v2[9];
    v5 = v2[6];
    v6 = v2[7];
    v7 = v2[2];
    v8 = v2[4];
    if ( (unsigned __int64)(v3 + 8) < v4 )
    {
      v44 = *(void ***)(a1 + 144);
      v42 = (unsigned __int64)v2[9];
      v47 = v2[4];
      v48 = (char *)v2[5];
      v49 = v2[2];
      v46 = v2[6];
      v9 = v3 + 8;
      v10 = v2[7];
      do
      {
        v38 = v9;
        v11 = *v9;
        v12 = v11 + 512;
        do
        {
          if ( *(_QWORD *)(v11 + 8) )
          {
            v13 = *(_QWORD *)(v11 + 16);
            if ( v13 )
            {
              v14 = 0;
              v15 = 0;
              v16 = *(_QWORD *)(v11 + 8);
              do
              {
                if ( *(_QWORD *)(v16 + v14 + 112) )
                {
                  *(_QWORD *)(v16 + v14 + 120) = 0;
                  qfree();
                  v16 = *(_QWORD *)(v11 + 8);
                }
                ++v15;
                v14 += 184;
              }
              while ( v13 != v15 );
            }
            *(_QWORD *)(v11 + 16) = 0;
            qfree();
          }
          v11 += 32;
        }
        while ( v11 != v12 );
        v9 = v38 + 1;
      }
      while ( (unsigned __int64)(v38 + 1) < v42 );
      v2 = v44;
      v5 = v46;
      v6 = v10;
      v4 = v42;
      v8 = v47;
      v3 = v48;
      v7 = v49;
      v1 = (_QWORD *)a1;
    }
    if ( (char *)v4 == v3 )
    {
      if ( v5 == v7 )
        goto LABEL_40;
      v40 = v1;
      v22 = v2;
      do
      {
        v34 = v7[1];
        if ( v34 )
        {
          v35 = v7[2];
          if ( v35 )
          {
            v36 = 0;
            for ( i = 0; i != v35; ++i )
            {
              if ( *(_QWORD *)(v34 + v36 + 112) )
              {
                *(_QWORD *)(v34 + v36 + 120) = 0;
                qfree();
                v34 = v7[1];
              }
              v36 += 184;
            }
          }
          v7[2] = 0;
          qfree();
        }
        v7 += 4;
      }
      while ( v5 != v7 );
    }
    else
    {
      if ( v7 != v8 )
      {
        v39 = v2;
        v45 = v6;
        v43 = v5;
        v17 = v7;
        do
        {
          v18 = v17[1];
          if ( v18 )
          {
            v19 = v17[2];
            if ( v19 )
            {
              v20 = 0;
              for ( j = 0; j != v19; ++j )
              {
                if ( *(_QWORD *)(v18 + v20 + 112) )
                {
                  *(_QWORD *)(v18 + v20 + 120) = 0;
                  qfree();
                  v18 = v17[1];
                }
                v20 += 184;
              }
            }
            v17[2] = 0;
            qfree();
          }
          v17 += 4;
        }
        while ( v8 != v17 );
        v2 = v39;
        v5 = v43;
        v6 = v45;
      }
      if ( v5 == v6 )
        goto LABEL_40;
      v40 = v1;
      v22 = v2;
      do
      {
        v23 = v6[1];
        if ( v23 )
        {
          v24 = v6[2];
          if ( v24 )
          {
            v25 = 0;
            for ( k = 0; k != v24; ++k )
            {
              if ( *(_QWORD *)(v23 + v25 + 112) )
              {
                *(_QWORD *)(v23 + v25 + 120) = 0;
                qfree();
                v23 = v6[1];
              }
              v25 += 184;
            }
          }
          v6[2] = 0;
          qfree();
        }
        v6 += 4;
      }
      while ( v5 != v6 );
    }
    v1 = v40;
    v2 = v22;
LABEL_40:
    v27 = *v2;
    if ( *v2 )
    {
      v28 = (void **)v2[5];
      v29 = (unsigned __int64)v2[9] + 8;
      if ( (unsigned __int64)v28 < v29 )
      {
        v30 = v2;
        do
        {
          v31 = *v28++;
          operator delete(v31, 0x200u);
        }
        while ( (unsigned __int64)v28 < v29 );
        v27 = *v30;
        v2 = v30;
      }
      v41 = v2;
      operator delete(v27, 8LL * (_QWORD)v2[1]);
      v2 = v41;
    }
    operator delete(v2, 0x50u);
  }
  result = qmutex_free();
  v33 = v1[15];
  v1[3] = 0;
  if ( v33 )
  {
    v1[16] = 0;
    result = qfree();
  }
  if ( v1[12] )
  {
    v1[13] = 0;
    result = qfree();
  }
  if ( v1[8] )
  {
    v1[9] = 0;
    return qfree();
  }
  return result;
}

