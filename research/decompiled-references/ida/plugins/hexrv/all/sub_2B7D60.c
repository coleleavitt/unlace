unsigned __int64 __fastcall sub_2B7D60(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  __int64 v8; // r13
  unsigned __int64 v9; // r12
  size_t v10; // r8
  int v11; // r13d
  const char *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // r12
  __int64 v18; // r14
  __int64 v19; // r13
  __int64 v20; // rsi
  __m128i v21; // xmm0
  void *v24; // r9
  void *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // [rsp+0h] [rbp-88h]
  size_t v28; // [rsp+0h] [rbp-88h]
  int v29; // [rsp+10h] [rbp-78h]
  void *v30; // [rsp+10h] [rbp-78h]
  unsigned __int64 v31; // [rsp+18h] [rbp-70h]
  int v32; // [rsp+20h] [rbp-68h]
  int v33; // [rsp+24h] [rbp-64h]
  __int64 v34; // [rsp+28h] [rbp-60h]
  void *src; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v36; // [rsp+38h] [rbp-50h]
  unsigned __int64 v37; // [rsp+48h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v32 = 0;
  v33 = unpack_dd();
  if ( v33 > 0 )
  {
    do
    {
      v11 = unpack_dd();
      v31 = sub_32D000(a3, *(_QWORD *)(a1 + 8));
      v12 = (const char *)sub_32CFC0(a3, *(_QWORD *)(a3 + 8));
      sub_7D4C0((__int64)&src, v12);
      v13 = *(_QWORD *)(a1 + 24);
      if ( !v13 || (v29 = sub_23AEB0(v13, v31, 0), v29 == -1) )
        v29 = v11;
      v6 = a2[1];
      v7 = a2[2];
      if ( v7 < v6 + 1 )
      {
        v14 = qvector_reserve();
        v15 = a2[2];
        v16 = a2[1];
        a2[2] = v7;
        v27 = v14;
        v17 = *a2;
        v34 = v15;
        v18 = v16 - 1;
        if ( v18 >= 0 )
        {
          v19 = v14;
          do
          {
            v20 = *(_QWORD *)v17;
            v21 = _mm_loadu_si128((const __m128i *)(v17 + 8));
            *(_QWORD *)v17 = 0;
            *(_QWORD *)(v17 + 16) = 0;
            *(_QWORD *)v19 = v20;
            *(__m128i *)(v19 + 8) = v21;
            *(_QWORD *)(v19 + 24) = *(_QWORD *)(v17 + 24);
            *(_DWORD *)(v19 + 32) = *(_DWORD *)(v17 + 32);
            if ( *(_QWORD *)v17 )
            {
              *(_QWORD *)(v17 + 8) = 0;
              qfree();
            }
            v17 += 40;
            v19 += 40;
          }
          while ( v18-- != 0 );
        }
        qfree();
        *a2 = v27;
        a2[2] = v34;
        v6 = a2[1];
      }
      else
      {
        v27 = *a2;
      }
      v8 = v27 + 40 * v6;
      *(_QWORD *)v8 = 0;
      *(_OWORD *)(v8 + 8) = 0;
      ++a2[1];
      *(_DWORD *)(v8 + 32) = v29;
      *(_QWORD *)(v8 + 24) = v31;
      if ( (void **)v8 != &src )
      {
        v9 = v36;
        if ( v36 && (v10 = v36 - 1, v36 != 1) )
        {
          v24 = src;
          v25 = *(void **)v8;
          if ( *(_QWORD *)(v8 + 16) < v36 )
          {
            v30 = src;
            v28 = v36 - 1;
            v26 = qvector_reserve();
            v24 = v30;
            v10 = v28;
            *(_QWORD *)v8 = v26;
            v25 = (void *)v26;
          }
          *(_QWORD *)(v8 + 8) = v9;
          memmove(v25, v24, v10);
          *(_BYTE *)(*(_QWORD *)v8 + v9 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(v8 + 8) = 0;
        }
      }
      if ( src )
      {
        v36 = 0;
        qfree();
      }
      ++v32;
    }
    while ( v33 != v32 );
  }
  return v37 - __readfsqword(0x28u);
}

