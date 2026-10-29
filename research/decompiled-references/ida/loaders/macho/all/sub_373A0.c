__int64 __fastcall sub_373A0(
        __int64 *a1,
        int a2,
        unsigned __int64 a3,
        char a4,
        char a5,
        __int64 a6,
        __int64 a7,
        char *s1)
{
  unsigned __int64 v9; // r14
  _QWORD *v12; // rdi
  __int64 v13; // rax
  __int64 result; // rax
  __int64 range; // rax
  unsigned __int8 v16; // al
  int v17; // eax
  __int64 v18; // rdi
  unsigned int v19; // eax
  unsigned __int64 v20; // rcx
  __int16 v21; // ax
  char v22; // al
  __int64 v23; // rax
  char fixup; // al
  char v25; // dl
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // r8
  _BYTE *v32; // rax
  char byte; // al
  int v34; // eax
  char *v35; // rax
  __int64 v36; // [rsp+0h] [rbp-508h]
  __int64 name_ea; // [rsp+0h] [rbp-508h]
  __int64 v38; // [rsp+0h] [rbp-508h]
  bool v39; // [rsp+8h] [rbp-500h]
  __int64 v40; // [rsp+8h] [rbp-500h]
  unsigned int v41; // [rsp+10h] [rbp-4F8h]
  unsigned int v42; // [rsp+10h] [rbp-4F8h]
  unsigned int v43; // [rsp+10h] [rbp-4F8h]
  unsigned int v44; // [rsp+10h] [rbp-4F8h]
  int v45; // [rsp+1Ch] [rbp-4ECh]
  unsigned int v46; // [rsp+2Ch] [rbp-4DCh] BYREF
  unsigned __int64 v47; // [rsp+30h] [rbp-4D8h]
  _BYTE v48[24]; // [rsp+38h] [rbp-4D0h]
  __int64 v49; // [rsp+50h] [rbp-4B8h]
  __int16 v50; // [rsp+58h] [rbp-4B0h]
  __int128 v51; // [rsp+60h] [rbp-4A8h]
  __int64 v52; // [rsp+70h] [rbp-498h]
  __int64 v53; // [rsp+78h] [rbp-490h]
  int v54; // [rsp+80h] [rbp-488h]
  __int64 v55; // [rsp+88h] [rbp-480h]
  int v56; // [rsp+90h] [rbp-478h]
  __int64 v57; // [rsp+98h] [rbp-470h]
  int v58; // [rsp+A0h] [rbp-468h]
  __int64 v59; // [rsp+A8h] [rbp-460h]
  int v60; // [rsp+B0h] [rbp-458h]
  __int64 v61; // [rsp+B8h] [rbp-450h]
  char v62; // [rsp+C0h] [rbp-448h]
  int v63; // [rsp+C1h] [rbp-447h]
  unsigned __int64 v64; // [rsp+4C8h] [rbp-40h]

  v9 = a3;
  v64 = __readfsqword(0x28u);
  if ( a3 != -1 )
    v9 = *(_QWORD *)(*(_QWORD *)(a1[4] + 8) + 16LL) & a3;
  v12 = (_QWORD *)a1[5];
  v13 = v12[30];
  if ( *(_QWORD *)(v12[1] + 16LL) != v13 && v13 != -1 )
  {
    if ( !v12[23] )
      return 0;
    v36 = a6;
    range = rangeset_t_find_range();
    a6 = v36;
    if ( !range )
      return 0;
  }
  v16 = a4 - 102;
  if ( !a6 )
  {
    if ( v16 > 1u )
      goto LABEL_11;
LABEL_41:
    v30 = a1[4];
    if ( (*(_BYTE *)(v30 + 13689) & 8) == 0 )
    {
      if ( a7 != get_qword() )
        patch_qword();
      v30 = a1[4];
    }
    sub_1DF00(v30, a1[5], v9, a7, 3, 0, 0, 0);
    return 0;
  }
  if ( a6 == -1 )
  {
    if ( v16 <= 1u )
      goto LABEL_41;
    a6 = 255;
    if ( a2 != 1 )
    {
LABEL_11:
      if ( !s1 )
        return 0;
      name_ea = get_name_ea();
      if ( name_ea == -1 )
        return 0;
      v39 = strcmp(s1, "__mh_execute_header") != 0;
LABEL_14:
      v17 = 4;
      if ( *(_BYTE *)(a1[4] + 13692) )
        v17 = 8;
      v18 = a1[6];
      v46 = v17;
      v19 = sub_28F70(v18, v9, &v46);
      v20 = v19;
      if ( v19 != 8 )
      {
LABEL_17:
        if ( (*(_BYTE *)(a1[5] + 364) & 0x50) == 0 && (*(_BYTE *)(a1[4] + 13689) & 8) == 0 )
        {
          if ( a4 == 3 )
          {
LABEL_64:
            put_dword();
            goto LABEL_18;
          }
          if ( a4 <= 3 )
          {
            if ( a4 != 1 )
            {
              if ( a4 != 2 )
                goto LABEL_18;
              goto LABEL_64;
            }
LABEL_75:
            if ( a2 != 1 )
            {
              v43 = v20;
              if ( *(_BYTE *)(a1[6] + 161) )
                put_qword();
              else
                put_dword();
              v20 = v43;
            }
            if ( !a7 )
            {
              v44 = v20;
              v34 = strcmp(s1, "___CFConstantStringClassReference");
              v20 = v44;
              if ( !v34 )
              {
                sub_36B20(a1[4], v9);
                v20 = v44;
              }
            }
            if ( (int)v20 <= 16 )
            {
              v35 = (char *)&loc_106DB + 5;
              if ( _bittest64((const __int64 *)&v35, v20) )
              {
                qsnprintf();
                set_name();
                sub_12040(v9, (__int64)s1, 1);
              }
            }
            goto LABEL_18;
          }
          if ( (unsigned __int8)(a4 - 100) <= 1u )
            goto LABEL_75;
        }
LABEL_18:
        if ( v39 )
        {
          v21 = 4;
          if ( *(_BYTE *)(a1[6] + 161) )
            v21 = 12;
          LOWORD(v47) = v21;
          HIDWORD(v47) = 0;
          *(__m128i *)v48 = _mm_load_si128((const __m128i *)&xmmword_57480);
          *(_QWORD *)&v48[16] = name_ea;
          v49 = a7;
          v22 = segtype();
          if ( v22 == 1 )
          {
            HIDWORD(v47) |= 2u;
          }
          else if ( v22 == 2 )
          {
            if ( (*(_BYTE *)(*(_QWORD *)a1[4] + 12LL) & 8) != 0 )
            {
              v49 += v48[16] & 1;
              *(_QWORD *)&v48[16] &= ~1uLL;
            }
            auto_mark_range();
            auto_mark_range();
          }
          v23 = v49;
          if ( *(_DWORD *)(*(_QWORD *)(a1[4] + 8) + 24LL) != 8 )
            v23 = (int)v49;
          v49 = v23;
          set_fixup();
          if ( (a5 & 1) != 0 || a2 == 1 && (a5 & 8) == 0 )
            make_name_weak();
        }
        return 0;
      }
      v31 = v46;
      if ( v46 )
      {
        if ( a7 )
        {
          v42 = v46;
          sub_19510((__int64)"Import stub with addend != 0.");
          LODWORD(v20) = 8;
          v31 = v42;
        }
        v32 = (_BYTE *)a1[4];
        if ( !*(_DWORD *)(*(_QWORD *)v32 + 4LL) && (v32[13689] & 8) == 0 && (_DWORD)v31 == 5 )
        {
          v45 = v20;
          v62 = -23;
          v63 = name_ea - v9 - 5;
          put_bytes();
          byte = get_byte();
          v31 = 5;
          LODWORD(v20) = v45;
          if ( byte == -12 )
          {
            put_byte();
            LODWORD(v20) = v45;
            v31 = 5;
          }
        }
        v41 = v20;
        v50 = 0;
        v47 = v9;
        *(__m128i *)&v48[8] = _mm_load_si128((const __m128i *)&xmmword_574D0);
        *(_QWORD *)v48 = v9 + v31;
        v49 = 0;
        v52 = 0xFFFFFFFFLL;
        v53 = 0;
        v54 = 0;
        v55 = 0;
        v56 = 0;
        v57 = 0;
        v58 = 0;
        v59 = 0;
        v60 = 0;
        v61 = 0;
        v51 = 0;
        add_func_ex();
        v20 = v41;
        goto LABEL_17;
      }
      return 0;
    }
  }
  else
  {
    if ( v16 <= 1u )
      goto LABEL_41;
    if ( a2 != 1 )
    {
LABEL_33:
      if ( !s1 || (v40 = a6, v26 = get_name_ea(), a6 = v40, name_ea = v26, v26 == -1) )
      {
        if ( a6 == 255 )
          return 0;
        if ( (unsigned __int8)segtype() == 1 )
          return 0;
        qsnprintf();
        name_ea = get_name_ea();
        if ( name_ea == -1 )
          return 0;
        v39 = 1;
        goto LABEL_14;
      }
      v27 = strcmp(s1, "__mh_execute_header");
      v28 = v40;
      if ( v27 )
      {
        v39 = 1;
        if ( v28 == 255 )
          goto LABEL_14;
      }
      else
      {
        v39 = 0;
        if ( v28 == 255 )
          goto LABEL_14;
      }
      if ( (unsigned __int8)segtype() != 1 )
      {
        qsnprintf();
        v29 = get_name_ea();
        if ( v29 == -1 )
          v29 = name_ea;
        name_ea = v29;
      }
      goto LABEL_14;
    }
  }
  v38 = a6;
  fixup = get_fixup();
  a6 = v38;
  v25 = fixup;
  result = 1;
  if ( !v25 )
    goto LABEL_33;
  return result;
}

