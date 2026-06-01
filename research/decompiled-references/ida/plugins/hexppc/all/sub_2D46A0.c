unsigned __int64 __fastcall sub_2D46A0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r13
  _QWORD *v3; // rbx
  unsigned int v5; // eax
  __int64 v6; // rax
  size_t v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rsi
  __m128i *v10; // rbp
  __m128i v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rax
  __m128i v14; // xmm0
  _QWORD *v15; // rdx
  _QWORD *i; // rax
  _QWORD *v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 n; // [rsp+8h] [rbp-B0h]
  __int64 v24[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+20h] [rbp-98h]
  void *v26; // [rsp+28h] [rbp-90h]
  __m128i v27; // [rsp+30h] [rbp-88h] BYREF
  __int64 v28; // [rsp+40h] [rbp-78h]
  void *v29; // [rsp+48h] [rbp-70h]
  __m128i v30; // [rsp+50h] [rbp-68h] BYREF
  __int64 v31; // [rsp+60h] [rbp-58h]
  __int32 v32; // [rsp+68h] [rbp-50h]
  unsigned __int64 v33; // [rsp+78h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  v2 = (_QWORD *)*a1;
  if ( *a1 )
  {
    if ( a1[1] )
    {
      v3 = (_QWORD *)v2[1];
      while ( v2 != v3 )
      {
        v5 = *((_DWORD *)v3 + 14);
        if ( v5 == 3 )
        {
          *(_QWORD *)(a2 + 40) = v3[18];
        }
        else if ( v5 > 3 )
        {
          if ( v5 != 4 )
          {
LABEL_32:
            if ( !under_debugger )
              sub_37EEE0(52588);
            BUG();
          }
          *(_DWORD *)(a2 + 48) = v3[18];
        }
        else if ( v5 == 1 )
        {
          v24[0] = (__int64)(v3 + 3);
          v21 = sub_2158C0((__m128i *)(a2 + 24), (__int64)(v3 + 3), v24) + 24;
          copy_argloc();
          *(_QWORD *)(v21 + 40) = v3[10];
        }
        else
        {
          if ( v5 != 2 )
            goto LABEL_32;
          LODWORD(v24[0]) = 0;
          copy_argloc();
          v6 = v3[10];
          v26 = nullptr;
          v27 = 0;
          v25 = v6;
          v7 = v3[12];
          if ( v7 )
          {
            v26 = (void *)qalloc_or_throw();
            v27.m128i_i64[1] = v7;
            memcpy(v26, (const void *)v3[11], v7);
            v27.m128i_i64[0] = v7;
          }
          v28 = 0;
          copy_tinfo_t();
          v29 = nullptr;
          v30 = 0;
          if ( v3[16] )
          {
            n = v3[16];
            v29 = (void *)qalloc_or_throw();
            v30.m128i_i64[1] = n;
            memcpy(v29, (const void *)v3[15], n);
            v30.m128i_i64[0] = n;
          }
          v8 = *(_QWORD *)(a2 + 8);
          v9 = *(_QWORD *)a2;
          v31 = v3[18];
          v32 = *((_DWORD *)v3 + 38);
          if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v8 + 1) )
          {
            v22 = qvector_reserve();
            *(_QWORD *)a2 = v22;
            v8 = *(_QWORD *)(a2 + 8);
            v9 = v22;
          }
          v10 = (__m128i *)(v9 + 96 * v8);
          v10->m128i_i32[0] = 0;
          copy_argloc();
          v10[1].m128i_i64[0] = v25;
          v11 = _mm_load_si128(&v27);
          v12 = (__int64)v26;
          v26 = nullptr;
          v10[2] = v11;
          v27 = 0;
          v10[1].m128i_i64[1] = v12;
          v10[3].m128i_i64[0] = 0;
          copy_tinfo_t();
          v13 = (__int64)v29;
          v14 = _mm_load_si128(&v30);
          v29 = nullptr;
          v10[4] = v14;
          v10[3].m128i_i64[1] = v13;
          v30 = 0;
          v10[5].m128i_i64[0] = v31;
          v10[5].m128i_i32[2] = v32;
          ++*(_QWORD *)(a2 + 8);
          sub_2B5D00(v24);
        }
        if ( (*v3 & 2) == 0 )
        {
          v15 = (_QWORD *)v3[2];
          if ( (*(_BYTE *)v15 & 2) != 0 )
          {
            v18 = (_QWORD *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
            v19 = *v18;
            if ( (*v18 & 2) == 0 )
            {
              while ( (_QWORD *)v18[2] == v3 )
              {
                v3 = v18;
                v20 = v19 & 0xFFFFFFFFFFFFFFFCLL;
                v19 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v19 & 2) != 0 )
                {
                  v3 = (_QWORD *)v20;
                  goto LABEL_20;
                }
                v18 = (_QWORD *)v20;
              }
            }
            v3 = v18;
          }
          else
          {
            for ( i = (_QWORD *)v15[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
              v15 = i;
            v3 = v15;
          }
        }
LABEL_20:
        ;
      }
    }
  }
  return v33 - __readfsqword(0x28u);
}

