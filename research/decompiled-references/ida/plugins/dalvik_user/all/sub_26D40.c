__int64 __fastcall sub_26D40(__int64 a1, void *a2, __int64 a3, int a4, int a5, int a6)
{
  unsigned __int64 *v7; // rbx
  unsigned __int64 v8; // rcx
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // r14d
  int v14; // r9d
  size_t v15; // r15
  __int64 v16; // rax
  int v17; // r13d
  void *v18; // r12
  __int64 v19; // rax
  __int64 v20; // rsi
  const char *v21; // rcx
  __int64 v22; // rax
  void *v23; // r12
  __m128i v24; // xmm0
  __int64 v25; // rax
  _QWORD *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r9
  const __m128i *v30; // rdi
  __int64 v31; // rdx
  __int32 v32; // ecx
  __int64 v33; // rcx
  __m128i v34; // xmm0
  void *v36; // rdi
  unsigned int v37; // eax
  void *v38; // [rsp+8h] [rbp-D0h]
  const void *v39; // [rsp+8h] [rbp-D0h]
  __int64 v40; // [rsp+10h] [rbp-C8h]
  __int64 v41; // [rsp+18h] [rbp-C0h]
  unsigned int v42; // [rsp+20h] [rbp-B8h]
  void *src; // [rsp+30h] [rbp-A8h] BYREF
  size_t n[3]; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v46; // [rsp+50h] [rbp-88h] BYREF
  __int64 v47; // [rsp+58h] [rbp-80h]
  __int64 v48; // [rsp+60h] [rbp-78h]
  void *dest[2]; // [rsp+68h] [rbp-70h]
  __int128 v50; // [rsp+78h] [rbp-60h]
  __int128 v51; // [rsp+88h] [rbp-50h]
  unsigned __int64 v52; // [rsp+98h] [rbp-40h]

  LODWORD(v7) = (_DWORD)a2;
  v52 = __readfsqword(0x28u);
  sub_58110(a1, (unsigned int)"dalvik_debmod_t::add_thread(0x%llx)\n", (_DWORD)a2, a4, a5, a6);
  v8 = *(_QWORD *)(a1 + 1856);
  if ( !v8 )
    goto LABEL_8;
  v9 = 0;
  v10 = 0;
  while ( 1 )
  {
    v11 = *(_QWORD *)(a1 + 1848) + 40 * v10;
    if ( a2 == *(void **)(v11 + 8) )
      break;
    v10 = ++v9;
    if ( v9 >= v8 )
      goto LABEL_8;
  }
  if ( v11 )
  {
    return 0;
  }
  else
  {
LABEL_8:
    *(_OWORD *)n = 0;
    src = nullptr;
    v12 = sub_4F490(a1 + 864, &src, a2);
    if ( (_BYTE)v12 )
    {
      v15 = n[0];
      if ( n[0] )
      {
        v16 = (__int64)src;
        v42 = 0;
        if ( *(_BYTE *)src == 60 )
          goto LABEL_36;
        v17 = *(_DWORD *)(a1 + 1824) + 1;
        *(_DWORD *)(a1 + 1824) = v17;
        v42 = v17;
        v38 = a2;
LABEL_12:
        v18 = (void *)qalloc_or_throw();
        memcpy(v18, src, v15);
        goto LABEL_14;
      }
      v18 = nullptr;
      v17 = *(_DWORD *)(a1 + 1824) + 1;
      *(_DWORD *)(a1 + 1824) = v17;
      v42 = v17;
      v38 = a2;
      while ( 1 )
      {
LABEL_14:
        v19 = *(_QWORD *)(a1 + 1856);
        if ( *(_QWORD *)(a1 + 1864) < (unsigned __int64)(v19 + 1) )
        {
          v40 = *(_QWORD *)(a1 + 1864);
          v27 = qvector_reserve();
          v28 = *(_QWORD *)(a1 + 1856);
          v20 = v27;
          v29 = *(_QWORD *)(a1 + 1864);
          v30 = *(const __m128i **)(a1 + 1848);
          *(_QWORD *)(a1 + 1864) = v40;
          v31 = v28 - 1;
          if ( v31 >= 0 )
          {
            do
            {
              v32 = v30->m128i_i32[0];
              v27 += 40;
              v30 = (const __m128i *)((char *)v30 + 40);
              *(_DWORD *)(v27 - 40) = v32;
              *(_QWORD *)(v27 - 32) = v30[-2].m128i_i64[0];
              v33 = v30[-2].m128i_i64[1];
              v34 = _mm_loadu_si128(v30 - 1);
              v30[-2].m128i_i64[1] = 0;
              *(_QWORD *)(v27 - 24) = v33;
              *(__m128i *)(v27 - 16) = v34;
              v30[-1].m128i_i64[1] = 0;
            }
            while ( v31-- != 0 );
          }
          v41 = v29;
          qfree();
          v14 = v41;
          v19 = *(_QWORD *)(a1 + 1856);
          *(_QWORD *)(a1 + 1848) = v20;
          *(_QWORD *)(a1 + 1864) = v41;
        }
        else
        {
          v20 = *(_QWORD *)(a1 + 1848);
        }
        v21 = nptr;
        v22 = v20 + 40 * v19;
        *(_DWORD *)v22 = v17;
        *(_QWORD *)(v22 + 8) = v38;
        *(_QWORD *)(v22 + 16) = v18;
        *(__m128i *)(v22 + 24) = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v15);
        ++*(_QWORD *)(a1 + 1856);
        if ( n[0] )
          LODWORD(v21) = (_DWORD)src;
        sub_58110(
          a1,
          (unsigned int)"dalvik_debmod_t::add_thread(0x%llx) name '%s' tid=%d\n",
          (_DWORD)v7,
          (_DWORD)v21,
          v42,
          v14);
        if ( v42 == 1 )
          break;
        v7 = &v46;
        *(_OWORD *)dest = 0;
        v46 = 0xFFFFFFFFLL;
        v47 = -1;
        v48 = 0;
        v50 = 0;
        v51 = 0;
        set_debug_event_code();
        if ( (HIDWORD(v48) & 0xFFFFFFFu) - 9 <= 1 || (HIDWORD(v48) & 0xFFFFFFF) == 3 )
        {
          v23 = (void *)n[0];
          if ( n[0] > 1 )
          {
            v36 = dest[0];
            v39 = src;
            if ( (unsigned __int64)v50 < n[0] )
            {
              dest[0] = (void *)qvector_reserve();
              v36 = dest[0];
            }
            dest[1] = v23;
            memmove(v36, v39, (size_t)v23 - 1);
            *((char *)dest[0] + (unsigned __int64)v23 - 1) = 0;
          }
          else
          {
            dest[1] = nullptr;
          }
          v24 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 656));
          v47 = -1;
          v25 = *(_QWORD *)(a1 + 184);
          v26 = *(_QWORD **)(a1 + 168);
          LOBYTE(v48) = 1;
          v46 = _mm_unpacklo_epi32(v24, _mm_cvtsi32_si128(v42)).m128i_u64[0];
          if ( v26 == (_QWORD *)(v25 - 72) )
          {
            sub_26BE0((_QWORD *)(a1 + 120));
          }
          else
          {
            *v26 = 0xFFFFFFFFLL;
            v26[1] = -1;
            v26[2] = 0;
            copy_debug_event();
            *(_QWORD *)(a1 + 168) += 72LL;
          }
          free_debug_event();
          break;
        }
        if ( under_debugger )
          BUG();
        v16 = interr();
LABEL_36:
        v37 = strtoul((const char *)(v16 + 1), nullptr, 10);
        if ( v37 )
        {
          v42 = v37;
          v17 = v37;
        }
        else
        {
          v17 = v42;
        }
        v15 = n[0];
        if ( !v17 )
        {
          v17 = *(_DWORD *)(a1 + 1824) + 1;
          *(_DWORD *)(a1 + 1824) = v17;
          v42 = v17;
        }
        v38 = a2;
        if ( v15 )
          goto LABEL_12;
        v18 = nullptr;
      }
    }
    if ( src )
    {
      n[0] = 0;
      qfree();
    }
  }
  return v12;
}

