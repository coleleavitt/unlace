__int64 __fastcall sub_3E2100(__m128i *a1, char *a2)
{
  _QWORD *v2; // rdi
  _DWORD *v3; // rax
  _QWORD *exception; // rdi
  _DWORD *v5; // rax
  _DWORD *v6; // rax
  __m128i *v8; // rdi
  __int64 v9; // r13
  unsigned __int64 v10; // rdx
  __int64 i; // rax
  int v12; // r8d
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rbx
  char *v15; // r12
  unsigned __int64 v16; // rax
  char *v17; // r12
  __m128i *v18; // rax
  __int16 v19; // bx
  char *v20; // r12
  __int16 v21; // ax
  int v22; // ebx
  __int16 v23; // ax
  __int16 v24; // ax
  __int64 v25; // r12
  __int64 v26; // rbx
  int *v27; // r15
  int v28; // ecx
  int *v29; // rax
  char *v30; // r12
  __int64 v31; // rbp
  __int64 j; // rbx
  char *v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rsi
  unsigned __int64 v40; // r12
  __int64 v41; // rax
  __int64 v42; // rax
  char *v43; // r12
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  char *v47; // r12
  __int64 v48; // rbp
  __int64 m; // rbx
  char *v50; // rax
  char *v51; // r12
  __int64 v52; // rbp
  __int64 jj; // rbx
  char *v54; // rax
  char *v55; // r12
  __int64 v56; // rbp
  __int64 ii; // rbx
  char *v58; // rax
  __int64 v59; // rbp
  __int64 k; // rbx
  char *v61; // rax
  __int64 v63; // [rsp+8h] [rbp-B0h]
  char v64; // [rsp+17h] [rbp-A1h]
  __int64 n; // [rsp+18h] [rbp-A0h]
  void *src; // [rsp+20h] [rbp-98h] BYREF
  __int128 v67; // [rsp+28h] [rbp-90h]
  int v68; // [rsp+48h] [rbp-70h] BYREF
  int *v69; // [rsp+50h] [rbp-68h]
  int *v70; // [rsp+58h] [rbp-60h]
  int *v71; // [rsp+60h] [rbp-58h]
  __int64 v72; // [rsp+68h] [rbp-50h]
  unsigned __int64 v73; // [rsp+78h] [rbp-40h]

  v73 = __readfsqword(0x28u);
  v8 = (__m128i *)&dword_30;
  v68 = 0;
  v69 = nullptr;
  v70 = &v68;
  v71 = &v68;
  v72 = 0;
  v64 = 0;
  v9 = j__qalloc_or_throw();
  v10 = 0;
  *(_QWORD *)v9 = 0;
  *(_QWORD *)(v9 + 24) = 0;
  *(_OWORD *)(v9 + 8) = 0;
  *(_OWORD *)(v9 + 32) = 0;
  for ( i = 0; ; i = *(_QWORD *)(v9 + 8) )
  {
    v12 = v10 + 1;
    v13 = (int)v10 + 1;
    if ( v13 == i )
      goto LABEL_13;
    src = nullptr;
    v67 = 0;
    v14 = *(_QWORD *)(v9 + 8);
    if ( v12 < v14 )
    {
      v40 = v12;
      do
      {
        v41 = *(_QWORD *)v9 + 24 * v40;
        v8 = *(__m128i **)v41;
        if ( *(_QWORD *)v41 )
        {
          *(_QWORD *)(v41 + 8) = 0;
          qfree();
        }
        ++v40;
      }
      while ( v40 < v14 );
      *(_QWORD *)(v9 + 8) = v13;
      v10 = *(_QWORD *)(v9 + 32);
    }
    else
    {
      if ( v14 >= v12 )
        goto LABEL_13;
      v15 = *(char **)v9;
      v16 = *(_QWORD *)(v9 + 16);
      if ( (unsigned __int64)&src < *(_QWORD *)v9 || &src >= (void **)&v15[24 * v16] )
      {
        if ( v16 >= v12
          || (a2 = *(char **)v9,
              v8 = (__m128i *)v9,
              v45 = qvector_reserve(),
              v14 = *(_QWORD *)(v9 + 8),
              *(_QWORD *)v9 = v45,
              v15 = (char *)v45,
              v14 < v13) )
        {
          while ( 1 )
          {
            v17 = &v15[24 * v14];
            *(_QWORD *)v17 = 0;
            *(_OWORD *)(v17 + 8) = 0;
            if ( (_QWORD)v67 )
            {
              v63 = v67;
              n = 8 * v67;
              v18 = (__m128i *)qalloc_or_throw();
              *(_QWORD *)v17 = v18;
              v8 = v18;
              ++v14;
              *((_QWORD *)v17 + 2) = v63;
              a2 = (char *)src;
              memcpy(v18, src, n);
              *((_QWORD *)v17 + 1) = v63;
              if ( v14 >= v13 )
                break;
            }
            else if ( ++v14 >= v13 )
            {
              break;
            }
            v15 = *(char **)v9;
          }
        }
LABEL_12:
        *(_QWORD *)(v9 + 8) = v13;
        v10 = *(_QWORD *)(v9 + 32);
        goto LABEL_13;
      }
      if ( v16 < v12 )
      {
        a2 = *(char **)v9;
        v8 = (__m128i *)v9;
        v46 = qvector_reserve();
        v14 = *(_QWORD *)(v9 + 8);
        *(_QWORD *)v9 = v46;
        v15 = (char *)v46;
        if ( v14 >= v13 )
          goto LABEL_12;
      }
      v42 = 24 * v14;
      while ( 1 )
      {
        v43 = &v15[v42];
        ++v14;
        v42 += 24;
        *(_QWORD *)v43 = 0;
        *(_OWORD *)(v43 + 8) = 0;
        if ( v13 == v14 )
          break;
        v15 = *(char **)v9;
      }
      *(_QWORD *)(v9 + 8) = v13;
      v10 = *(_QWORD *)(v9 + 32);
    }
LABEL_13:
    if ( v10 < v13 )
    {
      v39 = *(_QWORD *)(v9 + 24);
      if ( *(_QWORD *)(v9 + 40) < v13 )
      {
        v44 = qvector_reserve();
        *(_QWORD *)(v9 + 24) = v44;
        v10 = *(_QWORD *)(v9 + 32);
        v39 = v44;
      }
      v8 = (__m128i *)(v39 + 4 * v10);
      a2 = nullptr;
      memset(v8, 0, 4 * (v13 - v10));
      *(_QWORD *)(v9 + 32) = v13;
    }
    else if ( v13 != v10 )
    {
      *(_QWORD *)(v9 + 32) = v13;
    }
    v19 = a1[67].m128i_i16[2];
    v20 = *(char **)v9;
    if ( v19 != 2 || (v8 = a1 + 2, a2 = "def", strcmp(a1[2].m128i_i8, "def")) )
    {
      v25 = (__int64)&v20[24 * *(_QWORD *)(v9 + 8) - 24];
      if ( v19 != 45 )
      {
LABEL_28:
        if ( v19 == 3 )
        {
          v26 = a1[66].m128i_i64[0];
          goto LABEL_30;
        }
LABEL_137:
        sub_5ADD6(v8, a2, 0.0);
      }
      while ( 1 )
      {
        v8 = a1;
        sub_3E1360(a1);
        if ( a1[67].m128i_i16[2] != 3 )
          goto LABEL_137;
        v26 = -a1[66].m128i_i64[0];
LABEL_30:
        sub_3E1360(a1);
        v27 = v69;
        if ( v69 )
        {
          while ( 1 )
          {
            v28 = v27[8];
            v29 = *((int **)v27 + 3);
            if ( (int)v26 < v28 )
              v29 = *((int **)v27 + 2);
            if ( !v29 )
              break;
            v27 = v29;
          }
          if ( (int)v26 >= v28 )
            goto LABEL_37;
          if ( v70 == v27 )
            goto LABEL_49;
        }
        else if ( v70 == &v68 )
        {
          goto LABEL_49;
        }
        v28 = *(_DWORD *)(std::_Rb_tree_decrement() + 32);
LABEL_37:
        if ( (int)v26 <= v28 )
        {
          if ( v9 )
          {
            if ( *(_QWORD *)(v9 + 24) )
            {
              *(_QWORD *)(v9 + 32) = 0;
              qfree();
            }
            v30 = *(char **)v9;
            if ( *(_QWORD *)v9 )
            {
              v31 = *(_QWORD *)(v9 + 8);
              if ( v31 )
              {
                for ( j = 0; j != v31; ++j )
                {
                  v33 = &v30[24 * j];
                  if ( *(_QWORD *)v33 )
                  {
                    *((_QWORD *)v33 + 1) = 0;
                    qfree();
                    v30 = *(char **)v9;
                  }
                }
              }
              *(_QWORD *)(v9 + 8) = 0;
              qfree();
            }
            j__qfree();
          }
          exception = __cxa_allocate_exception(8u);
          *exception = "Duplicate case number";
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'char const*, nullptr);
        }
LABEL_49:
        *(_DWORD *)(operator new(0x28u) + 32) = v26;
        v26 = (int)v26;
        std::_Rb_tree_insert_and_rebalance();
        ++v72;
        src = (void *)(int)v26;
        v34 = *(_QWORD *)(v25 + 8);
        a2 = *(char **)v25;
        v35 = *(_QWORD *)(v25 + 16);
        v36 = v34 + 1;
        if ( (unsigned __int64)&src < *(_QWORD *)v25 || &src >= (void **)&a2[8 * v35] )
        {
          if ( v35 < v36 )
          {
            v37 = qvector_reserve();
            *(_QWORD *)v25 = v37;
            a2 = (char *)v37;
            v26 = (__int64)src;
            v34 = *(_QWORD *)(v25 + 8);
          }
        }
        else if ( v35 < v36 )
        {
          v38 = qvector_reserve();
          *(_QWORD *)v25 = v38;
          a2 = (char *)v38;
          v34 = *(_QWORD *)(v25 + 8);
        }
        *(_QWORD *)&a2[8 * v34] = v26;
        ++*(_QWORD *)(v25 + 8);
        v21 = a1[67].m128i_i16[2];
        if ( v21 != 44 )
          goto LABEL_20;
        v8 = a1;
        sub_3E1360(a1);
        v19 = a1[67].m128i_i16[2];
        if ( v19 != 45 )
          goto LABEL_28;
      }
    }
    if ( v64 )
    {
      if ( v9 )
      {
        if ( *(_QWORD *)(v9 + 24) )
        {
          *(_QWORD *)(v9 + 32) = 0;
          qfree();
          v20 = *(char **)v9;
        }
        if ( v20 )
        {
          v59 = *(_QWORD *)(v9 + 8);
          if ( v59 )
          {
            for ( k = 0; k != v59; ++k )
            {
              v61 = &v20[24 * k];
              if ( *(_QWORD *)v61 )
              {
                *((_QWORD *)v61 + 1) = 0;
                qfree();
                v20 = *(char **)v9;
              }
            }
          }
          *(_QWORD *)(v9 + 8) = 0;
          qfree();
        }
        j__qfree();
      }
      JUMPOUT(0x5B3D0);
    }
    sub_3E1360(a1);
    v64 = 1;
    v21 = a1[67].m128i_i16[2];
LABEL_20:
    if ( v21 != 15933 )
    {
      if ( v9 )
      {
        if ( *(_QWORD *)(v9 + 24) )
        {
          *(_QWORD *)(v9 + 32) = 0;
          qfree();
        }
        v47 = *(char **)v9;
        if ( *(_QWORD *)v9 )
        {
          v48 = *(_QWORD *)(v9 + 8);
          if ( v48 )
          {
            for ( m = 0; m != v48; ++m )
            {
              v50 = &v47[24 * m];
              if ( *(_QWORD *)v50 )
              {
                *((_QWORD *)v50 + 1) = 0;
                qfree();
                v47 = *(char **)v9;
              }
            }
          }
          *(_QWORD *)(v9 + 8) = 0;
          qfree();
        }
        j__qfree();
      }
      v5 = __cxa_allocate_exception(4u);
      *v5 = 47;
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'int, nullptr);
    }
    v22 = sub_3E0EC0(a1);
    if ( v22 )
    {
      v6 = __cxa_allocate_exception(4u);
      *v6 = v22;
      __cxa_throw(v6, (struct type_info *)&`typeinfo for'int, nullptr);
    }
    v23 = a1[67].m128i_i16[2];
    if ( v23 == 4 )
    {
      a1[67].m128i_i16[2] = 2;
LABEL_135:
      sub_5ADD6(a1, a2, 0.0);
    }
    if ( v23 != 3 )
      goto LABEL_135;
    *(_DWORD *)(*(_QWORD *)(v9 + 24) + 4LL * *(_QWORD *)(v9 + 32) - 4) = a1[66].m128i_i64[0];
    sub_3E1360(a1);
    v24 = a1[67].m128i_i16[2];
    if ( v24 == 125 )
      break;
    if ( v24 != 44 )
    {
      if ( v9 )
      {
        if ( *(_QWORD *)(v9 + 24) )
        {
          *(_QWORD *)(v9 + 32) = 0;
          qfree();
        }
        v55 = *(char **)v9;
        if ( *(_QWORD *)v9 )
        {
          v56 = *(_QWORD *)(v9 + 8);
          if ( v56 )
          {
            for ( ii = 0; ii != v56; ++ii )
            {
              v58 = &v55[24 * ii];
              if ( *(_QWORD *)v58 )
              {
                *((_QWORD *)v58 + 1) = 0;
                qfree();
                v55 = *(char **)v9;
              }
            }
          }
          *(_QWORD *)(v9 + 8) = 0;
          qfree();
        }
        j__qfree();
      }
      v3 = __cxa_allocate_exception(4u);
      *v3 = 47;
      __cxa_throw(v3, (struct type_info *)&`typeinfo for'int, nullptr);
    }
    v8 = a1;
    sub_3E1360(a1);
    v10 = *(_QWORD *)(v9 + 32);
  }
  if ( *(_QWORD *)(v9 + 32) <= 2u )
  {
    if ( v9 )
    {
      if ( *(_QWORD *)(v9 + 24) )
      {
        *(_QWORD *)(v9 + 32) = 0;
        qfree();
      }
      v51 = *(char **)v9;
      if ( *(_QWORD *)v9 )
      {
        v52 = *(_QWORD *)(v9 + 8);
        if ( v52 )
        {
          for ( jj = 0; jj != v52; ++jj )
          {
            v54 = &v51[24 * jj];
            if ( *(_QWORD *)v54 )
            {
              *((_QWORD *)v54 + 1) = 0;
              qfree();
              v51 = *(char **)v9;
            }
          }
        }
        *(_QWORD *)(v9 + 8) = 0;
        qfree();
      }
      j__qfree();
    }
    v2 = __cxa_allocate_exception(8u);
    *v2 = "Too few jump cases (must be > 2)";
    __cxa_throw(v2, (struct type_info *)&`typeinfo for'char const*, nullptr);
  }
  sub_3E1360(a1);
  sub_3E0C40(v69);
  return v9;
}

