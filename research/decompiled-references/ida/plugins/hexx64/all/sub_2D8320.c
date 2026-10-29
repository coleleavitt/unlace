unsigned __int64 __fastcall sub_2D8320(_QWORD *a1, __int64 a2, double a3)
{
  _QWORD *v3; // r13
  _QWORD *v4; // rbx
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  size_t v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rsi
  __m128i *v15; // rbp
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rax
  __m128i v19; // xmm0
  _QWORD *v20; // rdx
  _QWORD *i; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r15
  __int64 v27; // rax
  __int64 n; // [rsp+8h] [rbp-B0h]
  __int64 v29[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+20h] [rbp-98h]
  void *v31; // [rsp+28h] [rbp-90h]
  __m128i v32; // [rsp+30h] [rbp-88h] BYREF
  __int64 v33; // [rsp+40h] [rbp-78h]
  void *v34; // [rsp+48h] [rbp-70h]
  __m128i v35; // [rsp+50h] [rbp-68h] BYREF
  __int64 v36; // [rsp+60h] [rbp-58h]
  __int32 v37; // [rsp+68h] [rbp-50h]
  unsigned __int64 v38; // [rsp+78h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v3 = (_QWORD *)*a1;
  if ( *a1 )
  {
    if ( a1[1] )
    {
      v4 = (_QWORD *)v3[1];
      while ( v3 != v4 )
      {
        v6 = *((_DWORD *)v4 + 14);
        if ( v6 == 3 )
        {
          *(_QWORD *)(a2 + 40) = v4[18];
        }
        else if ( v6 > 3 )
        {
          if ( v6 != 4 )
          {
LABEL_32:
            if ( !under_debugger )
              sub_383060(0xCD6Cu, a3);
            BUG();
          }
          *(_DWORD *)(a2 + 48) = v4[18];
        }
        else if ( v6 == 1 )
        {
          v29[0] = (__int64)(v4 + 3);
          v26 = sub_219540((__m128i *)(a2 + 24), (int *)v4 + 6, v29) + 24;
          copy_argloc();
          *(_QWORD *)(v26 + 40) = v4[10];
        }
        else
        {
          if ( v6 != 2 )
            goto LABEL_32;
          LODWORD(v29[0]) = 0;
          copy_argloc();
          v9 = v4[10];
          v31 = nullptr;
          v32 = 0;
          v30 = v9;
          v10 = v4[12];
          if ( v10 )
          {
            v31 = (void *)qalloc_or_throw(v4[12], (__int64)(v4 + 8), v7, v8);
            v32.m128i_i64[1] = v10;
            memcpy(v31, (const void *)v4[11], v10);
            v32.m128i_i64[0] = v10;
          }
          v33 = 0;
          copy_tinfo_t();
          v34 = nullptr;
          v35 = 0;
          v12 = v4[16];
          if ( v12 )
          {
            n = v4[16];
            v34 = (void *)qalloc_or_throw(n, (__int64)(v4 + 14), v12, v11);
            v35.m128i_i64[1] = n;
            memcpy(v34, (const void *)v4[15], n);
            v35.m128i_i64[0] = n;
          }
          v13 = *(_QWORD *)(a2 + 8);
          v14 = *(_QWORD *)a2;
          v36 = v4[18];
          v37 = *((_DWORD *)v4 + 38);
          if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v13 + 1) )
          {
            v27 = qvector_reserve(a2, v14, v13 + 1, 96);
            *(_QWORD *)a2 = v27;
            v13 = *(_QWORD *)(a2 + 8);
            v14 = v27;
          }
          v15 = (__m128i *)(v14 + 96 * v13);
          v15->m128i_i32[0] = 0;
          copy_argloc();
          v15[1].m128i_i64[0] = v30;
          v16 = _mm_load_si128(&v32);
          v17 = (__int64)v31;
          v31 = nullptr;
          v15[2] = v16;
          v32 = 0;
          v15[1].m128i_i64[1] = v17;
          v15[3].m128i_i64[0] = 0;
          copy_tinfo_t();
          v18 = (__int64)v34;
          v19 = _mm_load_si128(&v35);
          v34 = nullptr;
          v15[4] = v19;
          a3 = 0.0;
          v15[3].m128i_i64[1] = v18;
          v35 = 0;
          v15[5].m128i_i64[0] = v36;
          v15[5].m128i_i32[2] = v37;
          ++*(_QWORD *)(a2 + 8);
          sub_2B9980(v29);
        }
        if ( (*v4 & 2) == 0 )
        {
          v20 = (_QWORD *)v4[2];
          if ( (*(_BYTE *)v20 & 2) != 0 )
          {
            v23 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFCLL);
            v24 = *v23;
            if ( (*v23 & 2) == 0 )
            {
              while ( (_QWORD *)v23[2] == v4 )
              {
                v4 = v23;
                v25 = v24 & 0xFFFFFFFFFFFFFFFCLL;
                v24 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v24 & 2) != 0 )
                {
                  v4 = (_QWORD *)v25;
                  goto LABEL_20;
                }
                v23 = (_QWORD *)v25;
              }
            }
            v4 = v23;
          }
          else
          {
            for ( i = (_QWORD *)v20[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
              v20 = i;
            v4 = v20;
          }
        }
LABEL_20:
        ;
      }
    }
  }
  return v38 - __readfsqword(0x28u);
}

