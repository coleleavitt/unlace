__int64 __fastcall sub_272540(__m128i *a1, __int64 *a2, _BYTE *a3, unsigned __int64 a4)
{
  unsigned __int64 v7; // r15
  __int64 v8; // rbx
  int stroff_path; // eax
  _QWORD *v11; // rdx
  __int64 v12; // rsi
  unsigned __int64 **v13; // rax
  __int64 v14; // rax
  __int64 udm_by_tid; // r15
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // edx
  char v20; // al
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // rax
  _QWORD *v23; // r12
  int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdx
  __m128i v28; // xmm0
  __int64 v29; // r13
  _QWORD *v30; // r12
  __int64 v31; // rdi
  __int64 v32; // rdi
  _QWORD *v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rdi
  int tinfo_udt_member; // eax
  __int64 v37; // rdx
  __int64 v38; // rbp
  _QWORD *v39; // rbx
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int32 v42; // eax
  __int64 v43; // [rsp+8h] [rbp-90h]
  _QWORD *dest; // [rsp+28h] [rbp-70h]
  _QWORD *desta; // [rsp+28h] [rbp-70h]
  __int64 tinfo_property; // [rsp+40h] [rbp-58h] BYREF
  __int128 v47; // [rsp+48h] [rbp-50h]
  unsigned __int64 v48; // [rsp+58h] [rbp-40h]

  v43 = a4;
  v48 = __readfsqword(0x28u);
  v7 = a1[8].m128i_u64[0];
  if ( v7 != -1 || (v11 = (_QWORD *)a1[1].m128i_i64[0], v12 = v11[1], (int)v12 - 1 <= 0) )
  {
LABEL_2:
    if ( a1[28].m128i_i8[0] )
      goto LABEL_3;
    goto LABEL_16;
  }
  v13 = (unsigned __int64 **)(*v11 + 8LL * (unsigned int)(v12 - 1));
  a4 = (unsigned __int64)&v13[-(unsigned int)(v12 - 2) - 1];
  while ( 1 )
  {
    v7 = **v13;
    if ( v7 != -1 )
      break;
    if ( (unsigned __int64 **)a4 == --v13 )
      goto LABEL_2;
  }
  if ( !a1[28].m128i_i8[0] )
  {
LABEL_16:
    v14 = a1->m128i_i64[1];
    a1[28].m128i_i8[0] = 1;
    sub_257F10(*(_QWORD *)(v14 + 64), v7, &a1[9].m128i_i64[1], a4);
  }
LABEL_3:
  v8 = a1[10].m128i_i64[0];
  if ( v8 )
  {
LABEL_4:
    *a2 = *(int *)a1[9].m128i_i64[1];
    memmove((void *)a1[9].m128i_i64[1], (const void *)(a1[9].m128i_i64[1] + 4), 4 * a1[10].m128i_i64[0]-- - 4);
    return 1;
  }
  stroff_path = a1[27].m128i_i32[0];
  if ( stroff_path == -1 )
  {
    a1[27].m128i_i32[0] = 0;
    get_flags_ex();
    if ( (unsigned __int8)is_stroff() )
    {
      stroff_path = get_stroff_path();
      if ( tinfo_property )
      {
        a1[27].m128i_i32[0] = 0;
LABEL_8:
        if ( !*a3 )
          goto LABEL_9;
        goto LABEL_20;
      }
      a1[27].m128i_i32[0] = stroff_path;
    }
    else
    {
      stroff_path = a1[27].m128i_i32[0];
    }
  }
  if ( stroff_path <= 1 )
    goto LABEL_8;
  tinfo_property = 0;
  udm_by_tid = get_udm_by_tid();
  if ( udm_by_tid != -1 && (unsigned __int8)sub_32A510(a1->m128i_i64[0]) )
  {
    v42 = a1[27].m128i_i32[0] - 1;
    a1[27].m128i_i32[0] = v42;
    memmove(&a1[11], &a1[11].m128i_u64[1], v42);
    a1[11].m128i_i64[0] = get_tinfo_tid();
    *a2 = udm_by_tid;
    clear_tinfo_t();
    return 1;
  }
  a1[27].m128i_i32[0] = 0;
  clear_tinfo_t();
  if ( *a3 )
  {
LABEL_20:
    copy_tinfo_t();
    if ( a1[27].m128i_i32[1] )
    {
      v16 = a1[1].m128i_i64[0];
      v17 = *(_DWORD *)(v16 + 8) - 1;
      if ( v17 >= 0 )
      {
        v18 = *(_QWORD *)v16 + 8LL * (unsigned int)v17;
        do
        {
          if ( !*(_QWORD *)v18 )
            break;
          v19 = *(_DWORD *)(*(_QWORD *)v18 + 8LL);
          if ( v19 == 51 )
            goto LABEL_53;
          if ( v19 != 48 )
            break;
          --v17;
          v18 -= 8;
        }
        while ( v17 != -1 );
      }
    }
    else
    {
LABEL_53:
      tinfo_property = get_tinfo_property();
      copy_tinfo_t();
      clear_tinfo_t();
    }
    tinfo_property = 0;
    v47 = 0;
    v20 = get_tinfo_property();
    sub_3349B0((__int64)&tinfo_property, &a1[8].m128i_u64[1], v43, nullptr, (v20 & 0x2F) == 13);
    if ( (get_tinfo_property() & 0xF) != 0xB && (_QWORD)v47 )
    {
      v21 = 0;
      do
      {
        v23 = (_QWORD *)((v21 << 6) + tinfo_property);
        if ( (get_tinfo_property() & 0xF) == 0xB )
        {
          get_tinfo_property();
          copy_tinfo_t();
          ++v21;
          clear_tinfo_t();
          v22 = v47;
        }
        else if ( *v23 )
        {
          dest = (_QWORD *)((v21 << 6) + tinfo_property);
          clear_tinfo_t();
          v33 = dest;
          v34 = dest[4];
          if ( v34 )
          {
            dest[5] = 0;
            qfree(v34);
            v33 = dest;
          }
          v35 = v33[1];
          if ( v35 )
          {
            v33[2] = 0;
            desta = v33;
            qfree(v35);
            v33 = desta;
          }
          memmove(v33, v33 + 8, tinfo_property + ((_QWORD)v47 << 6) - (_QWORD)v33 - 64);
          v22 = v47 - 1;
          *(_QWORD *)&v47 = v47 - 1;
        }
        else
        {
          v22 = v47;
          ++v21;
        }
      }
      while ( v21 < v22 );
    }
    v24 = sub_2719D0(a1->m128i_i64, &tinfo_property);
    v25 = tinfo_property;
    if ( v24 == -1 )
    {
      if ( !v43 )
      {
        copy_tinfo_t();
        tinfo_udt_member = find_tinfo_udt_member();
        v37 = tinfo_property;
        v25 = tinfo_property;
        if ( tinfo_udt_member != -1 )
        {
          *a2 = tinfo_udt_member;
          if ( v37 )
          {
            v38 = v47;
            if ( (_QWORD)v47 )
            {
              do
              {
                v39 = (_QWORD *)(v37 + (v43 << 6));
                clear_tinfo_t();
                v40 = v39[4];
                if ( v40 )
                {
                  v39[5] = 0;
                  qfree(v40);
                }
                v41 = v39[1];
                if ( v41 )
                {
                  v39[2] = 0;
                  qfree(v41);
                }
                ++v43;
                v37 = tinfo_property;
              }
              while ( v38 != v43 );
            }
            *(_QWORD *)&v47 = 0;
            qfree(v37);
          }
          clear_tinfo_t();
          return 1;
        }
      }
    }
    else
    {
      v26 = tinfo_property + ((__int64)v24 << 6);
      v27 = *(_QWORD *)(v26 + 32);
      v28 = _mm_loadu_si128((const __m128i *)(v26 + 40));
      *(_QWORD *)(v26 + 32) = a1[9].m128i_i64[1];
      *(_QWORD *)(v26 + 40) = a1[10].m128i_i64[0];
      *(_QWORD *)(v26 + 48) = a1[10].m128i_i64[1];
      a1[9].m128i_i64[1] = v27;
      a1[10] = v28;
    }
    if ( v25 )
    {
      v29 = v47;
      if ( (_QWORD)v47 )
      {
        do
        {
          v30 = (_QWORD *)(v25 + (v8 << 6));
          clear_tinfo_t();
          v31 = v30[4];
          if ( v31 )
          {
            v30[5] = 0;
            qfree(v31);
          }
          v32 = v30[1];
          if ( v32 )
          {
            v30[2] = 0;
            qfree(v32);
          }
          ++v8;
          v25 = tinfo_property;
        }
        while ( v29 != v8 );
      }
      *(_QWORD *)&v47 = 0;
      qfree(v25);
    }
    clear_tinfo_t();
  }
LABEL_9:
  if ( a1[10].m128i_i64[0] )
    goto LABEL_4;
  return 0xFFFFFFFFLL;
}

