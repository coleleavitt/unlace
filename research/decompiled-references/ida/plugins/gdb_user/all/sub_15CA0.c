__int64 __fastcall sub_15CA0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // r12
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rbp
  _QWORD *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rbp
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v15; // rdi
  _QWORD *v16; // rbx
  __int64 v17; // r13
  const char *v18; // r14
  __int64 v19; // rax
  __int64 v20; // r15
  size_t v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  unsigned __int64 v24; // r8
  size_t v25; // r15
  void *v26; // r14
  void *v27; // r15
  void *v28; // rdi
  _QWORD *v29; // rsi
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  void *v33; // rax
  void *v34; // rax
  void *v35; // rax
  _QWORD *v36; // [rsp+0h] [rbp-1D8h]
  unsigned __int8 v37; // [rsp+Fh] [rbp-1C9h]
  size_t v39; // [rsp+20h] [rbp-1B8h]
  size_t v40; // [rsp+20h] [rbp-1B8h]
  size_t v41; // [rsp+20h] [rbp-1B8h]
  size_t v42; // [rsp+20h] [rbp-1B8h]
  size_t n; // [rsp+28h] [rbp-1B0h]
  size_t na; // [rsp+28h] [rbp-1B0h]
  size_t nb; // [rsp+28h] [rbp-1B0h]
  _QWORD *v46; // [rsp+30h] [rbp-1A8h] BYREF
  __int128 v47; // [rsp+38h] [rbp-1A0h]
  __int64 v48; // [rsp+50h] [rbp-188h] BYREF
  __int128 v49; // [rsp+58h] [rbp-180h]
  __int64 v50; // [rsp+68h] [rbp-170h]
  __int128 v51; // [rsp+70h] [rbp-168h]
  __int64 v52; // [rsp+80h] [rbp-158h]
  __int128 v53; // [rsp+88h] [rbp-150h]
  __int64 v54; // [rsp+98h] [rbp-140h]
  __int128 v55; // [rsp+A0h] [rbp-138h]
  __m128i si128; // [rsp+B0h] [rbp-128h]
  void *v57; // [rsp+C0h] [rbp-118h]
  size_t v58[2]; // [rsp+C8h] [rbp-110h]
  void *src; // [rsp+D8h] [rbp-100h]
  __int128 v60; // [rsp+E0h] [rbp-F8h]
  __int64 v61; // [rsp+F0h] [rbp-E8h]
  void *v62; // [rsp+F8h] [rbp-E0h]
  __int128 v63; // [rsp+100h] [rbp-D8h]
  int v64; // [rsp+110h] [rbp-C8h]
  _QWORD v65[3]; // [rsp+120h] [rbp-B8h] BYREF
  void *v66; // [rsp+138h] [rbp-A0h]
  __int128 v67; // [rsp+140h] [rbp-98h]
  void *v68; // [rsp+150h] [rbp-88h]
  __int128 v69; // [rsp+158h] [rbp-80h]
  __int64 v70; // [rsp+168h] [rbp-70h]
  void *v71; // [rsp+170h] [rbp-68h]
  __int128 v72; // [rsp+178h] [rbp-60h]
  int v73; // [rsp+188h] [rbp-50h]
  unsigned __int64 v74; // [rsp+198h] [rbp-40h]

  v74 = __readfsqword(0x28u);
  if ( !a2 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v5 = (_QWORD *)(a2 + 8);
  sub_12CE0(*(void **)(a2 + 16));
  *(_QWORD *)(a2 + 24) = a2 + 8;
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 32) = a2 + 8;
  *(_QWORD *)(a2 + 40) = 0;
  v48 = 0;
  v50 = 0;
  v52 = 0;
  v54 = 0;
  v49 = 0;
  v51 = 0;
  v53 = 0;
  v55 = 0;
  v37 = sub_444D0(&v48, a3, 0, 0);
  if ( v37 && (v15 = sub_40FE0(&v48, "library-list")) != 0 )
  {
    v46 = nullptr;
    v47 = 0;
    sub_41050(v15, &v46, "library");
    v16 = v46;
    v36 = &v46[v47];
    if ( v36 != v46 )
    {
      while ( 1 )
      {
        v17 = *v16;
        v18 = (const char *)sub_41140(*v16, "name");
        v19 = sub_40FE0(v17, "segment");
        v20 = v19;
        if ( !v18 || !v19 )
          goto LABEL_59;
        v57 = nullptr;
        src = nullptr;
        v62 = nullptr;
        v61 = 0;
        v64 = 0;
        *(_OWORD *)v58 = 0;
        v60 = 0;
        v63 = 0;
        si128 = _mm_load_si128((const __m128i *)&xmmword_59420);
        v21 = strlen(v18);
        if ( v21 )
        {
          n = v21;
          v39 = v21 + 1;
          v57 = (void *)qvector_reserve();
          v58[0] = v39;
          memmove(v57, v18, n);
          *((_BYTE *)v57 + n) = 0;
        }
        if ( sub_41140(v20, "address") && (unsigned __int8)atoea() )
        {
          v22 = si128.m128i_i64[0];
          if ( !*(_DWORD *)(qword_6AC10 + 144LL * *(int *)(a1 + 1176) + 120) )
          {
            v22 = si128.m128i_i64[0] - 4096;
            si128.m128i_i64[0] -= 4096;
          }
          v23 = sub_13440(a1, v22);
          v24 = si128.m128i_i64[0];
          v25 = v58[0];
          si128.m128i_i64[1] = v23;
          v65[2] = v23;
          v26 = nullptr;
          v65[0] = si128.m128i_i64[0];
          v65[1] = si128.m128i_i64[0];
          v67 = 0;
          if ( v58[0] )
          {
            v41 = si128.m128i_i64[0];
            v33 = (void *)qalloc_or_throw();
            *((_QWORD *)&v67 + 1) = v25;
            v26 = v33;
            memcpy(v33, v57, v25);
            *(_QWORD *)&v67 = v25;
            v24 = v41;
          }
          v27 = nullptr;
          v69 = 0;
          if ( (_QWORD)v60 )
          {
            na = v24;
            v40 = v60;
            v27 = (void *)qalloc_or_throw();
            *((_QWORD *)&v69 + 1) = v40;
            memcpy(v27, src, v40);
            v24 = na;
            *(_QWORD *)&v69 = v40;
          }
          v28 = nullptr;
          v72 = 0;
          v70 = v61;
          if ( (_QWORD)v63 )
          {
            nb = v24;
            v42 = v63;
            v34 = (void *)qalloc_or_throw();
            *((_QWORD *)&v72 + 1) = v42;
            v35 = memcpy(v34, v62, v42);
            v24 = nb;
            v28 = v35;
            *(_QWORD *)&v72 = v42;
          }
          v29 = v5;
          v73 = v64;
          v30 = *(_QWORD **)(a2 + 16);
          if ( !v30 )
            goto LABEL_46;
          do
          {
            while ( 1 )
            {
              v31 = v30[2];
              v32 = v30[3];
              if ( v30[4] < v24 )
                break;
              v29 = v30;
              v30 = (_QWORD *)v30[2];
              if ( !v31 )
                goto LABEL_44;
            }
            v30 = (_QWORD *)v30[3];
          }
          while ( v32 );
LABEL_44:
          if ( v5 == v29 || v24 < v29[4] )
          {
LABEL_46:
            v71 = v28;
            v66 = v26;
            v68 = v27;
            sub_15A40((_QWORD *)a2, v29, (__int64)v65);
            v26 = v66;
            v27 = v68;
            v28 = v71;
          }
          if ( v28 )
            qfree();
          if ( v27 )
            qfree();
          if ( v26 )
            qfree();
          if ( v62 )
          {
            *(_QWORD *)&v63 = 0;
            qfree();
          }
          if ( src )
          {
            *(_QWORD *)&v60 = 0;
            qfree();
          }
          if ( v57 )
          {
            v58[0] = 0;
            qfree();
          }
          goto LABEL_59;
        }
        if ( v62 )
        {
          *(_QWORD *)&v63 = 0;
          qfree();
        }
        if ( src )
        {
          *(_QWORD *)&v60 = 0;
          qfree();
        }
        if ( v57 )
        {
          v58[0] = 0;
          ++v16;
          qfree();
          if ( v36 == v16 )
          {
LABEL_60:
            v16 = v46;
            break;
          }
        }
        else
        {
LABEL_59:
          if ( v36 == ++v16 )
            goto LABEL_60;
        }
      }
    }
    if ( v16 )
    {
      *(_QWORD *)&v47 = 0;
      qfree();
    }
  }
  else
  {
    v37 = 0;
  }
  v6 = v54;
  if ( v54 )
  {
    v7 = v55;
    if ( (_QWORD)v55 )
    {
      v8 = 0;
      do
      {
        v9 = (_QWORD *)(v6 + 48 * v8);
        if ( v9[3] )
        {
          v9[4] = 0;
          qfree();
        }
        if ( *v9 )
        {
          v9[1] = 0;
          qfree();
        }
        ++v8;
        v6 = v54;
      }
      while ( v7 != v8 );
    }
    *(_QWORD *)&v55 = 0;
    qfree();
  }
  v10 = v52;
  if ( v52 )
  {
    v11 = v53;
    if ( (_QWORD)v53 )
    {
      v12 = 0;
      do
      {
        v13 = 3 * v12++;
        sub_130C0((_QWORD *)(32 * v13 + v10));
        v10 = v52;
      }
      while ( v11 != v12 );
    }
    *(_QWORD *)&v53 = 0;
    qfree();
  }
  if ( v50 )
  {
    *(_QWORD *)&v51 = 0;
    qfree();
  }
  if ( v48 )
  {
    *(_QWORD *)&v49 = 0;
    qfree();
  }
  return v37;
}

