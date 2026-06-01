unsigned __int64 __fastcall sub_19B80(__int64 a1, const __m128i **a2)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  const char *v6; // rsi
  const char *v7; // rdi
  int v8; // eax
  char *v9; // rdx
  char v10; // al
  char *v11; // rax
  __m128 v12; // xmm1
  const __m128i *v13; // r8
  const __m128i *v14; // r15
  __m128i *v15; // r15
  unsigned __int64 v16; // r9
  size_t v18; // r10
  const void *v19; // r11
  void *v20; // rax
  __int64 v21; // rax
  const __m128i *v22; // rdx
  const __m128i *v23; // r8
  const __m128i *v24; // rdi
  __int64 v25; // rdx
  __int32 v26; // ecx
  __int64 v27; // rcx
  __m128i v28; // xmm0
  unsigned __int64 v30; // [rsp+8h] [rbp-70h]
  const __m128i *v31; // [rsp+8h] [rbp-70h]
  const __m128i *v32; // [rsp+8h] [rbp-70h]
  unsigned __int64 v33; // [rsp+8h] [rbp-70h]
  size_t v34; // [rsp+10h] [rbp-68h]
  const void *v35; // [rsp+18h] [rbp-60h]
  char *s1; // [rsp+20h] [rbp-58h]
  __int128 v37; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v38; // [rsp+38h] [rbp-40h]

  v2 = a1 + 1216;
  v38 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 1232);
  if ( v3 != a1 + 1216 )
  {
    do
    {
      v37 = 0;
      v10 = sub_19A60(a1);
      v9 = nullptr;
      if ( !v10 )
        goto LABEL_6;
      if ( *(_QWORD *)(v3 + 80) )
      {
        v6 = *(const char **)(v3 + 72);
        v7 = s;
        if ( !(_QWORD)v37 )
          goto LABEL_5;
      }
      else
      {
        v6 = s;
        if ( !(_QWORD)v37 )
          goto LABEL_6;
      }
      v7 = nullptr;
LABEL_5:
      v8 = strcmp(v7, v6);
      v9 = nullptr;
      if ( v8 )
      {
        v11 = *(char **)(v3 + 72);
        *(_QWORD *)(v3 + 72) = 0;
        s1 = v11;
        v12 = _mm_loadh_ps((const double *)&v37 + 1);
        *((_QWORD *)&v37 + 1) = _mm_loadh_ps((const double *)(v3 + 88)).m128_u64[1];
        *(__m128 *)(v3 + 80) = v12;
        v13 = a2[1];
        if ( a2[2] < (const __m128i *)&v13->m128i_i8[1] )
        {
          v31 = a2[2];
          v21 = qvector_reserve();
          v22 = a2[1];
          v14 = (const __m128i *)v21;
          v23 = a2[2];
          v24 = *a2;
          a2[2] = v31;
          v25 = (__int64)&v22[-1].m128i_i64[1] + 7;
          if ( v25 >= 0 )
          {
            do
            {
              v26 = v24->m128i_i32[0];
              v21 += 32;
              v24 += 2;
              *(_DWORD *)(v21 - 32) = v26;
              v27 = v24[-2].m128i_i64[1];
              v28 = _mm_loadu_si128(v24 - 1);
              v24[-2].m128i_i64[1] = 0;
              *(_QWORD *)(v21 - 24) = v27;
              *(__m128i *)(v21 - 16) = v28;
              v24[-1].m128i_i64[1] = 0;
            }
            while ( v25-- != 0 );
          }
          v32 = v23;
          qfree();
          *a2 = v14;
          a2[2] = v32;
          v13 = a2[1];
        }
        else
        {
          v14 = *a2;
        }
        v15 = (__m128i *)&v14[2 * (_QWORD)v13];
        v15->m128i_i64[1] = 0;
        v15[1] = 0;
        a2[1] = (const __m128i *)((char *)a2[1] + 1);
        v15->m128i_i32[0] = *(_DWORD *)(v3 + 40);
        if ( &v15->m128i_u64[1] != (unsigned __int64 *)(v3 + 72) )
        {
          v16 = *(_QWORD *)(v3 + 80);
          if ( v16 )
          {
            v18 = v16 - 1;
            if ( v16 != 1 )
            {
              v19 = *(const void **)(v3 + 72);
              v20 = (void *)v15->m128i_i64[1];
              if ( v15[1].m128i_i64[1] < v16 )
              {
                v35 = *(const void **)(v3 + 72);
                v34 = v16 - 1;
                v33 = *(_QWORD *)(v3 + 80);
                v20 = (void *)qvector_reserve();
                v19 = v35;
                v18 = v34;
                v15->m128i_i64[1] = (__int64)v20;
                v16 = v33;
              }
              v15[1].m128i_i64[0] = v16;
              v30 = v16;
              memmove(v20, v19, v18);
              *(_BYTE *)(v15->m128i_i64[1] + v30 - 1) = 0;
              v9 = s1;
              goto LABEL_6;
            }
          }
          v15[1].m128i_i64[0] = 0;
        }
        v9 = s1;
      }
LABEL_6:
      if ( v9 )
        qfree();
      v3 = std::_Rb_tree_increment();
    }
    while ( v3 != v2 );
  }
  return v38 - __readfsqword(0x28u);
}

