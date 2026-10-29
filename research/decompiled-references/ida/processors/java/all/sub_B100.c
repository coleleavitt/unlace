unsigned __int64 __fastcall sub_B100(_QWORD *a1)
{
  __int64 v1; // r12
  __int64 v3; // rdi
  __int64 module_data; // rax
  unsigned __int8 v5; // al
  __int64 func; // rax
  const char *v7; // r12
  const char *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  _BOOL8 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // rax
  char v20; // r12
  __int64 v21; // rax
  char v22; // r12
  __int64 v23; // rax
  char v24; // r12
  __int64 v25; // rax
  const char *v26; // r12
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned int v32; // r12d
  __int64 v33; // rax
  void *v34; // rdx
  unsigned int v35; // r12d
  __int64 v36; // rax
  void *v37; // rdx
  __int64 v38; // rax
  const char *v39; // r12
  __int64 v40; // rax
  const char *v41; // [rsp+0h] [rbp-48h] BYREF
  __int128 v42; // [rsp+8h] [rbp-40h]
  unsigned __int64 v43; // [rsp+18h] [rbp-30h]

  v1 = a1[2];
  v43 = __readfsqword(0x28u);
  sub_10E20(a1, 2);
  v3 = (unsigned int)dword_2D4F4;
  *((_DWORD *)a1 + 36) |= 0x80u;
  module_data = get_module_data(v3);
  v5 = *(_BYTE *)(sub_19F50(module_data, v1, 0) + 184);
  if ( v5 == 4 )
  {
    *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 164) = 0;
    if ( (unsigned __int8)sub_8ED0((__int64)a1, 0) )
      goto LABEL_12;
    v12 = *(_WORD *)(get_module_data((unsigned int)dword_2D4F4) + 33023) == 0;
    v13 = get_module_data((unsigned int)dword_2D4F4);
    if ( (unsigned __int8)sub_10790(a1, *(unsigned __int16 *)(v13 + 33021), 140, 7, v12) )
      goto LABEL_12;
    if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0 )
    {
      if ( !*(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33025) )
        goto LABEL_23;
      if ( (unsigned __int8)sub_FBC0(a1, 1) )
        goto LABEL_12;
      sub_11720(a1, ".super ", 7);
    }
    else
    {
      if ( !*(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33025)
        || (*(_BYTE *)(get_module_data((unsigned int)dword_2D4F4) + 33030) & 2) != 0
        && (*(_BYTE *)(get_module_data((unsigned int)dword_2D4F4) + 33087) & 0x10) != 0 )
      {
        if ( !*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33045) )
        {
LABEL_24:
          v15 = get_module_data((unsigned int)dword_2D4F4);
          if ( !(unsigned __int8)sub_FBC0(a1, !(*(_WORD *)(*(_QWORD *)(v15 + 24) + 4LL) & 1)) )
          {
            if ( !*(_WORD *)(get_module_data((unsigned int)dword_2D4F4) + 33109)
              || (v16 = get_module_data((unsigned int)dword_2D4F4),
                  !(unsigned __int8)sub_92F0((__int64)a1, *(_WORD *)(v16 + 33109), 1)) )
            {
              if ( (!*(_WORD *)(get_module_data((unsigned int)dword_2D4F4) + 33097) || !(unsigned __int8)sub_AB50(a1))
                && ((*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) == 0
                 || (*(_BYTE *)(get_module_data((unsigned int)dword_2D4F4) + 33087) & 4) == 0
                 || !(*(unsigned __int8 (__fastcall **)(_QWORD *, void *, _QWORD))(*a1 + 136LL))(a1, &unk_226D3, 0)) )
              {
                if ( !*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33133)
                  || (v17 = get_module_data((unsigned int)dword_2D4F4),
                      !(unsigned __int8)sub_AE60((__int64)a1, *(_QWORD *)(v17 + 33133), 0)) )
                {
                  if ( (*(_BYTE *)(get_module_data((unsigned int)dword_2D4F4) + 33087) & 0x20) != 0 )
                  {
                    v18 = sub_117E0(a1, 0);
                    v19 = get_module_data((unsigned int)dword_2D4F4);
                    if ( (int)sub_1B1E0(a1, v19, 0xFFFF, v18, 0, sub_8680) >= 0 )
                    {
                      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 11);
                      sub_FBC0(a1, 0);
                    }
                  }
                }
              }
            }
          }
          goto LABEL_12;
        }
        if ( (unsigned __int8)sub_FE40(a1, " extends ", 9) )
          goto LABEL_12;
LABEL_23:
        if ( *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33045) )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0 )
          {
            v39 = ".implements ";
          }
          else
          {
            if ( (*(_BYTE *)(get_module_data((unsigned int)dword_2D4F4) + 33030) & 2) != 0 )
            {
              if ( *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33025)
                && (*(_BYTE *)(get_module_data((unsigned int)dword_2D4F4) + 33087) & 0x10) == 0
                && (unsigned __int8)sub_FF20(a1, 44) )
              {
                goto LABEL_12;
              }
            }
            else if ( (unsigned __int8)sub_FE40(a1, " implements ", 12) )
            {
              goto LABEL_12;
            }
            v39 = nullptr;
          }
          v40 = get_module_data((unsigned int)dword_2D4F4);
          if ( !(unsigned __int8)sub_10C50(a1, *(_QWORD *)(v40 + 33045), 0, v39) )
            goto LABEL_12;
        }
        goto LABEL_24;
      }
      if ( (unsigned __int8)sub_FE40(a1, " extends ", 9) )
        goto LABEL_12;
    }
    v14 = get_module_data((unsigned int)dword_2D4F4);
    if ( (unsigned __int8)sub_10820(a1, *(unsigned int *)(v14 + 33025)) )
      goto LABEL_12;
    goto LABEL_23;
  }
  if ( v5 > 4u )
  {
    if ( v5 != 9 )
      goto LABEL_12;
    goto LABEL_14;
  }
  if ( v5 == 1 )
  {
LABEL_14:
    if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) == 0 )
      (*(void (__fastcall **)(_QWORD *, void *, _QWORD))(*a1 + 136LL))(a1, &unk_228D2, 0);
    goto LABEL_12;
  }
  if ( v5 != 2 )
    goto LABEL_12;
  func = get_func(v1);
  v7 = (const char *)func;
  if ( func )
  {
    v41 = nullptr;
    v42 = 0;
    if ( get_func_cmt(&v41, func, 0) > 0 || (v8 = v7, get_func_cmt(&v41, v7, 1) > 0) )
    {
      v8 = s1;
      if ( (_QWORD)v42 )
        v8 = v41;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 184LL))(a1, v8, 2) )
      {
        if ( v41 )
        {
          *(_QWORD *)&v42 = 0;
          qfree(v41, v8, v9, v10);
        }
        goto LABEL_12;
      }
    }
    if ( v41 )
    {
      *(_QWORD *)&v42 = 0;
      qfree(v41, v8, v9, v10);
    }
  }
  *(_BYTE *)(get_module_data((unsigned int)dword_2D4F4) + 169) = 1;
  if ( (unsigned __int8)sub_8ED0((__int64)a1, 2u) )
    goto LABEL_12;
  if ( (*(_BYTE *)(get_module_data((unsigned int)dword_2D4F4) + 33149) & 2) == 0
    && (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) == 0 )
  {
    v20 = *(_BYTE *)(get_module_data((unsigned int)dword_2D4F4) + 33149);
    v21 = get_module_data((unsigned int)dword_2D4F4);
    if ( (unsigned __int8)sub_10790(a1, *(unsigned __int16 *)(v21 + 33143), 5, 32, v20 & 2) )
      goto LABEL_12;
  }
  v22 = *(_BYTE *)(get_module_data((unsigned int)dword_2D4F4) + 33149);
  v23 = get_module_data((unsigned int)dword_2D4F4);
  if ( (unsigned __int8)sub_10790(a1, *(unsigned __int16 *)(v23 + 33141), 13, 37, v22 & 1) )
    goto LABEL_12;
  if ( (*(_BYTE *)(get_module_data((unsigned int)dword_2D4F4) + 33149) & 2) != 0 )
  {
    if ( (unsigned __int8)sub_117A0(a1) )
      goto LABEL_12;
    goto LABEL_47;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0 )
  {
LABEL_47:
    v24 = *(_BYTE *)(get_module_data((unsigned int)dword_2D4F4) + 33149);
    v25 = get_module_data((unsigned int)dword_2D4F4);
    if ( (unsigned __int8)sub_10790(a1, *(unsigned __int16 *)(v25 + 33143), 3, 32, v24 & 2) )
      goto LABEL_12;
    goto LABEL_48;
  }
  v38 = get_module_data((unsigned int)dword_2D4F4);
  if ( (unsigned __int8)sub_10630(a1, *(unsigned __int16 *)(v38 + 33143), 6, 32) )
    goto LABEL_12;
LABEL_48:
  if ( *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33185) )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0 )
    {
      v26 = ".throws ";
    }
    else
    {
      v26 = nullptr;
      if ( (unsigned __int8)sub_FE40(a1, " throws ", 8) )
        goto LABEL_12;
    }
    v27 = get_module_data((unsigned int)dword_2D4F4);
    if ( !(unsigned __int8)sub_10C50(a1, *(_QWORD *)(v27 + 33185), 2, v26) )
      goto LABEL_12;
  }
  if ( !(unsigned __int8)sub_FBC0(a1, 0) )
  {
    if ( !*(_WORD *)(get_module_data((unsigned int)dword_2D4F4) + 33151)
      || (v28 = get_module_data((unsigned int)dword_2D4F4),
          v29 = (unsigned int)dword_2D4F4,
          *(_DWORD *)(v28 + 164) = 2,
          v30 = get_module_data(v29),
          !(unsigned __int8)sub_92F0((__int64)a1, *(_WORD *)(v30 + 33151), -1)) )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) == 0
        || (*(_BYTE *)(get_module_data((unsigned int)dword_2D4F4) + 33149) & 4) == 0
        || !(*(unsigned __int8 (__fastcall **)(_QWORD *, void *, __int64))(*a1 + 136LL))(a1, &unk_226D3, 2) )
      {
        if ( !*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33249)
          || (v31 = get_module_data((unsigned int)dword_2D4F4),
              !(unsigned __int8)sub_AE60((__int64)a1, *(_QWORD *)(v31 + 33249), 2u)) )
        {
          if ( !*(_WORD *)(get_module_data((unsigned int)dword_2D4F4) + 33175) )
            goto LABEL_101;
          v32 = *(unsigned __int16 *)(get_module_data((unsigned int)dword_2D4F4) + 33175);
          v33 = get_module_data((unsigned int)dword_2D4F4);
          v34 = &unk_22865;
          if ( (*(_BYTE *)(*(_QWORD *)(v33 + 24) + 4LL) & 1) != 0 )
            v34 = &unk_22851;
          if ( !(unsigned __int8)sub_88B0((__int64)a1, 2, (__int64)v34, v32) )
          {
LABEL_101:
            if ( !*(_WORD *)(get_module_data((unsigned int)dword_2D4F4) + 33173) )
              goto LABEL_102;
            v35 = *(unsigned __int16 *)(get_module_data((unsigned int)dword_2D4F4) + 33173);
            v36 = get_module_data((unsigned int)dword_2D4F4);
            v37 = &unk_2288B;
            if ( (*(_BYTE *)(*(_QWORD *)(v36 + 24) + 4LL) & 1) != 0 )
              v37 = &unk_22876;
            if ( !(unsigned __int8)sub_88B0((__int64)a1, 2, (__int64)v37, v35) )
            {
LABEL_102:
              if ( (*(_BYTE *)(get_module_data((unsigned int)dword_2D4F4) + 33149) & 0x40) == 0
                || !(unsigned __int8)sub_89A0((__int64)a1, -1) && !(unsigned __int8)sub_10BD0(a1, 4, "stack") )
              {
                if ( (*(_BYTE *)(get_module_data((unsigned int)dword_2D4F4) + 33149) & 0x10) != 0 )
                  sub_10850(a1, 0);
                if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) == 0 )
                  sub_10B90(a1, 2);
              }
            }
          }
        }
      }
    }
  }
LABEL_12:
  sub_10EE0(a1);
  *(_BYTE *)(get_module_data((unsigned int)dword_2D4F4) + 169) = 0;
  return v43 - __readfsqword(0x28u);
}

