__int64 __fastcall sub_88A40(_QWORD *a1, __int64 *a2, double a3)
{
  int v4; // eax
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rbp
  __int64 *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  size_t v11; // r13
  size_t v12; // r13
  unsigned __int64 v13; // r14
  __int64 v14; // r13
  _QWORD *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdi
  void *v18; // rax
  __int64 v19; // [rsp+0h] [rbp-118h] BYREF
  __m128i si128; // [rsp+8h] [rbp-110h]
  __int64 v21; // [rsp+18h] [rbp-100h]
  void *v22; // [rsp+20h] [rbp-F8h]
  size_t v23[2]; // [rsp+28h] [rbp-F0h]
  void *src; // [rsp+38h] [rbp-E0h]
  size_t n[2]; // [rsp+40h] [rbp-D8h]
  __int64 v26; // [rsp+50h] [rbp-C8h]
  unsigned __int64 v27; // [rsp+58h] [rbp-C0h]
  __int64 v28; // [rsp+60h] [rbp-B8h]
  int v29[4]; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+80h] [rbp-98h]
  int v31; // [rsp+88h] [rbp-90h]
  __int64 v32; // [rsp+90h] [rbp-88h]
  __int128 v33; // [rsp+98h] [rbp-80h]
  void *v34; // [rsp+A8h] [rbp-70h]
  __int128 v35; // [rsp+B0h] [rbp-68h]
  __int64 v36; // [rsp+C0h] [rbp-58h]
  unsigned __int64 v37; // [rsp+C8h] [rbp-50h]
  __int64 v38; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v39; // [rsp+D8h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v4 = sub_7D4F0(a1, a3);
  if ( v4 < 0 )
    return 0;
  v5 = a2[1];
  v6 = v4;
  if ( v4 != v5 )
  {
    v19 = 0;
    v21 = 1;
    si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
    v22 = nullptr;
    src = nullptr;
    v26 = 0;
    v27 = 0xFFFFFFFF00000000LL;
    v28 = 0;
    *(_OWORD *)v23 = 0;
    *(_OWORD *)n = 0;
    if ( v4 < v5 )
    {
      v13 = v4;
      v14 = 104LL * v4;
      do
      {
        v15 = (_QWORD *)(v14 + *a2);
        clear_tinfo_t();
        v16 = v15[7];
        if ( v16 )
        {
          v15[8] = 0;
          qfree(v16);
        }
        v17 = v15[4];
        if ( v17 )
        {
          v15[5] = 0;
          qfree(v17);
        }
        ++v13;
        v14 += 104;
        cleanup_argloc();
      }
      while ( v13 < v5 );
      a2[1] = v6;
    }
    else if ( (unsigned __int64)&v19 < *a2 || (unsigned __int64)&v19 >= *a2 + 104 * a2[2] )
    {
      sub_88870(a2, v4, (__int64)&v19);
    }
    else
    {
      v8 = &v19;
      v29[0] = 0;
      copy_argloc();
      v11 = v23[0];
      v32 = 0;
      v33 = 0;
      v30 = si128.m128i_i64[1];
      v31 = v21;
      if ( v23[0] )
      {
        v18 = (void *)qalloc_or_throw(v23[0], (__int64)&v19, v9, v10);
        v8 = (__int64 *)v22;
        v32 = (__int64)v18;
        *((_QWORD *)&v33 + 1) = v11;
        memcpy(v18, v22, v11);
        *(_QWORD *)&v33 = v11;
      }
      v12 = n[0];
      v34 = nullptr;
      v35 = 0;
      if ( n[0] )
      {
        v34 = (void *)qalloc_or_throw(n[0], (__int64)v8, v9, v10);
        *((_QWORD *)&v35 + 1) = v12;
        memcpy(v34, src, v12);
        *(_QWORD *)&v35 = v12;
      }
      v36 = 0;
      copy_tinfo_t();
      v37 = v27;
      v38 = v28;
      sub_88870(a2, v6, (__int64)v29);
      clear_tinfo_t();
      if ( v34 )
      {
        *(_QWORD *)&v35 = 0;
        qfree((__int64)v34);
      }
      if ( v32 )
      {
        *(_QWORD *)&v33 = 0;
        qfree(v32);
      }
      cleanup_argloc();
    }
    clear_tinfo_t();
    if ( src )
    {
      n[0] = 0;
      qfree((__int64)src);
    }
    if ( v22 )
    {
      v23[0] = 0;
      qfree((__int64)v22);
    }
    cleanup_argloc();
  }
  return 1;
}

