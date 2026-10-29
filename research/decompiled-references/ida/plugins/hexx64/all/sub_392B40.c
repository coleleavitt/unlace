unsigned __int64 __fastcall sub_392B40(__int64 a1, __int64 *a2, int *a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v8; // rdi
  __int64 v10; // rax
  void *v11; // rax
  bool v12; // zf
  const char *v13; // r15
  char v14; // al
  int v15; // eax
  char *v16; // rax
  const char *v17; // r14
  size_t v18; // r10
  __int64 v19; // rbx
  size_t v20; // r11
  __int64 v21; // rdx
  __int64 v22; // rsi
  size_t v24; // [rsp+20h] [rbp-1A0h]
  __int64 v25; // [rsp+30h] [rbp-190h]
  void *dest; // [rsp+50h] [rbp-170h]
  __int128 v28; // [rsp+58h] [rbp-168h]
  void *v29; // [rsp+70h] [rbp-150h]
  __int128 v30; // [rsp+78h] [rbp-148h]
  __int64 v31; // [rsp+90h] [rbp-130h]
  __int128 v32; // [rsp+98h] [rbp-128h]
  __int64 (__fastcall **v33)(); // [rsp+B0h] [rbp-110h]
  __m128i v34; // [rsp+B8h] [rbp-108h]
  __int64 v35; // [rsp+C8h] [rbp-F8h]
  __int16 v36; // [rsp+D0h] [rbp-F0h]
  __int64 v37; // [rsp+D8h] [rbp-E8h]
  __int64 v38; // [rsp+E0h] [rbp-E0h]
  int v39; // [rsp+E8h] [rbp-D8h]
  void *src; // [rsp+F0h] [rbp-D0h]
  void *v41[2]; // [rsp+F8h] [rbp-C8h]
  __int128 v42; // [rsp+108h] [rbp-B8h]
  __int64 v43; // [rsp+118h] [rbp-A8h]
  __int128 v44; // [rsp+120h] [rbp-A0h]
  __int128 v45; // [rsp+130h] [rbp-90h]
  __int64 v46; // [rsp+160h] [rbp-60h]
  int v47; // [rsp+168h] [rbp-58h]
  __int64 v48; // [rsp+170h] [rbp-50h]
  char v49; // [rsp+178h] [rbp-48h]
  unsigned __int64 v50; // [rsp+188h] [rbp-38h]

  v8 = *a2;
  v50 = __readfsqword(0x28u);
  if ( v8 )
  {
    a2[1] = 0;
    qfree(v8);
    *a2 = 0;
    a2[2] = 0;
  }
  v10 = *(_QWORD *)(a4 + 24);
  v37 = 0;
  v35 = v10;
  LOWORD(v10) = *(_WORD *)(a4 + 32);
  v34 = _mm_loadu_si128((const __m128i *)(a4 + 8));
  v36 = v10;
  v33 = &off_4E6B78;
  copy_tinfo_t();
  v38 = 0;
  copy_tinfo_t();
  v11 = (void *)*(unsigned int *)(a4 + 56);
  dest = nullptr;
  v29 = nullptr;
  v39 = (int)v11;
  v28 = 0;
  v30 = 0;
  src = v11;
  v41[0] = nullptr;
  v41[1] = nullptr;
  v43 = 0;
  v46 = 1;
  v47 = -1;
  v48 = 0;
  v49 = 0;
  v42 = 0;
  v44 = 0;
  v45 = 0;
  find_tinfo_udt_member();
  *(_QWORD *)&v28 = 0;
  copy_tinfo_t();
  clear_tinfo_t();
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree(v43);
  }
  if ( v41[1] )
  {
    *(_QWORD *)&v42 = 0;
    qfree((__int64)v41[1]);
  }
  v31 = 0;
  v32 = 0;
  if ( (unsigned int)get_tinfo_property() && (unsigned __int8)get_numbered_type() )
    deserialize_tinfo();
  src = nullptr;
  *(_OWORD *)v41 = 0;
  print_tinfo();
  if ( (unsigned __int64)v30 > 1 )
    sub_FAAD0(a2);
  if ( (unsigned __int64)v28 > 1 )
    sub_FAAD0(a2);
  v12 = v41[0] == nullptr;
  *a3 = 0;
  if ( !v12 )
  {
    v13 = (const char *)src;
    v14 = *(_BYTE *)src;
    while ( v14 )
    {
      v16 = strchr(v13, 10);
      v17 = v16 + 1;
      if ( !v16 )
        v17 = &v13[strlen(v13)];
      v18 = v17 - v13;
      v19 = a2[1];
      v20 = v17 - v13;
      if ( v19 )
      {
        --v19;
        v20 = v18 + v19;
      }
      v21 = v20 + 1;
      v22 = *a2;
      if ( a2[2] < v20 + 1 )
      {
        v24 = v20;
        v25 = v20 + 1;
        v22 = qvector_reserve((__int64)a2, v22, v21, 1);
        v20 = v24;
        v18 = v17 - v13;
        v21 = v25;
        *a2 = v22;
      }
      a2[1] = v21;
      *(_BYTE *)(v22 + v20) = 0;
      memmove((void *)(*a2 + v19), v13, v18);
      v15 = *a3 + 1;
      *a3 = v15;
      if ( v15 > a6 )
        break;
      v14 = *v17;
      v13 = v17;
    }
  }
  if ( src )
  {
    v41[0] = nullptr;
    qfree((__int64)src);
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31);
  }
  clear_tinfo_t();
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree((__int64)v29);
  }
  if ( dest )
  {
    *(_QWORD *)&v28 = 0;
    qfree((__int64)dest);
  }
  v33 = &off_4E6B78;
  clear_tinfo_t();
  clear_tinfo_t();
  return v50 - __readfsqword(0x28u);
}

