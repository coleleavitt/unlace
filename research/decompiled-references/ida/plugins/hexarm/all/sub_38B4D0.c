__int64 __fastcall sub_38B4D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 module_data; // rax
  _DWORD *v6; // r14
  __int64 v7; // r13
  __int64 v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  _QWORD *v11; // rbx
  __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // rdi
  unsigned __int32 v16; // edx
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  char *v19; // rsi
  bool v20; // sf
  bool v21; // of
  unsigned __int64 *v22; // rdi
  unsigned __int64 v23; // rbp
  _QWORD *v24; // rdi
  __int64 v25; // rdi
  __m128i *v26; // rax
  __int64 place_class; // rax
  _DWORD *v28; // rbx
  unsigned __int64 *v29; // rax
  __m128i v30; // [rsp+8h] [rbp-A0h] BYREF
  unsigned __int64 v31; // [rsp+18h] [rbp-90h]
  int v32; // [rsp+30h] [rbp-78h] BYREF
  _QWORD *v33; // [rsp+38h] [rbp-70h]
  __m128i v34; // [rsp+50h] [rbp-58h] BYREF
  __m128i v35; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v36; // [rsp+78h] [rbp-30h]

  v36 = __readfsqword(0x28u);
  module_data = get_module_data();
  v6 = *(_DWORD **)(a2 + 40);
  v7 = module_data;
  if ( dword_4EA940 != (*(unsigned int (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 112LL))(v6) )
  {
    v8 = *(_QWORD *)(v7 + 1008);
    v9 = *(_QWORD **)(v8 + 40);
    v10 = &v9[*(_QWORD *)(v8 + 48)];
    if ( v9 != v10 )
    {
      while ( 1 )
      {
        v11 = (_QWORD *)*v9;
        if ( *v9 )
        {
          if ( a3 == v11[1] || a3 == v11[2] )
            break;
        }
        if ( v10 == ++v9 )
          return 1;
      }
      v13 = v11[3];
      if ( v13 && *(_QWORD *)(v13 + 8) )
      {
        v14 = _mm_loadl_epi64((const __m128i *)(v13 + 40));
        v15 = v11[4];
        v16 = v6[3];
        v17 = v14.m128i_i64[0];
        if ( (*(_BYTE *)(v15 + 108) & 2) != 0 && (unsigned __int64)v16 < *(_QWORD *)(v15 + 136) )
        {
          v18 = *(_QWORD *)(v15 + 128) + 32LL * v16;
          v19 = (char *)s1;
          if ( *(_QWORD *)(v18 + 8) )
            v19 = *(char **)v18;
          v21 = __OFSUB__(v16, *(_DWORD *)(v15 + 152));
          v20 = (int)(v16 - *(_DWORD *)(v15 + 152)) < 0;
          v30.m128i_i32[2] = 0;
          v32 = 0;
          v30.m128i_i64[0] = v14.m128i_i64[0];
          v34.m128i_i32[0] = 0;
          sub_38ACD0(v15, v19, 0, v20 == v21, (__int64)&v30.m128i_i64[1], (__int64)&v32, (__int64)&v34);
          v22 = (unsigned __int64 *)v11[4];
          v23 = *v22;
          if ( v32 == 1 )
          {
            v30.m128i_i64[0] = v14.m128i_i64[0];
            v29 = sub_2576B0((__int64)v22, v33);
            if ( v29 )
              v23 = *v29;
          }
          else if ( v34.m128i_i32[0] == 4 )
          {
            v23 = v34.m128i_u64[1];
          }
          else if ( v30.m128i_i32[2] == 4 )
          {
            v23 = v31;
          }
          v24 = (_QWORD *)v11[3];
          v30.m128i_i64[0] = v14.m128i_i64[0];
          v17 = sub_3312A0(v24, v23);
          v14 = _mm_loadl_epi64(&v30);
          v16 = v6[3];
          if ( v17 == -1 )
            v17 = v14.m128i_i64[0];
        }
        v25 = *(_QWORD *)(a1 + 40);
        v34.m128i_i32[3] = v16;
        v34.m128i_i32[2] = 0;
        v34.m128i_i64[0] = (__int64)off_4E0BF8;
        v35 = _mm_unpacklo_epi64(v14, (__m128i)v17);
        if ( v25 )
        {
          qfree();
          *(_QWORD *)(a1 + 40) = 0;
        }
        v26 = (__m128i *)qalloc();
        if ( !v26 )
          sub_3885F0((__int64)"hexrays_place_t");
        *v26 = _mm_load_si128(&v34);
        v26[1] = _mm_load_si128(&v35);
        *(_QWORD *)(a1 + 40) = v26;
      }
    }
    return 1;
  }
  get_place_class_id();
  place_class = get_place_class();
  if ( place_class )
  {
    v28 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)place_class + 16LL))(place_class, 0);
    v28[3] = v6[3];
    v28[2] = v6[2];
    if ( *(_QWORD *)(a1 + 40) )
    {
      qfree();
      *(_QWORD *)(a1 + 40) = 0;
    }
    if ( v28 )
      *(_QWORD *)(a1 + 40) = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v28 + 16LL))(v28);
    qfree();
    return 1;
  }
  return 0;
}

