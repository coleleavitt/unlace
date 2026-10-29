unsigned __int64 __fastcall sub_A2370(_QWORD *a1, __int64 a2, char a3)
{
  void *exception; // rbx
  __int64 v4; // rbx
  _QWORD *v5; // r13
  unsigned __int64 v6; // rdx
  __int128 v7; // kr00_16
  __int64 v8; // rax
  _BYTE *v9; // rsi
  unsigned int *v10; // r12
  unsigned int *v11; // r15
  unsigned int *v12; // r13
  __int64 v13; // r14
  void (__fastcall *v14)(_QWORD *); // rsi
  void (__fastcall *v15)(_QWORD *); // rcx
  _QWORD *v16; // rax
  __int64 v17; // rbx
  _QWORD *v18; // r12
  void *v19; // rdi
  __int64 v20; // r12
  _QWORD *v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rdi
  unsigned __int64 v24; // rax
  __int64 v26; // rax
  __int64 v27; // r15
  __int64 v28; // rax
  const char *v29; // rsi
  __int64 v30; // rax
  __m128i si128; // xmm1
  __int64 v32; // r12
  __int64 v33; // rax
  __m128i v34; // xmm0
  unsigned int (__fastcall **v35)(__int64, unsigned __int64 (__fastcall *)(__int64), _QWORD, _QWORD, __int64 *, _BYTE *); // rax
  unsigned int v36; // eax
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  _QWORD *v40; // [rsp+0h] [rbp-A0h]
  _QWORD *v41; // [rsp+8h] [rbp-98h]
  __int64 v44; // [rsp+20h] [rbp-80h]
  __int64 v45; // [rsp+20h] [rbp-80h]
  _QWORD *v46; // [rsp+28h] [rbp-78h]
  __int64 v47; // [rsp+40h] [rbp-60h] BYREF
  _BYTE v48[24]; // [rsp+48h] [rbp-58h] BYREF
  unsigned __int64 v49; // [rsp+60h] [rbp-40h]

  v4 = (__int64)a1;
  v49 = __readfsqword(0x28u);
  memset(v48, 0, sizeof(v48));
  *(_QWORD *)v48 = qvector_reserve(v48, 0, 1, 2);
  v5 = a1 + 35;
  *(_WORD *)(*(_QWORD *)v48 + 2LL * *(_QWORD *)&v48[8]) = 17;
  LOWORD(v47) = 60;
  v6 = *(_QWORD *)&v48[8] + 2LL;
  ++*(_QWORD *)&v48[8];
  v7 = *(_OWORD *)v48;
  if ( *(_QWORD *)&v48[16] < v6 )
  {
    *(_QWORD *)v48 = qvector_reserve(v48, *(_QWORD *)v48, v6, 2);
    v7 = *(_OWORD *)v48;
  }
  *(_WORD *)(v7 + 2LL * *((_QWORD *)&v7 + 1)) = 60;
  ++*(_QWORD *)&v48[8];
  sub_9FF50(a1 + 35, (__int64)a1, 1u, (__int64)v48);
  if ( *(_QWORD *)v48 )
  {
    *(_QWORD *)&v48[8] = 0;
    qfree(*(_QWORD *)v48);
  }
  v41 = a1 + 38;
  memset(v48, 0, sizeof(v48));
  *(_QWORD *)v48 = qvector_reserve(v48, 0, 1, 2);
  *(_WORD *)(*(_QWORD *)v48 + 2LL * (*(_QWORD *)&v48[8])++) = 65;
  sub_9FF50(a1 + 38, (__int64)a1, 0, (__int64)v48);
  if ( *(_QWORD *)v48 )
  {
    *(_QWORD *)&v48[8] = 0;
    qfree(*(_QWORD *)v48);
  }
  v8 = a1[16];
  v9 = a1 + 42;
  v10 = *(unsigned int **)(v8 + 304);
  v11 = &v10[*(_QWORD *)(v8 + 312)];
  if ( v10 != v11 )
  {
    v40 = a1 + 42;
    v46 = a1 + 35;
    v12 = *(unsigned int **)(v8 + 304);
    do
    {
      v13 = *(_QWORD *)(*(_QWORD *)(v4 + 280) + 264LL * *v12 + 216);
      if ( v13 && !*(_DWORD *)(v13 + 8) )
      {
        v14 = **(void (__fastcall ***)(_QWORD *))v13;
        if ( v14 == sub_15E30 )
        {
          v15 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v13 + 16LL);
          if ( v15 == sub_15D70 )
          {
            *(_QWORD *)v13 = &off_C71D8;
            v16 = *(_QWORD **)(v13 + 128);
            if ( v16 )
            {
              if ( v16[2] )
              {
                v44 = v4;
                v17 = v16[2];
                v18 = *(_QWORD **)(v13 + 128);
                do
                {
                  sub_80300(*(_QWORD **)(v17 + 24));
                  v19 = (void *)v17;
                  v17 = *(_QWORD *)(v17 + 16);
                  operator delete(v19, 0x30u);
                }
                while ( v17 );
                v4 = v44;
                v16 = v18;
              }
              operator delete(v16, 0x30u);
            }
            v20 = *(_QWORD *)(v13 + 152);
            if ( v20 )
            {
              v45 = v4;
              do
              {
                v21 = (_QWORD *)v20;
                sub_80A30(*(_QWORD **)(v20 + 24));
                v22 = *(_QWORD *)(v20 + 32);
                v20 = *(_QWORD *)(v20 + 16);
                if ( v22 )
                {
                  v21[5] = 0;
                  qfree(v22);
                }
                operator delete(v21, 0x48u);
              }
              while ( v20 );
              v4 = v45;
            }
            v23 = *(_QWORD *)(v13 + 96);
            if ( v23 )
            {
              *(_QWORD *)(v13 + 104) = 0;
              qfree(v23);
            }
            operator delete((void *)v13, 0xC0u);
          }
          else
          {
            v15((_QWORD *)v13);
          }
        }
        else
        {
          v14((_QWORD *)v13);
        }
      }
      v9 = v48;
      ++v12;
      *(__m128i *)v48 = _mm_loadu_si128((const __m128i *)(v13 + 72));
      rangeset_t_add(v40, v48);
    }
    while ( v11 != v12 );
    v5 = v46;
  }
  if ( a3 && *(_QWORD *)(*(_QWORD *)(v4 + 136) + 200LL) > 1u )
  {
    sub_1D740((__int64)"Trying to load '.gnu_debugaltlink' companion file.\n", v9);
    v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v4 + 136) + 96LL))(v4);
    v27 = v26;
    if ( !v26 )
      goto LABEL_48;
    v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    v29 = src;
    if ( *(_QWORD *)(v28 + 8) )
      v29 = *(const char **)v28;
    sub_1D740((__int64)"'.gnu_debugaltlink' found. Trying to import data from '%s'\n", v29);
    v30 = operator new(0x160u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_AB160);
    v32 = v30;
    *(_OWORD *)(v30 + 112) = 0;
    *(_QWORD *)v30 = 0;
    *(_QWORD *)(v30 + 104) = 0;
    *(_QWORD *)(v30 + 128) = 0;
    *(_OWORD *)(v30 + 136) = 0;
    *(_OWORD *)(v30 + 152) = 0;
    *(_QWORD *)(v30 + 168) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v30 + 176) = 0xFFFFFFFFLL;
    *(_QWORD *)(v30 + 184) = -1;
    *(_QWORD *)(v30 + 192) = 0;
    *(_QWORD *)(v30 + 232) = 0;
    *(_QWORD *)(v30 + 240) = 0;
    *(_QWORD *)(v30 + 248) = 0;
    *(_QWORD *)(v30 + 256) = 0;
    *(_QWORD *)(v30 + 264) = 0;
    *(_QWORD *)(v30 + 272) = 0;
    *(_QWORD *)(v30 + 280) = 0;
    *(_QWORD *)(v30 + 304) = 0;
    *(_QWORD *)(v30 + 328) = 0;
    *(_OWORD *)(v30 + 200) = 0;
    *(__m128i *)(v30 + 216) = si128;
    *(_OWORD *)(v30 + 312) = 0;
    *(_OWORD *)(v30 + 336) = 0;
    sub_83090((__int64 *)v30);
    v33 = *(_QWORD *)(v4 + 136);
    *(__m128i *)(v32 + 8) = _mm_loadu_si128((const __m128i *)(v33 + 8));
    *(__m128i *)(v32 + 24) = _mm_loadu_si128((const __m128i *)(v33 + 24));
    *(__m128i *)(v32 + 40) = _mm_loadu_si128((const __m128i *)(v33 + 40));
    *(__m128i *)(v32 + 56) = _mm_loadu_si128((const __m128i *)(v33 + 56));
    *(__m128i *)(v32 + 72) = _mm_loadu_si128((const __m128i *)(v33 + 72));
    v34 = _mm_loadu_si128((const __m128i *)(v33 + 88));
    *(_QWORD *)v32 = v27;
    *(__m128i *)(v32 + 88) = v34;
    if ( !(unsigned __int8)sub_83240(v32)
      || (*(_QWORD *)(v32 + 296) = v32 + 8,
          v35 = *(unsigned int (__fastcall ***)(__int64, unsigned __int64 (__fastcall *)(__int64), _QWORD, _QWORD, __int64 *, _BYTE *))(v4 + 88),
          *(_QWORD *)(v32 + 288) = v32,
          *(_QWORD *)v48 = 0,
          (*v35)(v32 + 288, sub_1E1F0, 0, 0, &v47, v48)) )
    {
LABEL_48:
      exception = __cxa_allocate_exception(0x18u);
      sub_94DC0((__int64)exception, (__int64)"Couldn't load debugaltlink");
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'dwarf_file_t::failure_t, (void (*)(void *))sub_28140);
    }
    v36 = (unsigned int)sub_9EE10(v4, v32, v47, 1);
    sub_A2370(v36, 0, 1, v37, v38, v39);
  }
  sub_A22D0(v4, v5, a2);
  *(_QWORD *)(v4 + 24) = *(_QWORD *)(v4 + 8);
  sub_A22D0(v4, v41, a2);
  v24 = *(_QWORD *)(v4 + 8);
  if ( *(_QWORD *)(v4 + 64) != v24 )
  {
    if ( !under_debugger )
      interr(30481);
LABEL_47:
    BUG();
  }
  if ( v24 >> 62 )
  {
    if ( !under_debugger )
      interr(30429);
    goto LABEL_47;
  }
  *(_BYTE *)(v4 + 409) = 1;
  return v49 - __readfsqword(0x28u);
}

