unsigned __int64 __fastcall sub_42940(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rsi
  char v8; // di
  unsigned __int64 v9; // rbx
  __int16 v10; // ax
  unsigned __int64 v11; // rcx
  __int64 (__fastcall *v12)(__int64, __int64, unsigned __int8); // rax
  int v13; // r14d
  int v14; // r15d
  __int64 v15; // rbx
  __int64 flags; // rbp
  unsigned __int64 v18; // rax
  __int64 v19; // rbp
  unsigned __int8 default_reftype; // al
  _BYTE *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // r15
  unsigned __int64 v25; // [rsp+10h] [rbp-D8h]
  __int64 (__fastcall *v26)(__int64, __int64, unsigned __int8); // [rsp+18h] [rbp-D0h]
  unsigned __int64 v29; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE *v30; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v31; // [rsp+48h] [rbp-A0h]
  __int64 v32; // [rsp+60h] [rbp-88h] BYREF
  __m128i si128; // [rsp+68h] [rbp-80h]
  __int64 v34; // [rsp+78h] [rbp-70h]
  __int64 v35; // [rsp+80h] [rbp-68h]
  _BYTE v36[24]; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v37; // [rsp+A8h] [rbp-40h]

  v5 = 4;
  v6 = a1[41];
  v7 = *(_QWORD *)(a2 + 456);
  v8 = *(_BYTE *)(a2 + 617);
  v9 = v7 & (*(_QWORD *)(a3 + 16) + v6);
  v37 = __readfsqword(0x28u);
  if ( v8 )
  {
    v10 = *(_WORD *)(a2 + 522);
    if ( v10 == 21 )
    {
      if ( *(_BYTE *)(a2 + 511) == 102 )
        v8 = 0;
      else
        v5 = 8;
    }
    else
    {
      v5 = 8;
      if ( v10 == 62 && *(_BYTE *)(a2 + 511) == 123 )
      {
        v8 = 0;
        v5 = 4;
      }
    }
  }
  v11 = *(_QWORD *)(a3 + 32);
  v25 = v11 / v5;
  if ( v11 >= v5 )
  {
    v12 = sub_F9E0;
    if ( v8 )
      v12 = sub_FA00;
    v13 = 0;
    v14 = 0;
    v26 = v12;
    while ( 1 )
    {
      v15 = v7 & v9;
      flags = get_flags_ex(v15, 4);
      if ( (flags & 0x600) == 0 )
      {
        v26(v15, v5, 0);
        flags = get_flags_ex(v15, 4);
      }
      if ( (unsigned __int8)get_data_value(&v29, v15, v5) )
      {
        if ( !v29 )
          goto LABEL_26;
        v18 = v29;
        if ( *(_DWORD *)(a2 + 464) != 8 )
          v18 = (int)v29;
        if ( v18 != -1 )
        {
          v29 += a1[41];
          if ( (unsigned __int8)is_mapped(v29) )
          {
            if ( (flags & 0xF00000) == 0 )
            {
              v19 = a1[41];
              default_reftype = get_default_reftype(v15);
              op_offset(v15, 0, default_reftype, -1, v19, 0);
            }
            v31 = 0;
            v30 = nullptr;
            get_ea_name(&v30, v29, 0, 0);
            if ( (unsigned __int64)v31 <= 1
              && (v29 & 1) != 0
              && (unsigned __int8)segtype(v29) == 2
              && (*(_BYTE *)(a1[1] + 12LL) & 8) != 0 )
            {
              get_ea_name(&v30, v29 & 0xFFFFFFFFFFFFFFFELL, 0, 0);
            }
            if ( *(_BYTE *)(a2 + 248) && *(_QWORD *)(a2 + 120) && *(_WORD *)(a2 + 520) == 1
              || (unsigned __int8)segtype(v29) != 2 )
            {
              if ( a4 )
                goto LABEL_24;
LABEL_38:
              if ( (get_flags_ex(v15, 4) & 0x4000) == 0 && (unsigned __int64)v31 > 1 && (unsigned __int8)is_uname(v30) )
              {
                v21 = &unk_8C220;
                if ( (_QWORD)v31 )
                  v21 = v30;
                if ( *v21 != 36 )
                {
                  v32 = 0;
                  v34 = 0;
                  v35 = 0;
                  si128 = _mm_load_si128((const __m128i *)&xmmword_6BEB0);
                  if ( !(unsigned __int8)get_fixup(&v32, v15) || !v35 )
                    sub_428B0(v15, (__int64)v30, 0, "_ptr");
                }
              }
            }
            else
            {
              if ( !a4 )
                goto LABEL_38;
              v22 = sub_41070((__int64)a1, v29, "set special label", 0.0);
              v23 = v22;
              if ( v22 != -1 )
              {
                v24 = v22 + 1;
                auto_mark_range(v22, v22 + 1, 20);
                auto_mark_range(v23, v24, 30);
                if ( (*(_BYTE *)(a1[30] + 344LL) & 1) == 0 && !(unsigned __int8)is_uname(v30) )
                {
                  qsnprintf(v36, 20, "%ctor_%03d", (unsigned int)a4, v13);
                  if ( (unsigned __int8)set_name(v23, v36, 7168) )
                    make_name_auto(v23);
                }
              }
            }
LABEL_24:
            if ( v30 )
            {
              *(_QWORD *)&v31 = 0;
              qfree(v30);
            }
          }
LABEL_26:
          v14 = 0;
          goto LABEL_27;
        }
        v14 = 0;
        toggle_sign(v15, 0);
      }
      else if ( ++v14 == 11 )
      {
        return v37 - __readfsqword(0x28u);
      }
LABEL_27:
      ++v13;
      v9 = v5 + v15;
      if ( v13 >= v25 )
        return v37 - __readfsqword(0x28u);
      v7 = *(_QWORD *)(a2 + 456);
    }
  }
  return v37 - __readfsqword(0x28u);
}
