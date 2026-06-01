unsigned __int64 __fastcall sub_108180(
        unsigned __int64 **a1,
        __int64 a2,
        unsigned __int8 a3,
        int a4,
        __int64 *a5,
        __m128i a6)
{
  __int64 v6; // r12
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // r13d
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int8 v15; // dl
  __int64 v16; // r15
  __int64 v17; // rdx
  unsigned __int64 *v18; // rsi
  __int64 v19; // rdx
  unsigned __int64 v20; // rdi
  unsigned __int8 v21; // al
  __int64 v22; // rax
  int v23; // r9d
  __int64 v24; // r10
  unsigned __int64 v25; // r14
  unsigned __int8 v26; // al
  unsigned __int64 *v27; // rax
  __int64 v28; // r8
  __int64 *v29; // rcx
  unsigned __int64 *v30; // r14
  unsigned __int8 v31; // al
  __int64 v32; // rdx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rsi
  __int64 v35; // rdx
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // rsi
  unsigned __int8 v38; // r9
  __int64 v39; // r11
  unsigned __int64 *v40; // rdx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // r10
  unsigned __int64 *v43; // rax
  unsigned __int64 v44; // rdx
  void *v45; // rax
  void *v46; // rax
  unsigned __int64 v47; // rsi
  size_t na; // [rsp+18h] [rbp-D0h]
  void *n; // [rsp+18h] [rbp-D0h]
  int nb; // [rsp+18h] [rbp-D0h]
  size_t v54; // [rsp+20h] [rbp-C8h]
  int v55; // [rsp+20h] [rbp-C8h]
  size_t v56; // [rsp+20h] [rbp-C8h]
  __int64 v57; // [rsp+20h] [rbp-C8h]
  __int64 v58; // [rsp+28h] [rbp-C0h]
  const void **v59; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v60; // [rsp+28h] [rbp-C0h]
  int v61; // [rsp+30h] [rbp-B8h]
  __int64 *v62; // [rsp+30h] [rbp-B8h]
  unsigned __int8 v63; // [rsp+38h] [rbp-B0h]
  __int64 v64; // [rsp+38h] [rbp-B0h]
  __m128i v65; // [rsp+40h] [rbp-A8h] BYREF
  int v66; // [rsp+50h] [rbp-98h]
  unsigned __int8 v67; // [rsp+57h] [rbp-91h]
  const void **v68; // [rsp+58h] [rbp-90h]
  __int64 *v69; // [rsp+68h] [rbp-80h] BYREF
  __int64 v70; // [rsp+70h] [rbp-78h] BYREF
  __m128i v71; // [rsp+78h] [rbp-70h]
  __int64 v72; // [rsp+88h] [rbp-60h]
  __int64 v73; // [rsp+90h] [rbp-58h]
  unsigned __int64 v74; // [rsp+98h] [rbp-50h]
  char v75; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v76; // [rsp+A8h] [rbp-40h]

  v6 = a2;
  v9 = a5[1];
  v76 = __readfsqword(0x28u);
  v10 = 0;
  if ( !v9 )
  {
    v12 = 0;
    v13 = 0;
    goto LABEL_8;
  }
  v11 = *a5;
  v12 = 0;
  while ( 1 )
  {
    v14 = v11 + 16 * v10;
    v15 = *(_BYTE *)(v14 + 8);
    if ( v15 >= a3 && (a3 < v15 || a2 < *(_QWORD *)v14) )
      break;
    v13 = ++v12;
    v10 = v12;
    if ( v12 >= v9 )
      goto LABEL_8;
  }
  v13 = v12;
LABEL_8:
  while ( 2 )
  {
    v16 = a4;
    if ( v13 < v9 )
    {
      v17 = *a5 + 16 * v13;
      if ( *(_BYTE *)(v17 + 8) == a3 && *(_QWORD *)v17 - v6 <= a4 )
      {
        ++v12;
        v16 = *(_QWORD *)v17 - v6;
      }
    }
    v18 = *a1;
    if ( !*a1 )
      goto LABEL_13;
    v19 = 24;
    v20 = *v18 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v20 )
      goto LABEL_22;
    if ( (*(_BYTE *)(*v18 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_13:
      if ( !under_debugger )
        sub_383060(0xC3E7u, *(double *)a6.m128i_i64);
      goto LABEL_81;
    }
    while ( 1 )
    {
      v21 = *(_BYTE *)(v20 + 56);
      v19 = v20 + 24;
      if ( a3 >= v21 )
      {
        if ( v21 < a3 )
          goto LABEL_30;
        if ( v6 >= *(_QWORD *)(v20 + 48) )
          break;
      }
      v20 = *(_QWORD *)(v20 + 8);
LABEL_16:
      if ( (*(_BYTE *)v20 & 2) != 0 )
        goto LABEL_13;
    }
    if ( v6 > *(_QWORD *)(v20 + 48) )
    {
LABEL_30:
      v20 = *(_QWORD *)(v20 + 16);
      goto LABEL_16;
    }
    if ( v18 == (unsigned __int64 *)v20 )
      goto LABEL_13;
LABEL_22:
    v22 = *(int *)(v19 + 40);
    v66 = v16;
    v23 = v22;
    if ( v16 == v22 )
      goto LABEL_28;
    a6.m128i_i64[0] = 0;
    v70 = 0;
    v72 = -1;
    v73 = 0;
    v74 = 0xFFFFFFFF00000000LL;
    v75 = 1;
    v71 = 0;
    *(_DWORD *)(v19 + 40) = v16;
    if ( v16 < v22 )
    {
      LOBYTE(v73) = a3;
      v24 = 0;
      v72 = v6 + (int)v16;
      v74 = *(_QWORD *)(v19 + 40);
      v75 = *(_BYTE *)(v19 + 48);
      v25 = *(_QWORD *)(v19 + 8);
      v26 = a3;
      if ( v25 )
      {
        v59 = (const void **)v19;
        v55 = v23;
        v45 = (void *)qalloc_or_throw(4 * v25, (__int64)v18, v19, 4 * v25);
        v46 = memcpy(v45, *v59, 4 * v25);
        v23 = v55;
        v24 = (__int64)v46;
        if ( v70 )
        {
          v56 = (size_t)v46;
          nb = v23;
          v71.m128i_i64[0] = 0;
          qfree(v70);
          v24 = v56;
          v23 = nb;
        }
        v26 = v73;
      }
      v70 = v24;
      a6 = _mm_unpacklo_epi64((__m128i)v25, (__m128i)v25);
      LODWORD(v74) = v23 - v16;
      v71 = a6;
      if ( v26 )
        goto LABEL_44;
      goto LABEL_26;
    }
    v27 = sub_106CC0((_QWORD *)v20);
    v28 = v16 + v6;
    v29 = (__int64 *)v27;
    v30 = v27;
    if ( v27 == *a1 )
      goto LABEL_43;
    while ( 1 )
    {
      v31 = *((_BYTE *)v30 + 56);
      if ( v31 >= a3 && (a3 < v31 || v28 <= (__int64)v30[6]) )
        break;
      v38 = *((_BYTE *)v30 + 56);
      if ( v38 >= a3 )
      {
        v39 = v30[6] + *((int *)v30 + 16);
        if ( a3 < v38 || v28 < (__int64)(v30[6] + *((int *)v30 + 16)) )
        {
          v41 = v30[8];
          v72 = v28;
          LOBYTE(v73) = a3;
          v74 = v41;
          v75 = *((_BYTE *)v30 + 72);
          v42 = v30[4];
          if ( v42 )
          {
            v68 = (const void **)(v30 + 3);
            v67 = v38;
            v65.m128i_i64[0] = v39;
            v64 = v28;
            v62 = v29;
            v60 = v42;
            v57 = 4 * v42;
            n = (void *)qalloc_or_throw(4 * v42, (__int64)v18, (__int64)(v30 + 3), (__int64)v29);
            v18 = (unsigned __int64 *)*v68;
            memcpy(n, *v68, v57);
            v38 = v67;
            LODWORD(v39) = v65.m128i_i32[0];
            v28 = v64;
            v29 = v62;
            v42 = v60;
          }
          else
          {
            n = nullptr;
          }
          a6 = _mm_unpacklo_epi64((__m128i)v42, (__m128i)v42);
          if ( v70 )
          {
            v63 = v38;
            v61 = v39;
            v58 = v28;
            v54 = (size_t)v29;
            v65 = a6;
            v71.m128i_i64[0] = 0;
            qfree(v70);
            a6 = _mm_load_si128(&v65);
            v38 = v63;
            LODWORD(v39) = v61;
            v28 = v58;
            v29 = (__int64 *)v54;
          }
          v71 = a6;
          v70 = (__int64)n;
          if ( v38 != a3 )
          {
            if ( !under_debugger )
              sub_383060(0xCAB6u, *(double *)a6.m128i_i64);
LABEL_81:
            BUG();
          }
          LODWORD(v74) = v39 - v28;
        }
      }
      if ( (*v30 & 2) != 0 )
        goto LABEL_51;
      v40 = (unsigned __int64 *)v30[2];
      if ( (*(_BYTE *)v40 & 2) == 0 )
      {
        do
        {
          v30 = v40;
          v40 = (unsigned __int64 *)v40[1];
        }
        while ( (*(_BYTE *)v40 & 2) == 0 );
LABEL_51:
        if ( *a1 == v30 )
          break;
        continue;
      }
      v43 = (unsigned __int64 *)(*v30 & 0xFFFFFFFFFFFFFFFCLL);
      v44 = *v43;
      if ( (*v43 & 2) != 0 )
      {
LABEL_60:
        v30 = v43;
        if ( *a1 == v43 )
          break;
      }
      else
      {
        while ( 1 )
        {
          if ( v30 != (unsigned __int64 *)v43[2] )
            goto LABEL_60;
          v30 = v43;
          v18 = (unsigned __int64 *)(v44 & 0xFFFFFFFFFFFFFFFCLL);
          v44 = *(_QWORD *)(v44 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v44 & 2) != 0 )
            break;
          v43 = v18;
        }
        v30 = v18;
        if ( *a1 == v18 )
          break;
      }
    }
    if ( v29 != (__int64 *)v30 )
    {
      do
      {
        v32 = *v29;
        v33 = (unsigned __int64)v29;
        if ( (*v29 & 2) == 0 )
        {
          v34 = v29[2];
          if ( (*(_BYTE *)v34 & 2) != 0 )
          {
            v33 = v32 & 0xFFFFFFFFFFFFFFFCLL;
            v35 = *(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v35 & 2) == 0 )
            {
              v36 = (unsigned __int64)v29;
              do
              {
                if ( v36 != *(_QWORD *)(v33 + 16) )
                  break;
                v36 = v33;
                v37 = v35 & 0xFFFFFFFFFFFFFFFCLL;
                v35 = *(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFFCLL);
                v33 = v37;
              }
              while ( (v35 & 2) == 0 );
            }
          }
          else
          {
            do
            {
              v33 = v34;
              v47 = *(_QWORD *)(v34 + 8);
              if ( (*(_BYTE *)v47 & 2) != 0 )
                break;
              v33 = v47;
              v34 = *(_QWORD *)(v47 + 8);
            }
            while ( (*(_BYTE *)v34 & 2) == 0 );
          }
        }
        na = v33;
        sub_107EB0(a1, v29);
        v29 = (__int64 *)na;
      }
      while ( (unsigned __int64 *)na != v30 );
    }
LABEL_43:
    if ( (_BYTE)v73 )
    {
LABEL_44:
      v69 = &v70;
      sub_1075D0((__m128i *)a1, (__int64)&v70, (__int64 *)&v69);
    }
LABEL_26:
    if ( v70 )
    {
      v71.m128i_i64[0] = 0;
      qfree(v70);
    }
LABEL_28:
    v6 += v16;
    a4 -= v66;
    if ( a4 > 0 )
    {
      v13 = v12;
      v9 = a5[1];
      continue;
    }
    return v76 - __readfsqword(0x28u);
  }
}

