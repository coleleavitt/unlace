__int64 __fastcall sub_5950(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  const char *v8; // rbx
  size_t v9; // rax
  __int64 v10; // r12
  size_t v11; // rbp
  __int64 *v12; // r15
  __int64 *v13; // rbp
  char *v14; // r13
  char *v15; // r14
  __int64 *v16; // r12
  char *v17; // rsi
  const char *v18; // rdi
  int v19; // eax
  __int64 *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 *v23; // r12
  _QWORD *v24; // rbx
  __int64 v25; // rax
  __m128i v26; // xmm0
  char *v27; // r13
  __int64 *v28; // rax
  __int64 v29; // rdx
  __int64 *v30; // rbx
  unsigned __int64 v31; // xmm0_8
  const char *v32; // rsi
  char *v33; // rdi
  int next; // eax
  const char *v35; // r12
  size_t v36; // rax
  __int64 v37; // r13
  size_t v38; // rbx
  _QWORD *v39; // r15
  _QWORD *v40; // rbx
  __int64 v41; // r12
  char *v42; // r14
  char *v43; // rax
  _QWORD *v44; // r13
  const char *v45; // rsi
  const char *v46; // rdi
  int v47; // eax
  _QWORD *v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  const char *v51; // rsi
  const char *v52; // rdi
  __int64 v53; // rax
  char *v54; // r13
  __m128i v55; // xmm0
  _QWORD *v56; // rsi
  _QWORD *v57; // rax
  __int64 v58; // rdx
  _QWORD *v59; // r12
  unsigned __int64 v60; // xmm0_8
  void *v61; // rdi
  const char *v62; // rsi
  __int64 *v63; // rdi
  const char *v64; // rsi
  __m128i v65; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v66; // [rsp+20h] [rbp-D8h] BYREF
  __int64 *v67; // [rsp+30h] [rbp-C8h]
  _QWORD *v68; // [rsp+38h] [rbp-C0h]
  __int64 v69; // [rsp+48h] [rbp-B0h] BYREF
  char *s2; // [rsp+50h] [rbp-A8h]
  __m128i v71; // [rsp+58h] [rbp-A0h] BYREF
  int v72; // [rsp+70h] [rbp-88h]
  char *v73; // [rsp+78h] [rbp-80h]
  char *v74; // [rsp+80h] [rbp-78h]
  unsigned __int64 v75; // [rsp+88h] [rbp-70h]
  char v76; // [rsp+90h] [rbp-68h] BYREF
  __int64 v77; // [rsp+A0h] [rbp-58h]

  v77 = a3;
  v75 = __readfsqword(0x28u);
  if ( a2 == 1 )
  {
    v8 = *(const char **)a1;
    v72 = 16;
    v73 = &a7;
    v74 = &v76;
    v65.m128i_i64[0] = *(_QWORD *)(a1 + 24);
    s2 = nullptr;
    v71 = 0;
    if ( v8 )
    {
      v9 = strlen(v8);
      v10 = v9 + 1;
      v11 = v9;
      s2 = (char *)qvector_reserve();
      v71.m128i_i64[0] = v10;
      memmove(s2, v8, v11);
      s2[v11] = 0;
    }
    v12 = *(__int64 **)(v65.m128i_i64[0] + 136);
    v67 = (__int64 *)(v65.m128i_i64[0] + 128);
    v13 = (__int64 *)(v65.m128i_i64[0] + 128);
    if ( !v12 )
      goto LABEL_19;
    v14 = s2;
    v15 = (char *)&s1;
    v13 = v67;
    if ( v71.m128i_i64[0] )
      v15 = s2;
    while ( 1 )
    {
      v21 = v12[5];
      if ( !v71.m128i_i64[0] )
        break;
      if ( v21 )
        goto LABEL_18;
      v16 = v12;
      v17 = s2;
      v18 = &s1;
LABEL_11:
      v19 = strcmp(v18, v17);
      v20 = (__int64 *)v12[2];
      v12 = (__int64 *)v12[3];
      if ( v19 >= 0 )
      {
        v13 = v16;
        v12 = v20;
      }
      if ( !v12 )
        goto LABEL_24;
    }
    if ( !v21 )
    {
      while ( 1 )
      {
        v22 = v12[2];
        if ( !v22 )
          break;
        v13 = v12;
        v12 = (__int64 *)v12[2];
        if ( *(_QWORD *)(v22 + 40) )
          goto LABEL_18;
      }
      v13 = v12;
LABEL_24:
      if ( v67 == v13 )
        goto LABEL_19;
      if ( v13[5] )
      {
        v32 = (const char *)v13[4];
        v33 = (char *)&s1;
        if ( !v71.m128i_i64[0] )
          goto LABEL_27;
        goto LABEL_51;
      }
      v32 = &s1;
      if ( v71.m128i_i64[0] )
      {
LABEL_51:
        v33 = s2;
LABEL_27:
        if ( strcmp(v33, v32) >= 0 )
          goto LABEL_28;
LABEL_19:
        v23 = v13;
        v24 = (_QWORD *)(v65.m128i_i64[0] + 120);
        v25 = operator new(0x68u);
        v26 = _mm_loadu_si128(&v71);
        v13 = (__int64 *)v25;
        v25 += 64;
        v27 = s2;
        *(__m128i *)(v25 - 24) = v26;
        *(_QWORD *)(v25 - 32) = v27;
        *(_DWORD *)v25 = 0;
        *(_QWORD *)(v25 + 8) = 0;
        v13[10] = v25;
        v13[11] = v25;
        v13[12] = 0;
        s2 = nullptr;
        v66 = v26;
        v71 = 0;
        v28 = sub_5480(v24, v23, (__int64)(v13 + 4));
        v30 = v28;
        if ( v29 )
        {
          if ( !v28 )
          {
            v31 = _mm_load_si128(&v66).m128i_u64[0];
            if ( v67 != (__int64 *)v29 )
            {
              v64 = &s1;
              if ( *(_QWORD *)(v29 + 40) )
                v64 = *(const char **)(v29 + 32);
              v66.m128i_i64[0] = v29;
              if ( !v31 )
                v27 = (char *)&s1;
              strcmp(v27, v64);
            }
          }
          std::_Rb_tree_insert_and_rebalance();
          ++*(_QWORD *)(v65.m128i_i64[0] + 160);
          v14 = s2;
          goto LABEL_28;
        }
        if ( v13 )
        {
          sub_2A00(nullptr);
          if ( v13[4] )
          {
            v13[5] = 0;
            qfree();
          }
          v63 = v13;
          v13 = v30;
          operator delete(v63, 0x68u);
          v14 = s2;
          goto LABEL_28;
        }
        v13 = v28;
      }
      else
      {
LABEL_28:
        if ( v14 )
        {
          v71.m128i_i64[0] = 0;
          qfree();
        }
      }
      v67 = &v69;
      v68 = v13 + 8;
      while ( 1 )
      {
LABEL_31:
        next = idt_get_next();
        if ( next == 4 )
          return 0;
        if ( !next )
        {
          v66.m128i_i32[0] = *(_DWORD *)(v69 + 20);
          if ( v66.m128i_i32[0] != -1 )
            break;
        }
      }
      v35 = *(const char **)(v69 + 8);
      s2 = nullptr;
      v71 = 0;
      if ( v35 )
      {
        v36 = strlen(v35);
        v37 = v36 + 1;
        v38 = v36;
        s2 = (char *)qvector_reserve();
        v71.m128i_i64[0] = v37;
        memmove(s2, v35, v38);
        s2[v38] = 0;
      }
      v39 = (_QWORD *)v13[9];
      v40 = v68;
      if ( !v39 )
        goto LABEL_58;
      v41 = v71.m128i_i64[0];
      v42 = s2;
      v43 = (char *)&s1;
      v40 = v68;
      if ( v71.m128i_i64[0] )
        v43 = s2;
      v65.m128i_i64[0] = (__int64)v43;
      while ( 2 )
      {
        v49 = v39[5];
        if ( v41 )
        {
          if ( v49 )
            goto LABEL_49;
          v44 = v39;
          v45 = v42;
          v46 = &s1;
        }
        else
        {
          if ( !v49 )
          {
            while ( 1 )
            {
              v50 = v39[2];
              if ( !v50 )
                break;
              v40 = v39;
              v39 = (_QWORD *)v39[2];
              if ( *(_QWORD *)(v50 + 40) )
                goto LABEL_49;
            }
            v40 = v39;
LABEL_53:
            if ( v68 == v40 )
              goto LABEL_58;
            if ( v40[5] )
            {
              v51 = (const char *)v40[4];
              v52 = &s1;
              if ( v41 )
                goto LABEL_56;
LABEL_57:
              if ( strcmp(v52, v51) < 0 )
              {
LABEL_58:
                v53 = operator new(0x40u);
                v54 = s2;
                v55 = _mm_loadu_si128(&v71);
                v56 = v40;
                *(_DWORD *)(v53 + 56) = 0;
                v40 = (_QWORD *)v53;
                *(_QWORD *)(v53 + 32) = v54;
                *(__m128i *)(v53 + 40) = v55;
                s2 = nullptr;
                v65 = v55;
                v71 = 0;
                v57 = sub_5790(v13 + 7, v56, v53 + 32);
                v59 = v57;
                if ( v58 )
                {
                  if ( v68 != (_QWORD *)v58 )
                  {
                    v60 = _mm_load_si128(&v65).m128i_u64[0];
                    if ( !v57 )
                    {
                      v62 = &s1;
                      if ( *(_QWORD *)(v58 + 40) )
                        v62 = *(const char **)(v58 + 32);
                      v65.m128i_i64[0] = v58;
                      if ( !v60 )
                        v54 = (char *)&s1;
                      strcmp(v54, v62);
                    }
                  }
                  std::_Rb_tree_insert_and_rebalance();
                  ++v13[12];
                  v42 = s2;
                  goto LABEL_62;
                }
                if ( v40 )
                {
                  if ( v54 )
                  {
                    v40[5] = 0;
                    qfree();
                  }
                  v61 = v40;
                  v40 = v59;
                  operator delete(v61, 0x40u);
                  v42 = s2;
                  goto LABEL_62;
                }
                *((_DWORD *)v57 + 14) = v66.m128i_i32[0];
                goto LABEL_31;
              }
            }
            else
            {
              v51 = &s1;
              if ( v41 )
              {
LABEL_56:
                v52 = v42;
                goto LABEL_57;
              }
            }
LABEL_62:
            *((_DWORD *)v40 + 14) = v66.m128i_i32[0];
            if ( v42 )
            {
              v71.m128i_i64[0] = 0;
              qfree();
            }
            goto LABEL_31;
          }
LABEL_49:
          v46 = (const char *)v39[4];
          v45 = (const char *)v65.m128i_i64[0];
          v44 = v39;
        }
        v47 = strcmp(v46, v45);
        v48 = (_QWORD *)v39[2];
        v39 = (_QWORD *)v39[3];
        if ( v47 >= 0 )
        {
          v40 = v44;
          v39 = v48;
        }
        if ( !v39 )
          goto LABEL_53;
        continue;
      }
    }
LABEL_18:
    v18 = (const char *)v12[4];
    v16 = v12;
    v17 = v15;
    goto LABEL_11;
  }
  return 0;
}

