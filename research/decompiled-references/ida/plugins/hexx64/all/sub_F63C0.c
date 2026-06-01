__int64 __fastcall sub_F63C0(_QWORD *a1, char *a2)
{
  char v2; // al
  _QWORD *v3; // rcx
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 v7; // rax
  int v8; // ebx
  _QWORD *v9; // r15
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rbp
  unsigned int v13; // ecx
  __int64 v14; // rax
  _QWORD *v15; // rbp
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // r15
  int v19; // r8d
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // r12
  int v26; // r14d
  __int64 v27; // rax
  _QWORD *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rax
  int v33; // r13d
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // r14d
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // r14d
  __int64 v45; // rax
  __int64 v46; // r10
  __int64 v47; // r12
  __int64 v48; // rax
  __int64 v49; // rbp
  _QWORD *v50; // r13
  int v51; // r12d
  __int64 v52; // rax
  __int64 v53; // r15
  __int64 v54; // r14
  int v55; // ebx
  __int64 v56; // rax
  char v57; // al
  char v58; // al
  char v59; // al
  __int64 v60; // rax
  _QWORD *v61; // rdi
  char v62; // al
  __int64 v63; // [rsp+8h] [rbp-E0h]
  __int64 v64; // [rsp+8h] [rbp-E0h]
  __int64 v65; // [rsp+8h] [rbp-E0h]
  int v66; // [rsp+8h] [rbp-E0h]
  _QWORD *v67; // [rsp+8h] [rbp-E0h]
  unsigned int v68; // [rsp+8h] [rbp-E0h]
  int v69; // [rsp+10h] [rbp-D8h]
  _QWORD *v70; // [rsp+10h] [rbp-D8h]
  int v71; // [rsp+10h] [rbp-D8h]
  __int64 v72; // [rsp+18h] [rbp-D0h]
  __int64 v73; // [rsp+20h] [rbp-C8h]
  __int64 v74; // [rsp+28h] [rbp-C0h]
  __int64 v75; // [rsp+30h] [rbp-B8h]
  __int64 v76; // [rsp+38h] [rbp-B0h]
  int v77; // [rsp+40h] [rbp-A8h]
  int v78; // [rsp+44h] [rbp-A4h]
  __int64 v79; // [rsp+48h] [rbp-A0h]
  __int64 v80; // [rsp+50h] [rbp-98h]
  __int64 v81; // [rsp+58h] [rbp-90h]
  int v82; // [rsp+60h] [rbp-88h]
  int v83; // [rsp+64h] [rbp-84h]
  __int64 v84; // [rsp+68h] [rbp-80h]
  __int64 v85; // [rsp+70h] [rbp-78h]
  __int64 v86; // [rsp+78h] [rbp-70h]
  __int64 v87; // [rsp+80h] [rbp-68h]
  unsigned int v88; // [rsp+88h] [rbp-60h]
  int v89; // [rsp+8Ch] [rbp-5Ch]
  __int64 v90; // [rsp+90h] [rbp-58h]
  __int64 v91; // [rsp+98h] [rbp-50h]
  _QWORD v92[9]; // [rsp+A0h] [rbp-48h] BYREF

  v2 = *a2;
  v92[1] = __readfsqword(0x28u);
  v3 = a1;
  if ( v2 == 8 )
  {
    v5 = *((_QWORD *)a2 + 1);
    v6 = a1[6];
    a1[6] = *(int *)(v5 + 12);
    if ( *(_QWORD *)(v5 + 32) )
    {
      v91 = v6;
      v7 = 0;
      v8 = 0;
      v9 = a1;
      do
      {
        v10 = *(_QWORD *)(v5 + 24) + 80 * v7;
        if ( *(_BYTE *)v10 == 8 )
        {
          v11 = *(_QWORD *)(v10 + 8);
          v12 = v9[6];
          v9[6] = *(int *)(v11 + 12);
          if ( *(_QWORD *)(v11 + 32) )
          {
            v87 = v5;
            v13 = 0;
            v14 = 0;
            v89 = v8;
            v90 = v12;
            v15 = v9;
            do
            {
              v16 = *(_QWORD *)(v11 + 24) + 80 * v14;
              if ( *(_BYTE *)v16 == 8 )
              {
                v17 = *(_QWORD *)(v16 + 8);
                v18 = v15[6];
                v15[6] = *(int *)(v17 + 12);
                if ( *(_QWORD *)(v17 + 32) )
                {
                  v85 = v11;
                  v19 = 0;
                  v20 = 0;
                  v86 = v18;
                  v88 = v13;
                  v21 = v15;
                  v22 = v17;
                  do
                  {
                    v23 = *(_QWORD *)(v22 + 24) + 80 * v20;
                    if ( *(_BYTE *)v23 == 8 )
                    {
                      v24 = *(_QWORD *)(v23 + 8);
                      v25 = v21[6];
                      v21[6] = *(int *)(v24 + 12);
                      if ( *(_QWORD *)(v24 + 32) )
                      {
                        v81 = v22;
                        v26 = 0;
                        v27 = 0;
                        v28 = v21;
                        v83 = v19;
                        v84 = v25;
                        do
                        {
                          v29 = *(_QWORD *)(v24 + 24) + 80 * v27;
                          if ( *(_BYTE *)v29 == 8 )
                          {
                            v30 = *(_QWORD *)(v29 + 8);
                            v31 = v28[6];
                            v28[6] = *(int *)(v30 + 12);
                            if ( *(_QWORD *)(v30 + 32) )
                            {
                              v82 = v26;
                              v32 = 0;
                              v80 = v31;
                              v79 = v24;
                              v33 = 0;
                              do
                              {
                                v34 = *(_QWORD *)(v30 + 24) + 80 * v32;
                                if ( *(_BYTE *)v34 == 8 )
                                {
                                  v35 = *(_QWORD *)(v34 + 8);
                                  v73 = v28[6];
                                  v28[6] = *(int *)(v35 + 12);
                                  if ( *(_QWORD *)(v35 + 32) )
                                  {
                                    v76 = v30;
                                    v36 = v35;
                                    v37 = 0;
                                    v78 = v33;
                                    v38 = 0;
                                    do
                                    {
                                      v39 = *(_QWORD *)(v36 + 24) + 80 * v37;
                                      if ( *(_BYTE *)v39 == 8 )
                                      {
                                        v40 = *(_QWORD *)(v39 + 8);
                                        v41 = v28[6];
                                        v28[6] = *(int *)(v40 + 12);
                                        if ( *(_QWORD *)(v40 + 32) )
                                        {
                                          v75 = v41;
                                          v42 = 0;
                                          v74 = v36;
                                          v43 = v40;
                                          v77 = v38;
                                          v44 = 0;
                                          do
                                          {
                                            v45 = *(_QWORD *)(v43 + 24) + 80 * v42;
                                            if ( *(_BYTE *)v45 == 8 )
                                            {
                                              v46 = *(_QWORD *)(v45 + 8);
                                              v47 = v28[6];
                                              v28[6] = *(int *)(v46 + 12);
                                              if ( *(_QWORD *)(v46 + 32) )
                                              {
                                                v63 = v43;
                                                v48 = 0;
                                                v49 = v46;
                                                v69 = v44;
                                                v50 = v28;
                                                v72 = v47;
                                                v51 = 0;
                                                do
                                                {
                                                  v52 = *(_QWORD *)(v49 + 24) + 80 * v48;
                                                  if ( *(_BYTE *)v52 == 8 )
                                                  {
                                                    v53 = *(_QWORD *)(v52 + 8);
                                                    v54 = v50[6];
                                                    v50[6] = *(int *)(v53 + 12);
                                                    if ( *(_QWORD *)(v53 + 32) )
                                                    {
                                                      v55 = 0;
                                                      v56 = 0;
                                                      do
                                                      {
                                                        ++v55;
                                                        sub_F63C0(v50, (char *)(*(_QWORD *)(v53 + 24) + 80 * v56));
                                                        v56 = v55;
                                                      }
                                                      while ( (unsigned __int64)v55 < *(_QWORD *)(v53 + 32) );
                                                    }
                                                    v50[6] = v54;
                                                    *((_BYTE *)v50 + 40) = 1;
                                                  }
                                                  else if ( *(_BYTE *)v52 == 10
                                                         && (__int64)v50[6] > 0
                                                         && (unsigned __int8)sub_32F330(*(_QWORD *)(v52 + 8), v92)
                                                         && v50[6] > v92[0] )
                                                  {
                                                    sub_3311F0((_QWORD *)v50[1], *(_QWORD *)(v50[4] + 24LL), 0x26u);
                                                  }
                                                  v48 = ++v51;
                                                }
                                                while ( (unsigned __int64)v51 < *(_QWORD *)(v49 + 32) );
                                                v43 = v63;
                                                v44 = v69;
                                                v28 = v50;
                                                v47 = v72;
                                              }
                                              v28[6] = v47;
                                              *((_BYTE *)v28 + 40) = 1;
                                            }
                                            else if ( *(_BYTE *)v45 == 10 && (__int64)v28[6] > 0 )
                                            {
                                              v64 = v43;
                                              v57 = sub_32F330(*(_QWORD *)(v45 + 8), v92);
                                              v43 = v64;
                                              if ( v57 )
                                              {
                                                if ( v28[6] > v92[0] )
                                                {
                                                  sub_3311F0((_QWORD *)v28[1], *(_QWORD *)(v28[4] + 24LL), 0x26u, v64);
                                                  v43 = v64;
                                                }
                                              }
                                            }
                                            v42 = ++v44;
                                          }
                                          while ( (unsigned __int64)v44 < *(_QWORD *)(v43 + 32) );
                                          v36 = v74;
                                          v38 = v77;
                                          v41 = v75;
                                        }
                                        v28[6] = v41;
                                        *((_BYTE *)v28 + 40) = 1;
                                      }
                                      else if ( *(_BYTE *)v39 == 10 && (__int64)v28[6] > 0 )
                                      {
                                        v65 = v36;
                                        v58 = sub_32F330(*(_QWORD *)(v39 + 8), v92);
                                        v36 = v65;
                                        if ( v58 )
                                        {
                                          if ( v28[6] > v92[0] )
                                          {
                                            sub_3311F0((_QWORD *)v28[1], *(_QWORD *)(v28[4] + 24LL), 0x26u, v65);
                                            v36 = v65;
                                          }
                                        }
                                      }
                                      v37 = ++v38;
                                    }
                                    while ( (unsigned __int64)v38 < *(_QWORD *)(v36 + 32) );
                                    v30 = v76;
                                    v33 = v78;
                                  }
                                  *((_BYTE *)v28 + 40) = 1;
                                  v28[6] = v73;
                                }
                                else if ( *(_BYTE *)v34 == 10
                                       && (__int64)v28[6] > 0
                                       && (unsigned __int8)sub_32F330(*(_QWORD *)(v34 + 8), v92)
                                       && v28[6] > v92[0] )
                                {
                                  sub_3311F0((_QWORD *)v28[1], *(_QWORD *)(v28[4] + 24LL), 0x26u);
                                }
                                v32 = ++v33;
                              }
                              while ( (unsigned __int64)v33 < *(_QWORD *)(v30 + 32) );
                              v24 = v79;
                              v26 = v82;
                              v31 = v80;
                            }
                            v28[6] = v31;
                            *((_BYTE *)v28 + 40) = 1;
                          }
                          else if ( *(_BYTE *)v29 == 10
                                 && (__int64)v28[6] > 0
                                 && (unsigned __int8)sub_32F330(*(_QWORD *)(v29 + 8), v92)
                                 && v28[6] > v92[0] )
                          {
                            sub_3311F0((_QWORD *)v28[1], *(_QWORD *)(v28[4] + 24LL), 0x26u);
                          }
                          v27 = ++v26;
                        }
                        while ( (unsigned __int64)v26 < *(_QWORD *)(v24 + 32) );
                        v22 = v81;
                        v19 = v83;
                        v21 = v28;
                        v25 = v84;
                      }
                      v21[6] = v25;
                      *((_BYTE *)v21 + 40) = 1;
                    }
                    else if ( *(_BYTE *)v23 == 10 && (__int64)v21[6] > 0 )
                    {
                      v70 = v21;
                      v66 = v19;
                      v59 = sub_32F330(*(_QWORD *)(v23 + 8), v92);
                      v19 = v66;
                      v21 = v70;
                      if ( v59 )
                      {
                        if ( v70[6] > v92[0] )
                        {
                          v60 = v70[4];
                          v61 = (_QWORD *)v70[1];
                          v71 = v66;
                          v67 = v21;
                          sub_3311F0(v61, *(_QWORD *)(v60 + 24), 0x26u);
                          v19 = v71;
                          v21 = v67;
                        }
                      }
                    }
                    v20 = ++v19;
                  }
                  while ( (unsigned __int64)v19 < *(_QWORD *)(v22 + 32) );
                  v15 = v21;
                  v11 = v85;
                  v18 = v86;
                  v13 = v88;
                }
                v15[6] = v18;
                *((_BYTE *)v15 + 40) = 1;
              }
              else if ( *(_BYTE *)v16 == 10 && (__int64)v15[6] > 0 )
              {
                v68 = v13;
                v62 = sub_32F330(*(_QWORD *)(v16 + 8), v92);
                v13 = v68;
                if ( v62 )
                {
                  if ( v15[6] > v92[0] )
                  {
                    sub_3311F0((_QWORD *)v15[1], *(_QWORD *)(v15[4] + 24LL), 0x26u, v68);
                    v13 = v68;
                  }
                }
              }
              v14 = (int)++v13;
            }
            while ( (unsigned __int64)(int)v13 < *(_QWORD *)(v11 + 32) );
            v9 = v15;
            v5 = v87;
            v8 = v89;
            v12 = v90;
          }
          v9[6] = v12;
          *((_BYTE *)v9 + 40) = 1;
        }
        else if ( *(_BYTE *)v10 == 10
               && (__int64)v9[6] > 0
               && (unsigned __int8)sub_32F330(*(_QWORD *)(v10 + 8), v92)
               && v9[6] > v92[0] )
        {
          sub_3311F0((_QWORD *)v9[1], *(_QWORD *)(v9[4] + 24LL), 0x26u);
        }
        v7 = ++v8;
      }
      while ( (unsigned __int64)v8 < *(_QWORD *)(v5 + 32) );
      v6 = v91;
      v3 = v9;
    }
    v3[6] = v6;
    *((_BYTE *)v3 + 40) = 1;
  }
  else if ( v2 == 10 && (__int64)a1[6] > 0 && (unsigned __int8)sub_32F330(*((_QWORD *)a2 + 1), v92) && a1[6] > v92[0] )
  {
    sub_3311F0((_QWORD *)a1[1], *(_QWORD *)(a1[4] + 24LL), 0x26u);
  }
  return 0;
}

