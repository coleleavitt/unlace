__int64 __fastcall sub_712A0(unsigned int *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // ebp
  unsigned int v4; // eax
  __int64 v5; // rbx
  unsigned int v6; // ebp
  unsigned int v7; // ebp
  int v8; // r12d
  unsigned int v9; // ebp
  unsigned int v10; // eax
  int v11; // eax
  _QWORD *v12; // r13
  unsigned __int64 i; // rbx
  unsigned int *v15; // rbp
  unsigned int v16; // r14d
  unsigned int v17; // eax
  __int64 v18; // rbp
  unsigned int v19; // r14d
  _QWORD *v20; // r15
  unsigned __int64 v21; // rbp
  _QWORD *v22; // r8
  unsigned int *v23; // r14
  unsigned int v24; // ebx
  unsigned int v25; // eax
  __int64 v26; // r14
  unsigned int v27; // r13d
  unsigned int v28; // edx
  int v29; // r15d
  unsigned int v30; // edx
  unsigned int v31; // r14d
  unsigned int v32; // eax
  int v33; // eax
  _QWORD *v34; // rdx
  unsigned __int64 v35; // r14
  _QWORD *v36; // r9
  unsigned int *v37; // rbx
  unsigned int v38; // ebp
  unsigned int v39; // eax
  __int64 v40; // rbx
  unsigned int v41; // r15d
  unsigned int v42; // ecx
  int v43; // r13d
  unsigned int v44; // ebx
  unsigned int v45; // eax
  int v46; // eax
  _QWORD *v47; // rdx
  unsigned __int64 v48; // rbx
  unsigned int *v49; // rbp
  unsigned int v50; // r14d
  unsigned int v51; // eax
  __int64 v52; // rbp
  unsigned int v53; // r15d
  unsigned int v54; // esi
  int v55; // r15d
  unsigned int v56; // ebp
  unsigned int v57; // eax
  int v58; // eax
  _QWORD *v59; // r15
  unsigned __int64 v60; // rbp
  _QWORD *v61; // rbx
  unsigned int *v62; // r14
  unsigned int v63; // r13d
  unsigned int v64; // eax
  unsigned int v65; // esi
  int v66; // r15d
  unsigned int v67; // r14d
  unsigned int v68; // eax
  int v69; // eax
  __int64 v70; // r14
  unsigned int v71; // r13d
  _QWORD *v72; // r13
  unsigned __int64 j; // r14
  __int64 v74; // rdx
  unsigned int v75; // esi
  int v76; // r13d
  unsigned int v77; // r15d
  unsigned int v78; // eax
  int v79; // eax
  unsigned __int64 v80; // [rsp+8h] [rbp-80h]
  unsigned int v81; // [rsp+8h] [rbp-80h]
  _QWORD *v82; // [rsp+10h] [rbp-78h]
  _QWORD *v83; // [rsp+18h] [rbp-70h]
  _QWORD *v84; // [rsp+18h] [rbp-70h]
  _QWORD *v85; // [rsp+18h] [rbp-70h]
  _QWORD *v86; // [rsp+18h] [rbp-70h]
  unsigned int v87; // [rsp+18h] [rbp-70h]
  _QWORD *v88; // [rsp+18h] [rbp-70h]
  unsigned __int64 v89; // [rsp+20h] [rbp-68h]
  _QWORD *v90; // [rsp+20h] [rbp-68h]
  _QWORD *v91; // [rsp+28h] [rbp-60h]
  _QWORD *v92; // [rsp+28h] [rbp-60h]
  _QWORD *v93; // [rsp+28h] [rbp-60h]
  unsigned __int64 v94; // [rsp+28h] [rbp-60h]
  _QWORD *v95; // [rsp+28h] [rbp-60h]
  _QWORD *v96; // [rsp+30h] [rbp-58h]
  _QWORD *v97; // [rsp+30h] [rbp-58h]
  _QWORD *v98; // [rsp+38h] [rbp-50h]
  _QWORD *v99; // [rsp+38h] [rbp-50h]
  _QWORD *v100; // [rsp+38h] [rbp-50h]
  unsigned __int64 v101; // [rsp+38h] [rbp-50h]
  _QWORD *v102; // [rsp+38h] [rbp-50h]
  _QWORD *v103; // [rsp+40h] [rbp-48h]
  _QWORD *v104; // [rsp+40h] [rbp-48h]

  result = *a1;
  if ( (_DWORD)result == 4 )
  {
    v7 = a1[2];
    v8 = (unsigned __int16)v7;
    v9 = HIWORD(v7);
    if ( a2 )
    {
      v10 = sub_855C0(a2, v9);
      v8 = *((unsigned __int16 *)a1 + 4);
      if ( v10 != -1 )
        v9 = v10;
      v11 = sub_855C0(a2, *((unsigned __int16 *)a1 + 4));
      if ( v11 != -1 )
        v8 = v11;
    }
    result = cleanup_argloc(a1);
    *a1 = 4;
    a1[2] = v8 | (v9 << 16);
  }
  else if ( (int)result > 4 )
  {
    if ( (_DWORD)result == 5 )
    {
      v5 = *((_QWORD *)a1 + 1);
      v6 = *(_DWORD *)(v5 + 8);
      if ( !a2 || (result = sub_855C0(a2, v6), (_DWORD)result == -1) )
        result = v6;
      *(_DWORD *)(v5 + 8) = result;
    }
  }
  else if ( (_DWORD)result == 2 )
  {
    v12 = *((_QWORD **)a1 + 1);
    for ( i = 0; i < v12[1]; ++i )
    {
      v15 = (unsigned int *)(*v12 + 24 * i);
      result = *v15;
      if ( (_DWORD)result == 4 )
      {
        v28 = v15[2];
        v29 = (unsigned __int16)v28;
        v30 = HIWORD(v28);
        v31 = v30;
        if ( a2 )
        {
          v81 = v30;
          v32 = sub_855C0(a2, v30);
          v29 = *((unsigned __int16 *)v15 + 4);
          v31 = v32;
          if ( v32 == -1 )
            v31 = v81;
          v33 = sub_855C0(a2, *((unsigned __int16 *)v15 + 4));
          if ( v33 != -1 )
            v29 = v33;
        }
        result = cleanup_argloc(v15);
        *v15 = 4;
        v15[2] = v29 | (v31 << 16);
      }
      else if ( (int)result > 4 )
      {
        if ( (_DWORD)result == 5 )
        {
          v18 = *((_QWORD *)v15 + 1);
          v19 = *(_DWORD *)(v18 + 8);
          if ( !a2 || (result = sub_855C0(a2, v19), (_DWORD)result == -1) )
            result = v19;
          *(_DWORD *)(v18 + 8) = result;
        }
      }
      else if ( (_DWORD)result == 2 )
      {
        v20 = *((_QWORD **)v15 + 1);
        v21 = 0;
        if ( v20[1] )
        {
          v80 = i;
          v22 = v20;
          v82 = v12;
          do
          {
            v23 = (unsigned int *)(*v22 + 24 * v21);
            result = *v23;
            if ( (_DWORD)result == 4 )
            {
              v42 = v23[2];
              v43 = (unsigned __int16)v42;
              v44 = HIWORD(v42);
              if ( a2 )
              {
                v90 = v22;
                v87 = HIWORD(v42);
                v45 = sub_855C0(a2, HIWORD(v42));
                v43 = *((unsigned __int16 *)v23 + 4);
                v44 = v45;
                if ( v45 == -1 )
                  v44 = v87;
                v46 = sub_855C0(a2, *((unsigned __int16 *)v23 + 4));
                v22 = v90;
                if ( v46 != -1 )
                  v43 = v46;
              }
              v88 = v22;
              result = cleanup_argloc(v23);
              v22 = v88;
              *v23 = 4;
              v23[2] = v43 | (v44 << 16);
            }
            else if ( (int)result > 4 )
            {
              if ( (_DWORD)result == 5 )
              {
                v26 = *((_QWORD *)v23 + 1);
                v27 = *(_DWORD *)(v26 + 8);
                if ( !a2 || (v85 = v22, result = sub_855C0(a2, v27), v22 = v85, (_DWORD)result == -1) )
                  result = v27;
                *(_DWORD *)(v26 + 8) = result;
              }
            }
            else if ( (_DWORD)result == 2 )
            {
              v34 = *((_QWORD **)v23 + 1);
              v35 = 0;
              if ( v34[1] )
              {
                v86 = v22;
                v36 = v34;
                v89 = v21;
                do
                {
                  v37 = (unsigned int *)(*v36 + 24 * v35);
                  result = *v37;
                  if ( (_DWORD)result == 4 )
                  {
                    v54 = v37[2];
                    v55 = (unsigned __int16)v54;
                    v56 = HIWORD(v54);
                    if ( a2 )
                    {
                      v97 = v36;
                      v57 = sub_855C0(a2, HIWORD(v54));
                      v55 = *((unsigned __int16 *)v37 + 4);
                      v56 = v57;
                      if ( v57 == -1 )
                        v56 = HIWORD(v54);
                      v58 = sub_855C0(a2, *((unsigned __int16 *)v37 + 4));
                      v36 = v97;
                      if ( v58 != -1 )
                        v55 = v58;
                    }
                    v95 = v36;
                    result = cleanup_argloc(v37);
                    *v37 = 4;
                    v36 = v95;
                    v37[2] = v55 | (v56 << 16);
                  }
                  else if ( (int)result > 4 )
                  {
                    if ( (_DWORD)result == 5 )
                    {
                      v40 = *((_QWORD *)v37 + 1);
                      v41 = *(_DWORD *)(v40 + 8);
                      if ( !a2 || (v93 = v36, result = sub_855C0(a2, v41), v36 = v93, (_DWORD)result == -1) )
                        result = v41;
                      *(_DWORD *)(v40 + 8) = result;
                    }
                  }
                  else if ( (_DWORD)result == 2 )
                  {
                    v47 = *((_QWORD **)v37 + 1);
                    v48 = 0;
                    if ( v47[1] )
                    {
                      v94 = v35;
                      v96 = v36;
                      do
                      {
                        v49 = (unsigned int *)(*v47 + 24 * v48);
                        result = *v49;
                        if ( (_DWORD)result == 4 )
                        {
                          v65 = v49[2];
                          v66 = (unsigned __int16)v65;
                          v67 = HIWORD(v65);
                          if ( a2 )
                          {
                            v104 = v47;
                            v68 = sub_855C0(a2, HIWORD(v65));
                            v66 = *((unsigned __int16 *)v49 + 4);
                            v67 = v68;
                            if ( v68 == -1 )
                              v67 = HIWORD(v65);
                            v69 = sub_855C0(a2, *((unsigned __int16 *)v49 + 4));
                            v47 = v104;
                            if ( v69 != -1 )
                              v66 = v69;
                          }
                          v102 = v47;
                          result = cleanup_argloc(v49);
                          v47 = v102;
                          *v49 = 4;
                          v49[2] = v66 | (v67 << 16);
                        }
                        else if ( (int)result > 4 )
                        {
                          if ( (_DWORD)result == 5 )
                          {
                            v52 = *((_QWORD *)v49 + 1);
                            v53 = *(_DWORD *)(v52 + 8);
                            if ( !a2 || (v100 = v47, result = sub_855C0(a2, v53), v47 = v100, (_DWORD)result == -1) )
                              result = v53;
                            *(_DWORD *)(v52 + 8) = result;
                          }
                        }
                        else if ( (_DWORD)result == 2 )
                        {
                          v59 = *((_QWORD **)v49 + 1);
                          v60 = 0;
                          if ( v59[1] )
                          {
                            v103 = v47;
                            v101 = v48;
                            v61 = v59;
                            do
                            {
                              v62 = (unsigned int *)(*v61 + 24 * v60);
                              result = *v62;
                              if ( (_DWORD)result == 4 )
                              {
                                v75 = v62[2];
                                v76 = (unsigned __int16)v75;
                                v77 = HIWORD(v75);
                                if ( a2 )
                                {
                                  v78 = sub_855C0(a2, HIWORD(v75));
                                  v76 = *((unsigned __int16 *)v62 + 4);
                                  v77 = v78;
                                  if ( v78 == -1 )
                                    v77 = HIWORD(v75);
                                  v79 = sub_855C0(a2, *((unsigned __int16 *)v62 + 4));
                                  if ( v79 != -1 )
                                    v76 = v79;
                                }
                                result = cleanup_argloc(v62);
                                *v62 = 4;
                                v62[2] = v76 | (v77 << 16);
                              }
                              else if ( (int)result > 4 )
                              {
                                if ( (_DWORD)result == 5 )
                                {
                                  v70 = *((_QWORD *)v62 + 1);
                                  v71 = *(_DWORD *)(v70 + 8);
                                  if ( !a2 || (result = sub_855C0(a2, v71), (_DWORD)result == -1) )
                                    result = v71;
                                  *(_DWORD *)(v70 + 8) = result;
                                }
                              }
                              else if ( (_DWORD)result == 2 )
                              {
                                v72 = *((_QWORD **)v62 + 1);
                                for ( j = 0; j < v72[1]; result = sub_712A0(*v72 + 8 * v74, a2) )
                                  v74 = 3 * j++;
                              }
                              else if ( (_DWORD)result == 3 )
                              {
                                v63 = *((unsigned __int16 *)v62 + 4);
                                if ( a2 )
                                {
                                  v64 = sub_855C0(a2, *((unsigned __int16 *)v62 + 4));
                                  if ( v64 != -1 )
                                    v63 = v64;
                                }
                                result = cleanup_argloc(v62);
                                *v62 = 3;
                                v62[2] = v63;
                              }
                              ++v60;
                            }
                            while ( v60 < v61[1] );
                            v48 = v101;
                            v47 = v103;
                          }
                        }
                        else if ( (_DWORD)result == 3 )
                        {
                          v50 = *((unsigned __int16 *)v49 + 4);
                          if ( a2 )
                          {
                            v98 = v47;
                            v51 = sub_855C0(a2, *((unsigned __int16 *)v49 + 4));
                            v47 = v98;
                            if ( v51 != -1 )
                              v50 = v51;
                          }
                          v99 = v47;
                          result = cleanup_argloc(v49);
                          v49[2] = v50;
                          v47 = v99;
                          *v49 = 3;
                        }
                        ++v48;
                      }
                      while ( v48 < v47[1] );
                      v35 = v94;
                      v36 = v96;
                    }
                  }
                  else if ( (_DWORD)result == 3 )
                  {
                    v38 = *((unsigned __int16 *)v37 + 4);
                    if ( a2 )
                    {
                      v91 = v36;
                      v39 = sub_855C0(a2, *((unsigned __int16 *)v37 + 4));
                      v36 = v91;
                      if ( v39 != -1 )
                        v38 = v39;
                    }
                    v92 = v36;
                    result = cleanup_argloc(v37);
                    *v37 = 3;
                    v36 = v92;
                    v37[2] = v38;
                  }
                  ++v35;
                }
                while ( v35 < v36[1] );
                v22 = v86;
                v21 = v89;
              }
            }
            else if ( (_DWORD)result == 3 )
            {
              v24 = *((unsigned __int16 *)v23 + 4);
              if ( a2 )
              {
                v83 = v22;
                v25 = sub_855C0(a2, *((unsigned __int16 *)v23 + 4));
                v22 = v83;
                if ( v25 != -1 )
                  v24 = v25;
              }
              v84 = v22;
              result = cleanup_argloc(v23);
              v23[2] = v24;
              v22 = v84;
              *v23 = 3;
            }
            ++v21;
          }
          while ( v21 < v22[1] );
          i = v80;
          v12 = v82;
        }
      }
      else if ( (_DWORD)result == 3 )
      {
        v16 = *((unsigned __int16 *)v15 + 4);
        if ( a2 )
        {
          v17 = sub_855C0(a2, *((unsigned __int16 *)v15 + 4));
          if ( v17 != -1 )
            v16 = v17;
        }
        result = cleanup_argloc(v15);
        *v15 = 3;
        v15[2] = v16;
      }
    }
  }
  else if ( (_DWORD)result == 3 )
  {
    v3 = *((unsigned __int16 *)a1 + 4);
    if ( a2 )
    {
      v4 = sub_855C0(a2, *((unsigned __int16 *)a1 + 4));
      if ( v4 != -1 )
        v3 = v4;
    }
    result = cleanup_argloc(a1);
    *a1 = 3;
    a1[2] = v3;
  }
  return result;
}

