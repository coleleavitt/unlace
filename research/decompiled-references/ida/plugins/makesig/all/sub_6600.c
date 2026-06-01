__int64 __fastcall sub_6600(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 (__fastcall *v6)(); // rax
  __int64 func_qty; // rax
  bool v8; // zf
  __int64 v9; // rbx
  char v10; // al
  __int64 v11; // rdi
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD **v16; // r14
  void *v17; // rdi
  unsigned int v18; // ebx
  const char *v19; // rax
  __int64 *v21; // rbx
  __int64 v22; // rdi
  char v23; // al
  __int64 v24; // rdi
  __int64 v25; // r14
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rcx
  _QWORD **v29; // r15
  void *v30; // rdi
  __int64 v31; // rbp
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rdx
  _QWORD **v35; // rbx
  void *v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // rbx
  __int64 v39; // rbp
  __int64 v40; // rax
  __int64 v41; // rdx
  _QWORD **v42; // rbx
  void *v43; // rdi
  const char *v44; // rax
  void (__fastcall *v45)(__int64 **); // [rsp+8h] [rbp-100h]
  char v46; // [rsp+17h] [rbp-F1h]
  __int64 v47; // [rsp+18h] [rbp-F0h]
  __int64 v48; // [rsp+20h] [rbp-E8h]
  const char *v49; // [rsp+28h] [rbp-E0h]
  size_t v50; // [rsp+38h] [rbp-D0h] BYREF
  __m128i v51; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v52; // [rsp+50h] [rbp-B8h]
  int v53; // [rsp+70h] [rbp-98h] BYREF
  void *v54; // [rsp+78h] [rbp-90h]
  int *v55; // [rsp+80h] [rbp-88h]
  int *v56; // [rsp+88h] [rbp-80h]
  __int64 v57; // [rsp+90h] [rbp-78h]
  __int64 v58; // [rsp+98h] [rbp-70h]
  __int128 v59; // [rsp+A0h] [rbp-68h]
  __int64 v60; // [rsp+B0h] [rbp-58h]
  __int16 v61; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v62; // [rsp+C8h] [rbp-40h]

  v62 = __readfsqword(0x28u);
  v49 = (const char *)(a2 + 4096);
  v4 = qfopen(a2 + 4096, "w");
  if ( !v4 )
  {
    v18 = 0;
    v44 = (const char *)qstrerror(0xFFFFFFFFLL);
    sub_4C20((__int64)"%s: %s\n", (const char *)(a2 + 4096), v44);
    return v18;
  }
  v5 = v4;
  v6 = sub_71E0;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 12LL) & 0x20) == 0 )
    v6 = sub_7020;
  v45 = (void (__fastcall *)(__int64 **))v6;
  func_qty = get_func_qty();
  v8 = *(_WORD *)(a2 + 8288) == 0;
  v50 = 0;
  v46 = !v8;
  v47 = func_qty;
  if ( *(_WORD *)(a2 + 0x2000) == 1 )
  {
    v21 = *(__int64 **)a3;
    v48 = *(_QWORD *)a3 + 8LL * *(_QWORD *)(a3 + 8);
    if ( v48 != *(_QWORD *)a3 )
    {
      while ( 1 )
      {
        v22 = *v21;
        v51.m128i_i64[1] = 0;
        v53 = 0;
        v54 = nullptr;
        v55 = &v53;
        v56 = &v53;
        v57 = 0;
        v58 = 0;
        v60 = 0;
        v61 = 0;
        v52 = 0;
        v59 = 0;
        v51.m128i_i64[0] = get_func(v22);
        if ( v51.m128i_i64[0] )
          sub_47C0(&v51, v51.m128i_i64[0]);
        v23 = sub_5E20(v5, v45, (__int64 **)&v51, v46, &v50);
        v24 = v58;
        if ( !v23 )
          break;
        if ( v58 )
        {
          v25 = v59;
          if ( (_QWORD)v59 )
          {
            v26 = 0;
            do
            {
              v27 = v24 + 32 * v26;
              v28 = *(_QWORD *)(v27 + 8);
              if ( v28 )
              {
                *(_QWORD *)(v27 + 16) = 0;
                qfree(v28);
                v24 = v58;
              }
              ++v26;
            }
            while ( v25 != v26 );
          }
          *(_QWORD *)&v59 = 0;
          qfree(v24);
        }
        v29 = (_QWORD **)v54;
        if ( v54 )
        {
          do
          {
            sub_4A50(v29[3]);
            v30 = v29;
            v29 = (_QWORD **)v29[2];
            operator delete(v30, 0x28u);
          }
          while ( v29 );
        }
        if ( v51.m128i_i64[1] )
        {
          *(_QWORD *)&v52 = 0;
          qfree(v51.m128i_i64[1]);
        }
        if ( (__int64 *)v48 == ++v21 )
          goto LABEL_21;
      }
      if ( v58 )
      {
        v38 = v59;
        if ( (_QWORD)v59 )
        {
          v39 = 0;
          do
          {
            v40 = v24 + 32 * v39;
            v41 = *(_QWORD *)(v40 + 8);
            if ( v41 )
            {
              *(_QWORD *)(v40 + 16) = 0;
              qfree(v41);
              v24 = v58;
            }
            ++v39;
          }
          while ( v38 != v39 );
        }
        *(_QWORD *)&v59 = 0;
        qfree(v24);
      }
      v42 = (_QWORD **)v54;
      if ( v54 )
      {
        do
        {
          sub_4A50(v42[3]);
          v43 = v42;
          v42 = (_QWORD **)v42[2];
          operator delete(v43, 0x28u);
        }
        while ( v42 );
      }
      v37 = v51.m128i_i64[1];
      if ( !v51.m128i_i64[1] )
        goto LABEL_22;
LABEL_52:
      *(_QWORD *)&v52 = 0;
      qfree(v37);
      goto LABEL_22;
    }
  }
  else
  {
    v9 = 0;
    if ( func_qty )
    {
      while ( 1 )
      {
        v51.m128i_i64[1] = 0;
        v53 = 0;
        v54 = nullptr;
        v55 = &v53;
        v56 = &v53;
        v57 = 0;
        v58 = 0;
        v60 = 0;
        v61 = 0;
        v52 = 0;
        v59 = 0;
        v51.m128i_i64[0] = getn_func(v9);
        if ( v51.m128i_i64[0] )
          sub_47C0(&v51, v51.m128i_i64[0]);
        v10 = sub_5E20(v5, v45, (__int64 **)&v51, v46, &v50);
        v11 = v58;
        if ( !v10 )
          break;
        if ( v58 )
        {
          v12 = v59;
          if ( (_QWORD)v59 )
          {
            v13 = 0;
            do
            {
              v14 = v11 + 32 * v13;
              v15 = *(_QWORD *)(v14 + 8);
              if ( v15 )
              {
                *(_QWORD *)(v14 + 16) = 0;
                qfree(v15);
                v11 = v58;
              }
              ++v13;
            }
            while ( v12 != v13 );
          }
          *(_QWORD *)&v59 = 0;
          qfree(v11);
        }
        v16 = (_QWORD **)v54;
        if ( v54 )
        {
          do
          {
            sub_4A50(v16[3]);
            v17 = v16;
            v16 = (_QWORD **)v16[2];
            operator delete(v17, 0x28u);
          }
          while ( v16 );
        }
        if ( v51.m128i_i64[1] )
        {
          *(_QWORD *)&v52 = 0;
          qfree(v51.m128i_i64[1]);
        }
        if ( v47 == ++v9 )
          goto LABEL_21;
      }
      if ( v58 )
      {
        v31 = v59;
        if ( (_QWORD)v59 )
        {
          v32 = 0;
          do
          {
            v33 = v11 + 32 * v32;
            v34 = *(_QWORD *)(v33 + 8);
            if ( v34 )
            {
              *(_QWORD *)(v33 + 16) = 0;
              qfree(v34);
              v11 = v58;
            }
            ++v32;
          }
          while ( v31 != v32 );
        }
        *(_QWORD *)&v59 = 0;
        qfree(v11);
      }
      v35 = (_QWORD **)v54;
      if ( v54 )
      {
        do
        {
          sub_4A50(v35[3]);
          v36 = v35;
          v35 = (_QWORD **)v35[2];
          operator delete(v36, 0x28u);
        }
        while ( v35 );
      }
      v37 = v51.m128i_i64[1];
      if ( !v51.m128i_i64[1] )
        goto LABEL_22;
      goto LABEL_52;
    }
  }
LABEL_21:
  if ( qfwrite(v5, "---\n", 4) == 4 )
  {
    v18 = 1;
    sub_4C20((__int64)"%s: created %zu patterns out of %zu functions\n", v49, v50, v47);
    goto LABEL_23;
  }
LABEL_22:
  v18 = 0;
  v19 = (const char *)qstrerror(0xFFFFFFFFLL);
  sub_4C20((__int64)"%s: %s\n", v49, v19);
LABEL_23:
  qfclose(v5);
  return v18;
}

