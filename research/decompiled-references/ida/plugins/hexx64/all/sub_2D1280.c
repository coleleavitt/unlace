unsigned __int64 __fastcall sub_2D1280(__int64 a1, __int64 *a2, __int64 a3, unsigned __int64 a4)
{
  bool v4; // zf
  __int64 *v5; // rsi
  __m128i v6; // xmm0
  __int64 v7; // r12
  __int64 v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rbp
  unsigned int v11; // r15d
  _QWORD *v12; // r10
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // r8
  unsigned __int64 v20; // r15
  _QWORD *v21; // rdx
  __int64 v22; // rdi
  __m128i v23; // xmm1
  __int64 v24; // rax
  __m128i v25; // xmm1
  __m128i v26; // xmm2
  int v27; // edx
  __int64 v28; // rdx
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // r14
  _QWORD *v35; // r10
  _QWORD *v36; // r13
  unsigned __int64 v37; // rbx
  __int64 v38; // r14
  __int64 v39; // rbp
  __int64 v40; // r12
  __int64 v41; // rcx
  __int64 v42; // rdi
  __int64 v44; // rbx
  unsigned __int64 v46; // rsi
  char v47; // dl
  _BYTE *v48; // rdx
  __int64 v49; // rsi
  __int64 v50; // rdx
  const void *v51; // r13
  void *v52; // rax
  __int64 v53; // r8
  __int64 v54; // rax
  unsigned __int64 v55; // rbp
  __int64 *v56; // r15
  const char *v57; // rsi
  __int64 v58; // r12
  __int64 v59; // rbp
  __int64 *v60; // rax
  __int64 v61; // rdi
  _QWORD *exception; // rdi
  _QWORD *v63; // rdi
  __m128i v64; // [rsp+0h] [rbp-128h] BYREF
  __m128i v65; // [rsp+18h] [rbp-110h]
  __int64 *v66; // [rsp+28h] [rbp-100h]
  __int64 v67; // [rsp+30h] [rbp-F8h]
  __int64 v68; // [rsp+38h] [rbp-F0h]
  _QWORD *v69; // [rsp+40h] [rbp-E8h]
  __int64 v70; // [rsp+48h] [rbp-E0h]
  __int64 v71; // [rsp+50h] [rbp-D8h]
  unsigned __int64 *v72; // [rsp+58h] [rbp-D0h]
  const __m128i *v73; // [rsp+68h] [rbp-C0h] BYREF
  __m128i v74; // [rsp+70h] [rbp-B8h] BYREF
  unsigned __int64 v75; // [rsp+80h] [rbp-A8h] BYREF
  __int128 v76; // [rsp+88h] [rbp-A0h]
  int v77; // [rsp+A0h] [rbp-88h]
  __int64 v78; // [rsp+A8h] [rbp-80h] BYREF
  __m128i v79; // [rsp+B0h] [rbp-78h] BYREF
  int v80; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v81; // [rsp+C8h] [rbp-60h]
  __m128i v82; // [rsp+D0h] [rbp-58h] BYREF
  unsigned __int64 v83; // [rsp+E8h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 24) == 0;
  v66 = a2;
  v83 = __readfsqword(0x28u);
  v5 = *(__int64 **)(a1 + 32);
  if ( !v4 )
  {
    v6.m128i_i64[0] = 0;
    v7 = a1;
    v75 = 0;
    v76 = 0;
    v8 = *v5;
    v65.m128i_i64[0] = v8;
    if ( v8 )
    {
      v65.m128i_i64[1] = v5[1];
      if ( v65.m128i_i64[1] )
      {
        v65.m128i_i64[1] = 0;
        v9 = *(_QWORD **)(v8 + 8);
        if ( (_QWORD *)v8 != v9 )
        {
          v10 = 0;
          while ( 1 )
          {
LABEL_6:
            v11 = *((_DWORD *)v9 + 6);
            v12 = v9 + 3;
            v13 = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL);
            if ( (signed int)v11 < *(_DWORD *)(v13 + 64) )
            {
              if ( v11 >= *(_DWORD *)(v13 + 64) )
              {
                if ( !under_debugger )
                  sub_383060(0xCDEFu, *(double *)v6.m128i_i64);
                BUG();
              }
              v14 = *(_QWORD *)(*(_QWORD *)(v13 + 528) + 8LL * v11);
              v15 = *(_QWORD *)(v14 + 48);
              if ( v15 )
                v16 = *(_QWORD *)(v15 + 24);
              else
                v16 = *(_QWORD *)(v14 + 32);
              v17 = *((_QWORD *)&v76 + 1);
              v64.m128i_i64[0] = (__int64)(v9 + 4);
              v18 = v76;
              if ( *((_QWORD *)&v76 + 1) < (unsigned __int64)(v76 + 1) )
              {
                v69 = v9 + 3;
                v68 = v16;
                v72 = &v75;
                v31 = qvector_reserve((__int64)&v75, 0, v76 + 1, 40);
                v32 = v68;
                v33 = *((_QWORD *)&v76 + 1);
                v34 = v75;
                *((_QWORD *)&v76 + 1) = v17;
                v35 = v69;
                v67 = v33;
                if ( (__int64)v76 - 1 >= 0 )
                {
                  v36 = v69;
                  v69 = v9;
                  v37 = v75;
                  v38 = v31;
                  v70 = v10;
                  v39 = v31;
                  v71 = v7;
                  v40 = v76 - 1;
                  do
                  {
                    v41 = *(_QWORD *)v37;
                    v6 = _mm_loadu_si128((const __m128i *)(v37 + 8));
                    *(_QWORD *)v37 = 0;
                    *(_QWORD *)(v37 + 16) = 0;
                    *(_QWORD *)v39 = v41;
                    *(__m128i *)(v39 + 8) = v6;
                    *(_QWORD *)(v39 + 24) = *(_QWORD *)(v37 + 24);
                    *(_DWORD *)(v39 + 32) = *(_DWORD *)(v37 + 32);
                    v42 = *(_QWORD *)v37;
                    if ( *(_QWORD *)v37 )
                    {
                      *(_QWORD *)(v37 + 8) = 0;
                      qfree(v42);
                    }
                    v37 += 40LL;
                    v39 += 40;
                  }
                  while ( v40-- != 0 );
                  v31 = v38;
                  v32 = v68;
                  v9 = v69;
                  v35 = v36;
                  v10 = v70;
                  v7 = v71;
                  v34 = v75;
                }
                v70 = v31;
                v69 = v35;
                v68 = v32;
                qfree(v34);
                a4 = v70;
                v16 = v68;
                v12 = v69;
                *((_QWORD *)&v76 + 1) = v67;
                v18 = v76;
                v75 = v70;
              }
              else
              {
                a4 = v75;
              }
              v19 = a4 + 40 * v18;
              *(_QWORD *)v19 = 0;
              *(_OWORD *)(v19 + 8) = 0;
              *(_DWORD *)(v19 + 32) = v11;
              *(_QWORD *)&v76 = v76 + 1;
              *(_QWORD *)(v19 + 24) = v16;
              if ( v64.m128i_i64[0] != v19 )
              {
                v20 = v12[2];
                if ( v20 > 1 )
                {
                  v49 = *(_QWORD *)v19;
                  v50 = v12[2];
                  v64.m128i_i64[0] = a4 + 40 * v18;
                  v51 = (const void *)v12[1];
                  v52 = (void *)qvector_reserve(v19, v49, v50, 1);
                  v53 = v64.m128i_i64[0];
                  *(_QWORD *)v64.m128i_i64[0] = v52;
                  *(_QWORD *)(v53 + 8) = v20;
                  memmove(v52, v51, v20 - 1);
                  *(_BYTE *)(*(_QWORD *)v64.m128i_i64[0] + v20 - 1) = 0;
                }
                else
                {
                  *(_QWORD *)(v19 + 8) = 0;
                }
              }
              goto LABEL_15;
            }
            v77 = *((_DWORD *)v9 + 6);
            v78 = 0;
            v79 = 0;
            sub_2AE320(&v78, (__int64)(v9 + 4), v13, a4);
            v22 = v78;
            v6 = _mm_load_si128(&v79);
            v73 = (const __m128i *)&v80;
            v80 = v77;
            v81 = v78;
            v82 = v6;
            if ( !v10 )
            {
              v54 = qalloc();
              v10 = v54;
              v23 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v54, (__m128i)(unsigned __int64)v54);
              if ( !v54 )
              {
                exception = __cxa_allocate_exception(8u);
                *exception = (char *)&`vtable for'std::bad_alloc + 16;
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'std::bad_alloc,
                  (void (*)(void *))&std::bad_alloc::~bad_alloc);
              }
              *(_QWORD *)(v54 + 48) = 0;
              *(_OWORD *)(v54 + 16) = 0;
              *(_OWORD *)(v54 + 32) = 0;
              *(__m128i *)(v54 + 8) = v23;
              *(_QWORD *)v54 = v54 & 0xFFFFFFFFFFFFFFFCLL | 2;
LABEL_22:
              v64 = v23;
              v24 = qalloc();
              v25 = _mm_load_si128(&v64);
              v26 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v24, (__m128i)(unsigned __int64)v24);
              if ( !v24 )
              {
                v63 = __cxa_allocate_exception(8u);
                *v63 = (char *)&`vtable for'std::bad_alloc + 16;
                __cxa_throw(
                  v63,
                  (struct type_info *)&`typeinfo for'std::bad_alloc,
                  (void (*)(void *))&std::bad_alloc::~bad_alloc);
              }
              *(_OWORD *)v24 = 0;
              v27 = v80;
              a4 = v10 & 0xFFFFFFFFFFFFFFFCLL;
              *(_OWORD *)(v24 + 16) = 0;
              *(_DWORD *)(v24 + 24) = v27;
              v6 = _mm_load_si128(&v82);
              v82 = 0;
              *(_QWORD *)(v24 + 32) = v81;
              *(__m128i *)(v24 + 40) = v6;
              v81 = 0;
              *(_QWORD *)v24 = v10 & 0xFFFFFFFFFFFFFFFCLL | 1;
              *(__m128i *)(v24 + 8) = v25;
              v28 = *(_QWORD *)v10;
              *(__m128i *)(v10 + 8) = v26;
              ++v65.m128i_i64[1];
              *(_QWORD *)v10 = v24 & 0xFFFFFFFFFFFFFFFCLL | v28 & 3;
              *(_QWORD *)v24 = v10 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v24 & 2LL;
              v22 = v81;
              goto LABEL_24;
            }
            v23 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, (__m128i)(unsigned __int64)v10);
            if ( !v65.m128i_i64[1] )
              goto LABEL_22;
            a4 = 1;
            v46 = *(_QWORD *)v10 & 0xFFFFFFFFFFFFFFFCLL;
            if ( (*(_BYTE *)v46 & 2) != 0 )
            {
              v46 = v10;
              v47 = 1;
LABEL_48:
              v74.m128i_i64[0] = v10;
              v74.m128i_i64[1] = v65.m128i_i64[1];
              sub_2D04C0(&v74, (unsigned __int64 *)v46, v47, &v73);
              v10 = v74.m128i_i64[0];
              v22 = v81;
              v65.m128i_i64[1] = v74.m128i_i64[1];
              goto LABEL_24;
            }
            while ( 1 )
            {
              if ( *(_DWORD *)(v46 + 24) > v77 )
              {
                v48 = *(_BYTE **)(v46 + 8);
                a4 = 1;
                goto LABEL_52;
              }
              if ( *(_DWORD *)(v46 + 24) >= v77 )
                break;
              v48 = *(_BYTE **)(v46 + 16);
              a4 = 0;
LABEL_52:
              if ( (*v48 & 2) != 0 )
                goto LABEL_53;
              v46 = (unsigned __int64)v48;
            }
            if ( !v46 )
            {
LABEL_53:
              v47 = a4;
              goto LABEL_48;
            }
LABEL_24:
            if ( v22 )
            {
              v82.m128i_i64[0] = 0;
              qfree(v22);
            }
LABEL_15:
            if ( (*v9 & 2) != 0 )
            {
LABEL_18:
              if ( (_QWORD *)v65.m128i_i64[0] == v9 )
                goto LABEL_19;
            }
            else
            {
              v21 = (_QWORD *)v9[2];
              if ( (*(_BYTE *)v21 & 2) == 0 )
              {
                do
                {
                  v9 = v21;
                  v21 = (_QWORD *)v21[1];
                }
                while ( (*(_BYTE *)v21 & 2) == 0 );
                goto LABEL_18;
              }
              v29 = (_QWORD *)(*v9 & 0xFFFFFFFFFFFFFFFCLL);
              v30 = *v29;
              if ( (*v29 & 2) == 0 )
              {
                while ( v9 == (_QWORD *)v29[2] )
                {
                  v9 = v29;
                  a4 = v30 & 0xFFFFFFFFFFFFFFFCLL;
                  v30 = *(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v30 & 2) != 0 )
                  {
                    v9 = (_QWORD *)a4;
                    if ( v65.m128i_i64[0] != a4 )
                      goto LABEL_6;
                    goto LABEL_19;
                  }
                  v29 = (_QWORD *)a4;
                }
              }
              v9 = v29;
              if ( (_QWORD *)v65.m128i_i64[0] == v29 )
              {
LABEL_19:
                v65.m128i_i64[0] = v10;
                goto LABEL_43;
              }
            }
          }
        }
      }
      v65.m128i_i64[0] = 0;
    }
    else
    {
      v65 = 0u;
    }
LABEL_43:
    v74 = v65;
    sub_2B2520(v66, v74.m128i_i64);
    if ( (_QWORD)v76 )
    {
      sub_332160(v66);
      v44 = v75 + 40 * v76;
      if ( v75 != v44 )
      {
        v55 = v75;
        do
        {
          v56 = v66;
          sub_332160(v66);
          sub_332420(v56);
          v57 = s1;
          if ( *(_QWORD *)(v55 + 8) )
            v57 = *(const char **)v55;
          sub_3322E0(v66, v57);
          v55 += 40LL;
        }
        while ( v44 != v55 );
        v44 = v75;
      }
      if ( !v44 )
        goto LABEL_45;
      v58 = v76;
      if ( (_QWORD)v76 )
      {
        v59 = 0;
        do
        {
          v60 = (__int64 *)(v44 + 40 * v59);
          v61 = *v60;
          if ( *v60 )
          {
            v60[1] = 0;
            qfree(v61);
            v44 = v75;
          }
          ++v59;
        }
        while ( v58 != v59 );
      }
    }
    else
    {
      v44 = v75;
      if ( !v75 )
      {
LABEL_45:
        sub_2BBB30(v74.m128i_i64);
        return v83 - __readfsqword(0x28u);
      }
    }
    *(_QWORD *)&v76 = 0;
    qfree(v44);
    goto LABEL_45;
  }
  return sub_2B2520(v66, v5);
}

