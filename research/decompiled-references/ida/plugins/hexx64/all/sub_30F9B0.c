__int64 __fastcall sub_30F9B0(__int64 a1, unsigned int a2, double a3)
{
  __int64 *v3; // r13
  unsigned int v4; // r12d
  __int64 result; // rax
  unsigned int v6; // r15d
  int v7; // ebx
  int v8; // r13d
  __int64 v9; // rbx
  double v10; // xmm0_8
  int v11; // eax
  unsigned int v12; // r14d
  unsigned int v13; // ebp
  int v14; // eax
  unsigned int v15; // r15d
  int v16; // r14d
  double v17; // xmm0_8
  int v18; // eax
  unsigned int v19; // r13d
  int v20; // eax
  __int64 v21; // r13
  double v22; // xmm0_8
  int v23; // eax
  unsigned int v24; // ebx
  int v25; // eax
  int v26; // r15d
  __int64 v27; // rax
  unsigned int v28; // ebp
  unsigned int v29; // r13d
  __int64 v30; // rbx
  double v31; // xmm0_8
  int v32; // eax
  unsigned int v33; // r12d
  int v34; // ecx
  unsigned int v35; // r14d
  int v36; // r13d
  __int64 v37; // r15
  double v38; // xmm0_8
  int v39; // eax
  unsigned int v40; // ebp
  int v41; // eax
  __int64 v42; // r13
  int v43; // r15d
  unsigned int i; // ebp
  double v45; // xmm0_8
  int v46; // eax
  unsigned int v47; // r12d
  int v48; // eax
  __int64 v49; // rbx
  int v50; // r13d
  double v51; // xmm0_8
  int v52; // eax
  unsigned int v53; // r15d
  unsigned int v54; // ebp
  int v55; // eax
  __int64 v56; // r12
  double v57; // xmm0_8
  int v58; // eax
  unsigned int v59; // r14d
  unsigned int v60; // ebx
  int v61; // r13d
  __int64 v62; // rdx
  unsigned int v63; // eax
  __int64 v64; // rax
  __int64 v65; // rsi
  __int64 v66; // rax
  __int64 v67; // rsi
  __int64 v68; // rax
  __int64 v69; // rsi
  __int64 v70; // rax
  __int64 v71; // rsi
  __int64 v72; // rax
  __int64 v73; // rsi
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rsi
  __int64 v77; // rax
  __int64 v78; // rsi
  __int64 v79; // rax
  __int64 v80; // rsi
  __int64 v81; // rsi
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 *v91; // [rsp+0h] [rbp-98h]
  unsigned int v92; // [rsp+8h] [rbp-90h]
  int v93; // [rsp+Ch] [rbp-8Ch]
  unsigned int v94; // [rsp+10h] [rbp-88h]
  unsigned int v95; // [rsp+14h] [rbp-84h]
  int v96; // [rsp+18h] [rbp-80h]
  unsigned int v97; // [rsp+1Ch] [rbp-7Ch]
  int v98; // [rsp+20h] [rbp-78h]
  unsigned int v99; // [rsp+24h] [rbp-74h]
  unsigned int v100; // [rsp+28h] [rbp-70h]
  unsigned int v101; // [rsp+2Ch] [rbp-6Ch]
  int v102; // [rsp+30h] [rbp-68h]
  unsigned int v103; // [rsp+34h] [rbp-64h]
  unsigned int v104; // [rsp+38h] [rbp-60h]
  int v105; // [rsp+3Ch] [rbp-5Ch]
  unsigned int v106; // [rsp+40h] [rbp-58h]
  int v107; // [rsp+44h] [rbp-54h]
  unsigned int v108; // [rsp+48h] [rbp-50h]
  int v109; // [rsp+4Ch] [rbp-4Ch]
  unsigned int v110; // [rsp+50h] [rbp-48h]
  int v111; // [rsp+54h] [rbp-44h]
  unsigned int v112; // [rsp+58h] [rbp-40h]
  unsigned int v113; // [rsp+5Ch] [rbp-3Ch]

  v3 = (__int64 *)a1;
  v4 = a2;
  v91 = (__int64 *)(a1 + 24);
  result = sub_64190((__int64 *)(a1 + 24), a2, a3);
  if ( (_BYTE)result )
  {
    v6 = 0;
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 96LL))(*(_QWORD *)(a1 + 40), a2);
    if ( v7 > 0 )
    {
      v8 = v7;
      v9 = a1;
      do
      {
        v10 = (*(double (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v9 + 40) + 112LL))(
                *(_QWORD *)(v9 + 40),
                v4,
                v6);
        v12 = v11;
        if ( (unsigned __int8)sub_64190(v91, v11, v10) )
        {
          v13 = 0;
          v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v9 + 40) + 96LL))(*(_QWORD *)(v9 + 40), v12);
          if ( v14 > 0 )
          {
            v111 = v8;
            v113 = v4;
            v112 = v6;
            v15 = v12;
            v16 = v14;
            do
            {
              v17 = (*(double (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v9 + 40) + 112LL))(
                      *(_QWORD *)(v9 + 40),
                      v15,
                      v13);
              v103 = v18;
              v19 = v18;
              if ( (unsigned __int8)sub_64190(v91, v18, v17) )
              {
                v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v9 + 40) + 96LL))(
                        *(_QWORD *)(v9 + 40),
                        v19);
                v100 = 0;
                if ( v20 > 0 )
                {
                  v108 = v15;
                  v21 = v9;
                  v109 = v16;
                  v110 = v13;
                  v107 = v20;
                  do
                  {
                    v22 = (*(double (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v21 + 40) + 112LL))(
                            *(_QWORD *)(v21 + 40),
                            v103,
                            v100);
                    v24 = v23;
                    if ( (unsigned __int8)sub_64190(v91, v23, v22) )
                    {
                      v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v21 + 40) + 96LL))(
                              *(_QWORD *)(v21 + 40),
                              v24);
                      if ( v25 > 0 )
                      {
                        v26 = v25;
                        v27 = v21;
                        v28 = 0;
                        v29 = v24;
                        v30 = v27;
                        do
                        {
                          v31 = (*(double (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v30 + 40) + 112LL))(
                                  *(_QWORD *)(v30 + 40),
                                  v29,
                                  v28);
                          v33 = v32;
                          if ( (unsigned __int8)sub_64190(v91, v32, v31) )
                          {
                            v34 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v30 + 40) + 96LL))(
                                    *(_QWORD *)(v30 + 40),
                                    v33);
                            if ( v34 > 0 )
                            {
                              v97 = v33;
                              v35 = 0;
                              v106 = v28;
                              v104 = v29;
                              v36 = v34;
                              v105 = v26;
                              v37 = v30;
                              do
                              {
                                v38 = (*(double (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v37 + 40) + 112LL))(
                                        *(_QWORD *)(v37 + 40),
                                        v97,
                                        v35);
                                v40 = v39;
                                if ( (unsigned __int8)sub_64190(v91, v39, v38) )
                                {
                                  v41 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v37 + 40) + 96LL))(
                                          *(_QWORD *)(v37 + 40),
                                          v40);
                                  if ( v41 > 0 )
                                  {
                                    v101 = v35;
                                    v102 = v36;
                                    v42 = v37;
                                    v43 = v41;
                                    v94 = v40;
                                    for ( i = 0; i != v43; ++i )
                                    {
                                      v45 = (*(double (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v42 + 40)
                                                                                             + 112LL))(
                                              *(_QWORD *)(v42 + 40),
                                              v94,
                                              i);
                                      v47 = v46;
                                      if ( (unsigned __int8)sub_64190(v91, v46, v45) )
                                      {
                                        v48 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v42 + 40) + 96LL))(
                                                *(_QWORD *)(v42 + 40),
                                                v47);
                                        if ( v48 > 0 )
                                        {
                                          v92 = 0;
                                          v49 = v42;
                                          v50 = v48;
                                          v98 = v43;
                                          v99 = i;
                                          do
                                          {
                                            v51 = (*(double (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v49 + 40) + 112LL))(
                                                    *(_QWORD *)(v49 + 40),
                                                    v47,
                                                    v92);
                                            v53 = v52;
                                            if ( (unsigned __int8)sub_64190(v91, v52, v51) )
                                            {
                                              v54 = 0;
                                              v55 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v49 + 40)
                                                                                              + 96LL))(
                                                      *(_QWORD *)(v49 + 40),
                                                      v53);
                                              if ( v55 > 0 )
                                              {
                                                v96 = v50;
                                                v93 = v55;
                                                v95 = v47;
                                                v56 = v49;
                                                do
                                                {
                                                  v57 = (*(double (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v56 + 40) + 112LL))(
                                                          *(_QWORD *)(v56 + 40),
                                                          v53,
                                                          v54);
                                                  v59 = v58;
                                                  if ( (unsigned __int8)sub_64190(v91, v58, v57) )
                                                  {
                                                    v60 = 0;
                                                    v61 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v56 + 40) + 96LL))(
                                                            *(_QWORD *)(v56 + 40),
                                                            v59);
                                                    if ( v61 > 0 )
                                                    {
                                                      do
                                                      {
                                                        v62 = v60++;
                                                        v63 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v56 + 40) + 112LL))(
                                                                *(_QWORD *)(v56 + 40),
                                                                v59,
                                                                v62);
                                                        sub_30F9B0(v56, v63);
                                                      }
                                                      while ( v61 != v60 );
                                                    }
                                                    v64 = *(_QWORD *)(v56 + 8);
                                                    v65 = *(_QWORD *)v56;
                                                    if ( *(_QWORD *)(v56 + 16) < (unsigned __int64)(v64 + 1) )
                                                    {
                                                      v82 = qvector_reserve(v56, v65, v64 + 1, 4);
                                                      *(_QWORD *)v56 = v82;
                                                      v65 = v82;
                                                      v64 = *(_QWORD *)(v56 + 8);
                                                    }
                                                    *(_DWORD *)(v65 + 4 * v64) = v59;
                                                    ++*(_QWORD *)(v56 + 8);
                                                  }
                                                  ++v54;
                                                }
                                                while ( v93 != v54 );
                                                v49 = v56;
                                                v50 = v96;
                                                v47 = v95;
                                              }
                                              v66 = *(_QWORD *)(v49 + 8);
                                              v67 = *(_QWORD *)v49;
                                              if ( *(_QWORD *)(v49 + 16) < (unsigned __int64)(v66 + 1) )
                                              {
                                                v83 = qvector_reserve(v49, v67, v66 + 1, 4);
                                                *(_QWORD *)v49 = v83;
                                                v67 = v83;
                                                v66 = *(_QWORD *)(v49 + 8);
                                              }
                                              *(_DWORD *)(v67 + 4 * v66) = v53;
                                              ++*(_QWORD *)(v49 + 8);
                                            }
                                            ++v92;
                                          }
                                          while ( v50 != v92 );
                                          v43 = v98;
                                          i = v99;
                                          v42 = v49;
                                        }
                                        v68 = *(_QWORD *)(v42 + 8);
                                        v69 = *(_QWORD *)v42;
                                        if ( *(_QWORD *)(v42 + 16) < (unsigned __int64)(v68 + 1) )
                                        {
                                          v84 = qvector_reserve(v42, v69, v68 + 1, 4);
                                          *(_QWORD *)v42 = v84;
                                          v69 = v84;
                                          v68 = *(_QWORD *)(v42 + 8);
                                        }
                                        *(_DWORD *)(v69 + 4 * v68) = v47;
                                        ++*(_QWORD *)(v42 + 8);
                                      }
                                    }
                                    v37 = v42;
                                    v35 = v101;
                                    v40 = v94;
                                    v36 = v102;
                                  }
                                  v70 = *(_QWORD *)(v37 + 8);
                                  v71 = *(_QWORD *)v37;
                                  if ( *(_QWORD *)(v37 + 16) < (unsigned __int64)(v70 + 1) )
                                  {
                                    v85 = qvector_reserve(v37, v71, v70 + 1, 4);
                                    *(_QWORD *)v37 = v85;
                                    v71 = v85;
                                    v70 = *(_QWORD *)(v37 + 8);
                                  }
                                  *(_DWORD *)(v71 + 4 * v70) = v40;
                                  ++*(_QWORD *)(v37 + 8);
                                }
                                ++v35;
                              }
                              while ( v36 != v35 );
                              v30 = v37;
                              v29 = v104;
                              v33 = v97;
                              v28 = v106;
                              v26 = v105;
                            }
                            v72 = *(_QWORD *)(v30 + 8);
                            v73 = *(_QWORD *)v30;
                            if ( *(_QWORD *)(v30 + 16) < (unsigned __int64)(v72 + 1) )
                            {
                              v86 = qvector_reserve(v30, v73, v72 + 1, 4);
                              *(_QWORD *)v30 = v86;
                              v73 = v86;
                              v72 = *(_QWORD *)(v30 + 8);
                            }
                            *(_DWORD *)(v73 + 4 * v72) = v33;
                            ++*(_QWORD *)(v30 + 8);
                          }
                          ++v28;
                        }
                        while ( v26 != v28 );
                        v74 = v30;
                        v24 = v29;
                        v21 = v74;
                      }
                      v75 = *(_QWORD *)(v21 + 8);
                      v76 = *(_QWORD *)v21;
                      if ( *(_QWORD *)(v21 + 16) < (unsigned __int64)(v75 + 1) )
                      {
                        v87 = qvector_reserve(v21, v76, v75 + 1, 4);
                        *(_QWORD *)v21 = v87;
                        v76 = v87;
                        v75 = *(_QWORD *)(v21 + 8);
                      }
                      *(_DWORD *)(v76 + 4 * v75) = v24;
                      ++*(_QWORD *)(v21 + 8);
                    }
                    ++v100;
                  }
                  while ( v107 != v100 );
                  v15 = v108;
                  v16 = v109;
                  v9 = v21;
                  v13 = v110;
                }
                v77 = *(_QWORD *)(v9 + 8);
                v78 = *(_QWORD *)v9;
                if ( *(_QWORD *)(v9 + 16) < (unsigned __int64)(v77 + 1) )
                {
                  v88 = qvector_reserve(v9, v78, v77 + 1, 4);
                  *(_QWORD *)v9 = v88;
                  v78 = v88;
                  v77 = *(_QWORD *)(v9 + 8);
                }
                *(_DWORD *)(v78 + 4 * v77) = v103;
                ++*(_QWORD *)(v9 + 8);
              }
              ++v13;
            }
            while ( v16 != v13 );
            v12 = v15;
            v8 = v111;
            v6 = v112;
            v4 = v113;
          }
          v79 = *(_QWORD *)(v9 + 8);
          v80 = *(_QWORD *)v9;
          if ( *(_QWORD *)(v9 + 16) < (unsigned __int64)(v79 + 1) )
          {
            v89 = qvector_reserve(v9, v80, v79 + 1, 4);
            *(_QWORD *)v9 = v89;
            v80 = v89;
            v79 = *(_QWORD *)(v9 + 8);
          }
          *(_DWORD *)(v80 + 4 * v79) = v12;
          ++*(_QWORD *)(v9 + 8);
        }
        ++v6;
      }
      while ( v8 != v6 );
      v3 = (__int64 *)v9;
    }
    result = v3[1];
    v81 = *v3;
    if ( v3[2] < (unsigned __int64)(result + 1) )
    {
      v90 = qvector_reserve((__int64)v3, v81, result + 1, 4);
      *v3 = v90;
      v81 = v90;
      result = v3[1];
    }
    *(_DWORD *)(v81 + 4 * result) = v4;
    ++v3[1];
  }
  return result;
}

