void __fastcall sub_E4DB0(__int64 a1, _DWORD *a2, const __m128i *a3, _DWORD *a4, __int16 a5)
{
  _QWORD *v5; // rbp
  _QWORD *v6; // rbx
  __int16 *v7; // r13
  __int64 v8; // r12
  int v10; // eax
  int v11; // r11d
  size_t v12; // rsi
  int v13; // ebp
  const char **v14; // r12
  int v15; // r15d
  size_t v16; // rbx
  size_t v17; // rax
  __int64 *v18; // rsi
  unsigned __int8 v19; // al
  char *v20; // r14
  const char **v21; // r15
  int v22; // ebp
  int v23; // r11d
  const char *v24; // rdx
  _BYTE **v25; // r10
  int v26; // r9d
  _BYTE *v27; // rdi
  const char *i; // rsi
  __int64 v29; // rax
  __int64 v30; // rcx
  const char **v31; // rax
  __int32 v32; // eax
  __int64 *v33; // r15
  const char **v34; // r14
  int v35; // ebx
  __int64 v36; // rcx
  char **v37; // r13
  const char **v38; // rax
  char *v39; // r14
  const char **v40; // r15
  size_t v41; // rdx
  char *v42; // rbp
  const char *v43; // rsi
  const char **v44; // rcx
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rax
  __int64 v48; // [rsp+8h] [rbp-70h]
  __int64 *v49; // [rsp+10h] [rbp-68h]
  int v50; // [rsp+18h] [rbp-60h]
  _QWORD *v52; // [rsp+20h] [rbp-58h]
  _QWORD *v53; // [rsp+20h] [rbp-58h]
  __int64 v54; // [rsp+20h] [rbp-58h]
  __int64 *desta; // [rsp+28h] [rbp-50h]
  __int16 *destb; // [rsp+28h] [rbp-50h]
  __int32 v58; // [rsp+30h] [rbp-48h]
  _QWORD *v59; // [rsp+30h] [rbp-48h]
  _QWORD *v60; // [rsp+38h] [rbp-40h]

  v5 = a2;
  v6 = a4;
  v7 = *(__int16 **)(a1 + 336);
  v48 = *(_QWORD *)a1;
  if ( !v7 )
    goto LABEL_50;
  v8 = a1;
  if ( *(_BYTE *)(a1 + 292) == 1 )
    goto LABEL_50;
  if ( a2 )
  {
    v10 = *a2;
    v11 = *a2;
    if ( !a4 )
    {
      v50 = *a2;
      v12 = 16 * (v10 - 1 + 5LL) + a3->m128i_u32[2] + 1;
      goto LABEL_12;
    }
    v50 = *a4;
    if ( *a4 != v10 )
    {
      sub_DBD10(a1, "number of columns in foreign key does not match the number of columns in the referenced table");
      goto LABEL_51;
    }
    v12 = 16 * (v50 - 1 + 5LL) + a3->m128i_u32[2] + 1;
    if ( v50 <= 0 )
    {
LABEL_12:
      v49 = sub_DC1C0(v48, v12);
      if ( !v49 )
        goto LABEL_50;
      goto LABEL_13;
    }
LABEL_7:
    v52 = v5;
    v13 = 0;
    v14 = (const char **)(a4 + 4);
    v15 = v11;
    v16 = v12;
    do
    {
      v17 = 1;
      if ( *v14 )
        v17 = (strlen(*v14) & 0x3FFFFFFF) + 1;
      ++v13;
      v16 += v17;
      v14 += 3;
    }
    while ( v13 < v15 );
    v12 = v16;
    v8 = a1;
    v5 = v52;
    v6 = a4;
    goto LABEL_12;
  }
  v46 = v7[27] - 1;
  if ( v46 < 0 )
    goto LABEL_52;
  if ( !a4 )
  {
    v49 = sub_DC1C0(v48, a3->m128i_u32[2] + 81LL);
    if ( !v49 )
      return;
    v50 = 1;
LABEL_13:
    *v49 = (__int64)v7;
    v49[1] = *((_QWORD *)v7 + 9);
    v18 = &v49[2 * v50 + 8];
    desta = v18;
    v49[2] = (__int64)v18;
    v19 = *(_BYTE *)(v8 + 292);
    if ( v19 > 1u && v19 != 3 )
      sub_DC5F0((__int64 *)v8, (__int64)v18, a3);
    memcpy(v18, (const void *)a3->m128i_i64[0], a3->m128i_u32[2]);
    *((_BYTE *)v18 + a3->m128i_u32[2]) = 0;
    sub_C23E0((char *)v18);
    v58 = a3->m128i_i32[2];
    *((_DWORD *)v49 + 10) = v50;
    if ( v5 )
    {
      if ( v50 > 0 )
      {
        v20 = (char *)(v49 + 8);
        v21 = (const char **)(v5 + 2);
        v53 = v5;
        v22 = 0;
        while ( 1 )
        {
          v23 = v7[27];
          v24 = *v21;
          if ( v23 <= 0 )
          {
LABEL_57:
            v5 = v53;
LABEL_58:
            sub_DBD10(v8, "unknown column \"%s\" in foreign key definition", v24);
LABEL_59:
            sub_C9250(v48, v49);
            if ( !v5 )
            {
LABEL_52:
              if ( v6 )
                goto LABEL_53;
              return;
            }
LABEL_51:
            sub_D7810(v48, v5);
            goto LABEL_52;
          }
          v25 = *((_BYTE ***)v7 + 1);
          v26 = 0;
LABEL_21:
          v27 = *v25;
          for ( i = *v21; ; ++i )
          {
            v29 = (unsigned __int8)*v27;
            v30 = *(unsigned __int8 *)i;
            if ( (_DWORD)v29 == (_DWORD)v30 )
              break;
            if ( byte_1BF000[v29] != byte_1BF000[v30] )
            {
              ++v26;
              v25 += 2;
              if ( v23 != v26 )
                goto LABEL_21;
              goto LABEL_57;
            }
LABEL_23:
            ++v27;
          }
          if ( *v27 )
            goto LABEL_23;
          *(_DWORD *)v20 = v26;
          if ( v7[27] <= v26 )
          {
            v47 = v22;
            v5 = v53;
            v24 = (const char *)v53[3 * v47 + 2];
            goto LABEL_58;
          }
          if ( *(_BYTE *)(v8 + 292) > 1u )
          {
            v31 = *(const char ***)(v8 + 400);
            if ( v31 )
            {
              while ( *v21 != *v31 )
              {
                v31 = (const char **)v31[3];
                if ( !v31 )
                  goto LABEL_33;
              }
              *v31 = v20;
            }
          }
LABEL_33:
          ++v22;
          v21 += 3;
          v20 += 16;
          if ( v22 == v50 )
          {
            v5 = v53;
            if ( !v6 )
              break;
            goto LABEL_35;
          }
        }
      }
    }
    else
    {
      *((_DWORD *)v49 + 16) = v7[27] - 1;
      if ( v6 && v50 > 0 )
      {
LABEL_35:
        v32 = v58;
        v33 = desta;
        v34 = (const char **)(v6 + 2);
        destb = v7;
        v60 = v6;
        v59 = v5;
        v35 = 0;
        v36 = (unsigned int)(v32 + 1);
        v37 = (char **)(v49 + 9);
        v38 = v34;
        v39 = (char *)v33 + v36;
        v40 = v38;
        do
        {
          if ( *v40 )
          {
            v41 = strlen(*v40) & 0x3FFFFFFF;
            v42 = &v39[v41];
            v54 = v41 + 1;
          }
          else
          {
            v42 = v39;
            v54 = 1;
            v41 = 0;
          }
          *v37 = v39;
          v43 = *v40;
          if ( *(_BYTE *)(v8 + 292) > 1u )
          {
            v44 = *(const char ***)(v8 + 400);
            if ( v44 )
            {
              while ( v43 != *v44 )
              {
                v44 = (const char **)v44[3];
                if ( !v44 )
                  goto LABEL_44;
              }
              *v44 = v39;
              v43 = *v40;
            }
          }
LABEL_44:
          ++v35;
          v40 += 3;
          memcpy(v39, v43, v41);
          v37 += 2;
          v39 += v54;
          *v42 = 0;
        }
        while ( v35 < v50 );
        v7 = destb;
        v5 = v59;
        v6 = v60;
      }
    }
    *((_BYTE *)v49 + 44) = 0;
    *(_WORD *)((char *)v49 + 45) = a5;
    v45 = sub_D1F90(*((_QWORD *)v7 + 12) + 80LL, (unsigned __int8 *)v49[2], (__int64)v49);
    if ( (__int64 *)v45 == v49 )
    {
      if ( !*(_BYTE *)(v48 + 103) && !*(_BYTE *)(v48 + 104) )
        sub_DBE60(v48);
      goto LABEL_59;
    }
    if ( v45 )
    {
      v49[3] = v45;
      *(_QWORD *)(v45 + 32) = v49;
    }
    *((_QWORD *)v7 + 9) = v49;
LABEL_50:
    if ( !v5 )
      goto LABEL_52;
    goto LABEL_51;
  }
  v50 = *a4;
  if ( *a4 == 1 )
  {
    v11 = 1;
    v12 = a3->m128i_u32[2] + 81LL;
    goto LABEL_7;
  }
  sub_DBD10(
    a1,
    "foreign key on %s should reference only one column of table %T",
    *(_QWORD *)(*((_QWORD *)v7 + 1) + 16LL * v46),
    a3);
LABEL_53:
  sub_D7810(v48, v6);
}
