__int64 __fastcall sub_196FC0(__int64 a1, unsigned __int8 **a2)
{
  unsigned int v3; // r14d
  int v5; // eax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rbp
  int v8; // r13d
  __int64 v9; // rax
  __int64 v10; // rbp
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rdi
  __m128i v15; // xmm1
  __m128i v16; // xmm0
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  const __m128i *v21; // rdi
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __m128i v26; // xmm0
  bool v27; // cf
  __int64 v28; // rax
  const __m128i *v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r15
  const __m128i *v33; // rdx
  __int64 v34; // rcx
  __m128i v35; // xmm0
  __int64 v36; // [rsp+8h] [rbp-70h]
  __int64 v37; // [rsp+8h] [rbp-70h]
  __m128i v38; // [rsp+10h] [rbp-68h] BYREF
  __m128i v39; // [rsp+20h] [rbp-58h] BYREF
  __int64 v40; // [rsp+30h] [rbp-48h]
  unsigned __int64 v41; // [rsp+38h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v3 = sub_7EA50(a1, a2);
  if ( (_BYTE)v3 )
  {
    v5 = sub_7C760(a2);
    v6 = *(_QWORD *)(a1 + 72);
    v7 = v5;
    if ( v5 != v6 )
    {
      LOBYTE(v40) = 0;
      v39.m128i_i64[0] = -1;
      v39.m128i_i64[1] = -1;
      v38 = 0;
      if ( v5 >= v6 )
      {
        v11 = *(_QWORD *)(a1 + 64);
        v12 = *(_QWORD *)(a1 + 80);
        if ( (unsigned __int64)&v38 < v11 || (unsigned __int64)&v38 >= v11 + 40 * v12 )
        {
          if ( v12 >= v5 )
            goto LABEL_18;
          v19 = qvector_reserve();
          v20 = *(_QWORD *)(a1 + 72);
          v21 = *(const __m128i **)(a1 + 64);
          v22 = v19;
          v23 = *(_QWORD *)(a1 + 80);
          *(_QWORD *)(a1 + 80) = v12;
          v24 = v20 - 1;
          if ( v24 >= 0 )
          {
            v25 = v22;
            do
            {
              v26 = _mm_loadu_si128(v21);
              v25 += 40;
              v21 = (const __m128i *)((char *)v21 + 40);
              *(__m128i *)(v25 - 40) = v26;
              *(__m128i *)(v25 - 24) = _mm_loadu_si128((const __m128i *)((char *)v21 - 24));
              *(_QWORD *)(v25 - 8) = v21[-1].m128i_i64[1];
              v27 = v24-- == 0;
            }
            while ( !v27 );
          }
          v36 = v23;
          qfree();
          v6 = *(_QWORD *)(a1 + 72);
          v11 = v22;
          *(_QWORD *)(a1 + 64) = v22;
          *(_QWORD *)(a1 + 80) = v36;
          if ( v6 < v7 )
          {
LABEL_18:
            v15 = _mm_load_si128(&v38);
            v16 = _mm_load_si128(&v39);
            v17 = v40;
            v18 = 40 * v6;
            while ( 1 )
            {
              ++v6;
              *(_QWORD *)(v11 + v18 + 32) = v17;
              *(__m128i *)(v11 + v18) = v15;
              *(__m128i *)(v11 + v18 + 16) = v16;
              v18 += 40;
              if ( v7 == v6 )
                break;
              v11 = *(_QWORD *)(a1 + 64);
            }
          }
        }
        else
        {
          if ( v12 >= v5 )
            goto LABEL_13;
          v28 = qvector_reserve();
          v29 = *(const __m128i **)(a1 + 64);
          v30 = *(_QWORD *)(a1 + 72);
          v31 = *(_QWORD *)(a1 + 80);
          v32 = v28;
          *(_QWORD *)(a1 + 80) = v12;
          v33 = v29;
          v34 = v30 - 1;
          if ( v34 >= 0 )
          {
            do
            {
              v35 = _mm_loadu_si128(v33);
              v28 += 40;
              v33 = (const __m128i *)((char *)v33 + 40);
              *(__m128i *)(v28 - 40) = v35;
              *(__m128i *)(v28 - 24) = _mm_loadu_si128((const __m128i *)((char *)v33 - 24));
              *(_QWORD *)(v28 - 8) = v33[-1].m128i_i64[1];
              v27 = v34-- == 0;
            }
            while ( !v27 );
          }
          v37 = v31;
          qfree();
          v6 = *(_QWORD *)(a1 + 72);
          v11 = v32;
          *(_QWORD *)(a1 + 64) = v32;
          *(_QWORD *)(a1 + 80) = v37;
          if ( v6 < v7 )
          {
LABEL_13:
            v13 = 40 * v6;
            while ( 1 )
            {
              v14 = v13 + v11;
              ++v6;
              v13 += 40;
              *(_QWORD *)(v14 + 16) = -1;
              *(_QWORD *)(v14 + 24) = -1;
              *(_BYTE *)(v14 + 32) = 0;
              *(_OWORD *)v14 = 0;
              if ( v7 == v6 )
                break;
              v11 = *(_QWORD *)(a1 + 64);
            }
          }
        }
        *(_QWORD *)(a1 + 72) = v7;
        goto LABEL_7;
      }
      *(_QWORD *)(a1 + 72) = v5;
      v6 = v5;
    }
    if ( !v6 )
    {
LABEL_9:
      *(_QWORD *)(a1 + 104) = sub_7C900(a2) - 1;
      *(_DWORD *)(a1 + 112) = sub_7C760(a2) - 1;
      *(_BYTE *)(a1 + 116) = (unsigned __int8)sub_7C740(a2) != 0;
      return v3;
    }
LABEL_7:
    v8 = 0;
    v9 = 0;
    do
    {
      v10 = *(_QWORD *)(a1 + 64) + 40 * v9;
      *(_QWORD *)(v10 + 24) = sub_7C900(a2);
      *(_QWORD *)(v10 + 16) = sub_7C900(a2);
      *(_BYTE *)(v10 + 32) = (unsigned __int8)sub_7C740(a2) != 0;
      v9 = ++v8;
    }
    while ( (unsigned __int64)v8 < *(_QWORD *)(a1 + 72) );
    goto LABEL_9;
  }
  return v3;
}

