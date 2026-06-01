__int64 __fastcall sub_3E7380(__m128i *a1, char *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  _DWORD *v5; // rax
  _QWORD *exception; // rdi
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  __int64 v10; // r13
  unsigned __int64 v11; // rdx
  __int64 i; // rax
  int v13; // r8d
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rbx
  __int64 v16; // r12
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r12
  void *v19; // rax
  __int16 v20; // bx
  __int64 v21; // r12
  __int16 v22; // ax
  int v23; // ebx
  __int16 v24; // ax
  __int16 v25; // ax
  __int64 v26; // r12
  __int64 v27; // rbx
  int *v28; // r15
  int v29; // ecx
  int *v30; // rax
  __int64 v31; // rdi
  __int64 v32; // r12
  __int64 v33; // rbp
  __int64 j; // rbx
  __int64 *v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rdi
  char *v40; // rax
  char *v41; // rax
  __int64 v42; // rsi
  unsigned __int64 v43; // r12
  __int64 *v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // r12
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // r12
  __int64 v53; // rbp
  __int64 m; // rbx
  __int64 *v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rdi
  __int64 v58; // r12
  __int64 v59; // rbp
  __int64 jj; // rbx
  __int64 *v61; // rax
  __int64 v62; // rdi
  __int64 v63; // rdi
  __int64 v64; // r12
  __int64 v65; // rbp
  __int64 ii; // rbx
  __int64 *v67; // rax
  __int64 v68; // rdi
  __int64 v69; // rdi
  __int64 v70; // rbp
  __int64 k; // rbx
  __int64 *v72; // rax
  __int64 v73; // rdi
  __int64 v75; // [rsp+8h] [rbp-B0h]
  char v76; // [rsp+17h] [rbp-A1h]
  __int64 n; // [rsp+18h] [rbp-A0h]
  void *src; // [rsp+20h] [rbp-98h] BYREF
  __int128 v79; // [rsp+28h] [rbp-90h]
  int v80; // [rsp+48h] [rbp-70h] BYREF
  int *v81; // [rsp+50h] [rbp-68h]
  int *v82; // [rsp+58h] [rbp-60h]
  int *v83; // [rsp+60h] [rbp-58h]
  __int64 v84; // [rsp+68h] [rbp-50h]
  unsigned __int64 v85; // [rsp+78h] [rbp-40h]

  v85 = __readfsqword(0x28u);
  v80 = 0;
  v81 = nullptr;
  v82 = &v80;
  v83 = &v80;
  v84 = 0;
  v76 = 0;
  v10 = j__qalloc_or_throw(48, (__int64)a2, a3, a4);
  v11 = 0;
  *(_QWORD *)v10 = 0;
  *(_QWORD *)(v10 + 24) = 0;
  *(_OWORD *)(v10 + 8) = 0;
  *(_OWORD *)(v10 + 32) = 0;
  for ( i = 0; ; i = *(_QWORD *)(v10 + 8) )
  {
    v13 = v11 + 1;
    v14 = (int)v11 + 1;
    if ( v14 == i )
      goto LABEL_13;
    src = nullptr;
    v79 = 0;
    v15 = *(_QWORD *)(v10 + 8);
    if ( v13 < v15 )
    {
      v43 = v13;
      do
      {
        v44 = (__int64 *)(*(_QWORD *)v10 + 24 * v43);
        v45 = *v44;
        if ( *v44 )
        {
          v44[1] = 0;
          qfree(v45);
        }
        ++v43;
      }
      while ( v43 < v15 );
      *(_QWORD *)(v10 + 8) = v14;
      v11 = *(_QWORD *)(v10 + 32);
    }
    else
    {
      if ( v15 >= v13 )
        goto LABEL_13;
      v16 = *(_QWORD *)v10;
      v17 = *(_QWORD *)(v10 + 16);
      if ( (unsigned __int64)&src < *(_QWORD *)v10 || (unsigned __int64)&src >= v16 + 24 * v17 )
      {
        if ( v17 >= v13
          || (a2 = *(char **)v10,
              v49 = qvector_reserve(v10, *(_QWORD *)v10, v13, 24),
              v15 = *(_QWORD *)(v10 + 8),
              *(_QWORD *)v10 = v49,
              v16 = v49,
              v15 < v14) )
        {
          while ( 1 )
          {
            v18 = v16 + 24 * v15;
            *(_QWORD *)v18 = 0;
            *(_OWORD *)(v18 + 8) = 0;
            if ( (_QWORD)v79 )
            {
              v75 = v79;
              n = 8 * v79;
              v19 = (void *)qalloc_or_throw(8 * v79, (__int64)a2, 8 * v79, v79);
              *(_QWORD *)v18 = v19;
              ++v15;
              *(_QWORD *)(v18 + 16) = v75;
              a2 = (char *)src;
              memcpy(v19, src, n);
              *(_QWORD *)(v18 + 8) = v75;
              if ( v15 >= v14 )
                break;
            }
            else if ( ++v15 >= v14 )
            {
              break;
            }
            v16 = *(_QWORD *)v10;
          }
        }
LABEL_12:
        *(_QWORD *)(v10 + 8) = v14;
        v11 = *(_QWORD *)(v10 + 32);
        goto LABEL_13;
      }
      if ( v17 < v13 )
      {
        v50 = qvector_reserve(v10, *(_QWORD *)v10, v13, 24);
        v15 = *(_QWORD *)(v10 + 8);
        *(_QWORD *)v10 = v50;
        v16 = v50;
        if ( v15 >= v14 )
          goto LABEL_12;
      }
      v46 = 24 * v15;
      while ( 1 )
      {
        v47 = v46 + v16;
        ++v15;
        v46 += 24;
        *(_QWORD *)v47 = 0;
        *(_OWORD *)(v47 + 8) = 0;
        if ( v14 == v15 )
          break;
        v16 = *(_QWORD *)v10;
      }
      *(_QWORD *)(v10 + 8) = v14;
      v11 = *(_QWORD *)(v10 + 32);
    }
LABEL_13:
    if ( v11 < v14 )
    {
      v42 = *(_QWORD *)(v10 + 24);
      if ( *(_QWORD *)(v10 + 40) < v14 )
      {
        v48 = qvector_reserve(v10 + 24, v42, v14, 4);
        *(_QWORD *)(v10 + 24) = v48;
        v11 = *(_QWORD *)(v10 + 32);
        v42 = v48;
      }
      memset((void *)(v42 + 4 * v11), 0, 4 * (v14 - v11));
      *(_QWORD *)(v10 + 32) = v14;
    }
    else if ( v14 != v11 )
    {
      *(_QWORD *)(v10 + 32) = v14;
    }
    v20 = a1[67].m128i_i16[2];
    v21 = *(_QWORD *)v10;
    if ( v20 != 2 || (a2 = "def", strcmp(a1[2].m128i_i8, "def")) )
    {
      v26 = v21 + 24LL * *(_QWORD *)(v10 + 8) - 24;
      if ( v20 != 45 )
      {
LABEL_28:
        if ( v20 == 3 )
        {
          v27 = a1[66].m128i_i64[0];
          goto LABEL_30;
        }
LABEL_137:
        sub_5C092();
      }
      while ( 1 )
      {
        sub_3E65E0(a1);
        if ( a1[67].m128i_i16[2] != 3 )
          goto LABEL_137;
        v27 = -a1[66].m128i_i64[0];
LABEL_30:
        sub_3E65E0(a1);
        v28 = v81;
        if ( v81 )
        {
          while ( 1 )
          {
            v29 = v28[8];
            v30 = *((int **)v28 + 3);
            if ( (int)v27 < v29 )
              v30 = *((int **)v28 + 2);
            if ( !v30 )
              break;
            v28 = v30;
          }
          if ( (int)v27 >= v29 )
            goto LABEL_37;
          if ( v82 == v28 )
            goto LABEL_49;
        }
        else if ( v82 == &v80 )
        {
          goto LABEL_49;
        }
        v29 = *(_DWORD *)(std::_Rb_tree_decrement() + 32);
LABEL_37:
        if ( (int)v27 <= v29 )
        {
          if ( v10 )
          {
            v31 = *(_QWORD *)(v10 + 24);
            if ( v31 )
            {
              *(_QWORD *)(v10 + 32) = 0;
              qfree(v31);
            }
            v32 = *(_QWORD *)v10;
            if ( *(_QWORD *)v10 )
            {
              v33 = *(_QWORD *)(v10 + 8);
              if ( v33 )
              {
                for ( j = 0; j != v33; ++j )
                {
                  v35 = (__int64 *)(v32 + 24 * j);
                  v36 = *v35;
                  if ( *v35 )
                  {
                    v35[1] = 0;
                    qfree(v36);
                    v32 = *(_QWORD *)v10;
                  }
                }
              }
              *(_QWORD *)(v10 + 8) = 0;
              qfree(v32);
            }
            j__qfree(v10);
          }
          exception = __cxa_allocate_exception(8u);
          *exception = "Duplicate case number";
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'char const*, nullptr);
        }
LABEL_49:
        *(_DWORD *)(operator new(0x28u) + 32) = v27;
        v27 = (int)v27;
        std::_Rb_tree_insert_and_rebalance();
        ++v84;
        src = (void *)(int)v27;
        v37 = *(_QWORD *)(v26 + 8);
        a2 = *(char **)v26;
        v38 = *(_QWORD *)(v26 + 16);
        v39 = v37 + 1;
        if ( (unsigned __int64)&src < *(_QWORD *)v26 || &src >= (void **)&a2[8 * v38] )
        {
          if ( v38 < v39 )
          {
            v40 = (char *)qvector_reserve(v26, (__int64)a2, v37 + 1, 8);
            *(_QWORD *)v26 = v40;
            a2 = v40;
            v27 = (__int64)src;
            v37 = *(_QWORD *)(v26 + 8);
          }
        }
        else if ( v38 < v39 )
        {
          v41 = (char *)qvector_reserve(v26, (__int64)a2, v37 + 1, 8);
          *(_QWORD *)v26 = v41;
          a2 = v41;
          v37 = *(_QWORD *)(v26 + 8);
        }
        *(_QWORD *)&a2[8 * v37] = v27;
        ++*(_QWORD *)(v26 + 8);
        v22 = a1[67].m128i_i16[2];
        if ( v22 != 44 )
          goto LABEL_20;
        sub_3E65E0(a1);
        v20 = a1[67].m128i_i16[2];
        if ( v20 != 45 )
          goto LABEL_28;
      }
    }
    if ( v76 )
    {
      if ( v10 )
      {
        v69 = *(_QWORD *)(v10 + 24);
        if ( v69 )
        {
          *(_QWORD *)(v10 + 32) = 0;
          qfree(v69);
          v21 = *(_QWORD *)v10;
        }
        if ( v21 )
        {
          v70 = *(_QWORD *)(v10 + 8);
          if ( v70 )
          {
            for ( k = 0; k != v70; ++k )
            {
              v72 = (__int64 *)(v21 + 24 * k);
              v73 = *v72;
              if ( *v72 )
              {
                v72[1] = 0;
                qfree(v73);
                v21 = *(_QWORD *)v10;
              }
            }
          }
          *(_QWORD *)(v10 + 8) = 0;
          qfree(v21);
        }
        j__qfree(v10);
      }
      JUMPOUT(0x5C68C);
    }
    sub_3E65E0(a1);
    v76 = 1;
    v22 = a1[67].m128i_i16[2];
LABEL_20:
    if ( v22 != 15933 )
    {
      if ( v10 )
      {
        v51 = *(_QWORD *)(v10 + 24);
        if ( v51 )
        {
          *(_QWORD *)(v10 + 32) = 0;
          qfree(v51);
        }
        v52 = *(_QWORD *)v10;
        if ( *(_QWORD *)v10 )
        {
          v53 = *(_QWORD *)(v10 + 8);
          if ( v53 )
          {
            for ( m = 0; m != v53; ++m )
            {
              v55 = (__int64 *)(v52 + 24 * m);
              v56 = *v55;
              if ( *v55 )
              {
                v55[1] = 0;
                qfree(v56);
                v52 = *(_QWORD *)v10;
              }
            }
          }
          *(_QWORD *)(v10 + 8) = 0;
          qfree(v52);
        }
        j__qfree(v10);
      }
      v7 = __cxa_allocate_exception(4u);
      *v7 = 47;
      __cxa_throw(v7, (struct type_info *)&`typeinfo for'int, nullptr);
    }
    v23 = sub_3E6140(a1);
    if ( v23 )
    {
      v8 = __cxa_allocate_exception(4u);
      *v8 = v23;
      __cxa_throw(v8, (struct type_info *)&`typeinfo for'int, nullptr);
    }
    v24 = a1[67].m128i_i16[2];
    if ( v24 == 4 )
    {
      a1[67].m128i_i16[2] = 2;
LABEL_135:
      sub_5C092();
    }
    if ( v24 != 3 )
      goto LABEL_135;
    *(_DWORD *)(*(_QWORD *)(v10 + 24) + 4LL * *(_QWORD *)(v10 + 32) - 4) = a1[66].m128i_i64[0];
    sub_3E65E0(a1);
    v25 = a1[67].m128i_i16[2];
    if ( v25 == 125 )
      break;
    if ( v25 != 44 )
    {
      if ( v10 )
      {
        v63 = *(_QWORD *)(v10 + 24);
        if ( v63 )
        {
          *(_QWORD *)(v10 + 32) = 0;
          qfree(v63);
        }
        v64 = *(_QWORD *)v10;
        if ( *(_QWORD *)v10 )
        {
          v65 = *(_QWORD *)(v10 + 8);
          if ( v65 )
          {
            for ( ii = 0; ii != v65; ++ii )
            {
              v67 = (__int64 *)(v64 + 24 * ii);
              v68 = *v67;
              if ( *v67 )
              {
                v67[1] = 0;
                qfree(v68);
                v64 = *(_QWORD *)v10;
              }
            }
          }
          *(_QWORD *)(v10 + 8) = 0;
          qfree(v64);
        }
        j__qfree(v10);
      }
      v5 = __cxa_allocate_exception(4u);
      *v5 = 47;
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'int, nullptr);
    }
    sub_3E65E0(a1);
    v11 = *(_QWORD *)(v10 + 32);
  }
  if ( *(_QWORD *)(v10 + 32) <= 2u )
  {
    if ( v10 )
    {
      v57 = *(_QWORD *)(v10 + 24);
      if ( v57 )
      {
        *(_QWORD *)(v10 + 32) = 0;
        qfree(v57);
      }
      v58 = *(_QWORD *)v10;
      if ( *(_QWORD *)v10 )
      {
        v59 = *(_QWORD *)(v10 + 8);
        if ( v59 )
        {
          for ( jj = 0; jj != v59; ++jj )
          {
            v61 = (__int64 *)(v58 + 24 * jj);
            v62 = *v61;
            if ( *v61 )
            {
              v61[1] = 0;
              qfree(v62);
              v58 = *(_QWORD *)v10;
            }
          }
        }
        *(_QWORD *)(v10 + 8) = 0;
        qfree(v58);
      }
      j__qfree(v10);
    }
    v4 = __cxa_allocate_exception(8u);
    *v4 = "Too few jump cases (must be > 2)";
    __cxa_throw(v4, (struct type_info *)&`typeinfo for'char const*, nullptr);
  }
  sub_3E65E0(a1);
  sub_3E5EC0(v81);
  return v10;
}

