__int64 __fastcall sub_785E0(__int64 a1, __m128i *a2, const __m128i *a3)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  _QWORD *exception; // rax
  unsigned int v8; // ebp
  signed int v9; // r14d
  const __m128i *v10; // rax
  signed int v11; // r15d
  const __m128i *v12; // r14
  __int64 (__fastcall *v13)(__int64); // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 (__fastcall *v17)(__int64, int); // rax
  int v18; // eax
  __int64 v19; // rbx
  int v20; // eax
  __int64 (__fastcall *v21)(__int64, int, int); // rax
  signed int v22; // r12d
  __int64 (__fastcall *v23)(__int64, int); // rax
  __int64 (__fastcall *v24)(__int64); // rax
  signed int v25; // ebp
  __int64 *v26; // rdi
  __int64 v27; // rdx
  signed int *v28; // rcx
  signed int *v29; // rax
  unsigned __int64 *v30; // rcx
  __int64 v31; // rax
  unsigned __int64 *v32; // rcx
  __m128i v33; // xmm0
  __int64 v34; // rdx
  signed int *v35; // rdx
  unsigned __int64 v36; // rdx
  __int64 *v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rax
  __m128i v41; // xmm0
  signed int v42; // eax
  char v43; // si
  unsigned __int64 v44; // rax
  __m128i v45; // xmm0
  __int64 v46; // rdx
  bool v47; // cc
  _BYTE *v48; // rdx
  __int64 v49; // rcx
  signed int v50; // eax
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // [rsp+0h] [rbp-68h]
  unsigned __int64 *v56; // [rsp+8h] [rbp-60h]
  __int64 v57; // [rsp+8h] [rbp-60h]
  unsigned __int64 *v58; // [rsp+8h] [rbp-60h]
  __m128i *v60; // [rsp+20h] [rbp-48h]

  v8 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, 0);
  v60 = (__m128i *)&a3[15];
  v10 = a3;
  v11 = v9;
  v12 = v10;
  while ( 1 )
  {
    v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
    if ( v13 == sub_65040 )
    {
      if ( v11 == *(_DWORD *)(a1 + 56) )
        return v8;
      goto LABEL_4;
    }
    if ( v11 == (unsigned int)v13(a1) )
      return v8;
LABEL_4:
    if ( (unsigned __int64)v11 < v12[18].m128i_i64[0] && (*(_BYTE *)(v12[17].m128i_i64[1] + 4LL * v11) & 1) != 0 )
    {
      v14 = v12[16].m128i_i64[1];
      v15 = v12[16].m128i_i64[0];
      if ( v12[17].m128i_i64[0] < (unsigned __int64)(v14 + 1) )
      {
        v54 = qvector_reserve((__int64)v12[16].m128i_i64, v15, v14 + 1, 4);
        v12[16].m128i_i64[0] = v54;
        v15 = v54;
        v14 = v12[16].m128i_i64[1];
      }
      *(_DWORD *)(v15 + 4 * v14) = v11;
      ++v12[16].m128i_i64[1];
      v16 = *(_QWORD *)a1;
      v17 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 96LL);
      if ( v17 == sub_65090 )
      {
        if ( !*(_QWORD *)(a1 + 56) )
          goto LABEL_35;
        v18 = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 24LL * v11 + 8);
      }
      else
      {
        v18 = v17(a1, v11);
        v16 = *(_QWORD *)a1;
      }
      if ( v18 > 0 )
      {
        v55 = v18;
        v19 = 0;
        while ( 1 )
        {
          v21 = *(__int64 (__fastcall **)(__int64, int, int))(v16 + 112);
          if ( v21 == sub_650D0 )
          {
            v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL * v11) + 4 * v19);
            v23 = *(__int64 (__fastcall **)(__int64, int))(v16 + 104);
            if ( v23 != sub_650B0 )
              goto LABEL_45;
          }
          else
          {
            v42 = v21(a1, v11, v19);
            v16 = *(_QWORD *)a1;
            v22 = v42;
            v23 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 104LL);
            if ( v23 != sub_650B0 )
            {
LABEL_45:
              v20 = v23(a1, v22);
              v16 = *(_QWORD *)a1;
              goto LABEL_14;
            }
          }
          if ( !*(_QWORD *)(a1 + 80) )
            goto LABEL_19;
          v20 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 24LL * v22 + 8);
LABEL_14:
          if ( v20 == 1 )
          {
            if ( v55 == ++v19 )
              break;
          }
          else
          {
LABEL_19:
            v24 = *(__int64 (__fastcall **)(__int64))(v16 + 56);
            if ( v24 == sub_65040 )
            {
              v25 = *(_DWORD *)(a1 + 56);
            }
            else
            {
              v50 = v24(a1);
              v16 = *(_QWORD *)a1;
              v25 = v50;
            }
            (*(void (__fastcall **)(__int64, _QWORD))(v16 + 168))(a1, (unsigned int)(v25 + 1));
            sub_72C20(a1, a2, v11, v22, v11, v25);
            v26 = (__int64 *)(*(_QWORD *)(a1 + 48) + 24LL * v25);
            v27 = v26[1];
            v28 = (signed int *)(*v26 + 4 * v27);
            if ( (signed int *)*v26 == v28 )
              goto LABEL_37;
            v29 = (signed int *)*v26;
            while ( v22 != *v29 )
            {
              if ( v28 == ++v29 )
                goto LABEL_37;
            }
            if ( v29 == v28 )
            {
LABEL_37:
              v36 = v27 + 1;
              if ( v26[2] < v36 )
              {
                v52 = qvector_reserve((__int64)v26, *v26, v36, 4);
                v53 = v26[1];
                *v26 = v52;
                v28 = (signed int *)(v52 + 4 * v53);
              }
              *v28 = v22;
              ++v26[1];
              v37 = (__int64 *)(*(_QWORD *)(a1 + 72) + 24LL * v22);
              v38 = v37[1];
              v39 = *v37;
              if ( v37[2] < (unsigned __int64)(v38 + 1) )
              {
                v39 = qvector_reserve((__int64)v37, v39, v38 + 1, 4);
                *v37 = v39;
                v38 = v37[1];
              }
              *(_DWORD *)(v39 + 4 * v38) = v25;
              ++v37[1];
              v30 = (unsigned __int64 *)v12[15].m128i_i64[0];
              if ( !v30 )
              {
LABEL_42:
                v40 = qalloc();
                v41 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v40, (__m128i)(unsigned __int64)v40);
                if ( !v40 )
                {
                  exception = __cxa_allocate_exception(8u);
                  *exception = (char *)&`vtable for'std::bad_alloc + 16;
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'std::bad_alloc,
                    (void (*)(void *))&std::bad_alloc::~bad_alloc);
                }
                *(_OWORD *)(v40 + 16) = 0;
                *(__m128i *)(v40 + 8) = v41;
                *(_QWORD *)v40 = v40 & 0xFFFFFFFFFFFFFFFCLL | 2;
                v12[15].m128i_i64[0] = v40;
                *(_QWORD *)v40 = v40 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v40 & 3LL;
                *(__m128i *)(v12[15].m128i_i64[0] + 8) = _mm_unpacklo_epi64(
                                                           (__m128i)v12[15].m128i_u64[0],
                                                           (__m128i)v12[15].m128i_u64[0]);
                *(_QWORD *)v12[15].m128i_i64[0] &= ~1uLL;
                *(_QWORD *)v12[15].m128i_i64[0] |= 2uLL;
                v30 = (unsigned __int64 *)v12[15].m128i_i64[0];
LABEL_28:
                v56 = v30;
                v31 = qalloc();
                if ( !v31 )
                {
                  v4 = __cxa_allocate_exception(8u);
                  *v4 = (char *)&`vtable for'std::bad_alloc + 16;
                  __cxa_throw(
                    v4,
                    (struct type_info *)&`typeinfo for'std::bad_alloc,
                    (void (*)(void *))&std::bad_alloc::~bad_alloc);
                }
                v32 = v56;
                *(_OWORD *)v31 = 0;
                *(_OWORD *)(v31 + 16) = 0;
                *(_DWORD *)(v31 + 24) = v25;
                *(_QWORD *)v31 = (unsigned __int64)v56 & 0xFFFFFFFFFFFFFFFCLL;
                v33 = _mm_loadl_epi64(v12 + 15);
                *(_QWORD *)v31 = (unsigned __int64)v56 & 0xFFFFFFFFFFFFFFFCLL | 1;
                *(__m128i *)(v31 + 8) = _mm_unpacklo_epi64(v33, v33);
                if ( (unsigned __int64 *)v12[15].m128i_i64[0] == v56 )
                  goto LABEL_58;
                goto LABEL_30;
              }
            }
            else
            {
              v30 = (unsigned __int64 *)v12[15].m128i_i64[0];
              if ( !v30 )
                goto LABEL_42;
            }
            if ( !v12[15].m128i_i64[1] )
              goto LABEL_28;
            v43 = 1;
            v44 = *v30 & 0xFFFFFFFFFFFFFFFCLL;
            if ( (*(_BYTE *)v44 & 2) == 0 )
            {
              v35 = (signed int *)(v44 + 24);
              v47 = v25 <= *(_DWORD *)(v44 + 24);
              if ( v25 < *(_DWORD *)(v44 + 24) )
              {
LABEL_53:
                v48 = *(_BYTE **)(v44 + 8);
                v43 = 1;
                if ( (*v48 & 2) == 0 )
                  goto LABEL_54;
LABEL_57:
                v30 = (unsigned __int64 *)v44;
                goto LABEL_47;
              }
              while ( !v47 )
              {
                v48 = *(_BYTE **)(v44 + 16);
                v43 = 0;
                if ( (*v48 & 2) != 0 )
                  goto LABEL_57;
LABEL_54:
                v44 = (unsigned __int64)v48;
                v35 = (signed int *)(v48 + 24);
                v47 = v25 <= *v35;
                if ( v25 < *v35 )
                  goto LABEL_53;
              }
              if ( v44 )
                goto LABEL_34;
              v30 = nullptr;
            }
LABEL_47:
            v58 = v30;
            v31 = qalloc();
            if ( !v31 )
            {
              v3 = __cxa_allocate_exception(8u);
              *v3 = (char *)&`vtable for'std::bad_alloc + 16;
              __cxa_throw(
                v3,
                (struct type_info *)&`typeinfo for'std::bad_alloc,
                (void (*)(void *))&std::bad_alloc::~bad_alloc);
            }
            v32 = v58;
            *(_OWORD *)v31 = 0;
            *(_OWORD *)(v31 + 16) = 0;
            *(_DWORD *)(v31 + 24) = v25;
            *(_QWORD *)v31 = (unsigned __int64)v58 & 0xFFFFFFFFFFFFFFFCLL;
            v45 = _mm_loadl_epi64(v12 + 15);
            *(_QWORD *)v31 = (unsigned __int64)v58 & 0xFFFFFFFFFFFFFFFCLL | 1;
            *(__m128i *)(v31 + 8) = _mm_unpacklo_epi64(v45, v45);
            if ( (unsigned __int64 *)v12[15].m128i_i64[0] == v58 )
            {
LABEL_58:
              *v32 = v31 & 0xFFFFFFFFFFFFFFFCLL | *v32 & 3;
              *(_QWORD *)(v12[15].m128i_i64[0] + 8) = v31;
              *(_QWORD *)(v12[15].m128i_i64[0] + 16) = v31;
              v49 = *(_QWORD *)v31 & 2LL;
              *(_QWORD *)v31 &= ~1uLL;
              *(_QWORD *)v31 = v49 | v12[15].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
              goto LABEL_33;
            }
            if ( !v43 )
            {
              v58[2] = v31;
              v46 = v12[15].m128i_i64[0];
              if ( *(unsigned __int64 **)(v46 + 16) == v58 )
                *(_QWORD *)(v46 + 16) = v31;
              goto LABEL_32;
            }
LABEL_30:
            v32[1] = v31;
            v34 = v12[15].m128i_i64[0];
            if ( *(unsigned __int64 **)(v34 + 8) == v32 )
              *(_QWORD *)(v34 + 8) = v31;
LABEL_32:
            v57 = v31;
            sub_77910(v60, (__int64 *)v31);
            v31 = v57;
LABEL_33:
            ++v12[15].m128i_i64[1];
            v35 = (signed int *)(v31 + 24);
LABEL_34:
            v35[1] = v22;
            v8 = 1;
            ++v19;
            sub_700C0((__int64)v12, v22);
            v16 = *(_QWORD *)a1;
            if ( v55 == v19 )
              break;
          }
        }
      }
LABEL_35:
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v16 + 160))(a1, (unsigned int)(v11 + 1));
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, (unsigned int)(v11 + 1));
    }
  }
}

