__int64 __fastcall sub_4BB20(_QWORD *a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v5; // rdi
  __int64 v6; // r14
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 i; // r15
  __int64 *v11; // r13
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // r14
  _QWORD *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // r12
  __int64 j; // r15
  __int64 *v22; // r13
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // r14
  _QWORD *v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // r12
  __int64 k; // r15
  __int64 *v36; // r13
  __int64 v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int64 v43; // [rsp+0h] [rbp-48h]
  __int64 v44; // [rsp+0h] [rbp-48h]
  __int64 v45; // [rsp+0h] [rbp-48h]
  __int64 v46; // [rsp+8h] [rbp-40h]
  __int64 v47; // [rsp+8h] [rbp-40h]
  __int64 v48; // [rsp+8h] [rbp-40h]

  *a1 = &off_92C40;
  v5 = a1[50];
  if ( v5 )
  {
    v46 = a1[51];
    if ( v46 )
    {
      v43 = 0;
      v6 = 0;
      do
      {
        v7 = (_QWORD *)(v5 + v6);
        v8 = *(_QWORD *)(v5 + v6 + 56);
        if ( v8 )
        {
          v9 = v7[8];
          if ( v9 )
          {
            for ( i = 0; i != v9; ++i )
            {
              v11 = (__int64 *)(v8 + 48 * i);
              v12 = v11[3];
              if ( v12 )
              {
                v11[4] = 0;
                qfree(v12, a2, a3, a4);
              }
              v13 = *v11;
              if ( *v11 )
              {
                v11[1] = 0;
                qfree(v13, a2, a3, a4);
              }
              v8 = v7[7];
            }
          }
          v7[8] = 0;
          qfree(v8, a2, a3, a4);
        }
        v14 = v7[4];
        if ( v14 )
        {
          v7[5] = 0;
          qfree(v14, a2, a3, a4);
        }
        v15 = v7[1];
        if ( v15 )
        {
          v7[2] = 0;
          qfree(v15, a2, a3, a4);
        }
        ++v43;
        v5 = a1[50];
        v6 += 88;
      }
      while ( v46 != v43 );
    }
    a1[51] = 0;
    qfree(v5, a2, a3, a4);
  }
  v16 = a1[47];
  if ( v16 )
  {
    v47 = a1[48];
    if ( v47 )
    {
      v44 = 0;
      v17 = 0;
      do
      {
        v18 = (_QWORD *)(v16 + v17);
        v19 = *(_QWORD *)(v16 + v17 + 56);
        if ( v19 )
        {
          v20 = v18[8];
          if ( v20 )
          {
            for ( j = 0; j != v20; ++j )
            {
              v22 = (__int64 *)(v19 + 48 * j);
              v23 = v22[3];
              if ( v23 )
              {
                v22[4] = 0;
                qfree(v23, a2, a3, a4);
              }
              v24 = *v22;
              if ( *v22 )
              {
                v22[1] = 0;
                qfree(v24, a2, a3, a4);
              }
              v19 = v18[7];
            }
          }
          v18[8] = 0;
          qfree(v19, a2, a3, a4);
        }
        v25 = v18[4];
        if ( v25 )
        {
          v18[5] = 0;
          qfree(v25, a2, a3, a4);
        }
        v26 = v18[1];
        if ( v26 )
        {
          v18[2] = 0;
          qfree(v26, a2, a3, a4);
        }
        ++v44;
        v16 = a1[47];
        v17 += 88;
      }
      while ( v47 != v44 );
    }
    a1[48] = 0;
    qfree(v16, a2, a3, a4);
  }
  v27 = a1[39];
  if ( v27 )
  {
    a1[40] = 0;
    qfree(v27, a2, a3, a4);
  }
  a1[29] = &off_94D30;
  remove_event_listener(a1 + 29);
  v29 = a1[23];
  a1[16] = &off_92B18;
  if ( v29 )
  {
    a1[24] = 0;
    qfree(v29, a2, v28, a4);
  }
  v30 = a1[20];
  if ( v30 )
  {
    v48 = a1[21];
    if ( v48 )
    {
      v45 = 0;
      v31 = 0;
      do
      {
        v32 = (_QWORD *)(v30 + v31);
        v33 = *(_QWORD *)(v30 + v31 + 56);
        if ( v33 )
        {
          v34 = v32[8];
          if ( v34 )
          {
            for ( k = 0; k != v34; ++k )
            {
              v36 = (__int64 *)(v33 + 48 * k);
              v37 = v36[3];
              if ( v37 )
              {
                v36[4] = 0;
                qfree(v37, a2, v28, a4);
              }
              v38 = *v36;
              if ( *v36 )
              {
                v36[1] = 0;
                qfree(v38, a2, v28, a4);
              }
              v33 = v32[7];
            }
          }
          v32[8] = 0;
          qfree(v33, a2, v28, a4);
        }
        v39 = v32[4];
        if ( v39 )
        {
          v32[5] = 0;
          qfree(v39, a2, v28, a4);
        }
        v40 = v32[1];
        if ( v40 )
        {
          v32[2] = 0;
          qfree(v40, a2, v28, a4);
        }
        ++v45;
        v30 = a1[20];
        v31 += 88;
      }
      while ( v48 != v45 );
    }
    a1[21] = 0;
    qfree(v30, a2, v28, a4);
  }
  v41 = a1[17];
  if ( v41 )
  {
    a1[18] = 0;
    qfree(v41, a2, v28, a4);
  }
  *a1 = &off_94D30;
  return remove_event_listener(a1);
}

