__m128i *__fastcall sub_2D26C0(__int64 a1, unsigned __int8 **a2, unsigned __int64 a3)
{
  unsigned __int8 *v4; // rax
  unsigned __int8 v5; // cl
  __m128i *v6; // rax
  __m128i *v7; // rbp
  int v8; // r13d
  __int64 v9; // rsi
  __int64 v10; // rcx
  size_t v11; // rdx
  int v12; // r10d
  __int64 v13; // rdi
  char v14; // bl
  char v15; // r9
  char v16; // r8
  unsigned __int64 *v17; // rsi
  __int64 v18; // r12
  __int64 v19; // rax
  char v20; // bl
  int v21; // r14d
  char v22; // dl
  __int64 v23; // rax
  __int64 v24; // rax
  char v25; // si
  const char *v26; // rax
  size_t v27; // rax
  const void *v28; // r8
  size_t v29; // r9
  __int64 v30; // rax
  int v31; // eax
  void *v32; // rax
  void *v33; // rax
  unsigned __int64 v34; // rbx
  _BYTE *v35; // rax
  char v36; // r12
  void *v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rax
  __m128i v40; // xmm1
  _QWORD *exception; // rdi
  size_t n; // [rsp+8h] [rbp-F0h]
  size_t nb; // [rsp+8h] [rbp-F0h]
  char na; // [rsp+8h] [rbp-F0h]
  size_t nd; // [rsp+8h] [rbp-F0h]
  size_t nc; // [rsp+8h] [rbp-F0h]
  char v48; // [rsp+10h] [rbp-E8h]
  const void *v49; // [rsp+10h] [rbp-E8h]
  int v50; // [rsp+18h] [rbp-E0h]
  size_t v51; // [rsp+18h] [rbp-E0h]
  int v52; // [rsp+20h] [rbp-D8h]
  unsigned __int8 v53; // [rsp+24h] [rbp-D4h]
  char v54; // [rsp+25h] [rbp-D3h]
  char v55; // [rsp+26h] [rbp-D2h]
  const __m128i *v57; // [rsp+38h] [rbp-C0h] BYREF
  __m128i v58; // [rsp+40h] [rbp-B8h] BYREF
  int v59; // [rsp+50h] [rbp-A8h] BYREF
  char v60; // [rsp+54h] [rbp-A4h]
  char v61; // [rsp+55h] [rbp-A3h]
  __int16 v62; // [rsp+56h] [rbp-A2h]
  void *src; // [rsp+58h] [rbp-A0h] BYREF
  __int128 v64; // [rsp+60h] [rbp-98h]
  __int64 v65; // [rsp+70h] [rbp-88h]
  __int64 v66; // [rsp+80h] [rbp-78h] BYREF
  int v67; // [rsp+88h] [rbp-70h]
  int v68; // [rsp+90h] [rbp-68h]
  char v69; // [rsp+94h] [rbp-64h]
  char v70; // [rsp+95h] [rbp-63h]
  char v71; // [rsp+96h] [rbp-62h]
  char v72; // [rsp+97h] [rbp-61h]
  __int64 v73; // [rsp+98h] [rbp-60h]
  __m128i v74; // [rsp+A0h] [rbp-58h]
  __int64 v75; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v76; // [rsp+B8h] [rbp-40h]

  v76 = __readfsqword(0x28u);
  v4 = *a2;
  v58 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a2, (__m128i)a3);
  if ( (unsigned __int64)v4 >= a3 )
  {
    v53 = 0;
  }
  else
  {
    v5 = *v4;
    v58.m128i_i64[0] = (__int64)(v4 + 1);
    v53 = v5;
    if ( v5 > 2u )
      return nullptr;
  }
  v6 = (__m128i *)qalloc();
  v7 = v6;
  if ( !v6 )
    sub_4F618();
  v6->m128i_i64[0] = 0;
  v6->m128i_i64[1] = 0;
  v8 = 0;
  v52 = unpack_dd();
  if ( v52 > 0 )
  {
LABEL_18:
    v18 = sub_3323C0((__int64)&v58, *(_QWORD *)(a1 + 8));
    v19 = v58.m128i_i64[0];
    if ( v58.m128i_i64[0] >= (unsigned __int64)v58.m128i_i64[1] )
    {
      v22 = 0;
      v21 = 0;
      v20 = 0;
    }
    else
    {
      v20 = *(_BYTE *)v58.m128i_i64[0];
      v19 = v58.m128i_i64[0] + 1;
      v21 = *(_BYTE *)v58.m128i_i64[0] & 7;
      v22 = *(_BYTE *)v58.m128i_i64[0] & 7;
    }
    v58.m128i_i64[0] = v19;
    v59 = 0;
    v60 = v22;
    v61 = 0;
    v62 = 0;
    src = nullptr;
    v65 = 0;
    v64 = 0;
    if ( v53 == 1 )
    {
      v31 = unpack_dd();
      sub_329C80((__int64)&v59, v31 & 0xFF60000);
      v24 = v65;
      v25 = v60;
      if ( v60 <= 1 )
        goto LABEL_23;
    }
    else
    {
      v23 = unpack_dq();
      sub_329C80((__int64)&v59, v23 & 0xFFFFFF0FF60000LL);
      v24 = v65;
      v25 = v60;
      if ( v60 <= 1 || v53 == 2 )
      {
LABEL_23:
        if ( !(unsigned __int8)is_enum() )
        {
          v9 = (unsigned int)v60;
          if ( !(unsigned __int8)is_stroff() )
            goto LABEL_7;
        }
        v26 = sub_332380((const char **)&v58, v58.m128i_u64[1]);
        if ( v26 && (n = (size_t)v26, v27 = strlen(v26), v28 = (const void *)n, (v29 = v27) != 0) )
        {
          v37 = src;
          v38 = v27 + 1;
          if ( *((_QWORD *)&v64 + 1) < v27 + 1 )
          {
            v51 = v27;
            v49 = (const void *)n;
            nc = v27 + 1;
            src = (void *)qvector_reserve((__int64)&src, (__int64)src, v38, 1);
            v29 = v51;
            v37 = src;
            v28 = v49;
            v38 = nc;
          }
          *(_QWORD *)&v64 = v38;
          nd = v29;
          memmove(v37, v28, v29);
          *((_BYTE *)src + nd) = 0;
        }
        else
        {
          *(_QWORD *)&v64 = 0;
        }
        v9 = (unsigned int)v60;
        if ( (unsigned __int8)is_enum() )
        {
          v30 = v58.m128i_i64[0];
          v10 = 0;
          if ( v58.m128i_i64[0] < (unsigned __int64)v58.m128i_i64[1] )
          {
            v10 = *(unsigned __int8 *)v58.m128i_i64[0];
            v30 = v58.m128i_i64[0] + 1;
          }
          v58.m128i_i64[0] = v30;
          LOBYTE(v62) = v10;
        }
        else
        {
LABEL_7:
          v10 = (unsigned __int8)v62;
        }
        v11 = v64;
        v12 = v59;
        v13 = 0;
        v14 = v20 & 0xF8 | 1;
        v15 = v60;
        v16 = HIBYTE(v62);
        v61 = v14;
        if ( (_QWORD)v64 )
        {
          v55 = HIBYTE(v62);
          v54 = v60;
          v50 = v59;
          v48 = v10;
          nb = v64;
          v32 = (void *)qalloc_or_throw(v64, v9, v64, v10);
          v33 = memcpy(v32, src, nb);
          v16 = v55;
          v15 = v54;
          v12 = v50;
          LOBYTE(v10) = v48;
          v13 = (__int64)v33;
          v11 = nb;
        }
        v67 = v21;
        v66 = v18;
        v68 = v12;
        v69 = v15;
        v70 = v14;
        v71 = v10;
        v72 = v16;
        v73 = v13;
        v75 = v65;
        v74 = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
        v17 = (unsigned __int64 *)v7->m128i_i64[0];
        v57 = (const __m128i *)&v66;
        if ( !v17 )
        {
          v39 = qalloc();
          v40 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v39, (__m128i)(unsigned __int64)v39);
          if ( !v39 )
          {
            exception = __cxa_allocate_exception(8u);
            *exception = (char *)&`vtable for'std::bad_alloc + 16;
            __cxa_throw(
              exception,
              (struct type_info *)&`typeinfo for'std::bad_alloc,
              (void (*)(void *))&std::bad_alloc::~bad_alloc);
          }
          *(_OWORD *)(v39 + 16) = 0;
          *(_OWORD *)(v39 + 32) = 0;
          *(_OWORD *)(v39 + 48) = 0;
          *(_QWORD *)v39 = v39 & 0xFFFFFFFFFFFFFFFCLL | 2;
          *(_OWORD *)(v39 + 64) = 0;
          *(__m128i *)(v39 + 8) = v40;
          v7->m128i_i64[0] = v39;
          *(_QWORD *)v39 = v39 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v39 & 3LL;
          *(__m128i *)(v7->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v7->m128i_u64[0], (__m128i)v7->m128i_u64[0]);
          *(_QWORD *)v7->m128i_i64[0] &= ~1uLL;
          *(_QWORD *)v7->m128i_i64[0] |= 2uLL;
          v17 = (unsigned __int64 *)v7->m128i_i64[0];
LABEL_12:
          sub_2D2540(v7, v17, 1, &v57);
          goto LABEL_13;
        }
        if ( !v7->m128i_i64[1] )
          goto LABEL_12;
        v34 = *v17 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (*(_BYTE *)v34 & 2) != 0 )
        {
          v36 = 1;
LABEL_44:
          sub_2D2540(v7, v17, v36, &v57);
          goto LABEL_13;
        }
        na = 1;
        while ( 1 )
        {
          if ( (int)sub_257C40((__int64)&v66, v34 + 24) >= 0 )
          {
            if ( (int)sub_257C40(v34 + 24, (__int64)&v66) >= 0 )
            {
              if ( !v34 )
              {
LABEL_39:
                v36 = na;
                v17 = (unsigned __int64 *)v34;
                goto LABEL_44;
              }
LABEL_13:
              if ( v73 )
              {
                v74.m128i_i64[0] = 0;
                qfree(v73);
              }
              if ( src )
              {
                *(_QWORD *)&v64 = 0;
                qfree((__int64)src);
              }
              if ( v52 == ++v8 )
                goto LABEL_48;
              goto LABEL_18;
            }
            na = 0;
            v35 = *(_BYTE **)(v34 + 16);
          }
          else
          {
            na = 1;
            v35 = *(_BYTE **)(v34 + 8);
          }
          if ( (*v35 & 2) != 0 )
            goto LABEL_39;
          v34 = (unsigned __int64)v35;
        }
      }
    }
    v65 = sub_329C10(v24, 1u, v25);
    goto LABEL_23;
  }
LABEL_48:
  *a2 = (unsigned __int8 *)v58.m128i_i64[0];
  return v7;
}

