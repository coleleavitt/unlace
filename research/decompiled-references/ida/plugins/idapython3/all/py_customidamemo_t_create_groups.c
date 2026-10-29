__int64 __fastcall py_customidamemo_t_create_groups(__int64 a1, const char *a2)
{
  int v2; // edx
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 **v10; // rdx
  __int64 v11; // r14
  __int64 *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 *v18; // rbp
  __int64 v19; // rax
  __int64 *v20; // r12
  __int64 v21; // rax
  __int64 *v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  int *v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 *v33; // rbx
  __int64 v34; // rax
  __int64 *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r13
  __int64 v43; // r12
  __int64 *v44; // rbx
  __int64 v45; // rax
  __int64 *v46; // rdi
  size_t v47; // r13
  void *v48; // r8
  _BYTE *v49; // rsi
  size_t v50; // rdx
  int *v51; // rbx
  __int64 *v52; // [rsp+0h] [rbp-D8h]
  __int64 v53; // [rsp+8h] [rbp-D0h]
  size_t v54; // [rsp+8h] [rbp-D0h]
  __int64 v55; // [rsp+10h] [rbp-C8h]
  __int64 v57; // [rsp+28h] [rbp-B0h]
  void *v58; // [rsp+28h] [rbp-B0h]
  void *src; // [rsp+30h] [rbp-A8h] BYREF
  size_t n; // [rsp+38h] [rbp-A0h] BYREF
  __int64 *v61; // [rsp+40h] [rbp-98h] BYREF
  __int128 v62; // [rsp+48h] [rbp-90h]
  __int64 *v63; // [rsp+60h] [rbp-78h] BYREF
  __int128 v64; // [rsp+68h] [rbp-70h]
  void *dest; // [rsp+78h] [rbp-60h]
  __int128 v66; // [rsp+80h] [rbp-58h]
  unsigned __int64 v67; // [rsp+98h] [rbp-40h]

  v52 = (__int64 *)a2;
  v67 = __readfsqword(0x28u);
  v2 = (*(__int64 (__fastcall **)(const char *))(qword_24798 + 832))(a2);
  v3 = qword_24798;
  if ( !v2 )
    return *(_QWORD *)(qword_24798 + 1136);
  if ( a2 )
  {
    (*(void (__fastcall **)(const char *))(qword_24798 + 1008))(a2);
    v3 = qword_24798;
  }
  v61 = nullptr;
  v62 = 0;
  v6 = (*(__int64 (__fastcall **)(const char *))(v3 + 856))(a2);
  v10 = &v63;
  v55 = v6;
  v11 = 0;
  if ( v6 > 0 )
  {
    while ( 1 )
    {
      LODWORD(a2) = v11;
      v17 = (*(__int64 (__fastcall **)(__int64 *, __int64))(qword_24798 + 840))(v52, v11);
      v12 = *(__int64 **)(v17 + 8);
      v18 = (__int64 *)v17;
      if ( ((*(__int64 (__fastcall **)(__int64 *))(qword_24798 + 928))(v12) & 0x20000000) == 0 )
        goto LABEL_12;
      a2 = "nodes";
      v12 = v18;
      v19 = (*(__int64 (__fastcall **)(__int64 *, const char *))(qword_24798 + 368))(v18, "nodes");
      v20 = (__int64 *)v19;
      if ( !v19 )
        goto LABEL_12;
      (*(void (__fastcall **)(__int64))(qword_24798 + 1008))(v19);
      v12 = v20;
      if ( !(*(unsigned int (__fastcall **)(__int64 *))(qword_24798 + 832))(v20) )
        goto LABEL_10;
      a2 = "text";
      v12 = v18;
      v21 = (*(__int64 (__fastcall **)(__int64 *, const char *))(qword_24798 + 368))(v18, "text");
      v22 = (__int64 *)v21;
      if ( !v21 )
        goto LABEL_10;
      (*(void (__fastcall **)(__int64))(qword_24798 + 1008))(v21);
      v12 = (__int64 *)v22[1];
      if ( ((*(__int64 (__fastcall **)(__int64 *))(qword_24798 + 928))(v12) & 0x10000000) == 0 )
        break;
      v63 = nullptr;
      dest = nullptr;
      v64 = 0;
      v66 = 0;
      v53 = (*(__int64 (__fastcall **)(__int64 *))(qword_24798 + 856))(v20);
      v31 = 0;
      if ( v53 > 0 )
      {
        do
        {
          LODWORD(a2) = v31;
          v32 = (*(__int64 (__fastcall **)(__int64 *, __int64))(qword_24798 + 840))(v20, v31);
          v12 = *(__int64 **)(v32 + 8);
          v33 = (__int64 *)v32;
          if ( ((*(__int64 (__fastcall **)(__int64 *))(qword_24798 + 928))(v12) & 0x1000000) != 0 )
          {
            v34 = (*(__int64 (__fastcall **)(__int64 *))(qword_24798 + 624))(v33);
            v12 = v63;
            v27 = v64;
            v29 = v34;
            LODWORD(a2) = v34;
            v28 = (int *)v63 + v64;
            if ( v63 == (__int64 *)v28 )
              goto LABEL_60;
            v35 = v63;
            while ( (_DWORD)a2 != *(_DWORD *)v35 )
            {
              v35 = (__int64 *)((char *)v35 + 4);
              if ( v28 == (int *)v35 )
                goto LABEL_60;
            }
            if ( v35 == (__int64 *)v28 )
            {
LABEL_60:
              v27 = v64 + 1;
              if ( *((_QWORD *)&v64 + 1) < (unsigned __int64)(v64 + 1) )
              {
                LODWORD(a2) = (_DWORD)v63;
                v12 = (__int64 *)&v63;
                v57 = v29;
                v45 = qvector_reserve();
                v27 = v64;
                v29 = v57;
                v63 = (__int64 *)v45;
                v28 = (int *)(v45 + 4 * v64);
              }
              *v28 = v29;
              *(_QWORD *)&v64 = v64 + 1;
            }
          }
          if ( v33 )
          {
            if ( *v33 <= 0 )
              goto LABEL_78;
            (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v33);
          }
          ++v31;
        }
        while ( v31 != v53 );
      }
      if ( (_QWORD)v64 )
      {
        v36 = (*(__int64 (__fastcall **)(__int64 *))(qword_24798 + 944))(v22);
        v37 = v36;
        if ( v36 )
        {
          src = nullptr;
          n = 0;
          if ( (*(int (__fastcall **)(__int64, void **, size_t *))(qword_24798 + 304))(v36, &src, &n) >= 0 )
          {
            v47 = n;
            v48 = src;
            *(_QWORD *)&v66 = 0;
            v49 = dest;
            v50 = n + 1;
            if ( *((_QWORD *)&v66 + 1) < n + 1 )
            {
              v58 = src;
              v54 = n + 1;
              dest = (void *)qvector_reserve();
              v48 = v58;
              v49 = dest;
              v50 = v54;
            }
            *(_QWORD *)&v66 = v50;
            v49[v47] = 0;
            memmove(dest, v48, v47);
          }
          (*(void (__fastcall **)(__int64))(qword_24798 + 984))(v37);
        }
        a2 = (const char *)&v63;
        sub_136A0((__int64 *)&v61, (__int64)&v63);
      }
      if ( dest )
      {
        *(_QWORD *)&v66 = 0;
        qfree();
      }
      v12 = v63;
      if ( v63 )
      {
        *(_QWORD *)&v64 = 0;
        qfree();
      }
      if ( *v22 <= 0 )
        goto LABEL_79;
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v22);
      if ( *v20 <= 0 )
        sub_6C20((__int64)v22, (int)a2, v38, v39, v40, v41, (char)v52);
      v12 = v20;
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v20);
      if ( v18 )
      {
        if ( *v18 <= 0 )
          goto LABEL_81;
        ++v11;
        (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v18);
        if ( v55 == v11 )
          goto LABEL_46;
      }
      else
      {
LABEL_15:
        if ( v55 == ++v11 )
          goto LABEL_46;
      }
    }
    if ( *v22 <= 0 )
    {
      sub_6C20((__int64)v12, (int)"text", v23, v24, v25, v26, (char)v52);
LABEL_76:
      sub_6C20((__int64)v12, (int)a2, v13, v14, v15, v16, (char)v52);
      goto LABEL_77;
    }
    v12 = v22;
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v22);
LABEL_10:
    if ( *v20 <= 0 )
      goto LABEL_76;
    v12 = v20;
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v20);
LABEL_12:
    if ( v18 )
    {
      if ( *v18 <= 0 )
        goto LABEL_80;
      (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v18);
    }
    goto LABEL_15;
  }
LABEL_46:
  v63 = nullptr;
  v64 = 0;
  if ( (_QWORD)v62 )
  {
    a2 = *(const char **)(a1 + 24);
    if ( sub_8E40() == 1 && (_QWORD)v64 )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD, const char *))(qword_24798 + 600))(0, a2);
      v51 = (int *)v63;
      if ( 4LL * (_QWORD)v64 )
      {
        do
        {
          a2 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(qword_24798 + 656))(*v51);
          (*(void (__fastcall **)(__int64, const char *))(qword_24798 + 576))(v4, a2);
          v46 = v63;
          ++v51;
        }
        while ( v51 != (int *)((char *)v63 + 4 * (_QWORD)v64) );
      }
      else
      {
        v46 = v63;
      }
    }
    else
    {
      v46 = v63;
      v4 = *(_QWORD *)(qword_24798 + 1136);
    }
    if ( v46 )
    {
      *(_QWORD *)&v64 = 0;
      qfree();
    }
  }
  else
  {
    v4 = *(_QWORD *)(qword_24798 + 1136);
  }
  v12 = v61;
  if ( v61 )
  {
    v42 = v62;
    if ( (_QWORD)v62 )
    {
      v43 = 0;
      do
      {
        v44 = &v12[6 * v43];
        if ( v44[3] )
        {
          v44[4] = 0;
          qfree();
        }
        if ( *v44 )
        {
          v44[1] = 0;
          qfree();
        }
        ++v43;
        v12 = v61;
      }
      while ( v42 != v43 );
    }
    *(_QWORD *)&v62 = 0;
    qfree();
  }
  if ( v52 )
  {
    if ( *v52 <= 0 )
    {
LABEL_77:
      sub_6C20((__int64)v12, (int)a2, (__int64)v10, v7, v8, v9, (char)v52);
LABEL_78:
      sub_6C20((__int64)v12, (int)a2, v27, (__int64)v28, v29, v30, (char)v52);
LABEL_79:
      sub_6C20((__int64)v12, (int)a2, v27, (__int64)v28, v29, v30, (char)v52);
LABEL_80:
      sub_6C20((__int64)v12, (int)a2, (__int64)v10, v7, v8, v9, (char)v52);
LABEL_81:
      sub_6C20((__int64)v12, (int)a2, (__int64)v10, v7, v8, v9, (char)v52);
    }
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v52);
  }
  return v4;
}

