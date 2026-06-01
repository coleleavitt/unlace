__int64 __fastcall sub_3CE640(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v4; // r8
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 **v7; // rdi
  __int64 *v8; // rax
  __int64 *v9; // rdx
  __int64 v10; // rbx
  __int64 v12; // rax
  __int64 *v13; // r12
  __int64 v14; // rdi
  _QWORD *v15; // rax
  __int64 v16; // r13
  __int64 v17; // rbp
  __int64 v18; // r15
  int v19; // r8d
  __int64 v20; // rbp
  __int64 v21; // r15
  __int64 v22; // rbp
  __int64 v23; // r13
  __int64 v24; // rbp
  __int64 v25; // rax
  size_t v26; // r14
  _QWORD *v27; // r13
  __int64 v28; // r15
  __int64 v29; // r13
  __int64 v30; // rbp
  int v31; // esi
  __int64 v32; // rbp
  __int64 v33; // r13
  __int64 v34; // r15
  __int64 v35; // rbx
  __int64 v36; // rbp
  int v37; // ecx
  __int64 v38; // rbx
  void *v39; // rax
  void *v40; // rsi
  char *v41; // rsi
  char *v42; // rsi
  __m128i si128; // xmm0
  char *v44; // rsi
  char *v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // [rsp+0h] [rbp-88h]
  __int64 v52; // [rsp+0h] [rbp-88h]
  int v53; // [rsp+0h] [rbp-88h]
  __int64 v54; // [rsp+8h] [rbp-80h]
  __int64 v55; // [rsp+8h] [rbp-80h]
  __int64 v56; // [rsp+10h] [rbp-78h] BYREF
  __int128 v57; // [rsp+18h] [rbp-70h]
  void *src; // [rsp+30h] [rbp-58h] BYREF
  size_t n; // [rsp+38h] [rbp-50h]
  unsigned __int64 v60; // [rsp+48h] [rbp-40h]

  v2 = *(_DWORD *)a2;
  v60 = __readfsqword(0x28u);
  if ( v2 > 0x2F )
  {
    v15 = *(_QWORD **)(a2 + 8);
    v7 = (__int64 **)(v15 + 1);
    *(_QWORD *)(a2 + 8) = v15 + 1;
    v6 = *v15;
  }
  else
  {
    v4 = *(_QWORD *)(a2 + 16);
    v5 = v2 + 8;
    *(_DWORD *)a2 = v5;
    v6 = *(_QWORD *)(v4 + v2);
    if ( (unsigned int)v5 <= 0x2F )
    {
      v7 = (__int64 **)(v4 + v5);
      *(_DWORD *)a2 = v2 + 16;
      goto LABEL_4;
    }
    v7 = *(__int64 ***)(a2 + 8);
  }
  *(_QWORD *)(a2 + 8) = v7 + 1;
LABEL_4:
  v8 = *(__int64 **)(a1 + 2088);
  v9 = &v8[*(_QWORD *)(a1 + 2096)];
  if ( v8 != v9 )
  {
    while ( 1 )
    {
      v10 = *v8;
      if ( *v8 )
      {
        if ( *(_QWORD *)v10 == v6 )
          break;
      }
      if ( v9 == ++v8 )
        return 0;
    }
    v12 = *(_QWORD *)(v10 + 64);
    if ( v12 && (unsigned int)(*(_DWORD *)(v12 + 60) - 1) <= 1 && *(_QWORD *)(v10 + 80) )
    {
      v13 = *v7;
      v14 = *(_QWORD *)(v10 + 80);
      v57 = 0;
      v56 = 0;
      sub_3CB250(v14, &v56);
      if ( (_QWORD)v57 )
      {
        sub_3CC870((__int64 *)&src, &v56);
        v16 = v13[1];
        v51 = *(unsigned int *)(v10 + 8);
        v54 = *v13;
        if ( v16 )
        {
          v17 = *v13;
          v18 = 0;
          while ( !*(_QWORD *)(v17 + 8) || strcmp(*(const char **)v17, "view_index") )
          {
            ++v18;
            v17 += 40;
            if ( v16 == v18 )
              goto LABEL_51;
          }
        }
        else
        {
LABEL_51:
          if ( v13[2] < (unsigned __int64)(v16 + 1) )
          {
            v54 = qvector_reserve();
            v16 = v13[1];
            *v13 = v54;
          }
          v17 = v54 + 40 * v16;
          *(_QWORD *)v17 = 0;
          *(_OWORD *)(v17 + 8) = 0;
          *(_DWORD *)(v17 + 24) = 0;
          *(_QWORD *)(v17 + 32) = 0;
          ++v13[1];
          v41 = *(char **)v17;
          if ( *(_QWORD *)(v17 + 16) <= 0xAu )
          {
            v47 = qvector_reserve();
            *(_QWORD *)v17 = v47;
            v41 = (char *)v47;
          }
          *(_QWORD *)(v17 + 8) = 11;
          qmemcpy(v41, "view_index", 10);
          *(_BYTE *)(*(_QWORD *)v17 + 10LL) = 0;
        }
        v19 = *(_DWORD *)(v17 + 24);
        v20 = v17 + 24;
        if ( v19 )
          jvalue_t_clear();
        *(_DWORD *)v20 = 1;
        *(_QWORD *)(v20 + 8) = v51;
        v21 = v13[1];
        v52 = *v13;
        if ( v21 )
        {
          v22 = *v13;
          v23 = 0;
          while ( !*(_QWORD *)(v22 + 8) || strcmp(*(const char **)v22, "location") )
          {
            ++v23;
            v22 += 40;
            if ( v21 == v23 )
              goto LABEL_61;
          }
        }
        else
        {
LABEL_61:
          if ( v13[2] < (unsigned __int64)(v21 + 1) )
          {
            v52 = qvector_reserve();
            v21 = v13[1];
            *v13 = v52;
          }
          v22 = v52 + 40 * v21;
          *(_QWORD *)v22 = 0;
          *(_OWORD *)(v22 + 8) = 0;
          *(_DWORD *)(v22 + 24) = 0;
          *(_QWORD *)(v22 + 32) = 0;
          ++v13[1];
          v44 = *(char **)v22;
          if ( *(_QWORD *)(v22 + 16) <= 8u )
          {
            v46 = qvector_reserve();
            *(_QWORD *)v22 = v46;
            v44 = (char *)v46;
          }
          *(_QWORD *)(v22 + 8) = 9;
          *(_QWORD *)v44 = 0x6E6F697461636F6CLL;
          *(_BYTE *)(*(_QWORD *)v22 + 8LL) = 0;
        }
        v24 = v22 + 24;
        v25 = operator new(0x18u);
        v26 = n;
        *(_QWORD *)v25 = 0;
        v27 = (_QWORD *)v25;
        *(_OWORD *)(v25 + 8) = 0;
        if ( v26 )
        {
          v39 = (void *)qalloc_or_throw();
          *v27 = v39;
          v40 = src;
          v27[2] = v26;
          memcpy(v39, v40, v26);
          v27[1] = v26;
        }
        if ( *(_DWORD *)v24 )
          jvalue_t_clear();
        *(_QWORD *)(v24 + 8) = v27;
        v28 = 0;
        *(_DWORD *)v24 = 2;
        v29 = v13[1];
        v53 = *(_DWORD *)(v10 + 40);
        v55 = *v13;
        v30 = *v13;
        if ( v29 )
        {
          while ( !*(_QWORD *)(v30 + 8) || strcmp(*(const char **)v30, "x_cursor_in_view") )
          {
            ++v28;
            v30 += 40;
            if ( v29 == v28 )
              goto LABEL_56;
          }
        }
        else
        {
LABEL_56:
          if ( v13[2] < (unsigned __int64)(v29 + 1) )
          {
            v55 = qvector_reserve();
            v29 = v13[1];
            *v13 = v55;
          }
          v30 = v55 + 40 * v29;
          *(_QWORD *)v30 = 0;
          *(_OWORD *)(v30 + 8) = 0;
          *(_DWORD *)(v30 + 24) = 0;
          *(_QWORD *)(v30 + 32) = 0;
          ++v13[1];
          v42 = *(char **)v30;
          if ( *(_QWORD *)(v30 + 16) <= 0x10u )
          {
            v48 = qvector_reserve();
            *(_QWORD *)v30 = v48;
            v42 = (char *)v48;
          }
          si128 = _mm_load_si128((const __m128i *)&xmmword_407540);
          *(_QWORD *)(v30 + 8) = 17;
          *(__m128i *)v42 = si128;
          *(_BYTE *)(*(_QWORD *)v30 + 16LL) = 0;
        }
        v31 = *(_DWORD *)(v30 + 24);
        v32 = v30 + 24;
        if ( v31 )
          jvalue_t_clear();
        *(_DWORD *)v32 = 1;
        *(_QWORD *)(v32 + 8) = v53;
        if ( *(_QWORD *)(v10 + 88) )
        {
          v33 = v13[1];
          v34 = *v13;
          if ( v33 )
          {
            v35 = *v13;
            v36 = 0;
            while ( !*(_QWORD *)(v35 + 8) || strcmp(*(const char **)v35, "is_synchronized") )
            {
              ++v36;
              v35 += 40;
              if ( v33 == v36 )
                goto LABEL_66;
            }
          }
          else
          {
LABEL_66:
            if ( v13[2] < (unsigned __int64)(v33 + 1) )
            {
              v50 = qvector_reserve();
              *v13 = v50;
              v33 = v13[1];
              v34 = v50;
            }
            v35 = v34 + 40 * v33;
            *(_QWORD *)v35 = 0;
            *(_OWORD *)(v35 + 8) = 0;
            *(_DWORD *)(v35 + 24) = 0;
            *(_QWORD *)(v35 + 32) = 0;
            ++v13[1];
            v45 = *(char **)v35;
            if ( *(_QWORD *)(v35 + 16) <= 0xFu )
            {
              v49 = qvector_reserve();
              *(_QWORD *)v35 = v49;
              v45 = (char *)v49;
            }
            *(_QWORD *)(v35 + 8) = 16;
            qmemcpy(v45, "is_synchronized", 15);
            *(_BYTE *)(*(_QWORD *)v35 + 15LL) = 0;
          }
          v37 = *(_DWORD *)(v35 + 24);
          v38 = v35 + 24;
          if ( v37 )
            jvalue_t_clear();
          *(_DWORD *)v38 = 5;
          *(_BYTE *)(v38 + 8) = 1;
        }
        if ( src )
        {
          n = 0;
          qfree();
        }
      }
      if ( v56 )
      {
        *(_QWORD *)&v57 = 0;
        qfree();
      }
    }
  }
  return 0;
}

