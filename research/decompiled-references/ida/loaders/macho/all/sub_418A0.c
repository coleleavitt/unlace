unsigned __int64 __fastcall sub_418A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 *a5,
        _QWORD *a6,
        __int64 a7,
        const char *a8)
{
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rbx
  const char **v12; // r12
  const char *v13; // rbp
  __int64 *v14; // r15
  const char *v15; // rsi
  __int64 *v16; // r14
  const char *v17; // rdi
  int v18; // eax
  _QWORD *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  const char *v22; // rsi
  const char *v23; // rdi
  __int64 *v24; // r14
  __int64 v26; // [rsp+0h] [rbp-1E8h]
  _QWORD *v29; // [rsp+18h] [rbp-1D0h]
  __int64 v31; // [rsp+28h] [rbp-1C0h]
  __int64 v32; // [rsp+38h] [rbp-1B0h]
  unsigned __int64 v34; // [rsp+50h] [rbp-198h]
  unsigned __int64 v35; // [rsp+58h] [rbp-190h]
  __int64 v36[4]; // [rsp+90h] [rbp-158h] BYREF
  __int64 v37; // [rsp+B0h] [rbp-138h] BYREF
  __int64 v38; // [rsp+B8h] [rbp-130h] BYREF
  _QWORD *v39; // [rsp+C0h] [rbp-128h]
  __int64 *v40; // [rsp+C8h] [rbp-120h]
  __int64 *v41; // [rsp+D0h] [rbp-118h]
  __int64 v42; // [rsp+D8h] [rbp-110h]
  unsigned __int64 v43; // [rsp+E0h] [rbp-108h]
  unsigned __int64 v44; // [rsp+E8h] [rbp-100h]
  __int128 v45; // [rsp+F0h] [rbp-F8h]
  __int64 v46; // [rsp+100h] [rbp-E8h]
  __int64 v47; // [rsp+108h] [rbp-E0h]
  __int64 selector; // [rsp+110h] [rbp-D8h]
  __int128 v49; // [rsp+118h] [rbp-D0h]
  __int128 v50; // [rsp+128h] [rbp-C0h]
  __int128 v51; // [rsp+138h] [rbp-B0h]
  __int128 v52; // [rsp+148h] [rbp-A0h]
  __int128 v53; // [rsp+158h] [rbp-90h]
  __int128 v54; // [rsp+168h] [rbp-80h]
  __int128 v55; // [rsp+178h] [rbp-70h]
  __int128 v56; // [rsp+188h] [rbp-60h]
  unsigned __int64 v57; // [rsp+198h] [rbp-50h]
  unsigned __int64 v58; // [rsp+1A8h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  if ( a3 )
  {
    if ( (*(_BYTE *)(a2 + 364) & 0x50) == 0 )
    {
      v9 = *(_QWORD *)(a2 + 240);
      if ( (*(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL) == v9 || v9 == -1) && (*(_BYTE *)(a1 + 13689) & 8) == 0 )
      {
        v45 = 0;
        v49 = -1;
        v50 = -1;
        v51 = -1;
        v52 = -1;
        v53 = -1;
        v54 = -1;
        v55 = -1;
        v56 = -1;
        v46 = 0;
        v47 = 515;
        selector = 0;
        v57 = 0xFFFFFFFF00000001LL;
        v43 = (getinf() + 15) & 0xFFFFFFFFFFFFFFF0LL;
        v44 = v43 + a3 * a4;
        BYTE3(v47) = *(_BYTE *)(a1 + 13692) + 1;
        selector = allocate_selector();
        sub_1CE50(&v37, a2);
        sub_18750(v36, a8, (__int64)&v37);
        if ( v37 )
        {
          v38 = 0;
          qfree();
        }
        add_segm_ex();
        v35 = v43;
        if ( !a5[1] )
          goto LABEL_44;
        v31 = 0;
        v34 = 0;
        while ( 1 )
        {
          netnode_check();
          v10 = *a5;
          v32 = *(_QWORD *)(*a5 + v31 + 8);
          if ( !v32 )
            goto LABEL_43;
          if ( (*(_BYTE *)(a2 + 365) & 4) != 0 )
            break;
          if ( v34 && (v34 == 254 || v34 == 255 || *(_QWORD *)(a2 + 312) >= v34) )
            goto LABEL_17;
LABEL_18:
          v11 = nullptr;
          LODWORD(v38) = 0;
          v39 = nullptr;
          v40 = &v38;
          v41 = &v38;
          v42 = 0;
          v26 = 0;
          while ( 2 )
          {
            v12 = (const char **)(*a6 + 24LL * *(unsigned int *)(*(_QWORD *)(v10 + v31) + 4 * v26));
            if ( !v11 )
              goto LABEL_37;
            v13 = v12[1];
            v14 = &v38;
            v29 = v11;
            while ( 1 )
            {
              v20 = v11[5];
              if ( !v13 )
                break;
              v15 = *v12;
              v16 = v11;
              v17 = s1;
              if ( v20 )
                goto LABEL_22;
LABEL_23:
              v18 = strcmp(v17, v15);
              v19 = (_QWORD *)v11[2];
              v11 = (_QWORD *)v11[3];
              if ( v18 >= 0 )
              {
                v14 = v16;
                v11 = v19;
              }
              if ( !v11 )
              {
                v11 = v29;
                goto LABEL_32;
              }
            }
            if ( v20 )
            {
LABEL_30:
              v15 = s1;
LABEL_22:
              v17 = (const char *)v11[4];
              v16 = v11;
              goto LABEL_23;
            }
            while ( 1 )
            {
              v21 = v11[2];
              if ( !v21 )
                break;
              v14 = v11;
              v11 = (_QWORD *)v11[2];
              if ( *(_QWORD *)(v21 + 40) )
                goto LABEL_30;
            }
            v24 = v11;
            v11 = v29;
            v14 = v24;
LABEL_32:
            if ( v14 == &v38 )
              goto LABEL_37;
            if ( v14[5] )
            {
              v22 = (const char *)v14[4];
              v23 = s1;
              if ( v13 )
                goto LABEL_35;
LABEL_36:
              if ( strcmp(v23, v22) < 0 )
              {
LABEL_37:
                sub_41600(&v37, (__int64)v12);
                set_import_name();
                set_name();
                netnode_supset();
                v35 += a4;
                v11 = v39;
              }
              if ( v32 != ++v26 )
                goto LABEL_39;
            }
            else
            {
              v22 = s1;
              if ( v13 )
              {
LABEL_35:
                v23 = *v12;
                goto LABEL_36;
              }
              if ( v32 != ++v26 )
              {
LABEL_39:
                v10 = *a5;
                continue;
              }
            }
            break;
          }
          sub_14BE0(v11);
LABEL_43:
          import_module();
          ++v34;
          v31 += 24;
          if ( v34 >= a5[1] )
          {
LABEL_44:
            set_segm_end();
            if ( v36[0] )
            {
              v36[1] = 0;
              qfree();
            }
            return v58 - __readfsqword(0x28u);
          }
        }
        if ( v34 >= *(_QWORD *)(a2 + 312) )
        {
          if ( !under_debugger )
            interr();
          BUG();
        }
LABEL_17:
        sub_19130();
        v10 = *a5;
        goto LABEL_18;
      }
    }
  }
  return v58 - __readfsqword(0x28u);
}

