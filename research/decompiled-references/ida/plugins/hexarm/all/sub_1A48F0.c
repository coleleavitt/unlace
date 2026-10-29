unsigned __int64 __fastcall sub_1A48F0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // r15
  __int64 v5; // r14
  char v6; // dl
  __int128 v7; // rdi
  __int64 v8; // rbp
  int v9; // ebp
  __int64 v10; // rdi
  int v11; // esi
  unsigned __int64 *v12; // rbp
  char v13; // al
  __int64 v14; // rdx
  int **v15; // r13
  int *v16; // rcx
  int *v17; // rdx
  int *v18; // r12
  __int64 v19; // rax
  __int64 v20; // rbp
  int v21; // ebp
  int *v22; // rdx
  int *v23; // rax
  __int64 v24; // [rsp+30h] [rbp-1B8h]
  __int64 v25[2]; // [rsp+40h] [rbp-1A8h] BYREF
  int *v26; // [rsp+50h] [rbp-198h]
  __int128 v27; // [rsp+58h] [rbp-190h]
  __int64 v28; // [rsp+70h] [rbp-178h] BYREF
  __int128 v29; // [rsp+78h] [rbp-170h]
  __int64 v30; // [rsp+88h] [rbp-160h]
  char v31; // [rsp+90h] [rbp-158h]
  unsigned __int64 v32; // [rsp+98h] [rbp-150h]
  char v33; // [rsp+A0h] [rbp-148h]
  __m128 v34; // [rsp+B0h] [rbp-138h] BYREF
  __int64 v35; // [rsp+C0h] [rbp-128h]
  __int128 v36; // [rsp+D0h] [rbp-118h]
  __int128 v37; // [rsp+E0h] [rbp-108h]
  __int128 v38; // [rsp+F0h] [rbp-F8h]
  __int64 v39; // [rsp+100h] [rbp-E8h]
  __int128 v40; // [rsp+108h] [rbp-E0h]
  _QWORD v41[2]; // [rsp+128h] [rbp-C0h] BYREF
  __int64 v42; // [rsp+138h] [rbp-B0h] BYREF
  __int128 v43; // [rsp+140h] [rbp-A8h]
  _QWORD v44[2]; // [rsp+150h] [rbp-98h] BYREF
  __int64 v45; // [rsp+160h] [rbp-88h] BYREF
  __int128 v46; // [rsp+168h] [rbp-80h]
  __int64 v47; // [rsp+178h] [rbp-70h]
  __int64 v48; // [rsp+180h] [rbp-68h]
  __int64 v49; // [rsp+188h] [rbp-60h]
  __int128 v50; // [rsp+190h] [rbp-58h]
  bool v51; // [rsp+1A4h] [rbp-44h]
  unsigned __int64 v52; // [rsp+1A8h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  v2 = *a2;
  if ( *a2 )
  {
    v3 = a2[1];
    if ( v3 )
    {
      if ( (*(_DWORD *)v3 == 4 || *(_DWORD *)v3 == 67 && *(_DWORD *)(v3 + 68) == *(_DWORD *)(v3 + 36))
        && *(_BYTE *)(v3 + 64) == 5 )
      {
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL);
        v6 = *((_BYTE *)a2 + 32);
        v35 = v3 + 64;
        *((_QWORD *)&v7 + 1) = v41;
        v34 = _mm_loadh_ps((const double *)(v3 + 8));
        v39 = 0;
        v41[0] = 0;
        v51 = !(v6 & 1);
        *(_QWORD *)&v7 = v2;
        v41[1] = 0;
        v42 = 0;
        v44[0] = 0;
        v44[1] = 0;
        v45 = 0;
        v47 = 0;
        v48 = 0;
        v49 = 0;
        v36 = 0;
        v37 = 0;
        v38 = 0;
        v40 = 0;
        v43 = 0;
        v46 = 0;
        v50 = 0;
        sub_1238E0(v7, v3 + 64, 0, 0xFFFF0000);
        sub_1A2E60((__int64)&v34);
        v8 = *(_QWORD *)(*(_QWORD *)(v3 + 72) + 8LL);
        while ( (unsigned int)sub_1A3BB0((__int64)&v34) == 1 )
          sub_1A3000(&v34, v8, 0);
        if ( (unsigned __int8)sub_64220(v41, v44) && (unsigned __int8)sub_318300(&v45, &v42) )
        {
          v27 = 0;
          v25[0] = 0;
          v25[1] = 0;
          v9 = *(_DWORD *)(v34.m128_u64[0] + 72);
          v26 = (int *)qvector_reserve();
          *v26 = v9;
          v10 = *(_QWORD *)(v5 + 784);
          *(_QWORD *)&v27 = v27 + 1;
          v24 = sub_110320(v10, 0);
          if ( !v24 )
          {
            if ( !under_debugger )
              sub_3835A0(50446);
LABEL_66:
            BUG();
          }
          ++*(_DWORD *)(v24 + 24);
LABEL_23:
          while ( (_QWORD)v27 )
          {
            v11 = v26[(_QWORD)v27 - 1];
            *(_QWORD *)&v27 = v27 - 1;
            v12 = (unsigned __int64 *)(*(_QWORD *)v24 + 24LL * v11);
            sub_63B90(v25, v11);
            v13 = *(_BYTE *)(v3 + 64);
            if ( v13 == 1 )
            {
              v14 = *(int *)(v3 + 72);
            }
            else if ( v13 == 5 )
            {
              v14 = *(_QWORD *)(*(_QWORD *)(v3 + 72) + 8LL);
            }
            else
            {
              v13 = 0;
              v14 = -1;
            }
            v31 = v13;
            v30 = v14;
            v28 = 0;
            v32 = 0xFFFFFFFF00000001LL;
            v33 = 1;
            v29 = 0;
            v15 = (int **)sub_104830(v12, (__int64)&v28);
            if ( v28 )
            {
              *(_QWORD *)&v29 = 0;
              qfree();
            }
            if ( v15 )
            {
              v16 = v15[1];
              v17 = *v15;
              v18 = *v15;
              if ( 4LL * (_QWORD)v16 )
              {
                while ( 1 )
                {
                  v19 = (unsigned int)*v18;
                  if ( (_DWORD)v19 != v11 )
                  {
                    if ( (unsigned int)v19 >= *(_DWORD *)(v5 + 64) )
                    {
                      if ( !under_debugger )
                        sub_3835A0(52719);
                      goto LABEL_66;
                    }
                    v34 = _mm_loadh_ps((const double *)(*(_QWORD *)(*(_QWORD *)(v5 + 528) + 8 * v19) + 48LL));
                    sub_1A2E60((__int64)&v34);
                    v20 = *(_QWORD *)(*(_QWORD *)(v3 + 72) + 8LL);
                    while ( (unsigned int)sub_1A3BB0((__int64)&v34) == 1 )
                      sub_1A3000(&v34, v20, 0);
                    if ( (unsigned __int8)sub_64220(v41, v44)
                      && (unsigned __int8)sub_318300(&v45, &v42)
                      && !sub_64330(v25, *v18) )
                    {
                      v21 = *v18;
                      v22 = &v26[v27];
                      if ( v26 == v22 )
                        goto LABEL_47;
                      v23 = v26;
                      while ( v21 != *v23 )
                      {
                        if ( v22 == ++v23 )
                          goto LABEL_47;
                      }
                      if ( v23 == v22 )
                      {
LABEL_47:
                        if ( *((_QWORD *)&v27 + 1) < (unsigned __int64)(v27 + 1) )
                        {
                          v26 = (int *)qvector_reserve();
                          v22 = &v26[v27];
                        }
                        *v22 = v21;
                        *(_QWORD *)&v27 = v27 + 1;
                      }
                    }
                    v17 = *v15;
                    v16 = v15[1];
                  }
                  if ( ++v18 == &v17[(_QWORD)v16] )
                    goto LABEL_23;
                }
              }
            }
          }
          sub_104850(v24);
          if ( v26 )
          {
            *(_QWORD *)&v27 = 0;
            qfree();
          }
          qfree();
          if ( v49 )
          {
            *(_QWORD *)&v50 = 0;
            qfree();
          }
          qfree();
          if ( v45 )
          {
            *(_QWORD *)&v46 = 0;
            qfree();
          }
          qfree();
          if ( v42 )
          {
            *(_QWORD *)&v43 = 0;
            qfree();
          }
          qfree();
          if ( v39 )
          {
            *(_QWORD *)&v40 = 0;
            qfree();
          }
        }
        else
        {
          if ( v49 )
          {
            *(_QWORD *)&v50 = 0;
            qfree();
          }
          qfree();
          if ( v45 )
          {
            *(_QWORD *)&v46 = 0;
            qfree();
          }
          qfree();
          if ( v42 )
          {
            *(_QWORD *)&v43 = 0;
            qfree();
          }
          qfree();
          if ( v39 )
          {
            *(_QWORD *)&v40 = 0;
            qfree();
          }
        }
      }
    }
  }
  return v52 - __readfsqword(0x28u);
}

