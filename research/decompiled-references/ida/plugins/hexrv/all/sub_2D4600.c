__m128i *__fastcall sub_2D4600(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  __int64 v6; // r13
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 i; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __m128i *v12; // rax
  __m128i *v13; // r12
  _QWORD *v14; // rax
  _QWORD *v15; // r15
  __int64 v16; // r13
  char *v17; // r10
  size_t v18; // r11
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // r13
  char *v22; // r10
  size_t v23; // r11
  const void *v24; // r8
  void *v25; // rax
  char *v26; // rcx
  char *v27; // r13
  __int64 v28; // rax
  char *v29; // rdx
  __int64 *v30; // r14
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 v33; // rbp
  char *v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  const void *v38; // r8
  void *v39; // rax
  __int64 *v40; // [rsp+8h] [rbp-A0h] BYREF
  unsigned __int64 v41; // [rsp+10h] [rbp-98h]
  char *v42; // [rsp+18h] [rbp-90h]
  size_t v43; // [rsp+20h] [rbp-88h]
  const void *v44; // [rsp+28h] [rbp-80h]
  _BYTE *v45; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v46[24]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v47; // [rsp+58h] [rbp-50h]
  int v48; // [rsp+60h] [rbp-48h]
  unsigned __int64 v49; // [rsp+68h] [rbp-40h]

  v40 = a4;
  v49 = __readfsqword(0x28u);
  v6 = a1 + 32;
  v7 = *(_QWORD *)(a1 + 32);
  if ( v7 )
  {
    v8 = *(_QWORD *)(a1 + 40);
    if ( v8 )
    {
      for ( i = 0; i != v8; ++i )
      {
        v10 = 3 * i;
        sub_2B4D80((_QWORD *)(32 * v10 + v7));
        v7 = *(_QWORD *)(a1 + 32);
      }
    }
    *(_QWORD *)(a1 + 40) = 0;
    qfree();
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 48) = 0;
  }
  sub_7F750((unsigned __int64 **)(a1 + 56));
  *(_QWORD *)(a1 + 24) = v6;
  v11 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 72) = 0;
  *(__m128 *)v46 = _mm_loadh_ps((const double *)&v40);
  sub_2D2770(a2, v6, (__m128i *)v46, v11, nullptr, *(__m128i *)v46);
  *a3 = *(_QWORD *)v46;
  v12 = (__m128i *)qalloc();
  v13 = v12;
  if ( !v12 )
    sub_4E430(16);
  v12->m128i_i64[0] = 0;
  v12->m128i_i64[1] = 0;
  v14 = *(_QWORD **)(a1 + 24);
  v15 = (_QWORD *)*v14;
  v16 = 12LL * v14[1];
  v40 = (__int64 *)&v45;
  v41 = (unsigned __int64)&v15[v16];
  if ( &v15[v16] != v15 )
  {
    do
    {
      *(_DWORD *)v46 = 0;
      copy_argloc();
      v20 = v15[2];
      v47 = a2;
      *(_QWORD *)&v46[16] = v20;
      v48 = 2;
      v45 = v46;
      v21 = sub_2D4470(v13, (__int64)v46, v40) + 24;
      copy_argloc();
      *(_QWORD *)(v21 + 56) = v15[2];
      if ( (_QWORD *)(v21 + 64) != v15 + 3 )
      {
        v22 = (char *)v15[4];
        if ( !v22 || (v23 = (size_t)(v22 - 1), v22 == &byte_1) )
        {
          *(_QWORD *)(v21 + 72) = 0;
        }
        else
        {
          v24 = (const void *)v15[3];
          v25 = *(void **)(v21 + 64);
          if ( *(_QWORD *)(v21 + 80) < (unsigned __int64)v22 )
          {
            v44 = (const void *)v15[3];
            v43 = (size_t)(v22 - 1);
            v42 = v22;
            v25 = (void *)qvector_reserve();
            v24 = v44;
            v23 = v43;
            *(_QWORD *)(v21 + 64) = v25;
            v22 = v42;
          }
          *(_QWORD *)(v21 + 72) = v22;
          v42 = v22;
          memmove(v25, v24, v23);
          v42[*(_QWORD *)(v21 + 64) - 1] = 0;
        }
      }
      copy_tinfo_t();
      if ( (_QWORD *)(v21 + 96) != v15 + 7 )
      {
        v17 = (char *)v15[8];
        if ( v17 && (v18 = (size_t)(v17 - 1), v17 != &byte_1) )
        {
          v38 = (const void *)v15[7];
          v39 = *(void **)(v21 + 96);
          if ( *(_QWORD *)(v21 + 112) < (unsigned __int64)v17 )
          {
            v44 = (const void *)v15[7];
            v43 = (size_t)(v17 - 1);
            v42 = v17;
            v39 = (void *)qvector_reserve();
            v38 = v44;
            v18 = v43;
            *(_QWORD *)(v21 + 96) = v39;
            v17 = v42;
          }
          *(_QWORD *)(v21 + 104) = v17;
          v42 = v17;
          memmove(v39, v38, v18);
          v42[*(_QWORD *)(v21 + 96) - 1] = 0;
        }
        else
        {
          *(_QWORD *)(v21 + 104) = 0;
        }
      }
      v19 = v15[10];
      v15 += 12;
      *(_QWORD *)(v21 + 120) = v19;
      *(_DWORD *)(v21 + 128) = *((_DWORD *)v15 - 2);
      cleanup_argloc();
    }
    while ( (_QWORD *)v41 != v15 );
    v14 = *(_QWORD **)(a1 + 24);
  }
  v26 = (char *)v14[3];
  v42 = v26;
  if ( v26 )
  {
    if ( v14[4] )
    {
      v27 = *((char **)v26 + 1);
      if ( v26 != v27 )
      {
        while ( 1 )
        {
LABEL_25:
          while ( 1 )
          {
            *(_DWORD *)v46 = 0;
            copy_argloc();
            v28 = *((_QWORD *)v27 + 5);
            v47 = a2;
            *(_QWORD *)&v46[16] = v28;
            v48 = 1;
            v45 = v46;
            v41 = sub_2D4470(v13, (__int64)v46, v40) + 24;
            copy_argloc();
            *(_QWORD *)(v41 + 56) = *((_QWORD *)v27 + 8);
            cleanup_argloc();
            if ( (*(_QWORD *)v27 & 2) == 0 )
              break;
LABEL_29:
            if ( v27 == v42 )
              goto LABEL_30;
          }
          v29 = *((char **)v27 + 2);
          if ( (*v29 & 2) == 0 )
          {
            while ( (**((_BYTE **)v29 + 1) & 2) == 0 )
              v29 = *((char **)v29 + 1);
            v27 = v29;
            goto LABEL_29;
          }
          v35 = (char *)(*(_QWORD *)v27 & 0xFFFFFFFFFFFFFFFCLL);
          v36 = *(_QWORD *)v35;
          if ( (*(_QWORD *)v35 & 2) == 0 )
          {
            while ( *((char **)v35 + 2) == v27 )
            {
              v27 = v35;
              v37 = v36 & 0xFFFFFFFFFFFFFFFCLL;
              v36 = *(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v36 & 2) != 0 )
              {
                v27 = (char *)v37;
                if ( (char *)v37 != v42 )
                  goto LABEL_25;
                goto LABEL_30;
              }
              v35 = (char *)v37;
            }
          }
          v27 = v35;
          if ( v35 == v42 )
          {
LABEL_30:
            v14 = *(_QWORD **)(a1 + 24);
            break;
          }
        }
      }
    }
  }
  v30 = v40;
  v31 = v14[5];
  v45 = v46;
  v48 = 3;
  *(_QWORD *)v46 = 0;
  v47 = 0;
  *(__m128i *)&v46[8] = _mm_load_si128((const __m128i *)&xmmword_3FE260);
  *(_QWORD *)(sub_2D4470(v13, (__int64)v46, v40) + 144) = v31;
  cleanup_argloc();
  v32 = *(_QWORD *)(a1 + 24);
  v45 = v46;
  v33 = *(int *)(v32 + 48);
  v48 = 4;
  *(_QWORD *)v46 = 0;
  v47 = 0;
  *(__m128i *)&v46[8] = _mm_load_si128((const __m128i *)&xmmword_3FE260);
  *(_QWORD *)(sub_2D4470(v13, (__int64)v46, v30) + 144) = v33;
  cleanup_argloc();
  return v13;
}

