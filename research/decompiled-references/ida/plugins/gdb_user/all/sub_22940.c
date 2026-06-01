unsigned __int64 __fastcall sub_22940(_QWORD *a1)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  const char *v5; // rdi
  __int64 v6; // rdi
  _QWORD *v7; // rbx
  _QWORD *v8; // r13
  __int64 v9; // rbp
  const char *v10; // rax
  const char *v11; // r15
  size_t v12; // r12
  __int32 v13; // ebp
  const void *v14; // rbp
  void *v15; // rdi
  size_t v16; // r12
  void *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rsi
  __m128i *v20; // rsi
  __int64 v21; // rax
  __int64 *v22; // [rsp+0h] [rbp-150h]
  __int64 *v23; // [rsp+18h] [rbp-138h]
  __int64 v24; // [rsp+28h] [rbp-128h] BYREF
  __int128 v25; // [rsp+30h] [rbp-120h]
  __int64 *v26; // [rsp+48h] [rbp-108h] BYREF
  __int128 v27; // [rsp+50h] [rbp-100h]
  _QWORD *v28; // [rsp+68h] [rbp-E8h] BYREF
  __int128 v29; // [rsp+70h] [rbp-E0h]
  __int32 v30; // [rsp+88h] [rbp-C8h]
  void *dest; // [rsp+90h] [rbp-C0h] BYREF
  size_t n[2]; // [rsp+98h] [rbp-B8h]
  __int64 v33; // [rsp+A8h] [rbp-A8h] BYREF
  __int128 v34; // [rsp+B0h] [rbp-A0h]
  __int64 v35; // [rsp+C0h] [rbp-90h]
  __int128 v36; // [rsp+C8h] [rbp-88h]
  __int64 v37; // [rsp+D8h] [rbp-78h]
  __int128 v38; // [rsp+E0h] [rbp-70h]
  __int64 v39; // [rsp+F0h] [rbp-60h]
  __int128 v40; // [rsp+F8h] [rbp-58h]
  unsigned __int64 v41; // [rsp+110h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v25 = 0;
  v24 = 0;
  if ( (unsigned __int8)sub_3D040(a1[108], &v24) )
  {
    v33 = 0;
    v35 = 0;
    v37 = 0;
    v39 = 0;
    v34 = 0;
    v36 = 0;
    v38 = 0;
    v40 = 0;
    if ( !(unsigned __int8)sub_444D0(&v33, &v24, 0, 0)
      || (v3 = sub_40FE0(&v33, "osdata"), (v4 = v3) == 0)
      || (v5 = (const char *)sub_41140(v3, "type")) == nullptr
      || strcmp(v5, "processes") )
    {
      sub_130C0(&v33);
      goto LABEL_2;
    }
    v26 = nullptr;
    v27 = 0;
    sub_41050(v4, &v26, "item");
    v23 = &v26[v27];
    if ( v26 == v23 )
    {
LABEL_26:
      if ( v23 )
      {
        *(_QWORD *)&v27 = 0;
        qfree();
      }
      sub_130C0(&v33);
      if ( v24 )
        goto LABEL_3;
      return v41 - __readfsqword(0x28u);
    }
    v22 = v26;
    while ( 1 )
    {
      v6 = *v22;
      *(_OWORD *)n = 0;
      dest = nullptr;
      v30 = 0;
      v28 = nullptr;
      v29 = 0;
      sub_41050(v6, &v28, "column");
      v7 = v28;
      v8 = &v28[v29];
      if ( v8 != v28 )
        break;
LABEL_19:
      v13 = v30;
      if ( v30 )
      {
        v16 = n[0];
        v17 = nullptr;
        if ( n[0] )
        {
          v17 = (void *)qalloc_or_throw();
          memcpy(v17, dest, v16);
        }
        v18 = a1[168];
        v19 = a1[167];
        if ( a1[169] < (unsigned __int64)(v18 + 1) )
        {
          v21 = qvector_reserve();
          a1[167] = v21;
          v19 = v21;
          v18 = a1[168];
        }
        v20 = (__m128i *)(32 * v18 + v19);
        v20->m128i_i32[0] = v13;
        v20->m128i_i64[1] = (__int64)v17;
        v20[1] = _mm_unpacklo_epi64((__m128i)v16, (__m128i)v16);
        ++a1[168];
      }
      if ( v28 )
      {
        *(_QWORD *)&v29 = 0;
        qfree();
      }
      if ( dest )
      {
        n[0] = 0;
        qfree();
      }
      if ( v23 == ++v22 )
      {
        v23 = v26;
        goto LABEL_26;
      }
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = *v7;
        v10 = (const char *)sub_41140(*v7, "name");
        v11 = v10;
        if ( v10 )
        {
          v12 = *(_QWORD *)(v9 + 32);
          if ( v12 > 1 )
            break;
        }
LABEL_14:
        if ( v8 == ++v7 )
          goto LABEL_19;
      }
      if ( strcmp(v10, "pid") )
      {
        if ( !strcmp(v11, "command") && &dest != (void **)(v9 + 24) )
        {
          v14 = *(const void **)(v9 + 24);
          v15 = dest;
          if ( n[1] < v12 )
          {
            dest = (void *)qvector_reserve();
            v15 = dest;
          }
          n[0] = v12;
          memmove(v15, v14, v12 - 1);
          *((char *)dest + v12 - 1) = 0;
        }
        goto LABEL_14;
      }
      ++v7;
      v30 = strtol(*(const char **)(v9 + 24), nullptr, 10);
      if ( v8 == v7 )
        goto LABEL_19;
    }
  }
LABEL_2:
  if ( v24 )
  {
LABEL_3:
    *(_QWORD *)&v25 = 0;
    qfree();
  }
  return v41 - __readfsqword(0x28u);
}

