__int64 __fastcall sub_413D90(__int64 *a1, unsigned __int8 *a2, double a3)
{
  __int64 result; // rax
  char v4; // al
  __int64 v5; // r13
  char v6; // al
  __int64 v7; // r14
  char v8; // al
  __int64 v9; // r15
  char v10; // al
  __int64 v11; // rbp
  char v12; // al
  __int64 v13; // r12
  char v14; // al
  __int64 v15; // r9
  char v16; // al
  __int64 v17; // rax
  char v18; // dl
  __int64 v19; // [rsp+0h] [rbp-58h]
  unsigned __int8 *v20; // [rsp+8h] [rbp-50h]
  __int64 v21; // [rsp+10h] [rbp-48h]
  __int64 v22; // [rsp+10h] [rbp-48h]
  __int64 v23; // [rsp+18h] [rbp-40h]

  result = *a2;
  v20 = a2;
  if ( (_BYTE)result == 1 )
    return sub_63E80(a1, *((_DWORD *)v20 + 2), *((_DWORD *)v20 + 1), a3);
  while ( (_BYTE)result == 14 )
  {
    v19 = *((_QWORD *)v20 + 1);
    v4 = *(_BYTE *)v19;
    if ( *(_BYTE *)v19 == 1 )
    {
LABEL_34:
      sub_63E80(a1, *(_DWORD *)(v19 + 8), *(_DWORD *)(v19 + 4), a3);
    }
    else
    {
      while ( v4 == 14 )
      {
        v5 = *(_QWORD *)(v19 + 8);
        v6 = *(_BYTE *)v5;
        if ( *(_BYTE *)v5 == 1 )
        {
LABEL_32:
          sub_63E80(a1, *(_DWORD *)(v5 + 8), *(_DWORD *)(v5 + 4), a3);
        }
        else
        {
          while ( v6 == 14 )
          {
            v7 = *(_QWORD *)(v5 + 8);
            v8 = *(_BYTE *)v7;
            if ( *(_BYTE *)v7 == 1 )
            {
LABEL_30:
              sub_63E80(a1, *(_DWORD *)(v7 + 8), *(_DWORD *)(v7 + 4), a3);
            }
            else
            {
              while ( v8 == 14 )
              {
                v9 = *(_QWORD *)(v7 + 8);
                v10 = *(_BYTE *)v9;
                if ( *(_BYTE *)v9 == 1 )
                {
LABEL_28:
                  sub_63E80(a1, *(_DWORD *)(v9 + 8), *(_DWORD *)(v9 + 4), a3);
                }
                else
                {
                  while ( v10 == 14 )
                  {
                    v11 = *(_QWORD *)(v9 + 8);
                    v12 = *(_BYTE *)v11;
                    if ( *(_BYTE *)v11 == 1 )
                    {
LABEL_26:
                      sub_63E80(a1, *(_DWORD *)(v11 + 8), *(_DWORD *)(v11 + 4), a3);
                    }
                    else
                    {
                      while ( v12 == 14 )
                      {
                        v13 = *(_QWORD *)(v11 + 8);
                        v14 = *(_BYTE *)v13;
                        if ( *(_BYTE *)v13 == 1 )
                        {
LABEL_24:
                          sub_63E80(a1, *(_DWORD *)(v13 + 8), *(_DWORD *)(v13 + 4), a3);
                        }
                        else
                        {
                          while ( v14 == 14 )
                          {
                            v15 = *(_QWORD *)(v13 + 8);
                            v16 = *(_BYTE *)v15;
                            if ( *(_BYTE *)v15 == 1 )
                            {
LABEL_22:
                              sub_63E80(a1, *(_DWORD *)(v15 + 8), *(_DWORD *)(v15 + 4), a3);
                            }
                            else
                            {
                              while ( v16 == 14 )
                              {
                                v17 = *(_QWORD *)(v15 + 8);
                                v18 = *(_BYTE *)v17;
                                if ( *(_BYTE *)v17 == 1 )
                                {
LABEL_20:
                                  v22 = v15;
                                  sub_63E80(a1, *(_DWORD *)(v17 + 8), *(_DWORD *)(v17 + 4), a3);
                                  v15 = v22;
                                }
                                else
                                {
                                  while ( v18 == 14 )
                                  {
                                    v23 = v15;
                                    v21 = v17;
                                    sub_413D90(a1, *(unsigned __int8 **)(v17 + 8));
                                    v15 = v23;
                                    v17 = *(_QWORD *)(v21 + 8) + 16LL;
                                    v18 = *(_BYTE *)v17;
                                    if ( *(_BYTE *)v17 == 1 )
                                      goto LABEL_20;
                                  }
                                }
                                v15 = *(_QWORD *)(v15 + 8) + 16LL;
                                v16 = *(_BYTE *)v15;
                                if ( *(_BYTE *)v15 == 1 )
                                  goto LABEL_22;
                              }
                            }
                            v13 = *(_QWORD *)(v13 + 8) + 16LL;
                            v14 = *(_BYTE *)v13;
                            if ( *(_BYTE *)v13 == 1 )
                              goto LABEL_24;
                          }
                        }
                        v11 = *(_QWORD *)(v11 + 8) + 16LL;
                        v12 = *(_BYTE *)v11;
                        if ( *(_BYTE *)v11 == 1 )
                          goto LABEL_26;
                      }
                    }
                    v9 = *(_QWORD *)(v9 + 8) + 16LL;
                    v10 = *(_BYTE *)v9;
                    if ( *(_BYTE *)v9 == 1 )
                      goto LABEL_28;
                  }
                }
                v7 = *(_QWORD *)(v7 + 8) + 16LL;
                v8 = *(_BYTE *)v7;
                if ( *(_BYTE *)v7 == 1 )
                  goto LABEL_30;
              }
            }
            v5 = *(_QWORD *)(v5 + 8) + 16LL;
            v6 = *(_BYTE *)v5;
            if ( *(_BYTE *)v5 == 1 )
              goto LABEL_32;
          }
        }
        v4 = *(_BYTE *)(*(_QWORD *)(v19 + 8) + 16LL);
        v19 = *(_QWORD *)(v19 + 8) + 16LL;
        if ( v4 == 1 )
          goto LABEL_34;
      }
    }
    result = *(unsigned __int8 *)(*((_QWORD *)v20 + 1) + 16LL);
    v20 = (unsigned __int8 *)(*((_QWORD *)v20 + 1) + 16LL);
    if ( (_BYTE)result == 1 )
      return sub_63E80(a1, *((_DWORD *)v20 + 2), *((_DWORD *)v20 + 1), a3);
  }
  return result;
}

