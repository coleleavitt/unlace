__int64 __fastcall sub_2CD600(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 *v3; // rsi
  __int64 v4; // r12
  __int64 v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rbp
  unsigned int v8; // r15d
  _QWORD *v9; // r10
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // r15
  _QWORD *v19; // rdx
  __int64 v20; // rdi
  __m128i v21; // xmm0
  __m128i v22; // xmm1
  __int64 v23; // rax
  __m128i v24; // xmm1
  __m128i v25; // xmm2
  int v26; // edx
  __m128i v27; // xmm0
  __int64 v28; // rdx
  _QWORD *v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // r9
  __int64 v34; // rax
  _QWORD *v35; // r10
  _QWORD *v36; // r13
  __int64 *v37; // rbx
  __int64 v38; // r14
  __int64 v39; // rbp
  __int64 v40; // r12
  __int64 v41; // rcx
  __m128i v42; // xmm0
  char v45; // cl
  unsigned __int64 v46; // rsi
  char v47; // dl
  _BYTE *v48; // rdx
  const void *v49; // r13
  void *v50; // rax
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 v53; // rbx
  __int64 v54; // rbp
  __int64 v55; // r15
  const char *v56; // rsi
  __int64 v57; // r12
  __int64 v58; // rbp
  _QWORD *v59; // rax
  _QWORD *exception; // rdi
  _QWORD *v61; // rdi
  __m128i v62; // [rsp+0h] [rbp-128h] BYREF
  __m128i v63; // [rsp+18h] [rbp-110h]
  __int64 v64; // [rsp+28h] [rbp-100h]
  __int64 v65; // [rsp+30h] [rbp-F8h]
  __int64 v66; // [rsp+38h] [rbp-F0h]
  _QWORD *v67; // [rsp+40h] [rbp-E8h]
  __int64 v68; // [rsp+48h] [rbp-E0h]
  __int64 v69; // [rsp+50h] [rbp-D8h]
  __int64 *v70; // [rsp+58h] [rbp-D0h]
  const __m128i *v71; // [rsp+68h] [rbp-C0h] BYREF
  __m128i v72; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v73; // [rsp+80h] [rbp-A8h] BYREF
  __int128 v74; // [rsp+88h] [rbp-A0h]
  int v75; // [rsp+A0h] [rbp-88h]
  __int64 v76; // [rsp+A8h] [rbp-80h] BYREF
  __m128i v77; // [rsp+B0h] [rbp-78h] BYREF
  int v78; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v79; // [rsp+C8h] [rbp-60h]
  __m128i v80; // [rsp+D0h] [rbp-58h] BYREF
  unsigned __int64 v81; // [rsp+E8h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 24) == 0;
  v64 = a2;
  v81 = __readfsqword(0x28u);
  v3 = *(__int64 **)(a1 + 32);
  if ( !v2 )
  {
    v4 = a1;
    v73 = 0;
    v74 = 0;
    v5 = *v3;
    v63.m128i_i64[0] = v5;
    if ( v5 )
    {
      v63.m128i_i64[1] = v3[1];
      if ( v63.m128i_i64[1] )
      {
        v63.m128i_i64[1] = 0;
        v6 = *(_QWORD **)(v5 + 8);
        if ( (_QWORD *)v5 != v6 )
        {
          v7 = 0;
          while ( 1 )
          {
LABEL_6:
            v8 = *((_DWORD *)v6 + 6);
            v9 = v6 + 3;
            v10 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL);
            if ( (signed int)v8 < *(_DWORD *)(v10 + 64) )
            {
              if ( v8 >= *(_DWORD *)(v10 + 64) )
              {
                if ( !under_debugger )
                  sub_37EEE0(52719);
                BUG();
              }
              v11 = *(_QWORD *)(*(_QWORD *)(v10 + 528) + 8LL * v8);
              v12 = *(_QWORD *)(v11 + 48);
              if ( v12 )
                v13 = *(_QWORD *)(v12 + 24);
              else
                v13 = *(_QWORD *)(v11 + 32);
              v14 = *((_QWORD *)&v74 + 1);
              v62.m128i_i64[0] = (__int64)(v6 + 4);
              v15 = v74;
              if ( *((_QWORD *)&v74 + 1) < (unsigned __int64)(v74 + 1) )
              {
                v67 = v6 + 3;
                v66 = v13;
                v70 = &v73;
                v32 = qvector_reserve();
                v33 = v66;
                v34 = *((_QWORD *)&v74 + 1);
                *((_QWORD *)&v74 + 1) = v14;
                v35 = v67;
                v65 = v34;
                if ( (__int64)v74 - 1 >= 0 )
                {
                  v36 = v67;
                  v67 = v6;
                  v37 = (__int64 *)v73;
                  v38 = v32;
                  v68 = v7;
                  v39 = v32;
                  v69 = v4;
                  v40 = v74 - 1;
                  do
                  {
                    v41 = *v37;
                    v42 = _mm_loadu_si128((const __m128i *)(v37 + 1));
                    *v37 = 0;
                    v37[2] = 0;
                    *(_QWORD *)v39 = v41;
                    *(__m128i *)(v39 + 8) = v42;
                    *(_QWORD *)(v39 + 24) = v37[3];
                    *(_DWORD *)(v39 + 32) = *((_DWORD *)v37 + 8);
                    if ( *v37 )
                    {
                      v37[1] = 0;
                      qfree();
                    }
                    v37 += 5;
                    v39 += 40;
                  }
                  while ( v40-- != 0 );
                  v32 = v38;
                  v33 = v66;
                  v6 = v67;
                  v35 = v36;
                  v7 = v68;
                  v4 = v69;
                }
                v68 = v32;
                v67 = v35;
                v66 = v33;
                qfree();
                v16 = v68;
                v13 = v66;
                v9 = v67;
                *((_QWORD *)&v74 + 1) = v65;
                v15 = v74;
                v73 = v68;
              }
              else
              {
                v16 = v73;
              }
              v17 = v16 + 40 * v15;
              *(_QWORD *)v17 = 0;
              *(_OWORD *)(v17 + 8) = 0;
              *(_DWORD *)(v17 + 32) = v8;
              *(_QWORD *)&v74 = v74 + 1;
              *(_QWORD *)(v17 + 24) = v13;
              if ( v62.m128i_i64[0] != v17 )
              {
                v18 = v9[2];
                if ( v18 > 1 )
                {
                  v62.m128i_i64[0] = v16 + 40 * v15;
                  v49 = (const void *)v9[1];
                  v50 = (void *)qvector_reserve();
                  v51 = v62.m128i_i64[0];
                  *(_QWORD *)v62.m128i_i64[0] = v50;
                  *(_QWORD *)(v51 + 8) = v18;
                  memmove(v50, v49, v18 - 1);
                  *(_BYTE *)(*(_QWORD *)v62.m128i_i64[0] + v18 - 1) = 0;
                }
                else
                {
                  *(_QWORD *)(v17 + 8) = 0;
                }
              }
              goto LABEL_15;
            }
            v75 = *((_DWORD *)v6 + 6);
            v76 = 0;
            v77 = 0;
            sub_2AA6A0(&v76, (__int64)(v6 + 4));
            v20 = v76;
            v21 = _mm_load_si128(&v77);
            v71 = (const __m128i *)&v78;
            v78 = v75;
            v79 = v76;
            v80 = v21;
            if ( !v7 )
            {
              v52 = qalloc();
              v7 = v52;
              v22 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v52, (__m128i)(unsigned __int64)v52);
              if ( !v52 )
              {
                exception = __cxa_allocate_exception(8u);
                *exception = (char *)&`vtable for'std::bad_alloc + 16;
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'std::bad_alloc,
                  (void (*)(void *))&std::bad_alloc::~bad_alloc);
              }
              *(_QWORD *)(v52 + 48) = 0;
              *(_OWORD *)(v52 + 16) = 0;
              *(_OWORD *)(v52 + 32) = 0;
              *(__m128i *)(v52 + 8) = v22;
              *(_QWORD *)v52 = v52 & 0xFFFFFFFFFFFFFFFCLL | 2;
LABEL_22:
              v62 = v22;
              v23 = qalloc();
              v24 = _mm_load_si128(&v62);
              v25 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v23, (__m128i)(unsigned __int64)v23);
              if ( !v23 )
              {
                v61 = __cxa_allocate_exception(8u);
                *v61 = (char *)&`vtable for'std::bad_alloc + 16;
                __cxa_throw(
                  v61,
                  (struct type_info *)&`typeinfo for'std::bad_alloc,
                  (void (*)(void *))&std::bad_alloc::~bad_alloc);
              }
              *(_OWORD *)v23 = 0;
              v26 = v78;
              *(_OWORD *)(v23 + 16) = 0;
              *(_DWORD *)(v23 + 24) = v26;
              v27 = _mm_load_si128(&v80);
              v80 = 0;
              *(_QWORD *)(v23 + 32) = v79;
              *(__m128i *)(v23 + 40) = v27;
              v79 = 0;
              *(_QWORD *)v23 = v7 & 0xFFFFFFFFFFFFFFFCLL | 1;
              *(__m128i *)(v23 + 8) = v24;
              v28 = *(_QWORD *)v7;
              *(__m128i *)(v7 + 8) = v25;
              ++v63.m128i_i64[1];
              *(_QWORD *)v7 = v23 & 0xFFFFFFFFFFFFFFFCLL | v28 & 3;
              *(_QWORD *)v23 = v7 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v23 & 2LL;
              v20 = v79;
              goto LABEL_24;
            }
            v22 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v7, (__m128i)(unsigned __int64)v7);
            if ( !v63.m128i_i64[1] )
              goto LABEL_22;
            v45 = 1;
            v46 = *(_QWORD *)v7 & 0xFFFFFFFFFFFFFFFCLL;
            if ( (*(_BYTE *)v46 & 2) != 0 )
            {
              v46 = v7;
              v47 = 1;
LABEL_48:
              v72.m128i_i64[0] = v7;
              v72.m128i_i64[1] = v63.m128i_i64[1];
              sub_2CC840(&v72, (unsigned __int64 *)v46, v47, &v71);
              v7 = v72.m128i_i64[0];
              v20 = v79;
              v63.m128i_i64[1] = v72.m128i_i64[1];
              goto LABEL_24;
            }
            while ( 1 )
            {
              if ( *(_DWORD *)(v46 + 24) > v75 )
              {
                v48 = *(_BYTE **)(v46 + 8);
                v45 = 1;
                goto LABEL_52;
              }
              if ( *(_DWORD *)(v46 + 24) >= v75 )
                break;
              v48 = *(_BYTE **)(v46 + 16);
              v45 = 0;
LABEL_52:
              if ( (*v48 & 2) != 0 )
                goto LABEL_53;
              v46 = (unsigned __int64)v48;
            }
            if ( !v46 )
            {
LABEL_53:
              v47 = v45;
              goto LABEL_48;
            }
LABEL_24:
            if ( v20 )
            {
              v80.m128i_i64[0] = 0;
              qfree();
            }
LABEL_15:
            if ( (*v6 & 2) != 0 )
            {
LABEL_18:
              if ( (_QWORD *)v63.m128i_i64[0] == v6 )
                goto LABEL_19;
            }
            else
            {
              v19 = (_QWORD *)v6[2];
              if ( (*(_BYTE *)v19 & 2) == 0 )
              {
                do
                {
                  v6 = v19;
                  v19 = (_QWORD *)v19[1];
                }
                while ( (*(_BYTE *)v19 & 2) == 0 );
                goto LABEL_18;
              }
              v29 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFCLL);
              v30 = *v29;
              if ( (*v29 & 2) == 0 )
              {
                while ( v6 == (_QWORD *)v29[2] )
                {
                  v6 = v29;
                  v31 = v30 & 0xFFFFFFFFFFFFFFFCLL;
                  v30 = *(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v30 & 2) != 0 )
                  {
                    v6 = (_QWORD *)v31;
                    if ( v63.m128i_i64[0] != v31 )
                      goto LABEL_6;
                    goto LABEL_19;
                  }
                  v29 = (_QWORD *)v31;
                }
              }
              v6 = v29;
              if ( (_QWORD *)v63.m128i_i64[0] == v29 )
              {
LABEL_19:
                v63.m128i_i64[0] = v7;
                goto LABEL_43;
              }
            }
          }
        }
      }
      v63.m128i_i64[0] = 0;
    }
    else
    {
      v63 = 0u;
    }
LABEL_43:
    v72 = v63;
    sub_2AE8A0(v64, v72.m128i_i64);
    if ( (_QWORD)v74 )
    {
      sub_32DD20(v64, v74);
      v53 = v73 + 40 * v74;
      if ( v73 != v53 )
      {
        v54 = v73;
        do
        {
          v55 = v64;
          sub_32DD20(v64, *(unsigned int *)(v54 + 32));
          sub_32DFE0(v55, *(_QWORD *)(v54 + 24) - *(_QWORD *)(v4 + 8));
          v56 = s1;
          if ( *(_QWORD *)(v54 + 8) )
            v56 = *(const char **)v54;
          sub_32DEA0(v64, v56);
          v54 += 40;
        }
        while ( v53 != v54 );
        v53 = v73;
      }
      if ( !v53 )
        goto LABEL_45;
      v57 = v74;
      if ( (_QWORD)v74 )
      {
        v58 = 0;
        do
        {
          v59 = (_QWORD *)(v53 + 40 * v58);
          if ( *v59 )
          {
            v59[1] = 0;
            qfree();
            v53 = v73;
          }
          ++v58;
        }
        while ( v57 != v58 );
      }
    }
    else if ( !v73 )
    {
LABEL_45:
      sub_2B7EB0(v72.m128i_i64);
      return v81 - __readfsqword(0x28u);
    }
    *(_QWORD *)&v74 = 0;
    qfree();
    goto LABEL_45;
  }
  return sub_2AE8A0(v64, v3);
}

