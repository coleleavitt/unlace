unsigned __int64 __fastcall sub_1A4EB0(__int64 a1, __int64 *a2, double a3, __m128 a4)
{
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v7; // r14
  char v8; // dl
  __int64 v9; // rbp
  __m128 v10; // xmm0
  int v11; // ebp
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // r9d
  int v18; // esi
  unsigned __int64 *v19; // rbp
  char v20; // al
  __int64 v21; // rdx
  int **v22; // r13
  int *v23; // rcx
  int *v24; // rdx
  int *v25; // r12
  __int64 v26; // rax
  __int64 v27; // rbp
  int v28; // ebp
  int *v29; // rdx
  int *v30; // rax
  __int64 v31; // [rsp+30h] [rbp-1B8h]
  __int64 v32[2]; // [rsp+40h] [rbp-1A8h] BYREF
  int *v33; // [rsp+50h] [rbp-198h] BYREF
  __int128 v34; // [rsp+58h] [rbp-190h]
  __int64 v35; // [rsp+70h] [rbp-178h] BYREF
  __int128 v36; // [rsp+78h] [rbp-170h]
  __int64 v37; // [rsp+88h] [rbp-160h]
  char v38; // [rsp+90h] [rbp-158h]
  unsigned __int64 v39; // [rsp+98h] [rbp-150h]
  char v40; // [rsp+A0h] [rbp-148h]
  __m128 v41; // [rsp+B0h] [rbp-138h] BYREF
  __int64 v42; // [rsp+C0h] [rbp-128h]
  __int128 v43; // [rsp+D0h] [rbp-118h]
  __int128 v44; // [rsp+E0h] [rbp-108h]
  __int128 v45; // [rsp+F0h] [rbp-F8h]
  __int64 v46; // [rsp+100h] [rbp-E8h]
  __int128 v47; // [rsp+108h] [rbp-E0h]
  __int64 v48[2]; // [rsp+128h] [rbp-C0h] BYREF
  __int64 v49; // [rsp+138h] [rbp-B0h] BYREF
  __int128 v50; // [rsp+140h] [rbp-A8h]
  __int64 v51[2]; // [rsp+150h] [rbp-98h] BYREF
  __int64 v52; // [rsp+160h] [rbp-88h] BYREF
  __int128 v53; // [rsp+168h] [rbp-80h]
  __int64 v54; // [rsp+178h] [rbp-70h]
  __int64 v55; // [rsp+180h] [rbp-68h]
  __int64 v56; // [rsp+188h] [rbp-60h]
  __int128 v57; // [rsp+190h] [rbp-58h]
  bool v58; // [rsp+1A4h] [rbp-44h]
  unsigned __int64 v59; // [rsp+1A8h] [rbp-40h]

  v59 = __readfsqword(0x28u);
  v4 = *a2;
  if ( *a2 )
  {
    v5 = a2[1];
    if ( v5 )
    {
      if ( (*(_DWORD *)v5 == 4 || *(_DWORD *)v5 == 67 && *(_DWORD *)(v5 + 68) == *(_DWORD *)(v5 + 36))
        && *(_BYTE *)(v5 + 64) == 5 )
      {
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL);
        v8 = *((_BYTE *)a2 + 32);
        v42 = v5 + 64;
        v41 = _mm_loadh_ps((const double *)(v5 + 8));
        v46 = 0;
        v48[0] = 0;
        v58 = !(v8 & 1);
        v48[1] = 0;
        v49 = 0;
        v51[0] = 0;
        v51[1] = 0;
        v52 = 0;
        v54 = 0;
        v55 = 0;
        v56 = 0;
        v43 = 0;
        v44 = 0;
        v45 = 0;
        v47 = 0;
        v50 = 0;
        v53 = 0;
        v57 = 0;
        sub_123EA0(v4, v48, v5 + 64, 0, 0xFFFF0000, 0.0);
        sub_1A3420((__int64)&v41);
        v9 = *(_QWORD *)(*(_QWORD *)(v5 + 72) + 8LL);
        while ( (unsigned int)sub_1A4170((__int64)&v41, (__m128)0LL) == 1 )
          sub_1A35C0(&v41, v9, 0);
        if ( (unsigned __int8)sub_64820(v48, v51) && (unsigned __int8)sub_317F40(&v52, (__int64)&v49) )
        {
          v10.m128_u64[0] = 0;
          v34 = 0;
          v32[0] = 0;
          v32[1] = 0;
          v11 = *(_DWORD *)(v41.m128_u64[0] + 72);
          v33 = nullptr;
          v12 = qvector_reserve((__int64)&v33, 0, 1, 4);
          v13 = v34;
          v33 = (int *)v12;
          *(_DWORD *)(v12 + 4 * v34) = v11;
          v14 = *(_QWORD *)(v7 + 784);
          *(_QWORD *)&v34 = v34 + 1;
          v31 = sub_1108E0(v14, 0, v13, v15, v16, v17, 0.0, a4);
          if ( !v31 )
          {
            if ( !under_debugger )
              sub_383060(0xC50Eu, 0.0);
LABEL_66:
            BUG();
          }
          ++*(_DWORD *)(v31 + 24);
LABEL_23:
          while ( (_QWORD)v34 )
          {
            v18 = v33[(_QWORD)v34 - 1];
            *(_QWORD *)&v34 = v34 - 1;
            v19 = (unsigned __int64 *)(*(_QWORD *)v31 + 24LL * v18);
            sub_64190(v32, v18, *(double *)v10.m128_u64);
            v20 = *(_BYTE *)(v5 + 64);
            if ( v20 == 1 )
            {
              v21 = *(int *)(v5 + 72);
            }
            else if ( v20 == 5 )
            {
              v21 = *(_QWORD *)(*(_QWORD *)(v5 + 72) + 8LL);
            }
            else
            {
              v20 = 0;
              v21 = -1;
            }
            v38 = v20;
            v10.m128_u64[0] = 0;
            v37 = v21;
            v35 = 0;
            v39 = 0xFFFFFFFF00000001LL;
            v40 = 1;
            v36 = 0;
            v22 = (int **)sub_104DF0(v19, (__int64)&v35);
            if ( v35 )
            {
              *(_QWORD *)&v36 = 0;
              qfree(v35);
            }
            if ( v22 )
            {
              v23 = v22[1];
              v24 = *v22;
              v25 = *v22;
              if ( 4LL * (_QWORD)v23 )
              {
                while ( 1 )
                {
                  v26 = (unsigned int)*v25;
                  if ( (_DWORD)v26 != v18 )
                  {
                    if ( (unsigned int)v26 >= *(_DWORD *)(v7 + 64) )
                    {
                      if ( !under_debugger )
                        sub_383060(0xCDEFu, *(double *)v10.m128_u64);
                      goto LABEL_66;
                    }
                    v10 = _mm_loadh_ps((const double *)(*(_QWORD *)(*(_QWORD *)(v7 + 528) + 8 * v26) + 48LL));
                    v41 = v10;
                    sub_1A3420((__int64)&v41);
                    v27 = *(_QWORD *)(*(_QWORD *)(v5 + 72) + 8LL);
                    while ( (unsigned int)sub_1A4170((__int64)&v41, v10) == 1 )
                      sub_1A35C0(&v41, v27, 0);
                    if ( (unsigned __int8)sub_64820(v48, v51)
                      && (unsigned __int8)sub_317F40(&v52, (__int64)&v49)
                      && !sub_64930(v32, *v25) )
                    {
                      v28 = *v25;
                      v29 = &v33[v34];
                      if ( v33 == v29 )
                        goto LABEL_47;
                      v30 = v33;
                      while ( v28 != *v30 )
                      {
                        if ( v29 == ++v30 )
                          goto LABEL_47;
                      }
                      if ( v30 == v29 )
                      {
LABEL_47:
                        if ( *((_QWORD *)&v34 + 1) < (unsigned __int64)(v34 + 1) )
                        {
                          v33 = (int *)qvector_reserve((__int64)&v33, (__int64)v33, v34 + 1, 4);
                          v29 = &v33[v34];
                        }
                        *v29 = v28;
                        *(_QWORD *)&v34 = v34 + 1;
                      }
                    }
                    v24 = *v22;
                    v23 = v22[1];
                  }
                  if ( ++v25 == &v24[(_QWORD)v23] )
                    goto LABEL_23;
                }
              }
            }
          }
          sub_104E10(v31, *(double *)v10.m128_u64);
          if ( v33 )
          {
            *(_QWORD *)&v34 = 0;
            qfree((__int64)v33);
          }
          qfree(v32[0]);
          if ( v56 )
          {
            *(_QWORD *)&v57 = 0;
            qfree(v56);
          }
          qfree(v54);
          if ( v52 )
          {
            *(_QWORD *)&v53 = 0;
            qfree(v52);
          }
          qfree(v51[0]);
          if ( v49 )
          {
            *(_QWORD *)&v50 = 0;
            qfree(v49);
          }
          qfree(v48[0]);
          if ( v46 )
          {
            *(_QWORD *)&v47 = 0;
            qfree(v46);
          }
        }
        else
        {
          if ( v56 )
          {
            *(_QWORD *)&v57 = 0;
            qfree(v56);
          }
          qfree(v54);
          if ( v52 )
          {
            *(_QWORD *)&v53 = 0;
            qfree(v52);
          }
          qfree(v51[0]);
          if ( v49 )
          {
            *(_QWORD *)&v50 = 0;
            qfree(v49);
          }
          qfree(v48[0]);
          if ( v46 )
          {
            *(_QWORD *)&v47 = 0;
            qfree(v46);
          }
        }
      }
    }
  }
  return v59 - __readfsqword(0x28u);
}

