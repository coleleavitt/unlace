__int64 __fastcall sub_73B60(__int64 a1, __m128i *a2, const __m128i *a3)
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
  __int64 *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rax
  __m128i v40; // xmm0
  signed int v41; // eax
  char v42; // si
  unsigned __int64 v43; // rax
  __m128i v44; // xmm0
  __int64 v45; // rdx
  bool v46; // cc
  _BYTE *v47; // rdx
  __int64 v48; // rcx
  signed int v49; // eax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // [rsp+0h] [rbp-68h]
  unsigned __int64 *v55; // [rsp+8h] [rbp-60h]
  __int64 v56; // [rsp+8h] [rbp-60h]
  unsigned __int64 *v57; // [rsp+8h] [rbp-60h]
  __m128i *v59; // [rsp+20h] [rbp-48h]

  v8 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, 0);
  v59 = (__m128i *)&a3[15];
  v10 = a3;
  v11 = v9;
  v12 = v10;
  while ( 1 )
  {
    v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
    if ( v13 == sub_605C0 )
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
        v53 = qvector_reserve();
        v12[16].m128i_i64[0] = v53;
        v15 = v53;
        v14 = v12[16].m128i_i64[1];
      }
      *(_DWORD *)(v15 + 4 * v14) = v11;
      ++v12[16].m128i_i64[1];
      v16 = *(_QWORD *)a1;
      v17 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 96LL);
      if ( v17 == sub_60610 )
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
        v54 = v18;
        v19 = 0;
        while ( 1 )
        {
          v21 = *(__int64 (__fastcall **)(__int64, int, int))(v16 + 112);
          if ( v21 == sub_60650 )
          {
            v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL * v11) + 4 * v19);
            v23 = *(__int64 (__fastcall **)(__int64, int))(v16 + 104);
            if ( v23 != sub_60630 )
              goto LABEL_45;
          }
          else
          {
            v41 = v21(a1, v11, v19);
            v16 = *(_QWORD *)a1;
            v22 = v41;
            v23 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 104LL);
            if ( v23 != sub_60630 )
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
            if ( v54 == ++v19 )
              break;
          }
          else
          {
LABEL_19:
            v24 = *(__int64 (__fastcall **)(__int64))(v16 + 56);
            if ( v24 == sub_605C0 )
            {
              v25 = *(_DWORD *)(a1 + 56);
            }
            else
            {
              v49 = v24(a1);
              v16 = *(_QWORD *)a1;
              v25 = v49;
            }
            (*(void (__fastcall **)(__int64, _QWORD))(v16 + 168))(a1, (unsigned int)(v25 + 1));
            sub_6E1A0(a1, a2, v11, v22, v11, v25);
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
              if ( v26[2] < (unsigned __int64)(v27 + 1) )
              {
                v51 = qvector_reserve();
                v52 = v26[1];
                *v26 = v51;
                v28 = (signed int *)(v51 + 4 * v52);
              }
              *v28 = v22;
              ++v26[1];
              v36 = (__int64 *)(*(_QWORD *)(a1 + 72) + 24LL * v22);
              v37 = v36[1];
              v38 = *v36;
              if ( v36[2] < (unsigned __int64)(v37 + 1) )
              {
                v38 = qvector_reserve();
                *v36 = v38;
                v37 = v36[1];
              }
              *(_DWORD *)(v38 + 4 * v37) = v25;
              ++v36[1];
              v30 = (unsigned __int64 *)v12[15].m128i_i64[0];
              if ( !v30 )
              {
LABEL_42:
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
                *(__m128i *)(v39 + 8) = v40;
                *(_QWORD *)v39 = v39 & 0xFFFFFFFFFFFFFFFCLL | 2;
                v12[15].m128i_i64[0] = v39;
                *(_QWORD *)v39 = v39 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v39 & 3LL;
                *(__m128i *)(v12[15].m128i_i64[0] + 8) = _mm_unpacklo_epi64(
                                                           (__m128i)v12[15].m128i_u64[0],
                                                           (__m128i)v12[15].m128i_u64[0]);
                *(_QWORD *)v12[15].m128i_i64[0] &= ~1uLL;
                *(_QWORD *)v12[15].m128i_i64[0] |= 2uLL;
                v30 = (unsigned __int64 *)v12[15].m128i_i64[0];
LABEL_28:
                v55 = v30;
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
                v32 = v55;
                *(_OWORD *)v31 = 0;
                *(_OWORD *)(v31 + 16) = 0;
                *(_DWORD *)(v31 + 24) = v25;
                *(_QWORD *)v31 = (unsigned __int64)v55 & 0xFFFFFFFFFFFFFFFCLL;
                v33 = _mm_loadl_epi64(v12 + 15);
                *(_QWORD *)v31 = (unsigned __int64)v55 & 0xFFFFFFFFFFFFFFFCLL | 1;
                *(__m128i *)(v31 + 8) = _mm_unpacklo_epi64(v33, v33);
                if ( (unsigned __int64 *)v12[15].m128i_i64[0] == v55 )
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
            v42 = 1;
            v43 = *v30 & 0xFFFFFFFFFFFFFFFCLL;
            if ( (*(_BYTE *)v43 & 2) == 0 )
            {
              v35 = (signed int *)(v43 + 24);
              v46 = v25 <= *(_DWORD *)(v43 + 24);
              if ( v25 < *(_DWORD *)(v43 + 24) )
              {
LABEL_53:
                v47 = *(_BYTE **)(v43 + 8);
                v42 = 1;
                if ( (*v47 & 2) == 0 )
                  goto LABEL_54;
LABEL_57:
                v30 = (unsigned __int64 *)v43;
                goto LABEL_47;
              }
              while ( !v46 )
              {
                v47 = *(_BYTE **)(v43 + 16);
                v42 = 0;
                if ( (*v47 & 2) != 0 )
                  goto LABEL_57;
LABEL_54:
                v43 = (unsigned __int64)v47;
                v35 = (signed int *)(v47 + 24);
                v46 = v25 <= *v35;
                if ( v25 < *v35 )
                  goto LABEL_53;
              }
              if ( v43 )
                goto LABEL_34;
              v30 = nullptr;
            }
LABEL_47:
            v57 = v30;
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
            v32 = v57;
            *(_OWORD *)v31 = 0;
            *(_OWORD *)(v31 + 16) = 0;
            *(_DWORD *)(v31 + 24) = v25;
            *(_QWORD *)v31 = (unsigned __int64)v57 & 0xFFFFFFFFFFFFFFFCLL;
            v44 = _mm_loadl_epi64(v12 + 15);
            *(_QWORD *)v31 = (unsigned __int64)v57 & 0xFFFFFFFFFFFFFFFCLL | 1;
            *(__m128i *)(v31 + 8) = _mm_unpacklo_epi64(v44, v44);
            if ( (unsigned __int64 *)v12[15].m128i_i64[0] == v57 )
            {
LABEL_58:
              *v32 = v31 & 0xFFFFFFFFFFFFFFFCLL | *v32 & 3;
              *(_QWORD *)(v12[15].m128i_i64[0] + 8) = v31;
              *(_QWORD *)(v12[15].m128i_i64[0] + 16) = v31;
              v48 = *(_QWORD *)v31 & 2LL;
              *(_QWORD *)v31 &= ~1uLL;
              *(_QWORD *)v31 = v48 | v12[15].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
              goto LABEL_33;
            }
            if ( !v42 )
            {
              v57[2] = v31;
              v45 = v12[15].m128i_i64[0];
              if ( *(unsigned __int64 **)(v45 + 16) == v57 )
                *(_QWORD *)(v45 + 16) = v31;
              goto LABEL_32;
            }
LABEL_30:
            v32[1] = v31;
            v34 = v12[15].m128i_i64[0];
            if ( *(unsigned __int64 **)(v34 + 8) == v32 )
              *(_QWORD *)(v34 + 8) = v31;
LABEL_32:
            v56 = v31;
            sub_72E90(v59, (__int64 *)v31);
            v31 = v56;
LABEL_33:
            ++v12[15].m128i_i64[1];
            v35 = (signed int *)(v31 + 24);
LABEL_34:
            v35[1] = v22;
            v8 = 1;
            ++v19;
            sub_6B640((__int64)v12, v22);
            v16 = *(_QWORD *)a1;
            if ( v54 == v19 )
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

