__int64 __fastcall sub_3D3D90(_QWORD *a1, int a2, __int64 a3)
{
  bool v4; // zf
  unsigned int v7; // edx
  unsigned __int64 *v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  unsigned int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rbp
  __int64 *v17; // rdx
  __int64 v18; // r13
  __int64 v19; // r15
  __int64 v20; // rcx
  __int64 v21; // r13
  _QWORD *v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  _QWORD *v26; // rsi
  __int64 v27; // rbp
  __int64 v28; // rdi
  unsigned int v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // rsi
  unsigned __int64 v32; // rbp
  unsigned __int64 *v33; // rdx
  unsigned __int64 v34; // r12
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rbp
  unsigned int v38; // edx
  __int64 **v39; // rcx
  __int64 *v40; // rax
  __int64 v41; // rbp
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rbp
  unsigned int v45; // edx
  unsigned __int64 *v46; // rcx
  unsigned __int64 v47; // rax
  unsigned int v48; // edx
  unsigned __int64 *v49; // rcx
  unsigned __int64 v50; // rax
  __int64 *v51; // rdx
  __int64 *v52; // rcx
  unsigned __int64 *v53; // rcx
  __m128i v54; // [rsp+8h] [rbp-90h] BYREF
  __int128 v55; // [rsp+18h] [rbp-80h]
  __int128 v56; // [rsp+30h] [rbp-68h] BYREF
  __int128 v57; // [rsp+40h] [rbp-58h]
  unsigned __int64 v58; // [rsp+58h] [rbp-40h]

  v4 = a1[253] == 0;
  v58 = __readfsqword(0x28u);
  if ( v4 && !a1[262] )
    return 0;
  switch ( a2 )
  {
    case 18:
      v38 = *(_DWORD *)a3;
      if ( v38 > 0x2F )
      {
        v39 = *(__int64 ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v39 + 1;
      }
      else
      {
        v39 = (__int64 **)(*(_QWORD *)(a3 + 16) + v38);
        *(_DWORD *)a3 = v38 + 8;
      }
      v40 = *v39;
      v55 = 0;
      v54.m128i_i64[1] = 0;
      v41 = v40[1];
      v54.m128i_i64[0] = *v40;
      v54.m128i_i64[1] = qvector_reserve((__int64)&v54.m128i_i64[1], 0, 1, 16);
      v43 = 16 * v55;
      *(__m128i *)(v54.m128i_i64[1] + 16 * v55) = _mm_unpacklo_epi64(
                                                    _mm_loadl_epi64(&v54),
                                                    (__m128i)(unsigned __int64)v41);
      v56 = 0;
      v44 = v55 + 1;
      v57 = 0;
      *(_QWORD *)&v55 = v44;
      if ( v44 )
      {
        *((_QWORD *)&v56 + 1) = qalloc_or_throw(16 * v44, 0, v43, v42);
        *((_QWORD *)&v57 + 1) = v44;
        memcpy(*((void **)&v56 + 1), (const void *)v54.m128i_i64[1], 16 * v44);
        *(_QWORD *)&v57 = v44;
      }
      sub_3D3C20(a1, (__int64)&v56, 6);
      if ( *((_QWORD *)&v56 + 1) )
      {
        *(_QWORD *)&v57 = 0;
        qfree(*((__int64 *)&v56 + 1));
      }
      if ( v54.m128i_i64[1] )
      {
        *(_QWORD *)&v55 = 0;
        qfree(v54.m128i_i64[1]);
      }
      return 0;
    case 20:
      v29 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v53 = *(unsigned __int64 **)(a3 + 8);
        v33 = v53 + 1;
        *(_QWORD *)(a3 + 8) = v53 + 1;
        v32 = *v53;
      }
      else
      {
        v30 = *(_QWORD *)(a3 + 16);
        v31 = v29 + 8;
        *(_DWORD *)a3 = v31;
        v32 = *(_QWORD *)(v30 + v29);
        if ( (unsigned int)v31 <= 0x2F )
        {
          v33 = (unsigned __int64 *)(v31 + v30);
          *(_DWORD *)a3 = v29 + 16;
          goto LABEL_24;
        }
        v33 = *(unsigned __int64 **)(a3 + 8);
      }
      *(_QWORD *)(a3 + 8) = v33 + 1;
LABEL_24:
      v34 = *v33;
      v55 = 0;
      v54.m128i_i64[1] = 0;
      v54.m128i_i64[1] = qvector_reserve((__int64)&v54.m128i_i64[1], 0, 1, 16);
      v36 = 16 * v55;
      *(__m128i *)(v54.m128i_i64[1] + 16 * v55) = _mm_unpacklo_epi64((__m128i)v32, (__m128i)v34);
      v56 = 0;
      v37 = v55 + 1;
      v57 = 0;
      *(_QWORD *)&v55 = v37;
      if ( v37 )
      {
        *((_QWORD *)&v56 + 1) = qalloc_or_throw(16 * v37, 0, v36, v35);
        *((_QWORD *)&v57 + 1) = v37;
        memcpy(*((void **)&v56 + 1), (const void *)v54.m128i_i64[1], 16 * v37);
        *(_QWORD *)&v57 = v37;
      }
      sub_3D3C20(a1, (__int64)&v56, 5);
      if ( *((_QWORD *)&v56 + 1) )
      {
        *(_QWORD *)&v57 = 0;
        qfree(*((__int64 *)&v56 + 1));
      }
      v28 = v54.m128i_i64[1];
      if ( v54.m128i_i64[1] )
        goto LABEL_20;
      return 0;
    case 30:
      v11 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v51 = *(__int64 **)(a3 + 8);
        v52 = v51 + 1;
        *(_QWORD *)(a3 + 8) = v51 + 1;
        v14 = *v51;
LABEL_47:
        v17 = v52 + 1;
        *(_QWORD *)(a3 + 8) = v52 + 1;
        v16 = *v52;
        goto LABEL_48;
      }
      v12 = *(_QWORD *)(a3 + 16);
      v13 = v11 + 8;
      *(_DWORD *)a3 = v13;
      v14 = *(_QWORD *)(v12 + v11);
      if ( (unsigned int)v13 > 0x2F )
      {
        v52 = *(__int64 **)(a3 + 8);
        goto LABEL_47;
      }
      v15 = v11 + 16;
      *(_DWORD *)a3 = v15;
      v16 = *(_QWORD *)(v12 + v13);
      if ( (unsigned int)v15 <= 0x2F )
      {
        v17 = (__int64 *)(v15 + v12);
        *(_DWORD *)a3 = v11 + 24;
        goto LABEL_13;
      }
      v17 = *(__int64 **)(a3 + 8);
LABEL_48:
      *(_QWORD *)(a3 + 8) = v17 + 1;
LABEL_13:
      v18 = *v17;
      v54.m128i_i64[1] = 0;
      v55 = 0;
      v19 = v18 + v14;
      v54.m128i_i64[1] = qvector_reserve((__int64)&v54.m128i_i64[1], 0, 1, 16);
      v21 = v16 + v18;
      v22 = (_QWORD *)(16 * v55 + v54.m128i_i64[1]);
      *v22 = v14;
      v22[1] = v19;
      v23 = v54.m128i_i64[1];
      v24 = v55 + 1;
      v25 = v55 + 2;
      *(_QWORD *)&v55 = v55 + 1;
      if ( *((_QWORD *)&v55 + 1) < v25 )
      {
        v54.m128i_i64[1] = qvector_reserve((__int64)&v54.m128i_i64[1], v54.m128i_i64[1], v25, 16);
        v23 = v54.m128i_i64[1];
        v24 = v55;
      }
      v26 = (_QWORD *)(16 * v24 + v23);
      *v26 = v16;
      v26[1] = v21;
      v56 = 0;
      v27 = v55 + 1;
      v57 = 0;
      *(_QWORD *)&v55 = v27;
      if ( v27 )
      {
        *((_QWORD *)&v56 + 1) = qalloc_or_throw(16 * v27, (__int64)v26, v25, v20);
        *((_QWORD *)&v57 + 1) = v27;
        memcpy(*((void **)&v56 + 1), (const void *)v54.m128i_i64[1], 16 * v27);
        *(_QWORD *)&v57 = v27;
      }
      sub_3D3C20(a1, (__int64)&v56, 6);
      if ( *((_QWORD *)&v56 + 1) )
      {
        *(_QWORD *)&v57 = 0;
        qfree(*((__int64 *)&v56 + 1));
      }
      v28 = v54.m128i_i64[1];
      if ( v54.m128i_i64[1] )
      {
LABEL_20:
        *(_QWORD *)&v55 = 0;
        qfree(v28);
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
      v57 = 0;
      v56 = v9;
      sub_3D3C20(a1, (__int64)&v56, 4);
      v10 = *((_QWORD *)&v56 + 1);
      if ( *((_QWORD *)&v56 + 1) )
        goto LABEL_45;
      return 0;
    case 33:
      v48 = *(_DWORD *)a3;
      if ( v48 > 0x2F )
      {
        v49 = *(unsigned __int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v49 + 1;
      }
      else
      {
        v49 = (unsigned __int64 *)(*(_QWORD *)(a3 + 16) + v48);
        *(_DWORD *)a3 = v48 + 8;
      }
      v50 = *v49;
      v57 = 0;
      v56 = v50;
      sub_3D3C20(a1, (__int64)&v56, 2);
      v10 = *((_QWORD *)&v56 + 1);
      if ( *((_QWORD *)&v56 + 1) )
        goto LABEL_45;
      return 0;
    case 36:
      v45 = *(_DWORD *)a3;
      if ( v45 > 0x2F )
      {
        v46 = *(unsigned __int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v46 + 1;
      }
      else
      {
        v46 = (unsigned __int64 *)(*(_QWORD *)(a3 + 16) + v45);
        *(_DWORD *)a3 = v45 + 8;
      }
      v47 = *v46;
      v57 = 0;
      v56 = v47;
      sub_3D3C20(a1, (__int64)&v56, 3);
      v10 = *((_QWORD *)&v56 + 1);
      if ( *((_QWORD *)&v56 + 1) )
      {
LABEL_45:
        *(_QWORD *)&v57 = 0;
        qfree(v10);
      }
      return 0;
    default:
      return 0;
  }
}

