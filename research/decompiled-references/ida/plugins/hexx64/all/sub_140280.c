void __fastcall sub_140280(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rbp
  _QWORD *v5; // rdi
  _QWORD *v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdx
  bool v9; // zf
  _QWORD *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 i; // r13
  __int64 *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r13
  __int64 *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rbp
  _QWORD *v22; // rdi
  _QWORD *v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rbp
  __int64 v26; // rdi
  __int64 v27; // rdx
  _QWORD *v28; // r13
  __int64 v29; // rdx
  __int64 v30; // r14
  __int64 j; // r12
  __int64 *v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // r12
  __int64 *v37; // rax
  __int64 v38; // rdi

  v3 = a1[1];
  v4 = *(_QWORD *)v3 & 2LL;
  if ( (*(_QWORD *)v3 & 2) != 0 )
    goto LABEL_31;
  v5 = *(_QWORD **)(v3 + 8);
  if ( (*(_BYTE *)v5 & 2) != 0 )
  {
    v6 = *(_QWORD **)(v3 + 16);
    if ( (*(_BYTE *)v6 & 2) != 0 )
    {
LABEL_4:
      v7 = *(_QWORD *)(v3 + 56);
      if ( v7 )
      {
        *(_QWORD *)(v3 + 64) = 0;
        qfree(v7);
      }
      v8 = *(_QWORD *)(v3 + 32);
      if ( v8 )
      {
        v9 = (*(_DWORD *)(v8 + 104))-- == 1;
        if ( v9 )
        {
          v10 = *(_QWORD **)(v3 + 32);
          if ( v10 )
          {
            sub_258970(*(__int64 **)(v3 + 32));
            v11 = v10[23];
            if ( v11 )
            {
              v12 = v10[24];
              if ( v12 )
              {
                for ( i = 0; i != v12; ++i )
                {
                  v14 = (__int64 *)(v11 + 24 * i);
                  v15 = *v14;
                  if ( *v14 )
                  {
                    v14[1] = 0;
                    qfree(v15);
                    v11 = v10[23];
                  }
                }
              }
              v10[24] = 0;
              qfree(v11);
            }
            v16 = v10[20];
            if ( v16 )
            {
              v10[21] = 0;
              qfree(v16);
            }
            v17 = v10[16];
            if ( v17 )
            {
              v18 = v10[17];
              if ( v18 )
              {
                do
                {
                  v19 = (__int64 *)(v17 + 32 * v4);
                  v20 = *v19;
                  if ( *v19 )
                  {
                    v19[1] = 0;
                    qfree(v20);
                    v17 = v10[16];
                  }
                  ++v4;
                }
                while ( v18 != v4 );
              }
              v10[17] = 0;
              qfree(v17);
            }
            sub_255050((__int64)(v10 + 2));
            j__qfree((__int64)v10);
          }
        }
      }
      *(_QWORD *)v3 |= 2uLL;
      goto LABEL_29;
    }
  }
  else
  {
    sub_140280(v5, a2);
    v6 = *(_QWORD **)(v3 + 16);
    if ( (*(_BYTE *)v6 & 2) != 0 )
      goto LABEL_28;
  }
  sub_140280(v6, a2);
LABEL_28:
  if ( (*(_BYTE *)v3 & 2) == 0 )
    goto LABEL_4;
LABEL_29:
  if ( v3 )
    qfree(v3);
LABEL_31:
  v21 = a1[2];
  if ( (*(_BYTE *)v21 & 2) != 0 )
    goto LABEL_39;
  v22 = *(_QWORD **)(v21 + 8);
  if ( (*(_BYTE *)v22 & 2) != 0 )
  {
    v23 = *(_QWORD **)(v21 + 16);
    if ( (*(_BYTE *)v23 & 2) != 0 )
    {
LABEL_34:
      v24 = *(_QWORD *)(v21 + 56);
      if ( v24 )
      {
        *(_QWORD *)(v21 + 64) = 0;
        qfree(v24);
      }
      sub_140140((__int64 **)(v21 + 32));
      *(_QWORD *)v21 |= 2uLL;
      goto LABEL_37;
    }
  }
  else
  {
    sub_140280(v22, a2);
    v23 = *(_QWORD **)(v21 + 16);
    if ( (*(_BYTE *)v23 & 2) != 0 )
      goto LABEL_67;
  }
  sub_140280(v23, a2);
LABEL_67:
  if ( (*(_BYTE *)v21 & 2) == 0 )
    goto LABEL_34;
LABEL_37:
  if ( v21 )
    qfree(v21);
LABEL_39:
  v25 = *a1 & 2LL;
  if ( (*a1 & 2) == 0 )
  {
    v26 = a1[7];
    if ( v26 )
    {
      a1[8] = 0;
      qfree(v26);
    }
    v27 = a1[4];
    if ( v27 )
    {
      v9 = (*(_DWORD *)(v27 + 104))-- == 1;
      if ( v9 )
      {
        v28 = (_QWORD *)a1[4];
        if ( v28 )
        {
          sub_258970((__int64 *)a1[4]);
          v29 = v28[23];
          if ( v29 )
          {
            v30 = v28[24];
            if ( v30 )
            {
              for ( j = 0; j != v30; ++j )
              {
                v32 = (__int64 *)(v29 + 24 * j);
                v33 = *v32;
                if ( *v32 )
                {
                  v32[1] = 0;
                  qfree(v33);
                  v29 = v28[23];
                }
              }
            }
            v28[24] = 0;
            qfree(v29);
          }
          v34 = v28[20];
          if ( v34 )
          {
            v28[21] = 0;
            qfree(v34);
          }
          v35 = v28[16];
          if ( v35 )
          {
            v36 = v28[17];
            if ( v36 )
            {
              do
              {
                v37 = (__int64 *)(v35 + 32 * v25);
                v38 = *v37;
                if ( *v37 )
                {
                  v37[1] = 0;
                  qfree(v38);
                  v35 = v28[16];
                }
                ++v25;
              }
              while ( v36 != v25 );
            }
            v28[17] = 0;
            qfree(v35);
          }
          sub_255050((__int64)(v28 + 2));
          j__qfree((__int64)v28);
        }
      }
    }
    *a1 |= 2uLL;
  }
  if ( a1 )
    qfree((__int64)a1);
}

