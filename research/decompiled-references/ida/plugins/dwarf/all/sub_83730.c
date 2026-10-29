__int64 __fastcall sub_83730(__int64 a1, int a2)
{
  __int64 v2; // r12
  int v3; // eax
  bool v4; // zf
  __int64 v5; // rsi
  int v6; // r14d
  __int64 v7; // rax
  __int64 v8; // rbp
  int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // r13
  __int64 v13; // rdx
  int v14; // r12d
  int v15; // eax
  __int64 v16; // r14
  __int64 v17; // rbx
  int v18; // r8d
  __int64 v19; // rcx
  int v20; // ebp
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r13
  __int64 v24; // r14
  __int64 v25; // r11
  int v26; // r12d
  __int64 v27; // rcx
  int v28; // r9d
  __int64 v29; // rdx
  int v30; // r10d
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // ebx
  int v35; // r15d
  __int64 v36; // rdi
  __int64 v37; // rax
  int v38; // r11d
  __int64 v39; // r9
  int v40; // r8d
  __int64 v41; // rax
  __int64 v42; // r11
  int v43; // r13d
  __int64 v44; // rbx
  int v45; // edx
  unsigned __int64 v46; // rax
  unsigned int v47; // eax
  __int64 v49; // [rsp+0h] [rbp-88h]
  int v50; // [rsp+Ch] [rbp-7Ch]
  __int64 v51; // [rsp+18h] [rbp-70h]
  __int64 v52; // [rsp+20h] [rbp-68h]
  int v53; // [rsp+28h] [rbp-60h]
  int v54; // [rsp+2Ch] [rbp-5Ch]
  __int64 v55; // [rsp+30h] [rbp-58h]
  __int64 v56; // [rsp+38h] [rbp-50h]
  int v57; // [rsp+40h] [rbp-48h]
  int v58; // [rsp+44h] [rbp-44h]
  __int64 v59; // [rsp+48h] [rbp-40h]

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 8) + a2;
  v4 = *(_QWORD *)(a1 + 112) == 0;
  *(_DWORD *)(a1 + 240) = a2;
  LODWORD(v5) = v3;
  if ( !v4 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = *(_QWORD *)(*(_QWORD *)(v2 + 104) + 8 * v7);
      *(_DWORD *)(v8 + 240) = v5;
      LODWORD(v5) = *(_DWORD *)(v8 + 8) + v5;
      if ( *(_QWORD *)(v8 + 112) )
      {
        v9 = 0;
        v10 = 0;
        v11 = v2;
        do
        {
          v12 = *(_QWORD *)(*(_QWORD *)(v8 + 104) + 8 * v10);
          *(_DWORD *)(v12 + 240) = v5;
          LODWORD(v5) = *(_DWORD *)(v12 + 8) + v5;
          if ( *(_QWORD *)(v12 + 112) )
          {
            v13 = 0;
            v14 = 0;
            v15 = v6;
            v16 = v11;
            do
            {
              v17 = *(_QWORD *)(*(_QWORD *)(v12 + 104) + 8 * v13);
              *(_DWORD *)(v17 + 240) = v5;
              LODWORD(v5) = *(_DWORD *)(v17 + 8) + v5;
              if ( *(_QWORD *)(v17 + 112) )
              {
                v52 = v8;
                v18 = v15;
                v19 = 0;
                v20 = 0;
                v21 = v14;
                v22 = v12;
                v23 = v16;
                do
                {
                  v24 = *(_QWORD *)(*(_QWORD *)(v17 + 104) + 8 * v19);
                  *(_DWORD *)(v24 + 240) = v5;
                  LODWORD(v5) = *(_DWORD *)(v24 + 8) + v5;
                  if ( *(_QWORD *)(v24 + 112) )
                  {
                    v25 = v22;
                    v26 = 0;
                    v27 = 0;
                    v28 = v9;
                    v29 = v17;
                    v30 = v21;
                    do
                    {
                      v31 = *(_QWORD *)(*(_QWORD *)(v24 + 104) + 8 * v27);
                      *(_DWORD *)(v31 + 240) = v5;
                      LODWORD(v5) = *(_DWORD *)(v31 + 8) + v5;
                      if ( *(_QWORD *)(v31 + 112) )
                      {
                        v32 = v31;
                        v33 = 0;
                        v34 = 0;
                        v35 = v18;
                        do
                        {
                          v36 = *(_QWORD *)(*(_QWORD *)(v32 + 104) + 8 * v33);
                          *(_DWORD *)(v36 + 240) = v5;
                          LODWORD(v5) = *(_DWORD *)(v36 + 8) + v5;
                          if ( *(_QWORD *)(v36 + 112) )
                          {
                            v50 = 0;
                            v37 = 0;
                            v49 = v25;
                            v38 = v28;
                            do
                            {
                              v39 = *(_QWORD *)(*(_QWORD *)(v36 + 104) + 8 * v37);
                              *(_DWORD *)(v39 + 240) = v5;
                              LODWORD(v5) = *(_DWORD *)(v39 + 8) + v5;
                              if ( *(_QWORD *)(v39 + 112) )
                              {
                                v51 = v29;
                                v40 = 0;
                                v41 = 0;
                                v53 = v38;
                                v42 = v23;
                                v43 = v34;
                                do
                                {
                                  v44 = *(_QWORD *)(*(_QWORD *)(v39 + 104) + 8 * v41);
                                  *(_DWORD *)(v44 + 240) = v5;
                                  v5 = (unsigned int)(*(_DWORD *)(v44 + 8) + v5);
                                  if ( *(_QWORD *)(v44 + 112) )
                                  {
                                    v45 = 0;
                                    v46 = 0;
                                    do
                                    {
                                      v59 = v42;
                                      v58 = v45;
                                      v57 = v40;
                                      v56 = v39;
                                      v55 = v32;
                                      v54 = v30;
                                      v47 = sub_83730(*(_QWORD *)(*(_QWORD *)(v44 + 104) + 8 * v46), v5);
                                      v30 = v54;
                                      v5 = v47;
                                      v32 = v55;
                                      v39 = v56;
                                      v45 = v58 + 1;
                                      v40 = v57;
                                      v42 = v59;
                                      v46 = v58 + 1;
                                    }
                                    while ( v46 < *(_QWORD *)(v44 + 112) );
                                  }
                                  v41 = ++v40;
                                }
                                while ( (unsigned __int64)v40 < *(_QWORD *)(v39 + 112) );
                                v34 = v43;
                                v29 = v51;
                                v23 = v42;
                                v38 = v53;
                              }
                              v37 = ++v50;
                            }
                            while ( (unsigned __int64)v50 < *(_QWORD *)(v36 + 112) );
                            v28 = v38;
                            v25 = v49;
                          }
                          v33 = ++v34;
                        }
                        while ( (unsigned __int64)v34 < *(_QWORD *)(v32 + 112) );
                        v18 = v35;
                      }
                      v27 = ++v26;
                    }
                    while ( (unsigned __int64)v26 < *(_QWORD *)(v24 + 112) );
                    v17 = v29;
                    v9 = v28;
                    v22 = v25;
                    v21 = v30;
                  }
                  v19 = ++v20;
                }
                while ( (unsigned __int64)v20 < *(_QWORD *)(v17 + 112) );
                v8 = v52;
                v14 = v21;
                v16 = v23;
                v15 = v18;
                v12 = v22;
              }
              v13 = ++v14;
            }
            while ( (unsigned __int64)v14 < *(_QWORD *)(v12 + 112) );
            v11 = v16;
            v6 = v15;
          }
          v10 = ++v9;
        }
        while ( (unsigned __int64)v9 < *(_QWORD *)(v8 + 112) );
        v2 = v11;
      }
      v7 = ++v6;
    }
    while ( (unsigned __int64)v6 < *(_QWORD *)(v2 + 112) );
  }
  return (unsigned int)v5;
}

