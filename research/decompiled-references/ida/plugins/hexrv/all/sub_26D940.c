__int64 __fastcall sub_26D940(__m128i *a1, __int64 *a2, _BYTE *a3, __int64 a4)
{
  unsigned __int64 v7; // r15
  __int64 v8; // rbx
  int stroff_path; // eax
  _QWORD *v11; // rdx
  __int64 v12; // rsi
  unsigned __int64 **v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 udm_by_tid; // r15
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // edx
  char v21; // al
  int v22; // r9d
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // rax
  _QWORD *v25; // r12
  int v26; // eax
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rdx
  __m128i v30; // xmm0
  __int64 v31; // r13
  _QWORD *v32; // r12
  _QWORD *v33; // rcx
  int tinfo_udt_member; // eax
  __int64 v35; // rdx
  __int64 v36; // rbp
  _QWORD *v37; // rbx
  int v38; // eax
  _QWORD *dest; // [rsp+28h] [rbp-70h]
  _QWORD *desta; // [rsp+28h] [rbp-70h]
  _QWORD v42[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 tinfo_property; // [rsp+40h] [rbp-58h] BYREF
  __int128 v44; // [rsp+48h] [rbp-50h]
  unsigned __int64 v45; // [rsp+58h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  v7 = a1[8].m128i_u64[0];
  if ( v7 != -1 || (v11 = (_QWORD *)a1[1].m128i_i64[0], v12 = v11[1], (int)v12 - 1 <= 0) )
  {
LABEL_2:
    if ( a1[28].m128i_i8[0] )
      goto LABEL_3;
    goto LABEL_16;
  }
  v13 = (unsigned __int64 **)(*v11 + 8LL * (unsigned int)(v12 - 1));
  v14 = (__int64)&v13[-(unsigned int)(v12 - 2) - 1];
  while ( 1 )
  {
    v7 = **v13;
    if ( v7 != -1 )
      break;
    if ( (unsigned __int64 **)v14 == --v13 )
      goto LABEL_2;
  }
  if ( !a1[28].m128i_i8[0] )
  {
LABEL_16:
    v15 = a1->m128i_i64[1];
    a1[28].m128i_i8[0] = 1;
    sub_253310(*(_QWORD *)(v15 + 64), v7, &a1[9].m128i_i64[1]);
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
  if ( udm_by_tid != -1 && (unsigned __int8)sub_325380(a1->m128i_i64[0], &tinfo_property, &a1[8].m128i_u64[1]) )
  {
    v38 = a1[27].m128i_i32[0] - 1;
    a1[27].m128i_i32[0] = v38;
    memmove(&a1[11], &a1[11].m128i_u64[1], v38);
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
    v42[0] = 0;
    copy_tinfo_t();
    if ( a1[27].m128i_i32[1] )
    {
      v17 = a1[1].m128i_i64[0];
      v18 = *(_DWORD *)(v17 + 8) - 1;
      if ( v18 >= 0 )
      {
        v19 = *(_QWORD *)v17 + 8LL * (unsigned int)v18;
        do
        {
          if ( !*(_QWORD *)v19 )
            break;
          v20 = *(_DWORD *)(*(_QWORD *)v19 + 8LL);
          if ( v20 == 51 )
            goto LABEL_53;
          if ( v20 != 48 )
            break;
          --v18;
          v19 -= 8;
        }
        while ( v18 != -1 );
      }
    }
    else
    {
LABEL_53:
      tinfo_property = 0;
      tinfo_property = get_tinfo_property();
      copy_tinfo_t();
      clear_tinfo_t();
    }
    tinfo_property = 0;
    v44 = 0;
    v21 = get_tinfo_property();
    sub_32F410((unsigned int)&tinfo_property, (_DWORD)a1 + 136, a4, 0, (v21 & 0x2F) == 13, v22);
    if ( (get_tinfo_property() & 0xF) != 0xB && (_QWORD)v44 )
    {
      v23 = 0;
      do
      {
        v25 = (_QWORD *)((v23 << 6) + tinfo_property);
        if ( (get_tinfo_property() & 0xF) == 0xB )
        {
          v42[1] = get_tinfo_property();
          copy_tinfo_t();
          ++v23;
          clear_tinfo_t();
          v24 = v44;
        }
        else if ( *v25 )
        {
          dest = (_QWORD *)((v23 << 6) + tinfo_property);
          clear_tinfo_t();
          v33 = dest;
          if ( dest[4] )
          {
            dest[5] = 0;
            qfree();
            v33 = dest;
          }
          if ( v33[1] )
          {
            v33[2] = 0;
            desta = v33;
            qfree();
            v33 = desta;
          }
          memmove(v33, v33 + 8, tinfo_property + ((_QWORD)v44 << 6) - (_QWORD)v33 - 64);
          v24 = v44 - 1;
          *(_QWORD *)&v44 = v44 - 1;
        }
        else
        {
          v24 = v44;
          ++v23;
        }
      }
      while ( v23 < v24 );
    }
    v26 = sub_26CDD0(a1, &tinfo_property, (__int64)v42);
    v27 = tinfo_property;
    if ( v26 == -1 )
    {
      if ( !a4 )
      {
        copy_tinfo_t();
        tinfo_udt_member = find_tinfo_udt_member();
        v35 = tinfo_property;
        v27 = tinfo_property;
        if ( tinfo_udt_member != -1 )
        {
          *a2 = tinfo_udt_member;
          if ( v35 )
          {
            v36 = v44;
            if ( (_QWORD)v44 )
            {
              do
              {
                v37 = (_QWORD *)(v35 + (a4 << 6));
                clear_tinfo_t();
                if ( v37[4] )
                {
                  v37[5] = 0;
                  qfree();
                }
                if ( v37[1] )
                {
                  v37[2] = 0;
                  qfree();
                }
                ++a4;
                v35 = tinfo_property;
              }
              while ( v36 != a4 );
            }
            *(_QWORD *)&v44 = 0;
            qfree();
          }
          clear_tinfo_t();
          return 1;
        }
      }
    }
    else
    {
      v28 = tinfo_property + ((__int64)v26 << 6);
      v29 = *(_QWORD *)(v28 + 32);
      v30 = _mm_loadu_si128((const __m128i *)(v28 + 40));
      *(_QWORD *)(v28 + 32) = a1[9].m128i_i64[1];
      *(_QWORD *)(v28 + 40) = a1[10].m128i_i64[0];
      *(_QWORD *)(v28 + 48) = a1[10].m128i_i64[1];
      a1[9].m128i_i64[1] = v29;
      a1[10] = v30;
    }
    if ( v27 )
    {
      v31 = v44;
      if ( (_QWORD)v44 )
      {
        do
        {
          v32 = (_QWORD *)(v27 + (v8 << 6));
          clear_tinfo_t();
          if ( v32[4] )
          {
            v32[5] = 0;
            qfree();
          }
          if ( v32[1] )
          {
            v32[2] = 0;
            qfree();
          }
          ++v8;
          v27 = tinfo_property;
        }
        while ( v31 != v8 );
      }
      *(_QWORD *)&v44 = 0;
      qfree();
    }
    clear_tinfo_t();
  }
LABEL_9:
  if ( a1[10].m128i_i64[0] )
    goto LABEL_4;
  return 0xFFFFFFFFLL;
}

