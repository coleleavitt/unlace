__int64 __fastcall sub_91B70(__int64 a1)
{
  void *v2; // rdi
  size_t v3; // rbx
  __int64 (__fastcall ***v4)(_QWORD, __int64 (__fastcall ***)(), void **, __int64); // rdi
  unsigned int v5; // ebx
  const char *v6; // rcx
  __int64 v7; // rsi
  const char *v9; // rbx
  char *v10; // r8
  __int64 v11; // rdi
  const char *v12; // rcx
  unsigned int v13; // eax
  char *v14; // rsi
  _BYTE *v15; // rax
  void *v16; // rdi
  void *v17; // rbx
  __m128i v18; // xmm1
  __m128i v19; // xmm1
  __m128i v20; // [rsp+0h] [rbp-1B8h] BYREF
  char v21; // [rsp+17h] [rbp-1A1h]
  const char *v22; // [rsp+18h] [rbp-1A0h]
  void *src; // [rsp+20h] [rbp-198h]
  __int64 v24; // [rsp+28h] [rbp-190h]
  void *v25; // [rsp+30h] [rbp-188h] BYREF
  __int128 v26; // [rsp+38h] [rbp-180h]
  void *v27; // [rsp+50h] [rbp-168h] BYREF
  __m128i v28; // [rsp+58h] [rbp-160h]
  void *v29; // [rsp+70h] [rbp-148h] BYREF
  __int128 v30; // [rsp+78h] [rbp-140h]
  void *ptr; // [rsp+90h] [rbp-128h] BYREF
  size_t n[2]; // [rsp+98h] [rbp-120h] BYREF
  __int64 (__fastcall **v33)(); // [rsp+B0h] [rbp-108h] BYREF
  void *v34; // [rsp+B8h] [rbp-100h]
  __int128 v35; // [rsp+C0h] [rbp-F8h]
  unsigned __int16 v36; // [rsp+D0h] [rbp-E8h]
  void *v37; // [rsp+D8h] [rbp-E0h]
  __int128 v38; // [rsp+E0h] [rbp-D8h]
  void *v39; // [rsp+F0h] [rbp-C8h]
  __int128 v40; // [rsp+F8h] [rbp-C0h]
  void *v41; // [rsp+108h] [rbp-B0h]
  __int128 v42; // [rsp+110h] [rbp-A8h]
  __int16 v43; // [rsp+120h] [rbp-98h]
  void *v44; // [rsp+128h] [rbp-90h]
  __int128 v45; // [rsp+130h] [rbp-88h]
  void *v46; // [rsp+140h] [rbp-78h]
  __int128 v47; // [rsp+148h] [rbp-70h]
  int v48; // [rsp+158h] [rbp-60h]
  void *v49; // [rsp+160h] [rbp-58h]
  __int128 v50; // [rsp+168h] [rbp-50h]
  unsigned __int64 v51; // [rsp+178h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  v26 = 0;
  v20.m128i_i64[0] = (__int64)&ptr;
  v25 = nullptr;
  ptr = nullptr;
  *(_OWORD *)n = 0;
  ptr = (void *)sub_1987B0(&ptr, 0, 9, 1);
  n[0] = 9;
  strcpy((char *)ptr, "hexvault");
  v2 = ptr;
  v3 = n[0];
  v34 = nullptr;
  v35 = 0;
  if ( n[0] )
  {
    v34 = (void *)sub_198760(n[0]);
    *((_QWORD *)&v35 + 1) = v3;
    memcpy(v34, ptr, v3);
    *(_QWORD *)&v35 = v3;
    v2 = ptr;
  }
  v36 = -103;
  v37 = nullptr;
  v39 = nullptr;
  v33 = (__int64 (__fastcall **)())&off_2365A8;
  v41 = nullptr;
  v43 = 0;
  v44 = nullptr;
  v46 = nullptr;
  v48 = 0;
  v38 = 0;
  v40 = 0;
  v42 = 0;
  v45 = 0;
  v47 = 0;
  if ( v2 )
  {
    n[0] = 0;
    j__free(v2);
  }
  v4 = *(__int64 (__fastcall ****)(_QWORD, __int64 (__fastcall ***)(), void **, __int64))(a1 + 256);
  v49 = nullptr;
  v33 = &off_2365F0;
  v50 = 0;
  v5 = (**v4)(v4, &v33, &v25, a1 + 16);
  if ( (_BYTE)v5 )
  {
    v6 = s1;
    v27 = nullptr;
    v28 = 0;
    if ( (_QWORD)v35 )
      v6 = (const char *)v34;
    v5 = sub_167A70(a1, &v27, (v48 & 1) == 0, v6, v36);
    if ( !(_BYTE)v5 )
    {
      v7 = 0;
LABEL_10:
      (*(void (__fastcall **)(_QWORD, __int64, void **))(**(_QWORD **)(a1 + 256) + 8LL))(
        *(_QWORD *)(a1 + 256),
        v7,
        &v27);
      if ( v27 )
      {
        v28.m128i_i64[0] = 0;
        j__free(v27);
      }
      goto LABEL_12;
    }
    v9 = s1;
    v21 = *(_BYTE *)(a1 + 312);
    if ( (_QWORD)v38 )
      v9 = (const char *)v37;
    v22 = s1;
    if ( (_QWORD)v50 )
      v22 = (const char *)v49;
    v29 = nullptr;
    v30 = 0;
    if ( (unsigned __int64)v40 > 1 )
    {
      v24 = v40;
      src = v39;
      v29 = (void *)sub_1987B0(&v29, 0, v40, 1);
      *(_QWORD *)&v30 = v24;
      memmove(v29, src, v24 - 1);
      *((char *)v29 + v24 - 1) = 0;
    }
    else if ( !(unsigned __int8)sub_16D180(&v33, &v29, &v27) )
    {
      v14 = (char *)v27;
      if ( v28.m128i_i64[1] <= 0x1CuLL )
      {
        v27 = (void *)sub_1987B0(&v27, v27, 29, 1);
        v14 = (char *)v27;
      }
      v28.m128i_i64[0] = 29;
      *(__m128i *)v14 = _mm_load_si128((const __m128i *)&xmmword_1B6F70);
      v15 = v27;
      *(__m128i *)(v14 + 12) = _mm_load_si128((const __m128i *)&xmmword_1B6F80);
      v15[28] = 0;
      goto LABEL_46;
    }
    v10 = (char *)s1;
    if ( (_QWORD)v26 )
      v10 = (char *)v25;
    v11 = *(_QWORD *)(a1 + 304);
    v12 = s1;
    if ( (_QWORD)v30 )
      v12 = (const char *)v29;
    src = v10;
    v5 = sub_91850(v11, (__int64 *)&v27, v9, v12, v10);
    if ( (_BYTE)v5 )
    {
      if ( !*v22
        || (v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const char *, void *))(**(_QWORD **)(a1 + 304) + 160LL))(
                    *(_QWORD *)(a1 + 304),
                    0,
                    v22,
                    src)) == 0 )
      {
        v7 = 1;
        goto LABEL_47;
      }
      ptr = nullptr;
      *(_OWORD *)n = 0;
      sub_B7C60(v20.m128i_i64[0], v13, 0);
      v17 = ptr;
      ptr = nullptr;
      v18 = _mm_loadu_si128((const __m128i *)n);
      *(_OWORD *)n = 0;
      if ( v27 )
      {
        v20 = v18;
        v28.m128i_i64[0] = 0;
        j__free(v27);
        v19 = _mm_load_si128(&v20);
        v27 = v17;
        v28 = v19;
        if ( ptr )
        {
          n[0] = 0;
          j__free(ptr);
        }
      }
      else
      {
        v27 = v17;
        v28 = v18;
      }
    }
LABEL_46:
    v7 = 0;
    v5 = 0;
LABEL_47:
    v16 = v29;
    *(_BYTE *)(a1 + 312) = v21;
    if ( v16 )
    {
      v20.m128i_i32[0] = v7;
      *(_QWORD *)&v30 = 0;
      j__free(v16);
      v7 = v20.m128i_u32[0];
    }
    goto LABEL_10;
  }
LABEL_12:
  v33 = &off_2365F0;
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    j__free(v49);
  }
  v33 = (__int64 (__fastcall **)())&off_2365A8;
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    j__free(v46);
  }
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    j__free(v44);
  }
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    j__free(v41);
  }
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    j__free(v39);
  }
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    j__free(v37);
  }
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    j__free(v34);
  }
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    j__free(v25);
  }
  return v5;
}
