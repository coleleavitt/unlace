__int64 __fastcall sub_3CFC10(_QWORD *a1, int a2, __int64 a3)
{
  bool v4; // zf
  unsigned int v7; // edx
  unsigned __int64 *v8; // rcx
  unsigned __int64 v9; // rax
  unsigned int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rbp
  __int64 *v16; // rdx
  __int64 v17; // r13
  __int64 v18; // r15
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  _QWORD *v24; // rsi
  __int64 v25; // rbp
  unsigned int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // rsi
  unsigned __int64 v29; // rbp
  unsigned __int64 *v30; // rdx
  unsigned __int64 v31; // r12
  __int64 v32; // rbp
  unsigned int v33; // edx
  __int64 **v34; // rcx
  __int64 *v35; // rax
  __int64 v36; // rbp
  __int64 v37; // rbp
  unsigned int v38; // edx
  unsigned __int64 *v39; // rcx
  unsigned __int64 v40; // rax
  unsigned int v41; // edx
  unsigned __int64 *v42; // rcx
  unsigned __int64 v43; // rax
  __int64 *v44; // rdx
  __int64 *v45; // rcx
  unsigned __int64 *v46; // rcx
  __m128i v47; // [rsp+8h] [rbp-90h] BYREF
  __int128 v48; // [rsp+18h] [rbp-80h]
  __int128 v49; // [rsp+30h] [rbp-68h] BYREF
  __int128 v50; // [rsp+40h] [rbp-58h]
  unsigned __int64 v51; // [rsp+58h] [rbp-40h]

  v4 = a1[253] == 0;
  v51 = __readfsqword(0x28u);
  if ( v4 && !a1[262] )
    return 0;
  switch ( a2 )
  {
    case 18:
      v33 = *(_DWORD *)a3;
      if ( v33 > 0x2F )
      {
        v34 = *(__int64 ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v34 + 1;
      }
      else
      {
        v34 = (__int64 **)(*(_QWORD *)(a3 + 16) + v33);
        *(_DWORD *)a3 = v33 + 8;
      }
      v35 = *v34;
      v48 = 0;
      v47.m128i_i64[1] = 0;
      v36 = v35[1];
      v47.m128i_i64[0] = *v35;
      v47.m128i_i64[1] = qvector_reserve();
      *(__m128i *)v47.m128i_i64[1] = _mm_unpacklo_epi64(_mm_loadl_epi64(&v47), (__m128i)(unsigned __int64)v36);
      v49 = 0;
      v37 = v48 + 1;
      v50 = 0;
      *(_QWORD *)&v48 = v37;
      if ( v37 )
      {
        *((_QWORD *)&v49 + 1) = qalloc_or_throw();
        *((_QWORD *)&v50 + 1) = v37;
        memcpy(*((void **)&v49 + 1), (const void *)v47.m128i_i64[1], 16 * v37);
        *(_QWORD *)&v50 = v37;
      }
      sub_3CFAA0(a1, (__int64)&v49, 6);
      if ( *((_QWORD *)&v49 + 1) )
      {
        *(_QWORD *)&v50 = 0;
        qfree();
      }
      if ( v47.m128i_i64[1] )
      {
        *(_QWORD *)&v48 = 0;
        qfree();
      }
      return 0;
    case 20:
      v26 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v46 = *(unsigned __int64 **)(a3 + 8);
        v30 = v46 + 1;
        *(_QWORD *)(a3 + 8) = v46 + 1;
        v29 = *v46;
      }
      else
      {
        v27 = *(_QWORD *)(a3 + 16);
        v28 = v26 + 8;
        *(_DWORD *)a3 = v28;
        v29 = *(_QWORD *)(v27 + v26);
        if ( (unsigned int)v28 <= 0x2F )
        {
          v30 = (unsigned __int64 *)(v28 + v27);
          *(_DWORD *)a3 = v26 + 16;
          goto LABEL_24;
        }
        v30 = *(unsigned __int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v30 + 1;
LABEL_24:
      v31 = *v30;
      v48 = 0;
      v47.m128i_i64[1] = qvector_reserve();
      *(__m128i *)v47.m128i_i64[1] = _mm_unpacklo_epi64((__m128i)v29, (__m128i)v31);
      v49 = 0;
      v32 = v48 + 1;
      v50 = 0;
      *(_QWORD *)&v48 = v32;
      if ( v32 )
      {
        *((_QWORD *)&v49 + 1) = qalloc_or_throw();
        *((_QWORD *)&v50 + 1) = v32;
        memcpy(*((void **)&v49 + 1), (const void *)v47.m128i_i64[1], 16 * v32);
        *(_QWORD *)&v50 = v32;
      }
      sub_3CFAA0(a1, (__int64)&v49, 5);
      if ( *((_QWORD *)&v49 + 1) )
      {
        *(_QWORD *)&v50 = 0;
        qfree();
      }
      if ( v47.m128i_i64[1] )
        goto LABEL_20;
      return 0;
    case 30:
      v10 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v44 = *(__int64 **)(a3 + 8);
        v45 = v44 + 1;
        *(_QWORD *)(a3 + 8) = v44 + 1;
        v13 = *v44;
LABEL_47:
        v16 = v45 + 1;
        *(_QWORD *)(a3 + 8) = v45 + 1;
        v15 = *v45;
        goto LABEL_48;
      }
      v11 = *(_QWORD *)(a3 + 16);
      v12 = v10 + 8;
      *(_DWORD *)a3 = v12;
      v13 = *(_QWORD *)(v11 + v10);
      if ( (unsigned int)v12 > 0x2F )
      {
        v45 = *(__int64 **)(a3 + 8);
        goto LABEL_47;
      }
      v14 = v10 + 16;
      *(_DWORD *)a3 = v14;
      v15 = *(_QWORD *)(v11 + v12);
      if ( (unsigned int)v14 <= 0x2F )
      {
        v16 = (__int64 *)(v14 + v11);
        *(_DWORD *)a3 = v10 + 24;
        goto LABEL_13;
      }
      v16 = *(__int64 **)(a3 + 8);
LABEL_48:
      *(_QWORD *)(a3 + 8) = v16 + 1;
LABEL_13:
      v17 = *v16;
      v48 = 0;
      v18 = v17 + v13;
      v47.m128i_i64[1] = qvector_reserve();
      v19 = v15 + v17;
      v20 = v47.m128i_i64[1];
      *(_QWORD *)v47.m128i_i64[1] = v13;
      *(_QWORD *)(v20 + 8) = v18;
      v21 = v47.m128i_i64[1];
      v22 = v48 + 1;
      v23 = v48 + 2;
      *(_QWORD *)&v48 = v48 + 1;
      if ( *((_QWORD *)&v48 + 1) < v23 )
      {
        v47.m128i_i64[1] = qvector_reserve();
        v21 = v47.m128i_i64[1];
        v22 = v48;
      }
      v24 = (_QWORD *)(16 * v22 + v21);
      *v24 = v15;
      v24[1] = v19;
      v49 = 0;
      v25 = v48 + 1;
      v50 = 0;
      *(_QWORD *)&v48 = v25;
      if ( v25 )
      {
        *((_QWORD *)&v49 + 1) = qalloc_or_throw();
        *((_QWORD *)&v50 + 1) = v25;
        memcpy(*((void **)&v49 + 1), (const void *)v47.m128i_i64[1], 16 * v25);
        *(_QWORD *)&v50 = v25;
      }
      sub_3CFAA0(a1, (__int64)&v49, 6);
      if ( *((_QWORD *)&v49 + 1) )
      {
        *(_QWORD *)&v50 = 0;
        qfree();
      }
      if ( v47.m128i_i64[1] )
      {
LABEL_20:
        *(_QWORD *)&v48 = 0;
        qfree();
      }
      return 0;
    case 32:
    case 39:
    case 41:
      v7 = *(_DWORD *)a3;
      if ( v7 > 0x2F )
      {
        v8 = *(unsigned __int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v8 + 1;
      }
      else
      {
        v8 = (unsigned __int64 *)(*(_QWORD *)(a3 + 16) + v7);
        *(_DWORD *)a3 = v7 + 8;
      }
      v9 = *v8;
      v50 = 0;
      v49 = v9;
      sub_3CFAA0(a1, (__int64)&v49, 4);
      if ( *((_QWORD *)&v49 + 1) )
        goto LABEL_45;
      return 0;
    case 33:
      v41 = *(_DWORD *)a3;
      if ( v41 > 0x2F )
      {
        v42 = *(unsigned __int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v42 + 1;
      }
      else
      {
        v42 = (unsigned __int64 *)(*(_QWORD *)(a3 + 16) + v41);
        *(_DWORD *)a3 = v41 + 8;
      }
      v43 = *v42;
      v50 = 0;
      v49 = v43;
      sub_3CFAA0(a1, (__int64)&v49, 2);
      if ( *((_QWORD *)&v49 + 1) )
        goto LABEL_45;
      return 0;
    case 36:
      v38 = *(_DWORD *)a3;
      if ( v38 > 0x2F )
      {
        v39 = *(unsigned __int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v39 + 1;
      }
      else
      {
        v39 = (unsigned __int64 *)(*(_QWORD *)(a3 + 16) + v38);
        *(_DWORD *)a3 = v38 + 8;
      }
      v40 = *v39;
      v50 = 0;
      v49 = v40;
      sub_3CFAA0(a1, (__int64)&v49, 3);
      if ( *((_QWORD *)&v49 + 1) )
      {
LABEL_45:
        *(_QWORD *)&v50 = 0;
        qfree();
      }
      return 0;
    default:
      return 0;
  }
}

