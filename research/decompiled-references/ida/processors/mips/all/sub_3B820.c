unsigned __int64 __fastcall sub_3B820(_QWORD *a1)
{
  const char *v1; // rsi
  _QWORD *segm_by_name; // rax
  __int64 v4; // rax
  __m128i si128; // xmm0
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  char *v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r12
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r13
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 first_seg; // rax
  __int64 v26; // rdx
  __int64 v27; // r12
  unsigned __int64 v28; // rbp
  __int16 qword; // ax
  __int64 v30; // rax
  __int64 chunk; // rax
  unsigned __int64 v32; // rbp
  struct _Unwind_Exception *v33; // rbx
  char *s1; // [rsp+0h] [rbp-48h] BYREF
  __int128 v35; // [rsp+8h] [rbp-40h]
  unsigned __int64 v36; // [rsp+18h] [rbp-30h]

  v1 = "$ got";
  v36 = __readfsqword(0x28u);
  netnode_check(&s1, "$ got", 0, 0);
  if ( !(unsigned __int8)netnode_exist(&s1) )
  {
    a1[45] = -1;
    goto LABEL_3;
  }
  v1 = nullptr;
  v7 = netnode_altval(s1, 0, 65);
  v8 = node2ea(v7 - 1);
  a1[45] = v8;
  if ( v8 != -1 )
  {
    v9 = getseg(v8);
    v10 = v9;
    if ( v9 )
    {
      v11 = a1[45];
      v12 = *(_QWORD *)(v9 + 8);
      v13 = v11 + a1[47];
      a1[46] = v12;
      if ( v12 < v13 )
        a1[47] = v12 - v11;
      s1 = nullptr;
      v35 = 0;
      if ( get_segm_name(&s1, v10, 0) > 0 )
      {
        v14 = s1;
        if ( !(_QWORD)v35 || strcmp(s1, "LOAD") )
        {
LABEL_14:
          if ( v14 )
          {
            *(_QWORD *)&v35 = 0;
            qfree(v14);
          }
          return v36 - __readfsqword(0x28u);
        }
        if ( *(_BYTE *)(v10 + 43) == 2 )
        {
          v15 = -8;
          v16 = 7;
          v17 = 8;
        }
        else
        {
          v15 = -4;
          v16 = 3;
          v17 = 4;
        }
        v18 = v15 & (v16 + a1[45] + a1[47]);
        while ( 1 )
        {
          v19 = a1[46];
          v20 = v18;
          v18 += v17;
          if ( v19 < v18 )
            break;
          if ( !(unsigned __int8)get_fixup(0, v20) )
          {
            v19 = a1[46];
            break;
          }
        }
        if ( v20 < v19 )
          a1[46] = v20;
      }
      v14 = s1;
      goto LABEL_14;
    }
  }
LABEL_3:
  segm_by_name = (_QWORD *)get_segm_by_name(".got");
  if ( segm_by_name )
  {
    a1[45] = *segm_by_name;
    v4 = segm_by_name[1];
    a1[47] = 0;
    a1[46] = v4;
  }
  else if ( a1[44] == -1 || (unsigned int)getinf(5) != 18 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_595E0);
    a1[47] = 0;
    *(__m128i *)(a1 + 45) = si128;
  }
  else
  {
    v21 = *(_QWORD *)(a1[4] + 16LL) & (a1[44] - 32752LL);
    a1[45] = v21;
    v22 = getseg(v21);
    if ( v22 )
    {
      v24 = *(_QWORD *)(v22 + 8);
    }
    else
    {
      v21 = a1[45];
      chunk = next_chunk(v21);
      v23 = a1[4];
      v24 = *(_QWORD *)(v23 + 16) & chunk;
    }
    a1[46] = v24;
    first_seg = get_first_seg(v21, v1, v23);
    if ( !first_seg )
    {
LABEL_44:
      v33 = (struct _Unwind_Exception *)sub_3A620();
      if ( s1 )
      {
        *(_QWORD *)&v35 = 0;
        qfree(s1);
      }
      _Unwind_Resume(v33);
    }
    v27 = 4;
    if ( *(_BYTE *)(first_seg + 43) == 2 )
      v27 = 8;
    v28 = a1[45];
    if ( v28 < a1[46] )
    {
      do
      {
        v30 = get_first_seg(v21, v1, v26);
        if ( !v30 )
          goto LABEL_44;
        v21 = v28;
        if ( *(_BYTE *)(v30 + 43) == 2 )
          qword = get_qword(v28);
        else
          qword = get_dword(v28);
        if ( qword )
          break;
        v28 += v27;
      }
      while ( v28 < a1[46] );
      v32 = v28 - a1[45];
    }
    else
    {
      v32 = 0;
    }
    a1[47] = v32;
  }
  return v36 - __readfsqword(0x28u);
}

