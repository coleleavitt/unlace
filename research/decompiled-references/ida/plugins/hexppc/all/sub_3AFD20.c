unsigned __int64 __fastcall sub_3AFD20(__int64 *a1, unsigned __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rsi
  __m128i *v14; // r9
  __int64 *v15; // r8
  unsigned __int64 *v16; // rsi
  char v17; // dl
  unsigned __int64 v18; // rax
  __m128i *v19; // rcx
  __int8 *v20; // r13
  unsigned __int64 *v21; // r9
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r13
  __int64 v24; // rax
  int v25; // edx
  __int64 v26; // r13
  int v27; // eax
  _BYTE *v28; // rdx
  __int64 v29; // rax
  __m128i v30; // xmm1
  __m128i *v31; // rcx
  int v32; // eax
  char v33; // al
  __m128i *v34; // rax
  int v35; // eax
  char v36; // al
  _QWORD *exception; // rdi
  __int64 *v38; // [rsp+0h] [rbp-F8h]
  __int64 *v39; // [rsp+0h] [rbp-F8h]
  __m128i *v40; // [rsp+0h] [rbp-F8h]
  __int64 *v41; // [rsp+0h] [rbp-F8h]
  __m128i *v42; // [rsp+8h] [rbp-F0h]
  __int64 *v43; // [rsp+8h] [rbp-F0h]
  __m128i *v44; // [rsp+8h] [rbp-F0h]
  __m128i *v45; // [rsp+10h] [rbp-E8h]
  __m128i *v46; // [rsp+10h] [rbp-E8h]
  char v47; // [rsp+1Fh] [rbp-D9h]
  __int64 v48; // [rsp+20h] [rbp-D8h] BYREF
  const __m128i *v49; // [rsp+28h] [rbp-D0h] BYREF
  __int64 v50; // [rsp+30h] [rbp-C8h] BYREF
  int v51; // [rsp+38h] [rbp-C0h]
  __int64 v52; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v53; // [rsp+48h] [rbp-B0h]
  __int64 v54; // [rsp+58h] [rbp-A0h]
  __int64 *v55; // [rsp+60h] [rbp-98h]
  __int64 v56; // [rsp+68h] [rbp-90h] BYREF
  __int128 v57; // [rsp+70h] [rbp-88h]
  __int64 v58; // [rsp+80h] [rbp-78h]
  __int64 *v59; // [rsp+90h] [rbp-68h] BYREF
  __int64 v60; // [rsp+98h] [rbp-60h] BYREF
  __int128 v61; // [rsp+A0h] [rbp-58h]
  __int64 v62; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v63; // [rsp+B8h] [rbp-40h]

  v63 = __readfsqword(0x28u);
  if ( (*(_QWORD *)(a3 + 8) & 0x100) == 0 )
    return v63 - __readfsqword(0x28u);
  v51 = 0;
  v50 = 0xFFFFFFFFLL;
  if ( a2 )
  {
    v9 = (_QWORD *)a1[10];
    if ( !v9 )
      return v63 - __readfsqword(0x28u);
    v10 = 24;
    v11 = *v9 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v11 )
    {
LABEL_5:
      if ( (*(_BYTE *)v11 & 2) != 0 )
        return v63 - __readfsqword(0x28u);
      while ( 1 )
      {
        v12 = *(_QWORD *)(v11 + 24);
        v10 = v11 + 24;
        if ( a2 < v12 )
        {
          v11 = *(_QWORD *)(v11 + 8);
          goto LABEL_5;
        }
        if ( v12 >= a2 )
          break;
        v11 = *(_QWORD *)(v11 + 16);
        if ( (*(_BYTE *)v11 & 2) != 0 )
          return v63 - __readfsqword(0x28u);
      }
      if ( v9 == (_QWORD *)v11 )
        return v63 - __readfsqword(0x28u);
    }
    a5 = &v50;
    v50 = *(_QWORD *)(v10 + 8);
    v51 = *(_DWORD *)(v10 + 16);
  }
  v14 = (__m128i *)a1[9];
  v15 = *(__int64 **)a1[8];
  v59 = (__int64 *)a3;
  v16 = (unsigned __int64 *)v14->m128i_i64[0];
  if ( !v14->m128i_i64[0] )
  {
    v42 = v14;
    v39 = v15;
    v29 = qalloc();
    v15 = v39;
    v14 = v42;
    v30 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v29, (__m128i)(unsigned __int64)v29);
    if ( !v29 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v29 + 16) = 0;
    *(_OWORD *)(v29 + 32) = 0;
    *(_OWORD *)(v29 + 48) = 0;
    *(_QWORD *)v29 = v29 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(__m128i *)(v29 + 8) = v30;
    v42->m128i_i64[0] = v29;
    *(_QWORD *)v29 = v29 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v29 & 3LL;
    *(__m128i *)(v42->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v42->m128i_u64[0], (__m128i)v42->m128i_u64[0]);
    *(_QWORD *)v42->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)v42->m128i_i64[0] |= 2uLL;
    v16 = (unsigned __int64 *)v42->m128i_i64[0];
    goto LABEL_14;
  }
  if ( !v14->m128i_i64[1] )
  {
LABEL_14:
    v38 = v15;
    v17 = 1;
LABEL_15:
    v18 = sub_3AFAF0(v14, v16, v17, &v59);
    v15 = v38;
    v19 = (__m128i *)v18;
    v20 = (__int8 *)(v18 + 24);
    goto LABEL_16;
  }
  v31 = (__m128i *)(*v16 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v31->m128i_i8[0] & 2) != 0 )
  {
    v17 = 1;
LABEL_52:
    v38 = v15;
    goto LABEL_15;
  }
  v47 = 1;
  while ( 1 )
  {
    v20 = &v31[1].m128i_i8[8];
    v45 = v14;
    v43 = v15;
    v40 = v31;
    v32 = lexcompare_tinfo();
    v19 = v40;
    v15 = v43;
    v14 = v45;
    if ( v32 )
    {
      if ( v32 < 0 )
      {
LABEL_41:
        v47 = 1;
        v34 = (__m128i *)v40->m128i_i64[1];
        goto LABEL_42;
      }
    }
    else
    {
      v33 = *(_BYTE *)(a3 + 16);
      if ( v33 == v20[16] )
      {
        if ( *(_QWORD *)a3 < *(_QWORD *)v20 )
          goto LABEL_41;
      }
      else if ( v33 )
      {
        goto LABEL_41;
      }
    }
    v46 = v40;
    v44 = v14;
    v41 = v15;
    v35 = lexcompare_tinfo();
    v15 = v41;
    v14 = v44;
    v19 = v46;
    if ( v35 )
    {
      if ( v35 >= 0 )
        break;
      goto LABEL_48;
    }
    v36 = v20[16];
    if ( v36 != *(_BYTE *)(a3 + 16) )
    {
      if ( !v36 )
        break;
      goto LABEL_48;
    }
    if ( *(_QWORD *)v20 >= *(_QWORD *)a3 )
      break;
LABEL_48:
    v47 = 0;
    v34 = (__m128i *)v46[1].m128i_i64[0];
LABEL_42:
    if ( (v34->m128i_i8[0] & 2) != 0 )
      goto LABEL_43;
    v31 = v34;
  }
  if ( !v46 )
  {
LABEL_43:
    v17 = v47;
    v16 = (unsigned __int64 *)v19;
    goto LABEL_52;
  }
LABEL_16:
  v21 = *((unsigned __int64 **)v20 + 3);
  if ( !v21 )
    goto LABEL_19;
  v22 = *v21 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v22 )
  {
    v23 = *((_QWORD *)v20 + 3);
    if ( (*(_BYTE *)v22 & 2) != 0 )
      goto LABEL_19;
    while ( 1 )
    {
      v28 = *(_BYTE **)(v22 + 8);
      if ( *(_QWORD *)(v22 + 24) < (unsigned __int64)v15 )
      {
        v28 = *(_BYTE **)(v22 + 16);
        if ( (*v28 & 2) != 0 )
          goto LABEL_30;
      }
      else
      {
        v23 = v22;
        if ( (*v28 & 2) != 0 )
        {
LABEL_30:
          if ( v21 != (unsigned __int64 *)v23 )
            goto LABEL_31;
LABEL_19:
          v24 = a1[8];
          v52 = 0;
          v53 = 0;
          v25 = *(_DWORD *)(v24 + 104);
          v48 = v24;
          v54 = v24;
          *(_DWORD *)(v24 + 104) = v25 + 1;
          v55 = v15;
          v56 = 0;
          v57 = 0;
          if ( v24 )
          {
            v59 = v15;
            v60 = 0;
            v62 = v24;
            v61 = 0;
            v58 = v24;
            *(_DWORD *)(v24 + 104) = v25 + 4;
          }
          else
          {
            v58 = 0;
            v59 = v15;
            v60 = 0;
            v62 = 0;
            v61 = 0;
          }
          v49 = (const __m128i *)&v59;
          v23 = sub_3AE300(v19 + 3, (unsigned __int64 *)&v59, v21, &v49);
          sub_3A8930((__int64)&v60);
          sub_3A8930((__int64)&v56);
          sub_3A8930((__int64)&v52);
          sub_13C700(&v48, (__int64)&v59);
          goto LABEL_22;
        }
      }
      v22 = (unsigned __int64)v28;
    }
  }
  v23 = 0;
LABEL_31:
  if ( v15 != *(__int64 **)(v23 + 24) )
  {
    v21 = (unsigned __int64 *)v23;
    goto LABEL_19;
  }
LABEL_22:
  v26 = sub_3A9B40((__int64 *)(v23 + 32));
  *(_QWORD *)(v26 + 16) = *a5;
  v27 = *((_DWORD *)a5 + 2);
  *(_QWORD *)v26 = a2;
  *(_DWORD *)(v26 + 24) = v27;
  *(_DWORD *)(v26 + 28) = a4;
  *(_QWORD *)(v26 + 8) = *(_QWORD *)a3;
  *(_BYTE *)(v26 + 32) = *(_BYTE *)(a3 + 16);
  if ( a2 && *(_DWORD *)(a2 + 8) == 77 )
    *(_DWORD *)(v26 + 16) = sub_387720(a1[8], *(_QWORD *)a2, *(_QWORD *)a3, *(_DWORD *)(v26 + 16));
  ++a1[12];
  return v63 - __readfsqword(0x28u);
}

