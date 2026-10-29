unsigned __int64 __fastcall sub_1A46A0(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  _QWORD *v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rbx
  bool v10; // bp
  __int64 v11; // rax
  __int64 v12; // r13
  int v13; // ebx
  __int64 v14; // r12
  __int64 v15; // rdi
  __m128 v16; // xmm0
  __int64 v17; // rbp
  __m128 v19; // xmm0
  int v20; // ebp
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // r9d
  __int64 v27; // rax
  int v28; // r15d
  unsigned __int64 *v29; // rbp
  int **v30; // r13
  int *v31; // rcx
  int *v32; // rdx
  int *v33; // r12
  __int64 v34; // rax
  __int64 v35; // rbp
  int v36; // ebp
  int *v37; // rdx
  int *v38; // rax
  __int64 v39; // [rsp+30h] [rbp-1D8h]
  __int64 v40; // [rsp+38h] [rbp-1D0h]
  _QWORD v41[2]; // [rsp+50h] [rbp-1B8h] BYREF
  __int64 v42[2]; // [rsp+60h] [rbp-1A8h] BYREF
  int *v43; // [rsp+70h] [rbp-198h] BYREF
  __int128 v44; // [rsp+78h] [rbp-190h]
  __int64 v45; // [rsp+90h] [rbp-178h] BYREF
  __int128 v46; // [rsp+98h] [rbp-170h]
  __int64 v47; // [rsp+A8h] [rbp-160h]
  char v48; // [rsp+B0h] [rbp-158h]
  unsigned __int64 v49; // [rsp+B8h] [rbp-150h]
  char v50; // [rsp+C0h] [rbp-148h]
  __m128 v51; // [rsp+D0h] [rbp-138h] BYREF
  _QWORD *v52; // [rsp+E0h] [rbp-128h]
  __int128 v53; // [rsp+F0h] [rbp-118h]
  __int128 v54; // [rsp+100h] [rbp-108h]
  __int128 v55; // [rsp+110h] [rbp-F8h]
  __int64 v56; // [rsp+120h] [rbp-E8h]
  __int128 v57; // [rsp+128h] [rbp-E0h]
  __int64 v58[2]; // [rsp+148h] [rbp-C0h] BYREF
  __int64 v59; // [rsp+158h] [rbp-B0h] BYREF
  __int128 v60; // [rsp+160h] [rbp-A8h]
  __int64 v61[2]; // [rsp+170h] [rbp-98h] BYREF
  __int64 v62; // [rsp+180h] [rbp-88h] BYREF
  __int128 v63; // [rsp+188h] [rbp-80h]
  __int64 v64; // [rsp+198h] [rbp-70h]
  __int64 v65; // [rsp+1A0h] [rbp-68h]
  __int64 v66; // [rsp+1A8h] [rbp-60h]
  __int128 v67; // [rsp+1B0h] [rbp-58h]
  bool v68; // [rsp+1C4h] [rbp-44h]
  unsigned __int64 v69; // [rsp+1C8h] [rbp-40h]

  v4 = *(_QWORD **)(a1 + 16);
  v5 = v4[35];
  v69 = __readfsqword(0x28u);
  v40 = *(_QWORD *)(a2 + 72) + *(__int16 *)(*(__int64 (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
  v41[0] = -4294967291LL;
  v8 = (_QWORD *)j__qalloc_or_throw(16, a2, v6, v7);
  *v8 = v5;
  v8[1] = v40;
  v41[1] = v8;
  HIDWORD(v41[0]) = *(_DWORD *)(*(_QWORD *)(v5 + 1504) + 80LL);
  v9 = *(_QWORD *)(a2 + 104);
  v10 = (*(_BYTE *)(a2 + 8) & 0x10) != 0;
  if ( !v9 )
  {
    if ( !under_debugger )
      sub_383060(0xCD4Bu, a3);
    goto LABEL_69;
  }
  v11 = *(_QWORD *)(a2 + 96);
  v12 = *(_QWORD *)(v11 + 8 * v9 - 8);
  v13 = v9 - 2;
  if ( v13 >= 0 )
  {
    v14 = 8LL * (unsigned int)v13;
    while ( 1 )
    {
      while ( !v12 )
      {
        --v13;
        v14 -= 8;
        if ( v13 == -1 )
          goto LABEL_10;
      }
      if ( !sub_122240(*(_QWORD *)(v11 + v14), *(_QWORD *)(v12 + 8), 0) )
        break;
LABEL_9:
      --v13;
      v11 = *(_QWORD *)(a2 + 96);
      v12 = *(_QWORD *)(v11 + v14);
      v14 -= 8;
      if ( v13 == -1 )
        goto LABEL_10;
    }
    while ( 1 )
    {
      --v13;
      v14 -= 8;
      if ( v13 == -1 )
        break;
      if ( sub_122240(*(_QWORD *)(*(_QWORD *)(a2 + 96) + v14), *(_QWORD *)(v12 + 8), 0) )
        goto LABEL_9;
    }
  }
LABEL_10:
  v15 = *(_QWORD *)a2;
  v16 = _mm_loadh_ps((const double *)(v12 + 8));
  if ( !*(_QWORD *)a2 )
    sub_195160(*(double *)v16.m128_u64);
  v51 = v16;
  v52 = v41;
  v56 = 0;
  v58[0] = 0;
  v58[1] = 0;
  v59 = 0;
  v61[0] = 0;
  v61[1] = 0;
  v62 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v68 = v10;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v57 = 0;
  v60 = 0;
  v63 = 0;
  v67 = 0;
  sub_123EA0(v15, v58, (__int64)v41, 0, 0xFFFF0000, 0.0);
  sub_1A3420((__int64)&v51);
  v17 = *(_QWORD *)(a2 + 72);
  while ( (unsigned int)sub_1A4170((__int64)&v51, (__m128)0LL) == 1 )
    sub_1A35C0(&v51, v17, 1);
  if ( (unsigned __int8)sub_64820(v58, v61) && (unsigned __int8)sub_317F40(&v62, (__int64)&v59) )
  {
    v19.m128_u64[0] = 0;
    v44 = 0;
    v42[0] = 0;
    v42[1] = 0;
    v20 = *(_DWORD *)(v51.m128_u64[0] + 72);
    v43 = nullptr;
    v21 = qvector_reserve((__int64)&v43, 0, 1, 4);
    v22 = v44;
    v43 = (int *)v21;
    *(_DWORD *)(v21 + 4 * v44) = v20;
    v23 = *(_QWORD *)(v5 + 784);
    *(_QWORD *)&v44 = v44 + 1;
    v39 = sub_1108E0(v23, 0, v22, v24, v25, v26, 0.0, a4);
    if ( v39 )
    {
      ++*(_DWORD *)(v39 + 24);
      while ( 2 )
      {
        while ( 2 )
        {
          v27 = v44;
          if ( !(_QWORD)v44 )
            goto LABEL_41;
LABEL_28:
          v28 = v43[v27 - 1];
          *(_QWORD *)&v44 = v27 - 1;
          v29 = (unsigned __int64 *)(*(_QWORD *)v39 + 24LL * v28);
          sub_64190(v42, v28, *(double *)v19.m128_u64);
          v19.m128_u64[0] = 0;
          v45 = 0;
          v47 = v40;
          v48 = 5;
          v49 = 0xFFFFFFFF00000001LL;
          v50 = 1;
          v46 = 0;
          v30 = (int **)sub_104DF0(v29, (__int64)&v45);
          if ( v45 )
          {
            *(_QWORD *)&v46 = 0;
            qfree(v45);
          }
          if ( !v30 )
            continue;
          break;
        }
        v31 = v30[1];
        v32 = *v30;
        v33 = *v30;
        if ( !(4LL * (_QWORD)v31) )
          continue;
        break;
      }
      while ( 1 )
      {
        v34 = (unsigned int)*v33;
        if ( (_DWORD)v34 != v28 )
        {
          if ( (unsigned int)v34 >= *(_DWORD *)(v5 + 64) )
          {
            if ( !under_debugger )
              sub_383060(0xCDEFu, *(double *)v19.m128_u64);
            goto LABEL_69;
          }
          v19 = _mm_loadh_ps((const double *)(*(_QWORD *)(*(_QWORD *)(v5 + 528) + 8 * v34) + 48LL));
          v51 = v19;
          sub_1A3420((__int64)&v51);
          v35 = *(_QWORD *)(a2 + 72);
          while ( (unsigned int)sub_1A4170((__int64)&v51, v19) == 1 )
            sub_1A35C0(&v51, v35, 1);
          if ( (unsigned __int8)sub_64820(v58, v61)
            && (unsigned __int8)sub_317F40(&v62, (__int64)&v59)
            && !sub_64930(v42, *v33) )
          {
            v36 = *v33;
            v37 = &v43[v44];
            if ( v43 == v37 )
              goto LABEL_59;
            v38 = v43;
            while ( v36 != *v38 )
            {
              if ( v37 == ++v38 )
                goto LABEL_59;
            }
            if ( v37 == v38 )
            {
LABEL_59:
              if ( *((_QWORD *)&v44 + 1) < (unsigned __int64)(v44 + 1) )
              {
                v43 = (int *)qvector_reserve((__int64)&v43, (__int64)v43, v44 + 1, 4);
                v37 = &v43[v44];
              }
              *v37 = v36;
              *(_QWORD *)&v44 = v44 + 1;
            }
          }
          v32 = *v30;
          v31 = v30[1];
        }
        if ( ++v33 == &v32[(_QWORD)v31] )
        {
          v27 = v44;
          if ( !(_QWORD)v44 )
          {
LABEL_41:
            sub_104E10(v39, *(double *)v19.m128_u64);
            if ( v43 )
            {
              *(_QWORD *)&v44 = 0;
              qfree((__int64)v43);
            }
            qfree(v42[0]);
            if ( v66 )
            {
              *(_QWORD *)&v67 = 0;
              qfree(v66);
            }
            qfree(v64);
            if ( v62 )
            {
              *(_QWORD *)&v63 = 0;
              qfree(v62);
            }
            qfree(v61[0]);
            if ( v59 )
            {
              *(_QWORD *)&v60 = 0;
              qfree(v59);
            }
            qfree(v58[0]);
            if ( v56 )
            {
              *(_QWORD *)&v57 = 0;
              qfree(v56);
            }
            goto LABEL_23;
          }
          goto LABEL_28;
        }
      }
    }
    if ( !under_debugger )
      sub_383060(0xC50Eu, 0.0);
LABEL_69:
    BUG();
  }
  if ( v66 )
  {
    *(_QWORD *)&v67 = 0;
    qfree(v66);
  }
  qfree(v64);
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    qfree(v62);
  }
  qfree(v61[0]);
  if ( v59 )
  {
    *(_QWORD *)&v60 = 0;
    qfree(v59);
  }
  qfree(v58[0]);
  if ( v56 )
  {
    *(_QWORD *)&v57 = 0;
    qfree(v56);
  }
LABEL_23:
  sub_11CDA0((__int64)v41);
  return v69 - __readfsqword(0x28u);
}

