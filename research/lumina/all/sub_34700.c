__int64 __fastcall sub_34700(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v5; // cc
  __m128i *v7; // rax
  __m128i si128; // xmm0
  _BYTE *v9; // rsi
  const char *v10; // rdx
  unsigned int v11; // eax
  unsigned int v12; // eax
  void *v13; // r13
  void *v14; // r12
  size_t v15; // r15
  void *v16; // r14
  int v17; // r10d
  __int64 v18; // r9
  unsigned int v19; // r8d
  __int64 v20; // rax
  __int64 v21; // rsi
  __m128i v22; // xmm0
  __int64 v23; // rax
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  void *v26; // rdi
  size_t v27; // r14
  __int64 v28; // rax
  size_t v29; // r15
  char v30; // cl
  int v31; // edx
  unsigned int v32; // eax
  int v33; // edx
  unsigned int v34; // ebx
  void (__fastcall ***v35)(_QWORD); // rdi
  bool v36; // zf
  void (__fastcall ***v37)(_QWORD); // rdi
  __int64 v39; // r15
  unsigned __int64 v40; // r13
  __int64 v41; // r14
  __m128i v42; // xmm0
  char *v43; // rax
  __int64 v45; // [rsp+18h] [rbp-1C8h]
  __int64 v46; // [rsp+20h] [rbp-1C0h]
  unsigned int v47; // [rsp+28h] [rbp-1B8h]
  int v48; // [rsp+2Ch] [rbp-1B4h]
  void *v50; // [rsp+40h] [rbp-1A0h]
  __m128i v51; // [rsp+50h] [rbp-190h] BYREF
  __int64 v52; // [rsp+60h] [rbp-180h]
  __m128i v53; // [rsp+68h] [rbp-178h] BYREF
  int v54; // [rsp+7Ch] [rbp-164h] BYREF
  __int64 v55; // [rsp+80h] [rbp-160h] BYREF
  __int64 v56; // [rsp+88h] [rbp-158h] BYREF
  void *ptr; // [rsp+90h] [rbp-150h] BYREF
  __int128 v58; // [rsp+98h] [rbp-148h]
  void *src; // [rsp+B0h] [rbp-130h] BYREF
  size_t n[2]; // [rsp+B8h] [rbp-128h]
  void *v61; // [rsp+C8h] [rbp-118h] BYREF
  size_t v62[2]; // [rsp+D0h] [rbp-110h]
  void *v63; // [rsp+E0h] [rbp-100h] BYREF
  size_t v64[2]; // [rsp+E8h] [rbp-F8h]
  void *v65; // [rsp+F8h] [rbp-E8h] BYREF
  __int128 v66; // [rsp+100h] [rbp-E0h]
  __int64 v67; // [rsp+110h] [rbp-D0h]
  __int64 v68; // [rsp+118h] [rbp-C8h] BYREF
  unsigned int v69; // [rsp+120h] [rbp-C0h]
  int v70; // [rsp+190h] [rbp-50h]
  __int64 v71; // [rsp+198h] [rbp-48h]
  unsigned int v72; // [rsp+1A0h] [rbp-40h]
  unsigned __int64 v73; // [rsp+1A8h] [rbp-38h]

  v5 = *(_QWORD *)(a2 + 32) <= 0x1Fu;
  v73 = __readfsqword(0x28u);
  v45 = a2 + 16;
  if ( v5 )
    *(_QWORD *)(a2 + 16) = sub_1987B0(a2 + 16, *(_QWORD *)(a2 + 16), 32, 120);
  v58 = 0;
  ptr = nullptr;
  v7 = (__m128i *)sub_1987B0(&ptr, 0, 114, 1);
  ptr = v7;
  *(_QWORD *)&v58 = 114;
  *v7 = _mm_load_si128((const __m128i *)&xmmword_1B6A60);
  si128 = _mm_load_si128((const __m128i *)&xmmword_1B6A70);
  v9 = ptr;
  v7[7].m128i_i8[0] = 32;
  v7[1] = si128;
  v7[2] = _mm_load_si128((const __m128i *)&xmmword_1B6A80);
  v7[3] = _mm_load_si128((const __m128i *)&xmmword_1B6A90);
  v7[4] = _mm_load_si128((const __m128i *)&xmmword_1B6AA0);
  v7[5] = _mm_load_si128((const __m128i *)&xmmword_1B6AB0);
  v7[6] = _mm_load_si128((const __m128i *)&xmmword_1B6AC0);
  v9[113] = 0;
  if ( *(_DWORD *)(a4 + 12) == 1 )
  {
    v39 = v58;
    if ( (_QWORD)v58 )
    {
      v41 = v58 + 21;
      v40 = v58 + 22;
      v39 = v58 - 1;
    }
    else
    {
      v40 = 23;
      v41 = 22;
    }
    if ( *((_QWORD *)&v58 + 1) < v40 )
    {
      ptr = (void *)sub_1987B0(&ptr, v9, v40, 1);
      v9 = ptr;
    }
    *(_QWORD *)&v58 = v40;
    v42 = _mm_load_si128((const __m128i *)&xmmword_1B6AD0);
    v9[v41] = 0;
    v43 = (char *)ptr + v39;
    *(__m128i *)v43 = v42;
    *(_QWORD *)(v43 + 14) = 0x43534120656D616ELL;
  }
  v10 = s1;
  v52 = a3 + 40;
  if ( (_QWORD)v58 )
    v10 = (const char *)ptr;
  sub_318B0((__int64)&v55, a1, v10);
  if ( v55 )
  {
    unk_241E60(&v56, &v55, v52);
    if ( v56 )
    {
      while ( 1 )
      {
        if ( !(unsigned __int8)unk_241E70(&v56, v52) )
        {
          v30 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 312) + 64LL))(*(_QWORD *)(a1 + 312));
          v31 = *(_DWORD *)(a2 + 40);
          v32 = v31 & 0xFFFFFFFE;
          v33 = v31 | 1;
          if ( !v30 )
            v32 = v33;
          *(_DWORD *)(a2 + 40) = v32;
          v34 = 0;
          goto LABEL_37;
        }
        src = nullptr;
        v61 = nullptr;
        v63 = nullptr;
        v65 = nullptr;
        v67 = 0;
        v68 = 0;
        v69 = 0;
        v54 = 0;
        *(_OWORD *)n = 0;
        *(_OWORD *)v62 = 0;
        *(_OWORD *)v64 = 0;
        v66 = 0;
        if ( !(unsigned __int8)sub_2F910(v52, (__int64)&v56, (__int64)"ssssty", &v65, &v61, &v63, &src, &v68, &v54) )
        {
          sub_2DC20((__int64 *)(a3 + 16), "Error executing get users query");
          if ( v65 )
          {
            *(_QWORD *)&v66 = 0;
            j__free(v65);
          }
          if ( v63 )
          {
            v64[0] = 0;
            j__free(v63);
          }
          if ( v61 )
          {
            v62[0] = 0;
            j__free(v61);
          }
          if ( src )
          {
            n[0] = 0;
            j__free(src);
          }
          goto LABEL_54;
        }
        if ( v54 )
          break;
        v11 = v69 & 0xFFFFFFFE;
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 304) + 260LL) != 1 )
          goto LABEL_12;
        v12 = v69 & 0xFFFFFFFC;
LABEL_13:
        v69 = v12;
        v13 = nullptr;
        v51.m128i_i64[1] = n[0];
        if ( n[0] )
        {
          v27 = n[0];
          v13 = (void *)sub_198760(n[0]);
          memcpy(v13, src, v27);
        }
        v14 = nullptr;
        v51.m128i_i64[0] = v62[0];
        if ( v62[0] )
        {
          v29 = v62[0];
          v14 = (void *)sub_198760(v62[0]);
          memcpy(v14, v61, v29);
        }
        v15 = v64[0];
        v16 = nullptr;
        if ( v64[0] )
        {
          v16 = (void *)sub_198760(v64[0]);
          memcpy(v16, v63, v15);
        }
        v53.m128i_i64[0] = v66;
        if ( (_QWORD)v66 )
        {
          v50 = (void *)sub_198760(v53.m128i_i64[0]);
          memcpy(v50, v65, v53.m128i_u64[0]);
        }
        else
        {
          v50 = nullptr;
        }
        v17 = v67;
        v18 = v68;
        v19 = v69;
        v20 = *(_QWORD *)(a2 + 24);
        v70 = v67;
        v21 = *(_QWORD *)(a2 + 16);
        v71 = v68;
        v72 = v69;
        if ( *(_QWORD *)(a2 + 32) < (unsigned __int64)(v20 + 1) )
        {
          v47 = v69;
          v46 = v68;
          v48 = v67;
          v28 = sub_1987B0(v45, v21, v20 + 1, 120);
          *(_QWORD *)(a2 + 16) = v28;
          v21 = v28;
          v19 = v47;
          v20 = *(_QWORD *)(a2 + 24);
          v18 = v46;
          v17 = v48;
        }
        v22 = _mm_loadl_epi64((const __m128i *)&v51.m128i_u64[1]);
        v23 = v21 + 120 * v20;
        *(__m128i *)(v23 + 8) = _mm_unpacklo_epi64(v22, v22);
        v24 = _mm_loadl_epi64(&v51);
        *(_QWORD *)v23 = v13;
        *(_QWORD *)(v23 + 24) = v14;
        *(__m128i *)(v23 + 32) = _mm_unpacklo_epi64(v24, v24);
        *(_QWORD *)(v23 + 48) = v16;
        *(__m128i *)(v23 + 56) = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v15);
        v25 = _mm_loadl_epi64(&v53);
        *(_QWORD *)(v23 + 72) = v50;
        v26 = v65;
        *(_DWORD *)(v23 + 96) = v17;
        *(_QWORD *)(v23 + 104) = v18;
        *(_DWORD *)(v23 + 112) = v19;
        *(__m128i *)(v23 + 80) = _mm_unpacklo_epi64(v25, v25);
        ++*(_QWORD *)(a2 + 24);
        if ( v26 )
        {
          *(_QWORD *)&v66 = 0;
          j__free(v26);
        }
        if ( v63 )
        {
          v64[0] = 0;
          j__free(v63);
        }
        if ( v61 )
        {
          v62[0] = 0;
          j__free(v61);
        }
        if ( src )
        {
          n[0] = 0;
          j__free(src);
        }
      }
      v11 = v69 | 1;
LABEL_12:
      v12 = v11 | 2;
      goto LABEL_13;
    }
    sub_2DC20((__int64 *)(a3 + 16), "Error executing get users query");
LABEL_54:
    v34 = -1;
LABEL_37:
    v35 = (void (__fastcall ***)(_QWORD))v56;
    if ( v56 )
    {
      v36 = (*(_DWORD *)(v56 + 8))-- == 1;
      if ( v36 )
        (**v35)(v35);
    }
  }
  else
  {
    sub_2DC20((__int64 *)(a3 + 16), "Error executing get users query");
    v34 = -1;
  }
  v37 = (void (__fastcall ***)(_QWORD))v55;
  if ( v55 )
  {
    v36 = (*(_DWORD *)(v55 + 8))-- == 1;
    if ( v36 )
      (**v37)(v37);
  }
  if ( ptr )
  {
    *(_QWORD *)&v58 = 0;
    j__free(ptr);
  }
  return v34;
}
