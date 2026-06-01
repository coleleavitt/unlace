unsigned __int64 __fastcall sub_2B8DA0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
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
  __int64 v24; // r14
  __int64 v25; // r15
  __int64 *v26; // r13
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // r8
  size_t v31; // rbp
  __int64 v32; // rsi
  const char *v33; // rax
  const char *v34; // rbp
  size_t v35; // rax
  __int64 v36; // r9
  size_t v37; // r10
  size_t v38; // r11
  __int64 v39; // rsi
  size_t v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 *v43; // [rsp+0h] [rbp-4A8h]
  __int64 *v44; // [rsp+0h] [rbp-4A8h]
  __int64 v45; // [rsp+8h] [rbp-4A0h]
  size_t v46; // [rsp+8h] [rbp-4A0h]
  __int64 v47; // [rsp+10h] [rbp-498h]
  size_t v48; // [rsp+18h] [rbp-490h]
  unsigned __int64 v49; // [rsp+18h] [rbp-490h]
  size_t v50; // [rsp+20h] [rbp-488h]
  __int64 *v51; // [rsp+28h] [rbp-480h]
  _QWORD v52[2]; // [rsp+30h] [rbp-478h] BYREF
  char v53; // [rsp+40h] [rbp-468h]
  __int64 v54; // [rsp+48h] [rbp-460h]
  __int64 v55; // [rsp+50h] [rbp-458h]
  _BYTE v56[1024]; // [rsp+60h] [rbp-448h] BYREF
  unsigned __int64 v57; // [rsp+468h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 40);
  v7 = *(_QWORD *)(a5 + 112);
  v57 = __readfsqword(0x28u);
  v53 = 103;
  v52[1] = v6;
  v52[0] = off_4C1808;
  v54 = v7;
  v55 = 0;
  v8 = (__int64 *)sub_2B1B70(a5, v52);
  if ( v8 )
  {
    v9 = *v8;
    v10 = v8;
    v11 = a2[1];
    v12 = *v8 + 80 * v8[1];
    if ( *v8 != v12 )
    {
      v43 = v8;
      v13 = 0;
      v45 = v11;
      do
      {
        memset(v56, 0, sizeof(v56));
        get_tinfo_size();
        print_argloc();
        v17 = a2[1];
        v18 = *a2;
        if ( a2[2] < (unsigned __int64)(v17 + 1) )
        {
          v19 = qvector_reserve();
          v17 = a2[1];
          *a2 = v19;
          v18 = v19;
        }
        v14 = v18 + 24 * v17;
        *(_QWORD *)v14 = 0;
        *(_OWORD *)(v14 + 8) = 0;
        ++a2[1];
        sub_67670((__int64 *)v14);
        v15 = *(_QWORD *)(v14 + 8);
        v16 = v15 - 1;
        if ( v13 >= v15 - 1 )
          v16 = v13;
        if ( v15 )
          v13 = v16;
        v9 += 80;
      }
      while ( v12 != v9 );
      v10 = v43;
      v12 = *v43;
      if ( *v43 + 80 * v43[1] != *v43 )
      {
        v51 = v43;
        v24 = *v43 + 80 * v43[1];
        v44 = a2;
        v25 = 24 * v45;
        do
        {
          v26 = (__int64 *)(v25 + *v44);
          if ( v13 )
          {
            v27 = v26[1];
            v28 = v13 + 1;
            v29 = v13 + 2;
            v30 = v27 - 1;
            if ( !v27 )
              v30 = 0;
            v31 = v13 + 1 - v30;
            if ( v27 < v29 )
            {
              v32 = *v26;
              if ( v26[2] < v29 )
              {
                v49 = v30;
                v42 = qvector_reserve();
                v30 = v49;
                v28 = v13 + 1;
                *v26 = v42;
                v29 = v13 + 2;
                v32 = v42;
              }
              v26[1] = v29;
              *(_BYTE *)(v32 + v28) = 0;
            }
            memset((void *)(v30 + *v26), 32, v31);
          }
          v33 = (const char *)dstr_tinfo();
          v34 = v33;
          if ( v33 )
          {
            v35 = strlen(v33);
            v36 = v26[1];
            v37 = v35;
            v38 = v35;
            if ( v36 )
            {
              --v36;
              v38 = v35 + v36;
            }
            v39 = *v26;
            v40 = v38 + 1;
            if ( v26[2] < v38 + 1 )
            {
              v50 = v35;
              v48 = v38;
              v47 = v36;
              v46 = v38 + 1;
              v41 = qvector_reserve();
              v37 = v50;
              v38 = v48;
              *v26 = v41;
              v36 = v47;
              v39 = v41;
              v40 = v46;
            }
            v26[1] = v40;
            *(_BYTE *)(v39 + v38) = 0;
            memmove((void *)(v36 + *v26), v34, v37);
          }
          v12 += 80;
          v25 += 24;
        }
        while ( v12 != v24 );
        v10 = v51;
        v12 = *v51;
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
          if ( v22[5] )
          {
            v22[6] = 0;
            qfree();
          }
          if ( v22[2] )
          {
            v22[3] = 0;
            qfree();
          }
          cleanup_argloc();
          v12 = *v10;
        }
      }
      v10[1] = 0;
      qfree();
    }
    qfree();
  }
  return v57 - __readfsqword(0x28u);
}

