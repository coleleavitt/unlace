unsigned __int64 __fastcall sub_2BD620(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 v9; // r15
  __int64 *v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rbx
  unsigned __int64 v13; // r12
  __int64 v14; // r14
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 i; // rbp
  _QWORD *v22; // rbx
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v26; // r14
  __int64 v27; // r15
  __int64 *v28; // r13
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r10
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // r8
  size_t v33; // rbp
  __int64 v34; // rsi
  const char *v35; // rax
  const char *v36; // rbp
  size_t v37; // rax
  __int64 v38; // r9
  size_t v39; // r10
  size_t v40; // r11
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 *v45; // [rsp+0h] [rbp-4A8h]
  __int64 *v46; // [rsp+0h] [rbp-4A8h]
  __int64 v47; // [rsp+8h] [rbp-4A0h]
  __int64 v48; // [rsp+8h] [rbp-4A0h]
  __int64 v49; // [rsp+10h] [rbp-498h]
  size_t v50; // [rsp+18h] [rbp-490h]
  unsigned __int64 v51; // [rsp+18h] [rbp-490h]
  size_t v52; // [rsp+20h] [rbp-488h]
  __int64 *v53; // [rsp+28h] [rbp-480h]
  _QWORD v54[2]; // [rsp+30h] [rbp-478h] BYREF
  char v55; // [rsp+40h] [rbp-468h]
  __int64 v56; // [rsp+48h] [rbp-460h]
  __int64 v57; // [rsp+50h] [rbp-458h]
  _BYTE v58[1024]; // [rsp+60h] [rbp-448h] BYREF
  unsigned __int64 v59; // [rsp+468h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 40);
  v7 = *(_QWORD *)(a5 + 112);
  v59 = __readfsqword(0x28u);
  v55 = 103;
  v54[1] = v6;
  v54[0] = off_4E10C8;
  v56 = v7;
  v57 = 0;
  v8 = (__int64 *)sub_2B63F0(a5, v54);
  if ( v8 )
  {
    v9 = *v8;
    v10 = v8;
    v11 = a2[1];
    v12 = *v8 + 80 * v8[1];
    if ( *v8 != v12 )
    {
      v45 = v8;
      v13 = 0;
      v47 = v11;
      do
      {
        memset(v58, 0, sizeof(v58));
        get_tinfo_size();
        print_argloc();
        v17 = a2[1];
        v18 = *a2;
        if ( a2[2] < (unsigned __int64)(v17 + 1) )
        {
          v19 = qvector_reserve((__int64)a2, v18, v17 + 1, 24);
          v17 = a2[1];
          *a2 = v19;
          v18 = v19;
        }
        v14 = v18 + 24 * v17;
        *(_QWORD *)v14 = 0;
        *(_OWORD *)(v14 + 8) = 0;
        ++a2[1];
        sub_6B870((__int64 *)v14);
        v15 = *(_QWORD *)(v14 + 8);
        v16 = v15 - 1;
        if ( v13 >= v15 - 1 )
          v16 = v13;
        if ( v15 )
          v13 = v16;
        v9 += 80;
      }
      while ( v12 != v9 );
      v10 = v45;
      v12 = *v45;
      if ( *v45 + 80 * v45[1] != *v45 )
      {
        v53 = v45;
        v26 = *v45 + 80 * v45[1];
        v46 = a2;
        v27 = 24 * v47;
        do
        {
          v28 = (__int64 *)(v27 + *v46);
          if ( v13 )
          {
            v29 = v28[1];
            v30 = v13 + 1;
            v31 = v13 + 2;
            v32 = v29 - 1;
            if ( !v29 )
              v32 = 0;
            v33 = v13 + 1 - v32;
            if ( v29 < v31 )
            {
              v34 = *v28;
              if ( v28[2] < v31 )
              {
                v51 = v32;
                v44 = qvector_reserve(v27 + *v46, v34, v31, 1);
                v32 = v51;
                v30 = v13 + 1;
                *v28 = v44;
                v31 = v13 + 2;
                v34 = v44;
              }
              v28[1] = v31;
              *(_BYTE *)(v34 + v30) = 0;
            }
            memset((void *)(v32 + *v28), 32, v33);
          }
          v35 = (const char *)dstr_tinfo();
          v36 = v35;
          if ( v35 )
          {
            v37 = strlen(v35);
            v38 = v28[1];
            v39 = v37;
            v40 = v37;
            if ( v38 )
            {
              --v38;
              v40 = v37 + v38;
            }
            v41 = *v28;
            v42 = v40 + 1;
            if ( v28[2] < v40 + 1 )
            {
              v52 = v37;
              v50 = v40;
              v49 = v38;
              v48 = v40 + 1;
              v43 = qvector_reserve((__int64)v28, v41, v42, 1);
              v39 = v52;
              v40 = v50;
              *v28 = v43;
              v38 = v49;
              v41 = v43;
              v42 = v48;
            }
            v28[1] = v42;
            *(_BYTE *)(v41 + v40) = 0;
            memmove((void *)(v38 + *v28), v36, v39);
          }
          v12 += 80;
          v27 += 24;
        }
        while ( v12 != v26 );
        v10 = v53;
        v12 = *v53;
      }
    }
    if ( v12 )
    {
      v20 = v10[1];
      if ( v20 )
      {
        for ( i = 0; i != v20; ++i )
        {
          v22 = (_QWORD *)(80 * i + v12);
          clear_tinfo_t();
          v23 = v22[5];
          if ( v23 )
          {
            v22[6] = 0;
            qfree(v23);
          }
          v24 = v22[2];
          if ( v24 )
          {
            v22[3] = 0;
            qfree(v24);
          }
          cleanup_argloc();
          v12 = *v10;
        }
      }
      v10[1] = 0;
      qfree(v12);
    }
    qfree((__int64)v10);
  }
  return v59 - __readfsqword(0x28u);
}

