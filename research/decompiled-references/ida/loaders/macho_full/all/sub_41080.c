unsigned __int64 __fastcall sub_41080(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  int v5; // eax
  unsigned __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 *v11; // r15
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r10
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r12
  __int64 v20; // rcx
  char *v21; // rax
  unsigned __int64 *v22; // rbx
  unsigned __int64 *i; // r12
  _QWORD *v24; // rax
  unsigned __int64 v25; // rdx
  __int64 *v26; // rdi
  __int64 *v27; // rdi
  __int64 *v28; // r12
  __int64 *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rbp
  __int64 v35; // rbx
  __int64 *v36; // rax
  void *v37; // rax
  __int64 v38; // r8
  char v39; // [rsp+0h] [rbp-98h]
  __int64 v40; // [rsp+8h] [rbp-90h]
  __int64 v41; // [rsp+10h] [rbp-88h]
  __int64 v42; // [rsp+10h] [rbp-88h]
  __int64 v43; // [rsp+10h] [rbp-88h]
  __int64 v44; // [rsp+18h] [rbp-80h]
  __int64 v45; // [rsp+18h] [rbp-80h]
  __int64 v46; // [rsp+18h] [rbp-80h]
  __int64 n; // [rsp+20h] [rbp-78h]
  __int64 v48; // [rsp+28h] [rbp-70h]
  __int64 v49; // [rsp+38h] [rbp-60h] BYREF
  __int64 *v50; // [rsp+40h] [rbp-58h]
  __int128 v51; // [rsp+48h] [rbp-50h]
  unsigned __int64 v52; // [rsp+58h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a3 + 8);
  if ( v3 )
  {
    v5 = *(_DWORD *)(a2 + 680);
    v50 = nullptr;
    v51 = 0;
    v8 = v5 + 1;
    if ( v5 != -1 )
    {
      v9 = qvector_reserve();
      v10 = *((_QWORD *)&v51 + 1);
      *((_QWORD *)&v51 + 1) = 0;
      v11 = v50;
      v40 = v10;
      v12 = v51 - 1;
      if ( (__int64)v51 - 1 >= 0 )
      {
        v13 = v9;
        do
        {
          v14 = *v11;
          *(_QWORD *)(v13 + 8) = 0;
          *(_OWORD *)(v13 + 16) = 0;
          *(_QWORD *)v13 = v14;
          v15 = v11[2];
          if ( v15 )
          {
            v48 = v12;
            v45 = v13;
            v42 = v11[2];
            n = 16 * v15;
            v37 = (void *)qalloc_or_throw();
            v38 = v45;
            *(_QWORD *)(v45 + 24) = v42;
            *(_QWORD *)(v45 + 8) = v37;
            v46 = v42;
            v43 = v38;
            memcpy(v37, (const void *)v11[1], n);
            v13 = v43;
            v12 = v48;
            *(_QWORD *)(v43 + 16) = v46;
          }
          *(_QWORD *)(v13 + 32) = 0;
          *(_DWORD *)(v13 + 40) = -1;
          if ( v11[1] )
          {
            v11[2] = 0;
            v44 = v12;
            v41 = v13;
            qfree();
            v12 = v44;
            v13 = v41;
          }
          v11 += 6;
          v13 += 48;
        }
        while ( v12-- != 0 );
      }
      qfree();
      v50 = (__int64 *)v9;
      *((_QWORD *)&v51 + 1) = v40;
      if ( (unsigned __int64)v51 < v8 )
      {
        v17 = v51 + 1;
        v18 = 48 * v51;
        v19 = 48 * v51 + v9;
        *(_QWORD *)(v19 + 32) = 0;
        *(_QWORD *)(v19 + 40) = 0xFFFFFFFFLL;
        *(_OWORD *)v19 = 0;
        *(_OWORD *)(v19 + 16) = 0;
        if ( v17 < v8 )
        {
          v20 = v18 + 48;
          do
          {
            ++v17;
            v21 = (char *)v50 + v20;
            v20 += 48;
            *((_QWORD *)v21 + 4) = 0;
            *((_QWORD *)v21 + 5) = 0xFFFFFFFFLL;
            *(_OWORD *)v21 = 0;
            *((_OWORD *)v21 + 1) = 0;
          }
          while ( v8 != v17 );
        }
      }
      *(_QWORD *)&v51 = v8;
      v3 = *(_QWORD *)(a3 + 8);
    }
    v22 = *(unsigned __int64 **)a3;
    for ( i = &v22[2 * v3]; i != v22; v22 += 2 )
    {
      v24 = sub_1C420((_QWORD *)a2, *v22);
      if ( v24 )
      {
        v25 = *((int *)v24 + 214);
        if ( v25 < (unsigned __int64)v51 )
        {
          v26 = &v50[6 * v25];
          if ( !*v26 )
            *v26 = (__int64)v24;
          rangeset_t_add();
        }
      }
    }
    v49 = 0;
    sub_40E20((unsigned __int64 *)&v49, a2);
    v27 = v50;
    v28 = &v50[6 * v51];
    if ( v28 != v50 )
    {
      v29 = v50;
      do
      {
        if ( *v29 && v29[2] )
        {
          if ( (unsigned __int8)callui(27, a2, &callui) )
            sub_1A260(0, a2, v30, v31, v32, v33, v39);
          a2 = *v29;
          sub_23EC0(a1, *v29, v49, (__int64)(v29 + 1), 1);
        }
        v29 += 6;
      }
      while ( v28 != v29 );
      v27 = v50;
    }
    if ( v27 )
    {
      v34 = v51;
      if ( (_QWORD)v51 )
      {
        v35 = 0;
        do
        {
          v36 = &v27[6 * v35];
          if ( v36[1] )
          {
            v36[2] = 0;
            qfree();
            v27 = v50;
          }
          ++v35;
        }
        while ( v34 != v35 );
      }
      *(_QWORD *)&v51 = 0;
      qfree();
    }
  }
  return v52 - __readfsqword(0x28u);
}

