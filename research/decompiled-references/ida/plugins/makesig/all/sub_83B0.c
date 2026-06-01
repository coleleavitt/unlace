__int64 __fastcall sub_83B0(__int64 *a1)
{
  unsigned int v1; // r15d
  __int64 v2; // rbx
  int v3; // ebp
  unsigned __int64 v4; // r13
  _QWORD *v5; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // r12
  int v9; // ebp
  int v10; // r15d
  _QWORD *v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rbp
  int i; // ebx
  _QWORD *v17; // rcx
  int v18; // r12d
  __int64 v19; // rbp
  int v20; // ebx
  unsigned __int64 v21; // rax
  _QWORD *v22; // rdi
  __int64 v23; // r13
  int v24; // r15d
  int v25; // r14d
  unsigned __int64 v26; // rbx
  __int64 v27; // r12
  int v28; // ebp
  int v29; // eax
  int v30; // esi
  unsigned __int64 v31; // [rsp+8h] [rbp-90h]
  int v32; // [rsp+14h] [rbp-84h]
  __int64 v33; // [rsp+18h] [rbp-80h]
  unsigned __int64 v34; // [rsp+20h] [rbp-78h]
  int v35; // [rsp+28h] [rbp-70h]
  int v36; // [rsp+2Ch] [rbp-6Ch]
  __int64 v37; // [rsp+30h] [rbp-68h]
  int v38; // [rsp+38h] [rbp-60h]
  int v39; // [rsp+3Ch] [rbp-5Ch]
  unsigned __int64 v40; // [rsp+40h] [rbp-58h]
  __int64 v41; // [rsp+48h] [rbp-50h]
  unsigned __int64 v42; // [rsp+50h] [rbp-48h]
  int v43; // [rsp+58h] [rbp-40h]
  unsigned int v44; // [rsp+5Ch] [rbp-3Ch]

  v1 = 0;
  if ( a1[1] )
  {
    v2 = *a1;
    v3 = 0;
    v4 = a1[1];
    do
    {
      v5 = *(_QWORD **)(v2 + 8);
      if ( *(_BYTE *)v2 )
      {
        v1 += *((_DWORD *)v5 + 2);
      }
      else
      {
        v7 = v5[1];
        if ( v7 )
        {
          v41 = v2;
          v8 = *v5;
          v42 = v4;
          v43 = v3;
          v9 = 0;
          v44 = v1;
          v10 = 0;
          do
          {
            v11 = *(_QWORD **)(v8 + 8);
            if ( *(_BYTE *)v8 )
            {
              v10 += *((_DWORD *)v11 + 2);
            }
            else
            {
              v12 = v11[1];
              if ( v12 )
              {
                v13 = *v11;
                v37 = v8;
                v14 = 0;
                v39 = v10;
                v40 = v7;
                v38 = v9;
                v15 = v13;
                for ( i = 0; i < v12; ++i )
                {
                  v17 = *(_QWORD **)(v15 + 8);
                  if ( *(_BYTE *)v15 )
                  {
                    v14 += *((_DWORD *)v17 + 2);
                  }
                  else if ( v17[1] )
                  {
                    v34 = v12;
                    v33 = v15;
                    v18 = 0;
                    v35 = i;
                    v19 = *v17;
                    v20 = 0;
                    v36 = v14;
                    v21 = v17[1];
                    do
                    {
                      v22 = *(_QWORD **)(v19 + 8);
                      if ( *(_BYTE *)v19 )
                      {
                        v18 += *((_DWORD *)v22 + 2);
                      }
                      else if ( v22[1] )
                      {
                        v31 = v21;
                        v23 = *v22;
                        v24 = 0;
                        v32 = v20;
                        v25 = v18;
                        v26 = v22[1];
                        v27 = v19;
                        v28 = 0;
                        do
                        {
                          if ( *(_BYTE *)v23 )
                            v29 = *(_DWORD *)(*(_QWORD *)(v23 + 8) + 8LL);
                          else
                            v29 = sub_83B0(*(_QWORD *)(v23 + 8));
                          ++v24;
                          v28 += v29;
                          v23 += 40;
                        }
                        while ( v24 < v26 );
                        v30 = v28;
                        v19 = v27;
                        v21 = v31;
                        v20 = v32;
                        v18 = v30 + v25;
                      }
                      ++v20;
                      v19 += 40;
                    }
                    while ( v20 < v21 );
                    v15 = v33;
                    i = v35;
                    v12 = v34;
                    v14 = v18 + v36;
                  }
                  v15 += 40;
                }
                v9 = v38;
                v8 = v37;
                v7 = v40;
                v10 = v14 + v39;
              }
            }
            ++v9;
            v8 += 40;
          }
          while ( v9 < v7 );
          v3 = v43;
          v2 = v41;
          v4 = v42;
          v1 = v10 + v44;
        }
      }
      ++v3;
      v2 += 40;
    }
    while ( v3 < v4 );
  }
  return v1;
}

