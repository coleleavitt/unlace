__int64 __fastcall sub_F21C0(_QWORD *a1, char *a2)
{
  char v2; // al
  _QWORD *v3; // rcx
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // r14
  __int64 v8; // rbp
  __int64 v9; // rax
  int v10; // ebx
  _QWORD *v11; // r15
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rbp
  int v15; // ecx
  __int64 v16; // rax
  _QWORD *v17; // rbp
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // r15
  int v21; // r8d
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  __int64 v24; // rbp
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // r12
  int v28; // r14d
  __int64 v29; // rax
  _QWORD *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // r12
  __int64 v33; // rdx
  __int64 v34; // rax
  int v35; // r13d
  __int64 v36; // rax
  __int64 v37; // r14
  __int64 v38; // rcx
  __int64 v39; // rax
  int v40; // r14d
  __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  int v46; // r14d
  __int64 v47; // rax
  __int64 v48; // r10
  __int64 v49; // r12
  __int64 v50; // rax
  __int64 v51; // rbp
  _QWORD *v52; // r13
  int v53; // r12d
  __int64 v54; // rax
  __int64 v55; // r15
  __int64 v56; // r14
  int v57; // ebx
  __int64 v58; // rax
  int v59; // ecx
  int v60; // r8d
  int v61; // r9d
  char v62; // al
  int v63; // r8d
  int v64; // r9d
  char v65; // al
  int v66; // r8d
  int v67; // r9d
  int v68; // ecx
  int v69; // r8d
  int v70; // r9d
  int v71; // ecx
  int v72; // r8d
  int v73; // r9d
  char v74; // al
  int v75; // r9d
  __int64 v76; // rax
  __int64 v77; // rdi
  char v78; // al
  int v79; // r8d
  int v80; // r9d
  int v81; // ecx
  int v82; // r8d
  int v83; // r9d
  __int64 v84; // [rsp+8h] [rbp-E0h]
  __int64 v85; // [rsp+8h] [rbp-E0h]
  __int64 v86; // [rsp+8h] [rbp-E0h]
  int v87; // [rsp+8h] [rbp-E0h]
  _QWORD *v88; // [rsp+8h] [rbp-E0h]
  int v89; // [rsp+8h] [rbp-E0h]
  int v90; // [rsp+10h] [rbp-D8h]
  _QWORD *v91; // [rsp+10h] [rbp-D8h]
  int v92; // [rsp+10h] [rbp-D8h]
  __int64 v93; // [rsp+18h] [rbp-D0h]
  __int64 v94; // [rsp+20h] [rbp-C8h]
  __int64 v95; // [rsp+28h] [rbp-C0h]
  __int64 v96; // [rsp+30h] [rbp-B8h]
  __int64 v97; // [rsp+38h] [rbp-B0h]
  int v98; // [rsp+40h] [rbp-A8h]
  int v99; // [rsp+44h] [rbp-A4h]
  __int64 v100; // [rsp+48h] [rbp-A0h]
  __int64 v101; // [rsp+50h] [rbp-98h]
  __int64 v102; // [rsp+58h] [rbp-90h]
  int v103; // [rsp+60h] [rbp-88h]
  int v104; // [rsp+64h] [rbp-84h]
  __int64 v105; // [rsp+68h] [rbp-80h]
  __int64 v106; // [rsp+70h] [rbp-78h]
  __int64 v107; // [rsp+78h] [rbp-70h]
  __int64 v108; // [rsp+80h] [rbp-68h]
  int v109; // [rsp+88h] [rbp-60h]
  int v110; // [rsp+8Ch] [rbp-5Ch]
  __int64 v111; // [rsp+90h] [rbp-58h]
  __int64 v112; // [rsp+98h] [rbp-50h]
  _QWORD v113[9]; // [rsp+A0h] [rbp-48h] BYREF

  v2 = *a2;
  v113[1] = __readfsqword(0x28u);
  v3 = a1;
  if ( v2 == 8 )
  {
    v7 = *((_QWORD *)a2 + 1);
    v8 = a1[6];
    a1[6] = *(int *)(v7 + 12);
    if ( *(_QWORD *)(v7 + 32) )
    {
      v112 = v8;
      v9 = 0;
      v10 = 0;
      v11 = a1;
      do
      {
        v12 = *(_QWORD *)(v7 + 24) + 80 * v9;
        if ( *(_BYTE *)v12 == 8 )
        {
          v13 = *(_QWORD *)(v12 + 8);
          v14 = v11[6];
          v11[6] = *(int *)(v13 + 12);
          if ( *(_QWORD *)(v13 + 32) )
          {
            v108 = v7;
            v15 = 0;
            v16 = 0;
            v110 = v10;
            v111 = v14;
            v17 = v11;
            do
            {
              v18 = *(_QWORD *)(v13 + 24) + 80 * v16;
              if ( *(_BYTE *)v18 == 8 )
              {
                v19 = *(_QWORD *)(v18 + 8);
                v20 = v17[6];
                v17[6] = *(int *)(v19 + 12);
                if ( *(_QWORD *)(v19 + 32) )
                {
                  v106 = v13;
                  v21 = 0;
                  v22 = 0;
                  v107 = v20;
                  v109 = v15;
                  v23 = v17;
                  v24 = v19;
                  do
                  {
                    v25 = *(_QWORD *)(v24 + 24) + 80 * v22;
                    if ( *(_BYTE *)v25 == 8 )
                    {
                      v26 = *(_QWORD *)(v25 + 8);
                      v27 = v23[6];
                      v23[6] = *(int *)(v26 + 12);
                      if ( *(_QWORD *)(v26 + 32) )
                      {
                        v102 = v24;
                        v28 = 0;
                        v29 = 0;
                        v30 = v23;
                        v104 = v21;
                        v105 = v27;
                        do
                        {
                          v31 = *(_QWORD *)(v26 + 24) + 80 * v29;
                          if ( *(_BYTE *)v31 == 8 )
                          {
                            v32 = *(_QWORD *)(v31 + 8);
                            v33 = v30[6];
                            v30[6] = *(int *)(v32 + 12);
                            if ( *(_QWORD *)(v32 + 32) )
                            {
                              v103 = v28;
                              v34 = 0;
                              v101 = v33;
                              v100 = v26;
                              v35 = 0;
                              do
                              {
                                v36 = *(_QWORD *)(v32 + 24) + 80 * v34;
                                if ( *(_BYTE *)v36 == 8 )
                                {
                                  v37 = *(_QWORD *)(v36 + 8);
                                  v94 = v30[6];
                                  v30[6] = *(int *)(v37 + 12);
                                  if ( *(_QWORD *)(v37 + 32) )
                                  {
                                    v97 = v32;
                                    v38 = v37;
                                    v39 = 0;
                                    v99 = v35;
                                    v40 = 0;
                                    do
                                    {
                                      v41 = *(_QWORD *)(v38 + 24) + 80 * v39;
                                      if ( *(_BYTE *)v41 == 8 )
                                      {
                                        v42 = *(_QWORD *)(v41 + 8);
                                        v43 = v30[6];
                                        v30[6] = *(int *)(v42 + 12);
                                        if ( *(_QWORD *)(v42 + 32) )
                                        {
                                          v96 = v43;
                                          v44 = 0;
                                          v95 = v38;
                                          v45 = v42;
                                          v98 = v40;
                                          v46 = 0;
                                          do
                                          {
                                            v47 = *(_QWORD *)(v45 + 24) + 80 * v44;
                                            if ( *(_BYTE *)v47 == 8 )
                                            {
                                              v48 = *(_QWORD *)(v47 + 8);
                                              v49 = v30[6];
                                              v30[6] = *(int *)(v48 + 12);
                                              if ( *(_QWORD *)(v48 + 32) )
                                              {
                                                v84 = v45;
                                                v50 = 0;
                                                v51 = v48;
                                                v90 = v46;
                                                v52 = v30;
                                                v93 = v49;
                                                v53 = 0;
                                                do
                                                {
                                                  v54 = *(_QWORD *)(v51 + 24) + 80 * v50;
                                                  if ( *(_BYTE *)v54 == 8 )
                                                  {
                                                    v55 = *(_QWORD *)(v54 + 8);
                                                    v56 = v52[6];
                                                    v52[6] = *(int *)(v55 + 12);
                                                    if ( *(_QWORD *)(v55 + 32) )
                                                    {
                                                      v57 = 0;
                                                      v58 = 0;
                                                      do
                                                      {
                                                        ++v57;
                                                        sub_F21C0(v52, *(_QWORD *)(v55 + 24) + 80 * v58, 0, 0);
                                                        v58 = v57;
                                                      }
                                                      while ( (unsigned __int64)v57 < *(_QWORD *)(v55 + 32) );
                                                    }
                                                    v52[6] = v56;
                                                    *((_BYTE *)v52 + 40) = 1;
                                                  }
                                                  else if ( *(_BYTE *)v54 == 10
                                                         && (__int64)v52[6] > 0
                                                         && (unsigned __int8)sub_32A2E0(*(_QWORD *)(v54 + 8), v113)
                                                         && v52[6] > v113[0] )
                                                  {
                                                    sub_32C190(v52[1], *(_QWORD *)(v52[4] + 24LL), 38, v59, v60, v61);
                                                  }
                                                  v50 = ++v53;
                                                }
                                                while ( (unsigned __int64)v53 < *(_QWORD *)(v51 + 32) );
                                                v45 = v84;
                                                v46 = v90;
                                                v30 = v52;
                                                v49 = v93;
                                              }
                                              v30[6] = v49;
                                              *((_BYTE *)v30 + 40) = 1;
                                            }
                                            else if ( *(_BYTE *)v47 == 10 && (__int64)v30[6] > 0 )
                                            {
                                              v85 = v45;
                                              v62 = sub_32A2E0(*(_QWORD *)(v47 + 8), v113);
                                              v45 = v85;
                                              if ( v62 )
                                              {
                                                if ( v30[6] > v113[0] )
                                                {
                                                  sub_32C190(v30[1], *(_QWORD *)(v30[4] + 24LL), 38, v85, v63, v64);
                                                  v45 = v85;
                                                }
                                              }
                                            }
                                            v44 = ++v46;
                                          }
                                          while ( (unsigned __int64)v46 < *(_QWORD *)(v45 + 32) );
                                          v38 = v95;
                                          v40 = v98;
                                          v43 = v96;
                                        }
                                        v30[6] = v43;
                                        *((_BYTE *)v30 + 40) = 1;
                                      }
                                      else if ( *(_BYTE *)v41 == 10 && (__int64)v30[6] > 0 )
                                      {
                                        v86 = v38;
                                        v65 = sub_32A2E0(*(_QWORD *)(v41 + 8), v113);
                                        v38 = v86;
                                        if ( v65 )
                                        {
                                          if ( v30[6] > v113[0] )
                                          {
                                            sub_32C190(v30[1], *(_QWORD *)(v30[4] + 24LL), 38, v86, v66, v67);
                                            v38 = v86;
                                          }
                                        }
                                      }
                                      v39 = ++v40;
                                    }
                                    while ( (unsigned __int64)v40 < *(_QWORD *)(v38 + 32) );
                                    v32 = v97;
                                    v35 = v99;
                                  }
                                  *((_BYTE *)v30 + 40) = 1;
                                  v30[6] = v94;
                                }
                                else if ( *(_BYTE *)v36 == 10
                                       && (__int64)v30[6] > 0
                                       && (unsigned __int8)sub_32A2E0(*(_QWORD *)(v36 + 8), v113)
                                       && v30[6] > v113[0] )
                                {
                                  sub_32C190(v30[1], *(_QWORD *)(v30[4] + 24LL), 38, v68, v69, v70);
                                }
                                v34 = ++v35;
                              }
                              while ( (unsigned __int64)v35 < *(_QWORD *)(v32 + 32) );
                              v26 = v100;
                              v28 = v103;
                              v33 = v101;
                            }
                            v30[6] = v33;
                            *((_BYTE *)v30 + 40) = 1;
                          }
                          else if ( *(_BYTE *)v31 == 10
                                 && (__int64)v30[6] > 0
                                 && (unsigned __int8)sub_32A2E0(*(_QWORD *)(v31 + 8), v113)
                                 && v30[6] > v113[0] )
                          {
                            sub_32C190(v30[1], *(_QWORD *)(v30[4] + 24LL), 38, v71, v72, v73);
                          }
                          v29 = ++v28;
                        }
                        while ( (unsigned __int64)v28 < *(_QWORD *)(v26 + 32) );
                        v24 = v102;
                        v21 = v104;
                        v23 = v30;
                        v27 = v105;
                      }
                      v23[6] = v27;
                      *((_BYTE *)v23 + 40) = 1;
                    }
                    else if ( *(_BYTE *)v25 == 10 && (__int64)v23[6] > 0 )
                    {
                      v91 = v23;
                      v87 = v21;
                      v74 = sub_32A2E0(*(_QWORD *)(v25 + 8), v113);
                      v21 = v87;
                      v23 = v91;
                      if ( v74 )
                      {
                        if ( v91[6] > v113[0] )
                        {
                          v76 = v91[4];
                          v77 = v91[1];
                          v92 = v87;
                          v88 = v23;
                          sub_32C190(v77, *(_QWORD *)(v76 + 24), 38, (_DWORD)v23, v21, v75);
                          v21 = v92;
                          v23 = v88;
                        }
                      }
                    }
                    v22 = ++v21;
                  }
                  while ( (unsigned __int64)v21 < *(_QWORD *)(v24 + 32) );
                  v17 = v23;
                  v13 = v106;
                  v20 = v107;
                  v15 = v109;
                }
                v17[6] = v20;
                *((_BYTE *)v17 + 40) = 1;
              }
              else if ( *(_BYTE *)v18 == 10 && (__int64)v17[6] > 0 )
              {
                v89 = v15;
                v78 = sub_32A2E0(*(_QWORD *)(v18 + 8), v113);
                v15 = v89;
                if ( v78 )
                {
                  if ( v17[6] > v113[0] )
                  {
                    sub_32C190(v17[1], *(_QWORD *)(v17[4] + 24LL), 38, v89, v79, v80);
                    v15 = v89;
                  }
                }
              }
              v16 = ++v15;
            }
            while ( (unsigned __int64)v15 < *(_QWORD *)(v13 + 32) );
            v11 = v17;
            v7 = v108;
            v10 = v110;
            v14 = v111;
          }
          v11[6] = v14;
          *((_BYTE *)v11 + 40) = 1;
        }
        else if ( *(_BYTE *)v12 == 10
               && (__int64)v11[6] > 0
               && (unsigned __int8)sub_32A2E0(*(_QWORD *)(v12 + 8), v113)
               && v11[6] > v113[0] )
        {
          sub_32C190(v11[1], *(_QWORD *)(v11[4] + 24LL), 38, v81, v82, v83);
        }
        v9 = ++v10;
      }
      while ( (unsigned __int64)v10 < *(_QWORD *)(v7 + 32) );
      v8 = v112;
      v3 = v11;
    }
    v3[6] = v8;
    *((_BYTE *)v3 + 40) = 1;
  }
  else if ( v2 == 10 && (__int64)a1[6] > 0 && (unsigned __int8)sub_32A2E0(*((_QWORD *)a2 + 1), v113) && a1[6] > v113[0] )
  {
    sub_32C190(a1[1], *(_QWORD *)(a1[4] + 24LL), 38, (_DWORD)a1, v5, v6);
  }
  return 0;
}

