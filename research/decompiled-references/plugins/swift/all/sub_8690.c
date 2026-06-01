__int64 __fastcall sub_8690(__int64 *a1, unsigned __int64 *a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rbp
  unsigned int v7; // edi
  _BYTE *v8; // r12
  _BYTE *v9; // r14
  unsigned int utf8_char; // eax
  __int64 v11; // rax
  unsigned __int64 v12; // r13
  __int64 v13; // r14
  char *v14; // r9
  __int64 v15; // r13
  const void *v16; // r12
  int v17; // eax
  void *v18; // rax
  __int64 v19; // rdx
  size_t v20; // r13
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 result; // rax
  __int64 v24; // rsi
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rbp
  __int64 v29; // rax
  __m128i v30; // xmm0
  __int64 v31; // rax
  __m128i v32; // xmm0
  __int64 v33; // rdi
  __int64 v34; // rdi
  int v36; // eax
  __int64 v37; // rax
  void *v38; // rdi
  size_t v39; // r10
  __int64 v40; // rax
  __int64 v41; // rdx
  size_t v42; // r10
  __int64 v43; // rdi
  char *v44; // r13
  unsigned int v45; // edi
  void *v46; // rdi
  size_t v47; // r15
  unsigned __int64 v48; // [rsp+0h] [rbp-98h]
  unsigned __int64 v50; // [rsp+10h] [rbp-88h]
  char *v51; // [rsp+10h] [rbp-88h]
  _QWORD *v52; // [rsp+10h] [rbp-88h]
  char *v53; // [rsp+10h] [rbp-88h]
  char *v54; // [rsp+10h] [rbp-88h]
  void *src; // [rsp+18h] [rbp-80h]
  void *srca; // [rsp+18h] [rbp-80h]
  char *srcb; // [rsp+18h] [rbp-80h]
  char *srcc; // [rsp+18h] [rbp-80h]
  char *srcd; // [rsp+18h] [rbp-80h]
  __int64 v60; // [rsp+20h] [rbp-78h]
  __int64 v61; // [rsp+20h] [rbp-78h]
  size_t v62; // [rsp+20h] [rbp-78h]
  size_t v63; // [rsp+20h] [rbp-78h]
  __int64 v64; // [rsp+28h] [rbp-70h]
  __int64 v65; // [rsp+28h] [rbp-70h]
  char *v66; // [rsp+28h] [rbp-70h]
  char *v67; // [rsp+28h] [rbp-70h]
  unsigned __int64 v68; // [rsp+30h] [rbp-68h]
  size_t v69; // [rsp+30h] [rbp-68h]
  __int64 i; // [rsp+40h] [rbp-58h] BYREF
  __int128 v72; // [rsp+48h] [rbp-50h]
  unsigned __int64 v73; // [rsp+58h] [rbp-40h]

  v5 = *a2;
  v73 = __readfsqword(0x28u);
  v6 = a4;
  if ( v5 < a4 )
  {
    while ( 1 )
    {
      do
      {
        v7 = *(char *)(a3 + v5);
        if ( v7 > 0x7F )
          break;
        if ( !isspace(v7) )
          break;
        ++v5;
      }
      while ( v6 != v5 );
      v48 = sub_7E50(a3, v5, v6, 44);
      v8 = (_BYTE *)(a3 + v48);
      if ( v6 != v48 && *v8 != 44 )
      {
        v5 = v48;
        result = 0;
        goto LABEL_25;
      }
      src = (void *)(a3 + v5);
      v9 = (_BYTE *)(a3 + v5);
      for ( i = a3 + v5; ; v9 = (_BYTE *)i )
      {
        if ( v9 >= v8 )
        {
          v50 = v48;
          goto LABEL_11;
        }
        utf8_char = get_utf8_char(&i);
        if ( utf8_char == -1 || !(unsigned __int8)is_valid_cp(utf8_char, 2, 0) )
          break;
      }
      v8 = v9;
      v50 = (unsigned __int64)&v9[-a3];
LABEL_11:
      v11 = a1[1];
      v12 = a1[2];
      if ( v12 < v11 + 1 )
      {
        v13 = qvector_reserve(a1, 0, v11 + 1, 56);
        v24 = a1[2];
        a1[2] = v12;
        v25 = *a1;
        v26 = a1[1];
        if ( v26 - 1 >= 0 )
        {
          v64 = a3;
          v27 = v13;
          v68 = v6;
          v28 = v26 - 1;
          do
          {
            v29 = *(_QWORD *)v25;
            v30 = _mm_loadu_si128((const __m128i *)(v25 + 8));
            *(_QWORD *)v25 = 0;
            *(_OWORD *)(v25 + 8) = 0;
            *(_QWORD *)v27 = v29;
            *(__m128i *)(v27 + 8) = v30;
            v31 = *(_QWORD *)(v25 + 24);
            v32 = _mm_loadu_si128((const __m128i *)(v25 + 32));
            *(_QWORD *)(v25 + 24) = 0;
            *(_QWORD *)(v27 + 24) = v31;
            *(__m128i *)(v27 + 32) = v32;
            LODWORD(v31) = *(_DWORD *)(v25 + 48);
            *(_QWORD *)(v25 + 40) = 0;
            *(_DWORD *)(v27 + 48) = v31;
            *(_BYTE *)(v27 + 52) = *(_BYTE *)(v25 + 52);
            v33 = *(_QWORD *)(v25 + 24);
            if ( v33 )
            {
              *(_QWORD *)(v25 + 32) = 0;
              qfree(v33);
            }
            v34 = *(_QWORD *)v25;
            if ( *(_QWORD *)v25 )
            {
              *(_QWORD *)(v25 + 8) = 0;
              qfree(v34);
            }
            v25 += 56;
            v27 += 56;
          }
          while ( v28-- != 0 );
          a3 = v64;
          v6 = v68;
          v25 = *a1;
        }
        qfree(v25);
        *a1 = v13;
        a1[2] = v24;
        v11 = a1[1];
      }
      else
      {
        v13 = *a1;
      }
      v14 = (char *)(v13 + 56 * v11);
      *(_QWORD *)v14 = 0;
      *((_QWORD *)v14 + 3) = 0;
      *((_DWORD *)v14 + 12) = -1;
      v14[52] = 0;
      *(_OWORD *)(v14 + 8) = 0;
      *((_OWORD *)v14 + 2) = 0;
      ++a1[1];
      if ( *v8 != 58 )
        goto LABEL_14;
      v72 = 0;
      v40 = 0;
      v41 = 0;
      i = 0;
      v42 = v50 - v5;
      if ( v50 != v5 )
      {
        v46 = nullptr;
        v47 = v42 + 1;
        if ( v42 != -1 )
        {
          v67 = v14;
          v63 = v42;
          i = qvector_reserve(&i, 0, v42 + 1, 1);
          v14 = v67;
          v46 = (void *)i;
          v42 = v63;
        }
        v66 = v14;
        v62 = v42;
        *(_QWORD *)&v72 = v47;
        memmove(v46, src, v42);
        v14 = v66;
        *(_BYTE *)(i + v62) = 0;
        v41 = i;
        v40 = *((_QWORD *)&v72 + 1);
        v42 = v72;
      }
      i = 0;
      v72 = 0;
      v43 = *(_QWORD *)v14;
      if ( *(_QWORD *)v14 )
      {
        *((_QWORD *)v14 + 1) = 0;
        v69 = v42;
        v65 = v40;
        v61 = v41;
        srcc = v14;
        qfree(v43);
        v42 = v69;
        v40 = v65;
        v41 = v61;
        v14 = srcc;
      }
      *(_QWORD *)v14 = v41;
      *((_QWORD *)v14 + 1) = v42;
      *((_QWORD *)v14 + 2) = v40;
      if ( i )
      {
        srcd = v14;
        *(_QWORD *)&v72 = 0;
        qfree(i);
        v14 = srcd;
      }
      v5 = v50 + 1;
      if ( v50 + 1 < v48 )
      {
        v44 = v14;
        do
        {
          v45 = *(char *)(a3 + v5);
          if ( v45 > 0x7F )
            break;
          if ( !isspace(v45) )
            break;
          ++v5;
        }
        while ( v5 < v48 );
        v14 = v44;
        if ( v48 == v5 )
        {
LABEL_57:
          result = 0;
          goto LABEL_25;
        }
      }
      else
      {
LABEL_14:
        if ( v48 == v5 )
          goto LABEL_57;
      }
      if ( !(_BYTE)byte_28738 )
      {
        v53 = v14;
        v36 = __cxa_guard_acquire(&byte_28738);
        v14 = v53;
        if ( v36 )
        {
          xmmword_28748 = 0;
          qword_28740 = 0;
          v37 = qvector_reserve(&qword_28740, 0, 7, 1);
          *(_QWORD *)&xmmword_28748 = 7;
          qword_28740 = v37;
          *(_WORD *)(v37 + 4) = 8308;
          *(_DWORD *)v37 = 1970237033;
          *(_BYTE *)(qword_28740 + 6) = 0;
          __cxa_atexit((void (*)(void *))sub_72D0, &qword_28740, &off_274A0);
          __cxa_guard_release(&byte_28738);
          v14 = v53;
        }
      }
      if ( !(_QWORD)xmmword_28748 )
        goto LABEL_31;
      v15 = xmmword_28748 - 1;
      v16 = (const void *)(a3 + v5);
      v51 = v14;
      v17 = strncmp((const char *)(a3 + v5), (const char *)qword_28740, xmmword_28748 - 1);
      v14 = v51;
      if ( !v17 )
        break;
LABEL_18:
      v18 = nullptr;
      v19 = 0;
      i = 0;
      v72 = 0;
      v20 = v48 - v5;
      if ( v48 != v5 )
      {
        v38 = nullptr;
        v39 = v20 + 1;
        if ( v20 != -1 )
        {
          srcb = v14;
          i = qvector_reserve(&i, 0, v20 + 1, 1);
          v14 = srcb;
          v38 = (void *)i;
          v39 = v20 + 1;
        }
        v54 = v14;
        *(_QWORD *)&v72 = v39;
        memmove(v38, v16, v20);
        v14 = v54;
        *(_BYTE *)(i + v20) = 0;
        v19 = i;
        v18 = *((void **)&v72 + 1);
        v20 = v72;
      }
      i = 0;
      v72 = 0;
      v21 = *((_QWORD *)v14 + 3);
      if ( v21 )
      {
        *((_QWORD *)v14 + 4) = 0;
        v60 = v19;
        srca = v18;
        v52 = v14;
        qfree(v21);
        v22 = i;
        v52[4] = v20;
        v52[3] = v60;
        v52[5] = srca;
        if ( v22 )
        {
          *(_QWORD *)&v72 = 0;
          qfree(v22);
        }
      }
      else
      {
        *((_QWORD *)v14 + 3) = v19;
        *((_QWORD *)v14 + 4) = v20;
        *((_QWORD *)v14 + 5) = v18;
      }
      if ( v6 != v5 )
      {
        v5 = v48 + 1;
        if ( v48 + 1 < v6 )
          continue;
      }
      goto LABEL_24;
    }
    v5 += v15;
LABEL_31:
    v14[52] = 1;
    v16 = (const void *)(a3 + v5);
    goto LABEL_18;
  }
LABEL_24:
  result = 1;
LABEL_25:
  *a2 = v5;
  return result;
}
