void __fastcall sub_13CBE0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r12
  _QWORD *v5; // rdi
  _QWORD *v6; // rdi
  __int64 v7; // r12
  _QWORD *v8; // rdi
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  _QWORD *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // r14
  __int64 i; // r12
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r12
  _QWORD *v19; // rax

  v2 = *a1 & 2LL;
  if ( (*a1 & 2) == 0 )
  {
    v3 = a1[1];
    if ( (*(_BYTE *)v3 & 2) != 0 )
    {
      v7 = a1[2];
      if ( (*(_BYTE *)v7 & 2) != 0 )
      {
        if ( a1[7] )
        {
LABEL_16:
          a1[8] = 0;
          qfree();
        }
LABEL_17:
        v10 = a1[4];
        if ( v10 )
        {
          if ( (*(_DWORD *)(v10 + 104))-- == 1 )
          {
            v12 = (_QWORD *)a1[4];
            if ( v12 )
            {
              sub_254CF0(a1[4], a2);
              v13 = v12[23];
              if ( v13 )
              {
                v14 = v12[24];
                if ( v14 )
                {
                  for ( i = 0; i != v14; ++i )
                  {
                    v16 = (_QWORD *)(v13 + 24 * i);
                    if ( *v16 )
                    {
                      v16[1] = 0;
                      qfree();
                      v13 = v12[23];
                    }
                  }
                }
                v12[24] = 0;
                qfree();
              }
              if ( v12[20] )
              {
                v12[21] = 0;
                qfree();
              }
              v17 = v12[16];
              if ( v17 )
              {
                v18 = v12[17];
                if ( v18 )
                {
                  do
                  {
                    v19 = (_QWORD *)(v17 + 32 * v2);
                    if ( *v19 )
                    {
                      v19[1] = 0;
                      qfree();
                      v17 = v12[16];
                    }
                    ++v2;
                  }
                  while ( v18 != v2 );
                }
                v12[17] = 0;
                qfree();
              }
              sub_2513D0(v12 + 2);
              j__qfree();
            }
          }
        }
        *a1 |= 2uLL;
        goto LABEL_37;
      }
      goto LABEL_9;
    }
    v5 = *(_QWORD **)(v3 + 8);
    if ( (*(_BYTE *)v5 & 2) != 0 )
    {
      v6 = *(_QWORD **)(v3 + 16);
      if ( (*(_BYTE *)v6 & 2) != 0 )
      {
LABEL_47:
        if ( *(_QWORD *)(v3 + 56) )
        {
          *(_QWORD *)(v3 + 64) = 0;
          qfree();
        }
        sub_13C700((_QWORD *)(v3 + 32), a2);
        *(_QWORD *)v3 |= 2uLL;
LABEL_6:
        if ( v3 )
          qfree();
        v7 = a1[2];
        if ( (*(_BYTE *)v7 & 2) != 0 )
        {
LABEL_14:
          if ( (*(_BYTE *)a1 & 2) != 0 )
          {
LABEL_37:
            if ( a1 )
              qfree();
            return;
          }
          if ( a1[7] )
            goto LABEL_16;
          goto LABEL_17;
        }
LABEL_9:
        v8 = *(_QWORD **)(v7 + 8);
        if ( (*(_BYTE *)v8 & 2) != 0 )
        {
          v9 = *(_QWORD **)(v7 + 16);
          if ( (*(_BYTE *)v9 & 2) != 0 )
            goto LABEL_50;
        }
        else
        {
          sub_13C840(v8, a2);
          v9 = *(_QWORD **)(v7 + 16);
          if ( (*(_BYTE *)v9 & 2) != 0 )
            goto LABEL_11;
        }
        sub_13C840(v9, a2);
LABEL_11:
        if ( (*(_BYTE *)v7 & 2) != 0 )
        {
LABEL_12:
          if ( v7 )
            qfree();
          goto LABEL_14;
        }
LABEL_50:
        if ( *(_QWORD *)(v7 + 56) )
        {
          *(_QWORD *)(v7 + 64) = 0;
          qfree();
        }
        sub_13C700((_QWORD *)(v7 + 32), a2);
        *(_QWORD *)v7 |= 2uLL;
        goto LABEL_12;
      }
    }
    else
    {
      sub_13C840(v5, a2);
      v6 = *(_QWORD **)(v3 + 16);
      if ( (*(_BYTE *)v6 & 2) != 0 )
        goto LABEL_5;
    }
    sub_13C840(v6, a2);
LABEL_5:
    if ( (*(_BYTE *)v3 & 2) != 0 )
      goto LABEL_6;
    goto LABEL_47;
  }
}

