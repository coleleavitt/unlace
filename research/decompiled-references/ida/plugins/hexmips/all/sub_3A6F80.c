_BOOL8 __fastcall sub_3A6F80(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v6; // r12
  int v7; // ebx
  __int64 *v8; // rdx
  unsigned __int64 *v9; // rax
  int v10; // r13d
  int v11; // r14d
  __int64 ph; // rax
  int v13; // ecx
  bool (__fastcall *v14)(int, unsigned int); // rax
  __int64 v15; // r13
  void (__fastcall *v16)(__int128 *, __int128 *, __int64); // rax
  int v17; // r14d
  char v18; // dl
  __int64 v19; // rax
  int v20; // ebp
  int v21; // r13d
  __int64 v22; // rdi
  int tinfo_size; // r14d
  __int64 v24; // rax
  int v25; // eax
  unsigned int v26; // eax
  bool v27; // cc
  __int64 v28; // rax
  __int64 *v29; // rdx
  char v30; // dl
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rsi
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 tinfo_tid; // rbx
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 i; // r12
  __int64 v41; // rbx
  __int64 tinfo_property4; // rbx
  __int64 v43; // rax
  __int64 v44; // rsi
  unsigned __int64 v45; // [rsp+0h] [rbp-2C8h]
  bool v46; // [rsp+1Ah] [rbp-2AEh]
  char v47; // [rsp+1Bh] [rbp-2ADh]
  __int64 v48; // [rsp+28h] [rbp-2A0h] BYREF
  __int64 v49; // [rsp+30h] [rbp-298h]
  __int128 v50; // [rsp+38h] [rbp-290h]
  __int64 v51; // [rsp+50h] [rbp-278h] BYREF
  __int128 v52; // [rsp+58h] [rbp-270h]
  __int64 v53[2]; // [rsp+70h] [rbp-258h] BYREF
  __int64 v54; // [rsp+80h] [rbp-248h]
  __int128 v55; // [rsp+88h] [rbp-240h]
  __int64 v56; // [rsp+98h] [rbp-230h]
  __int128 v57; // [rsp+A0h] [rbp-228h]
  __int128 v58; // [rsp+B0h] [rbp-218h]
  __int64 v59; // [rsp+E0h] [rbp-1E8h]
  int v60; // [rsp+E8h] [rbp-1E0h]
  __int64 v61; // [rsp+F0h] [rbp-1D8h]
  char v62; // [rsp+F8h] [rbp-1D0h]
  __int128 v63; // [rsp+100h] [rbp-1C8h] BYREF
  __m128i v64; // [rsp+110h] [rbp-1B8h]
  __int128 v65; // [rsp+120h] [rbp-1A8h]
  __int64 v66; // [rsp+130h] [rbp-198h]
  __int64 v67; // [rsp+138h] [rbp-190h]
  __int64 v68; // [rsp+140h] [rbp-188h]
  char v69; // [rsp+148h] [rbp-180h] BYREF
  _BYTE v70[319]; // [rsp+149h] [rbp-17Fh]
  unsigned __int64 v71; // [rsp+288h] [rbp-40h] BYREF

  v2 = *(_DWORD *)(a2 + 8);
  v71 = __readfsqword(0x28u);
  v3 = a2;
  if ( v2 == 59 )
  {
    v6 = *(_QWORD *)a2;
    v7 = 1;
    if ( *(_QWORD *)a2 != -1 )
      goto LABEL_12;
    goto LABEL_10;
  }
  if ( v2 > 0x3B )
  {
    if ( v2 != 60 )
      return 0;
    v6 = *(_QWORD *)a2;
    v7 = 2;
    if ( *(_QWORD *)a2 != -1 )
      goto LABEL_12;
    goto LABEL_10;
  }
  if ( v2 == 57 )
  {
    v7 = 5;
    if ( (unsigned int)sub_2894B0(*(_QWORD *)(a2 + 24)) == -1 )
      return 0;
  }
  else
  {
    if ( v2 != 58 )
      return 0;
    v4 = *(_QWORD *)(a2 + 32);
    if ( *(_DWORD *)(v4 + 8) != 61 || sub_2511B0(*(__int64 **)(v4 + 24)) < 0 )
      return 0;
    if ( (get_tinfo_property() & 0xF) == 0xB )
    {
      v7 = 3;
    }
    else
    {
      if ( (get_tinfo_property() & 0xF) != 0xA )
        return 0;
      v7 = 4;
    }
  }
  v6 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 == -1 )
  {
    if ( *(_DWORD *)(a2 + 8) != 58
      || (v29 = *(__int64 **)(a2 + 24), (unsigned int)(*((_DWORD *)v29 + 2) - 59) > 1)
      || (v6 = *v29, *v29 == -1) )
    {
LABEL_10:
      v8 = *(__int64 **)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
      if ( (unsigned int)(*((_DWORD *)v8 + 2) - 2) > 0xD )
        return 0;
      v6 = *v8;
      if ( *v8 == -1 )
        return 0;
    }
  }
LABEL_12:
  v66 = -1;
  v9 = (unsigned __int64 *)&v69;
  v67 = 0;
  v68 = 0;
  v65 = -1;
  do
  {
    *(_WORD *)v9 = 0;
    v9 += 5;
    *((_WORD *)v9 - 19) = 0;
    *((_WORD *)v9 - 18) = 0;
    *((_DWORD *)v9 - 2) = 0;
    *((_WORD *)v9 - 17) = 0;
    *((_OWORD *)v9 - 2) = 0;
    *(v9 - 2) = 0;
  }
  while ( v9 != &v71 );
  if ( (int)decode_insn() <= 0 )
    return 0;
  v10 = sub_3A6CF0((__int64 *)(a1 + 16), a2, 0);
  if ( v10 == 3 )
  {
    v17 = sub_CBD70() - 1;
    if ( v17 < 0 )
      return 0;
    if ( LODWORD(v53[0]) )
      return 0;
    get_flags_ex();
    if ( (unsigned __int8)is_defarg() )
      return 0;
    v18 = v70[40 * v17];
    if ( v18 == 5 )
    {
      v45 = *(_QWORD *)&v70[40 * v17 + 7];
      goto LABEL_37;
    }
    if ( v18 == 4 )
    {
      v45 = *(_QWORD *)&v70[40 * v17 + 15];
      goto LABEL_37;
    }
    return 0;
  }
  v11 = 0;
  get_flags_ex();
  ph = get_ph();
  v13 = *(_DWORD *)(ph + 104);
  if ( (unsigned __int16)v67 >= v13 && (unsigned __int16)v67 < *(int *)(ph + 108) )
    v11 = *(_DWORD *)(*(_QWORD *)(ph + 112) + 16LL * ((unsigned __int16)v67 - v13) + 8);
  v14 = sub_3A40B0;
  v64.m128i_i64[0] = 0;
  if ( !v10 )
    v14 = sub_3A40D0;
  v64.m128i_i64[1] = 0;
  v63 = 0;
  if ( v14 )
  {
    *(_QWORD *)&v63 = v14;
    v64 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4C7C80), (__m128i)(unsigned __int64)sub_3A4220);
  }
  if ( (unsigned __int8)(v70[0] - 3) <= 1u )
  {
    v15 = 0;
  }
  else if ( (unsigned __int8)(v70[40] - 3) <= 1u )
  {
    v15 = 1;
  }
  else
  {
    v15 = 2;
    if ( (unsigned __int8)(v70[80] - 3) > 1u )
    {
      v16 = (void (__fastcall *)(__int128 *, __int128 *, __int64))v64.m128i_i64[0];
      goto LABEL_27;
    }
  }
  v30 = is_defarg();
  v16 = (void (__fastcall *)(__int128 *, __int128 *, __int64))v64.m128i_i64[0];
  if ( v30 )
  {
LABEL_27:
    if ( v16 )
      v16(&v63, &v63, 3);
    return 0;
  }
  LODWORD(v51) = v11;
  LODWORD(v53[0]) = v15;
  if ( !v64.m128i_i64[0] )
    std::__throw_bad_function_call();
  if ( !((unsigned __int8 (__fastcall *)(__int128 *, __int64 *, __int64 *))v64.m128i_i64[1])(&v63, &v51, v53) )
  {
    if ( v64.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v64.m128i_i64[0])(&v63, &v63, 3);
    return 0;
  }
  if ( v70[40 * v15] == 4 )
  {
    v45 = *(_QWORD *)&v70[40 * v15 + 15];
    if ( v64.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v64.m128i_i64[0])(&v63, &v63, 3);
  }
  else
  {
    if ( v64.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64, __int64))v64.m128i_i64[0])(&v63, &v63, 3, 40 * v15);
    v45 = 0;
  }
LABEL_37:
  v49 = 0;
  v19 = *(_QWORD *)a2;
  v50 = 0;
  v46 = v19 != -1 && v6 != v19;
  if ( v46 )
    return 0;
  v47 = 0;
  v20 = 0;
  v21 = 0;
LABEL_39:
  v22 = *(_QWORD *)(v3 + 24);
  if ( (unsigned int)(v7 - 1) <= 1 )
  {
    while ( 1 )
    {
      v53[0] = 0;
      v53[0] = get_tinfo_property();
      if ( (get_tinfo_property() & 0x3F) == 0xD )
      {
        v31 = *(_DWORD *)(v3 + 32);
        if ( v45 < (unsigned int)(v31 + v20 + v21) )
          goto LABEL_119;
        v21 += v31;
      }
      v32 = v50;
      v33 = v49;
      if ( *((_QWORD *)&v50 + 1) < (unsigned __int64)(v50 + 1) )
      {
        v49 = qvector_reserve();
        v33 = v49;
        v32 = v50;
      }
      *(_QWORD *)(v33 + 8 * v32) = v3;
      *(_QWORD *)&v50 = v50 + 1;
      clear_tinfo_t();
      if ( v7 == 2 )
        break;
      v47 = 1;
LABEL_45:
      v3 = *(_QWORD *)(v3 + 24);
      v26 = *(_DWORD *)(v3 + 8);
      v27 = v26 <= 0x3B;
      if ( v26 == 59 )
        goto LABEL_83;
LABEL_46:
      if ( v27 )
      {
        if ( v26 == 57 )
        {
          if ( (unsigned int)sub_2894B0(*(_QWORD *)(v3 + 24)) == -1 )
            goto LABEL_50;
          v7 = 5;
        }
        else
        {
          if ( v26 != 58 )
            goto LABEL_50;
          v28 = *(_QWORD *)(v3 + 32);
          if ( *(_DWORD *)(v28 + 8) != 61 || sub_2511B0(*(__int64 **)(v28 + 24)) < 0 )
            goto LABEL_50;
          if ( (get_tinfo_property() & 0xF) == 0xB )
          {
            v7 = 3;
          }
          else
          {
            if ( (get_tinfo_property() & 0xF) != 0xA )
              goto LABEL_50;
            v7 = 4;
          }
        }
      }
      else
      {
        if ( v26 != 60 )
          goto LABEL_50;
        v7 = 2;
      }
LABEL_71:
      if ( *(_QWORD *)v3 == v6 )
        goto LABEL_39;
      if ( *(_QWORD *)v3 != -1 )
        goto LABEL_50;
      v22 = *(_QWORD *)(v3 + 24);
      if ( (unsigned int)(v7 - 1) > 1 )
        goto LABEL_40;
    }
  }
  else
  {
LABEL_40:
    if ( v7 == 5 )
    {
      v34 = sub_2894B0(v22);
      if ( v45 >= (unsigned int)(v34 + v20 + v21) )
      {
        v20 += v34;
        v3 = **(_QWORD **)(v3 + 32);
        v26 = *(_DWORD *)(v3 + 8);
        v27 = v26 <= 0x3B;
        if ( v26 != 59 )
          goto LABEL_46;
LABEL_83:
        v7 = 1;
        goto LABEL_71;
      }
    }
    else
    {
      v53[0] = 0;
      v53[0] = get_tinfo_property();
      tinfo_size = get_tinfo_size();
      v24 = *(_QWORD *)(v3 + 32);
      if ( *(_DWORD *)(v24 + 8) != 61 )
        sub_3A4230(0.0);
      v25 = tinfo_size * sub_2511B0(*(__int64 **)(v24 + 24));
      if ( v45 < (unsigned int)(v25 + v20 + v21) )
      {
LABEL_119:
        clear_tinfo_t();
      }
      else
      {
        v20 += v25;
        if ( v7 != 4 )
        {
          clear_tinfo_t();
          goto LABEL_45;
        }
        v35 = v50;
        v36 = v49;
        if ( *((_QWORD *)&v50 + 1) < (unsigned __int64)(v50 + 1) )
        {
          v49 = qvector_reserve();
          v36 = v49;
          v35 = v50;
        }
        *(_QWORD *)(v36 + 8 * v35) = v3;
        *(_QWORD *)&v50 = v50 + 1;
        clear_tinfo_t();
      }
    }
LABEL_50:
    if ( !v47 )
      goto LABEL_52;
  }
  if ( v21 + v20 == v45 )
  {
    v51 = 0;
    v52 = 0;
    sub_3A6C90(&v48);
    tinfo_tid = get_tinfo_tid();
    if ( tinfo_tid != -1 )
    {
      v38 = v52;
      v39 = v51;
      if ( *((_QWORD *)&v52 + 1) < (unsigned __int64)(v52 + 1) )
      {
        v51 = qvector_reserve();
        v39 = v51;
        v38 = v52;
      }
      *(_QWORD *)(v39 + 8 * v38) = tinfo_tid;
      *(_QWORD *)&v52 = v52 + 1;
      for ( i = v49 + 8 * v50; i != v49; i -= 8 )
      {
        v41 = *(_QWORD *)(i - 8);
        if ( *(_DWORD *)(v41 + 8) != 58 )
        {
          sub_3A6C90(v53);
          copy_tinfo_t();
          clear_tinfo_t();
          v53[1] = 0;
          v54 = 0;
          v56 = 0;
          v59 = 1;
          v60 = -1;
          v61 = 0;
          v62 = 0;
          v55 = 0;
          v57 = 0;
          v58 = 0;
          v53[0] = *(unsigned int *)(v41 + 32);
          if ( (unsigned int)find_tinfo_udt_member() == -1
            || (get_tinfo_property() & 0x3F) == 0xD && v53[0] != 8LL * *(unsigned int *)(v41 + 32) )
          {
LABEL_113:
            sub_9DC90(v53);
            goto LABEL_114;
          }
          if ( (get_tinfo_property() & 0x3F) == 0x1D )
          {
            tinfo_property4 = get_tinfo_property4();
            if ( tinfo_property4 == -1 )
              goto LABEL_113;
            v43 = v52;
            v44 = v51;
            if ( *((_QWORD *)&v52 + 1) < (unsigned __int64)(v52 + 1) )
            {
              v51 = qvector_reserve();
              v44 = v51;
              v43 = v52;
            }
            *(_QWORD *)(v44 + 8 * v43) = tinfo_property4;
            *(_QWORD *)&v52 = v52 + 1;
          }
          clear_tinfo_t();
          if ( v56 )
          {
            *(_QWORD *)&v57 = 0;
            qfree();
          }
          if ( v54 )
          {
            *(_QWORD *)&v55 = 0;
            qfree();
          }
        }
      }
      if ( (unsigned __int8)op_stroff() )
        set_abits();
LABEL_114:
      v46 = 1;
    }
    clear_tinfo_t();
    if ( v51 )
    {
      *(_QWORD *)&v52 = 0;
      qfree();
    }
  }
LABEL_52:
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree();
  }
  return v46;
}

