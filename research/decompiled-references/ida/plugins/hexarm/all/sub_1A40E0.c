unsigned __int64 __fastcall sub_1A40E0(__int128 a1)
{
  __int64 v1; // r14
  _QWORD *v2; // rax
  __int64 v3; // rbx
  bool v4; // bp
  __int64 v5; // rax
  __int64 v6; // r13
  int v7; // ebx
  __int64 v8; // r12
  __m128 v9; // xmm0
  __int64 v10; // rbp
  int v12; // ebp
  __int64 v13; // rdi
  __int64 v14; // rax
  int v15; // r15d
  unsigned __int64 *v16; // rbp
  int **v17; // r13
  int *v18; // rcx
  int *v19; // rdx
  int *v20; // r12
  __int64 v21; // rax
  __int64 v22; // rbp
  int v23; // ebp
  int *v24; // rdx
  int *v25; // rax
  __int64 v26; // [rsp+0h] [rbp-208h]
  __int64 v27; // [rsp+30h] [rbp-1D8h]
  __int64 v28; // [rsp+38h] [rbp-1D0h]
  _QWORD v29[2]; // [rsp+50h] [rbp-1B8h] BYREF
  __int64 v30[2]; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v31; // [rsp+70h] [rbp-198h]
  __int128 v32; // [rsp+78h] [rbp-190h]
  __int64 v33; // [rsp+90h] [rbp-178h] BYREF
  __int128 v34; // [rsp+98h] [rbp-170h]
  __int64 v35; // [rsp+A8h] [rbp-160h]
  char v36; // [rsp+B0h] [rbp-158h]
  unsigned __int64 v37; // [rsp+B8h] [rbp-150h]
  char v38; // [rsp+C0h] [rbp-148h]
  __m128 v39; // [rsp+D0h] [rbp-138h] BYREF
  _QWORD *v40; // [rsp+E0h] [rbp-128h]
  __int128 v41; // [rsp+F0h] [rbp-118h]
  __int128 v42; // [rsp+100h] [rbp-108h]
  __int128 v43; // [rsp+110h] [rbp-F8h]
  __int64 v44; // [rsp+120h] [rbp-E8h]
  __int128 v45; // [rsp+128h] [rbp-E0h]
  _QWORD v46[2]; // [rsp+148h] [rbp-C0h] BYREF
  __int64 v47; // [rsp+158h] [rbp-B0h] BYREF
  __int128 v48; // [rsp+160h] [rbp-A8h]
  _QWORD v49[2]; // [rsp+170h] [rbp-98h] BYREF
  __int64 v50; // [rsp+180h] [rbp-88h] BYREF
  __int128 v51; // [rsp+188h] [rbp-80h]
  __int64 v52; // [rsp+198h] [rbp-70h]
  __int64 v53; // [rsp+1A0h] [rbp-68h]
  __int64 v54; // [rsp+1A8h] [rbp-60h]
  __int128 v55; // [rsp+1B0h] [rbp-58h]
  bool v56; // [rsp+1C4h] [rbp-44h]
  unsigned __int64 v57; // [rsp+1C8h] [rbp-40h]

  *(_QWORD *)&a1 = *(_QWORD *)(a1 + 16);
  v26 = *((_QWORD *)&a1 + 1);
  v1 = *(_QWORD *)(a1 + 280);
  v57 = __readfsqword(0x28u);
  v28 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 72LL)
      + *(__int16 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)a1 + 24LL))(a1);
  v29[0] = -4294967291LL;
  v2 = (_QWORD *)j__qalloc_or_throw();
  *v2 = v1;
  v2[1] = v28;
  v29[1] = v2;
  HIDWORD(v29[0]) = *(_DWORD *)(*(_QWORD *)(v1 + 1504) + 80LL);
  v3 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 104LL);
  v4 = (*(_BYTE *)(*((_QWORD *)&a1 + 1) + 8LL) & 0x10) != 0;
  if ( !v3 )
  {
    if ( !under_debugger )
      sub_3835A0(52555);
    goto LABEL_69;
  }
  v5 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 96LL);
  v6 = *(_QWORD *)(v5 + 8 * v3 - 8);
  v7 = v3 - 2;
  if ( v7 >= 0 )
  {
    v8 = 8LL * (unsigned int)v7;
    while ( 1 )
    {
      while ( !v6 )
      {
        --v7;
        v8 -= 8;
        if ( v7 == -1 )
          goto LABEL_10;
      }
      if ( !sub_121C80(*(_QWORD *)(v5 + v8), *(_QWORD *)(v6 + 8), 0) )
        break;
LABEL_9:
      --v7;
      v5 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 96LL);
      v6 = *(_QWORD *)(v5 + v8);
      v8 -= 8;
      if ( v7 == -1 )
        goto LABEL_10;
    }
    while ( 1 )
    {
      --v7;
      v8 -= 8;
      if ( v7 == -1 )
        break;
      if ( sub_121C80(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)&a1 + 1) + 96LL) + v8), *(_QWORD *)(v6 + 8), 0) )
        goto LABEL_9;
    }
  }
LABEL_10:
  *(_QWORD *)&a1 = **((_QWORD **)&a1 + 1);
  v9 = _mm_loadh_ps((const double *)(v6 + 8));
  if ( !**((_QWORD **)&a1 + 1) )
    sub_194BA0(*(double *)v9.m128_u64);
  v39 = v9;
  *((_QWORD *)&a1 + 1) = v46;
  v40 = v29;
  v44 = 0;
  v46[0] = 0;
  v46[1] = 0;
  v47 = 0;
  v49[0] = 0;
  v49[1] = 0;
  v50 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v56 = v4;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v45 = 0;
  v48 = 0;
  v51 = 0;
  v55 = 0;
  sub_1238E0(a1, (__int64)v29, 0, 0xFFFF0000);
  sub_1A2E60((__int64)&v39);
  v10 = *(_QWORD *)(v26 + 72);
  while ( (unsigned int)sub_1A3BB0((__int64)&v39) == 1 )
    sub_1A3000(&v39, v10, 1);
  if ( (unsigned __int8)sub_64220(v46, v49) && (unsigned __int8)sub_318300(&v50, &v47) )
  {
    v32 = 0;
    v30[0] = 0;
    v30[1] = 0;
    v12 = *(_DWORD *)(v39.m128_u64[0] + 72);
    v31 = 0;
    v31 = qvector_reserve();
    *(_DWORD *)(v31 + 4 * v32) = v12;
    v13 = *(_QWORD *)(v1 + 784);
    *(_QWORD *)&v32 = v32 + 1;
    v27 = sub_110320(v13, 0);
    if ( v27 )
    {
      ++*(_DWORD *)(v27 + 24);
      while ( 2 )
      {
        while ( 2 )
        {
          v14 = v32;
          if ( !(_QWORD)v32 )
            goto LABEL_41;
LABEL_28:
          v15 = *(_DWORD *)(v31 + 4 * v14 - 4);
          *(_QWORD *)&v32 = v14 - 1;
          v16 = (unsigned __int64 *)(*(_QWORD *)v27 + 24LL * v15);
          sub_63B90(v30, v15);
          v33 = 0;
          v35 = v28;
          v36 = 5;
          v37 = 0xFFFFFFFF00000001LL;
          v38 = 1;
          v34 = 0;
          v17 = (int **)sub_104830(v16, (__int64)&v33);
          if ( v33 )
          {
            *(_QWORD *)&v34 = 0;
            qfree();
          }
          if ( !v17 )
            continue;
          break;
        }
        v18 = v17[1];
        v19 = *v17;
        v20 = *v17;
        if ( !(4LL * (_QWORD)v18) )
          continue;
        break;
      }
      while ( 1 )
      {
        v21 = (unsigned int)*v20;
        if ( (_DWORD)v21 != v15 )
        {
          if ( (unsigned int)v21 >= *(_DWORD *)(v1 + 64) )
          {
            if ( !under_debugger )
              sub_3835A0(52719);
            goto LABEL_69;
          }
          v39 = _mm_loadh_ps((const double *)(*(_QWORD *)(*(_QWORD *)(v1 + 528) + 8 * v21) + 48LL));
          sub_1A2E60((__int64)&v39);
          v22 = *(_QWORD *)(v26 + 72);
          while ( (unsigned int)sub_1A3BB0((__int64)&v39) == 1 )
            sub_1A3000(&v39, v22, 1);
          if ( (unsigned __int8)sub_64220(v46, v49) && (unsigned __int8)sub_318300(&v50, &v47) && !sub_64330(v30, *v20) )
          {
            v23 = *v20;
            v24 = (int *)(v31 + 4 * v32);
            if ( (int *)v31 == v24 )
              goto LABEL_59;
            v25 = (int *)v31;
            while ( v23 != *v25 )
            {
              if ( v24 == ++v25 )
                goto LABEL_59;
            }
            if ( v24 == v25 )
            {
LABEL_59:
              if ( *((_QWORD *)&v32 + 1) < (unsigned __int64)(v32 + 1) )
              {
                v31 = qvector_reserve();
                v24 = (int *)(v31 + 4 * v32);
              }
              *v24 = v23;
              *(_QWORD *)&v32 = v32 + 1;
            }
          }
          v19 = *v17;
          v18 = v17[1];
        }
        if ( ++v20 == &v19[(_QWORD)v18] )
        {
          v14 = v32;
          if ( !(_QWORD)v32 )
          {
LABEL_41:
            sub_104850(v27);
            if ( v31 )
            {
              *(_QWORD *)&v32 = 0;
              qfree();
            }
            qfree();
            if ( v54 )
            {
              *(_QWORD *)&v55 = 0;
              qfree();
            }
            qfree();
            if ( v50 )
            {
              *(_QWORD *)&v51 = 0;
              qfree();
            }
            qfree();
            if ( v47 )
            {
              *(_QWORD *)&v48 = 0;
              qfree();
            }
            qfree();
            if ( v44 )
            {
              *(_QWORD *)&v45 = 0;
              qfree();
            }
            goto LABEL_23;
          }
          goto LABEL_28;
        }
      }
    }
    if ( !under_debugger )
      sub_3835A0(50446);
LABEL_69:
    BUG();
  }
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree();
  }
  qfree();
  if ( v50 )
  {
    *(_QWORD *)&v51 = 0;
    qfree();
  }
  qfree();
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    qfree();
  }
  qfree();
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    qfree();
  }
LABEL_23:
  sub_11C7E0((__int64)v29);
  return v57 - __readfsqword(0x28u);
}

