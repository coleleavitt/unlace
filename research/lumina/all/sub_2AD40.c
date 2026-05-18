__int64 __fastcall sub_2AD40(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *v3; // r12
  __int64 v4; // rdi
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r14
  char *v9; // r15
  __int64 v10; // rcx
  const char *v11; // rbp
  const char *v12; // rdi
  const char *v13; // rdi
  char *v14; // r13
  char *v15; // r12
  const char *v16; // rbp
  const char *v17; // rsi
  const char *v18; // rdi
  size_t v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // r13
  size_t v23; // rbp
  unsigned __int64 v24; // r13
  __int64 v25; // rbp
  _BYTE *v26; // rsi
  __int64 v27; // rbp
  __int64 v28; // r13
  unsigned __int64 v29; // r15
  _BYTE *v30; // rsi
  __int64 v31; // rdx
  char *v32; // r15
  unsigned int v33; // r12d
  char *v34; // rdx
  __int64 v35; // rbp
  __int64 v36; // rbx
  char *v37; // rax
  void *v38; // rdi
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rsi
  unsigned __int64 v45; // rbp
  __int64 v46; // r13
  __int64 v47; // rbx
  unsigned __int64 v48; // rbx
  size_t v49; // r14
  __int64 v50; // rbp
  size_t v51; // r13
  _BYTE *v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rbx
  unsigned __int64 v55; // rax
  _BYTE *v56; // rsi
  size_t v57; // rbp
  __int64 v58; // r13
  unsigned __int64 v59; // rbx
  _BYTE *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  unsigned __int64 v63; // [rsp+8h] [rbp-A0h]
  const char **v64; // [rsp+10h] [rbp-98h]
  __int64 v65; // [rsp+18h] [rbp-90h]
  __int64 *v66; // [rsp+20h] [rbp-88h]
  __int64 v67; // [rsp+38h] [rbp-70h]
  void *ptr; // [rsp+50h] [rbp-58h] BYREF
  __int128 v71; // [rsp+58h] [rbp-50h]
  unsigned __int64 v72; // [rsp+68h] [rbp-40h]

  v3 = a2;
  v72 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 104) )
  {
    ptr = nullptr;
    v4 = *(_QWORD *)(a1 + 96);
    v71 = 0;
    sub_28C40(v4, a2, (__int64 *)&ptr);
    v5 = *(_QWORD *)(a1 + 96);
    v6 = *(_QWORD *)(a1 + 104);
    v63 = v71;
    if ( (_QWORD)v71 )
    {
      v67 = 0;
      v7 = 4 * v6;
      while ( 1 )
      {
        v65 = v5 + 40 * (v7 + v6);
        if ( v65 != v5 )
          break;
        v31 = v5;
LABEL_43:
        if ( ++v67 >= v63 )
          goto LABEL_44;
      }
      v8 = v5;
      while ( 1 )
      {
        if ( *(_BYTE *)(v8 + 192) )
          goto LABEL_41;
        v9 = (char *)ptr;
        v10 = *(_QWORD *)(v8 + 8);
        if ( !*((_QWORD *)ptr + 3 * v67 + 1) )
          break;
        v11 = *((const char **)ptr + 3 * v67);
        v12 = s1;
        if ( v10 )
          goto LABEL_9;
LABEL_10:
        if ( !strcmp(v12, v11) )
          goto LABEL_50;
        v13 = s1;
        if ( *(_QWORD *)(v8 + 104) )
          v13 = *(const char **)(v8 + 96);
        if ( !strcmp(v13, v11) )
        {
          v64 = (const char **)v8;
          goto LABEL_15;
        }
LABEL_41:
        v8 += 200;
        if ( v65 == v8 )
        {
          v5 = *(_QWORD *)(a1 + 96);
          v6 = *(_QWORD *)(a1 + 104);
          v7 = 4 * v6;
          v31 = v5 + 200 * v6;
          goto LABEL_43;
        }
      }
      v11 = s1;
      if ( !v10 )
      {
LABEL_50:
        v64 = (const char **)(v8 + 96);
LABEL_15:
        v14 = &v9[24 * v63];
        if ( v9 == v14 )
          goto LABEL_25;
        v66 = v3;
        v15 = v9;
        v16 = v64[1];
        while ( 2 )
        {
          if ( *((_QWORD *)v15 + 1) )
          {
            v17 = *(const char **)v15;
            v18 = s1;
            if ( v16 )
              goto LABEL_23;
          }
          else
          {
            if ( !v16 )
            {
LABEL_51:
              v32 = v15;
              v3 = v66;
              if ( v14 != v32 )
                goto LABEL_52;
LABEL_25:
              if ( v63 <= 1 )
                goto LABEL_35;
              v19 = v3[1];
              v20 = v3[2];
              v21 = *v3;
              if ( v19 )
              {
                v22 = v19 + 1;
                v23 = v19 - 1;
                if ( v20 >= v19 + 1 )
                {
LABEL_28:
                  v3[1] = v22;
                  *(_BYTE *)(v21 + v19) = 0;
                  if ( v23 )
                    memmove((void *)(*v3 + 1), (const void *)*v3, v23);
LABEL_30:
                  v24 = 2;
                  *(_BYTE *)*v3 = 40;
                  v25 = v3[1];
                  if ( v25 )
                    v24 = v25-- + 1;
                  v26 = (_BYTE *)*v3;
                  if ( v3[2] < v24 )
                  {
                    v42 = sub_1987B0(v3, v26, v24, 1);
                    *v3 = v42;
                    v26 = (_BYTE *)v42;
                  }
                  v3[1] = v24;
                  v26[v25] = 41;
                  *(_BYTE *)(*v3 + v25 + 1) = 0;
LABEL_35:
                  v27 = v3[1];
                  if ( v27 )
                  {
                    v28 = v27 + 11;
                    v29 = v27 + 12;
                    v30 = (_BYTE *)*v3;
                    --v27;
                    if ( v3[2] >= v29 )
                    {
LABEL_37:
                      v3[1] = v29;
                      v30[v28] = 0;
                      qmemcpy((void *)(*v3 + v27), " INNER JOIN ", 12);
                      sub_28C40((__int64)v64, v3, (__int64 *)&ptr);
                      sub_2AAE0(v3);
                      if ( *(_QWORD *)(v8 + 80) > 1u && *(_QWORD *)(v8 + 176) > 1u )
                        sub_2AAE0(v3);
                      *(_BYTE *)(v8 + 192) = 1;
                      v63 = v71;
                      goto LABEL_41;
                    }
                  }
                  else
                  {
                    v30 = (_BYTE *)*v3;
                    v29 = 13;
                    v28 = 12;
                    if ( (unsigned __int64)v3[2] >= 0xD )
                      goto LABEL_37;
                  }
                  v40 = sub_1987B0(v3, v30, v29, 1);
                  *v3 = v40;
                  v30 = (_BYTE *)v40;
                  goto LABEL_37;
                }
              }
              else
              {
                if ( v20 > 1 )
                {
                  v3[1] = 2;
                  *(_BYTE *)(v21 + 1) = 0;
                  goto LABEL_30;
                }
                v23 = 0;
                v22 = 2;
              }
              v41 = sub_1987B0(v3, v21, v22, 1);
              *v3 = v41;
              v21 = v41;
              v19 = v23 + 1;
              goto LABEL_28;
            }
            v17 = s1;
LABEL_23:
            v18 = *v64;
          }
          if ( !strcmp(v18, v17) )
            goto LABEL_51;
          v15 += 24;
          if ( v14 == v15 )
          {
            v3 = v66;
            goto LABEL_25;
          }
          continue;
        }
      }
LABEL_9:
      v12 = *(const char **)v8;
      goto LABEL_10;
    }
    v31 = v5 + 200 * v6;
LABEL_44:
    if ( v5 != v31 )
    {
      while ( *(_BYTE *)(v5 + 192) )
      {
        v5 += 200;
        if ( v31 == v5 )
          goto LABEL_80;
      }
LABEL_52:
      sub_299F0((char **)a3);
      v33 = 0;
      *(_DWORD *)(a3 + 24) = -3;
      goto LABEL_53;
    }
LABEL_80:
    v54 = v3[1];
    v55 = v3[2];
    v56 = (_BYTE *)*v3;
    if ( v54 )
    {
      v57 = v54 - 1;
      v58 = v54 + 4;
      v59 = v54 + 5;
      if ( v55 >= v59 )
        goto LABEL_82;
    }
    else
    {
      if ( v55 > 5 )
      {
        v3[1] = 6;
        v56[5] = 0;
LABEL_84:
        v60 = (_BYTE *)*v3;
        v33 = 1;
        *(_DWORD *)v60 = 1297044038;
        v60[4] = 32;
LABEL_53:
        v34 = (char *)ptr;
        if ( ptr )
        {
          v35 = v71;
          if ( (_QWORD)v71 )
          {
            v36 = 0;
            do
            {
              v37 = &v34[24 * v36];
              v38 = *(void **)v37;
              if ( *(_QWORD *)v37 )
              {
                *((_QWORD *)v37 + 1) = 0;
                j__free(v38);
                v34 = (char *)ptr;
              }
              ++v36;
            }
            while ( v35 != v36 );
          }
          *(_QWORD *)&v71 = 0;
          j__free(v34);
        }
        return v33;
      }
      v57 = 0;
      v59 = 6;
      v58 = 5;
    }
    v62 = sub_1987B0(v3, v56, v59, 1);
    *v3 = v62;
    v56 = (_BYTE *)v62;
LABEL_82:
    v3[1] = v59;
    v56[v58] = 0;
    if ( v57 )
      memmove((void *)(*v3 + 5), (const void *)*v3, v57);
    goto LABEL_84;
  }
  v43 = a2[1];
  if ( v43 )
  {
    v46 = v43 + 4;
    v45 = v43 + 5;
    v44 = *a2;
    --v43;
    if ( v3[2] >= v45 )
      goto LABEL_69;
  }
  else
  {
    v44 = *a2;
    v45 = 6;
    v46 = 5;
    if ( (unsigned __int64)v3[2] >= 6 )
      goto LABEL_69;
  }
  v53 = sub_1987B0(v3, v44, v45, 1);
  *v3 = v53;
  v44 = v53;
LABEL_69:
  v3[1] = v45;
  *(_BYTE *)(v44 + v46) = 0;
  v47 = *v3 + v43;
  *(_DWORD *)v47 = 1297044038;
  *(_BYTE *)(v47 + 4) = 32;
  v48 = *(_QWORD *)(a1 + 80);
  if ( v48 )
  {
    v49 = v48 - 1;
    if ( v48 != 1 )
    {
      v50 = v3[1];
      v51 = v48 - 1;
      if ( v50 )
      {
        --v50;
        v51 = v49 + v50;
        v48 += v50;
      }
      v52 = (_BYTE *)*v3;
      if ( v3[2] < v48 )
      {
        v61 = sub_1987B0(v3, v52, v48, 1);
        *v3 = v61;
        v52 = (_BYTE *)v61;
      }
      v3[1] = v48;
      v52[v51] = 0;
      memcpy((void *)(v50 + *v3), *(const void **)(a1 + 72), v49);
    }
  }
  return 1;
}
