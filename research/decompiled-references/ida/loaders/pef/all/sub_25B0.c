unsigned __int64 __fastcall sub_25B0(unsigned int a1, unsigned int a2, int a3)
{
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // rbp
  unsigned __int8 default_reftype; // al
  _BYTE *v8; // rsi
  __int64 v9; // rbp
  size_t v10; // r13
  __int64 v11; // r14
  _BYTE *v12; // rax
  void *src; // [rsp+0h] [rbp-78h] BYREF
  __int128 v14; // [rsp+8h] [rbp-70h]
  _DWORD v15[2]; // [rsp+20h] [rbp-58h] BYREF
  __m128i si128; // [rsp+28h] [rbp-50h]
  __int64 v17; // [rsp+38h] [rbp-40h]
  __int64 dword; // [rsp+40h] [rbp-38h]
  unsigned __int64 v19; // [rsp+48h] [rbp-30h]

  v3 = a2;
  v19 = __readfsqword(0x28u);
  v15[0] = 4;
  si128 = _mm_load_si128((const __m128i *)&xmmword_6330);
  v15[1] = 2 * a3;
  v17 = 0;
  v4 = getseg(a2);
  dword = (unsigned int)get_dword(a1);
  if ( v4 )
  {
    si128.m128i_i64[1] = *(_QWORD *)(v4 + 48);
    v3 = a2 - get_segm_base(v4);
  }
  v17 = v3;
  set_fixup(a1, v15);
  v5 = a2 + (unsigned int)get_dword(a1);
  put_dword(a1, v5);
  default_reftype = get_default_reftype(a1);
  op_offset(a1, 0, default_reftype, -1, 0, 0);
  if ( v5 != qword_81E8 && (get_flags_ex(a1, 4) & 0x4000) == 0 && (get_flags_ex(v5, 4) & 0x4000) != 0 )
  {
    src = nullptr;
    v14 = 0;
    if ( get_ea_name(&src, v5, 0, 0) <= 0 )
      goto LABEL_8;
    v8 = src;
    if ( (_QWORD)v14 )
    {
      v9 = v14 + 3;
      v10 = v14 - 1;
      v11 = v14 + 2;
      if ( *((_QWORD *)&v14 + 1) >= (unsigned __int64)(v14 + 3) )
        goto LABEL_12;
    }
    else
    {
      if ( *((_QWORD *)&v14 + 1) > 3u )
      {
        *(_QWORD *)&v14 = 4;
        *((_BYTE *)src + 3) = 0;
LABEL_14:
        v12 = src;
        *(_WORD *)src = 17236;
        v12[2] = 95;
        set_name(a1, src, 6144);
        make_name_auto(a1);
LABEL_8:
        if ( src )
        {
          *(_QWORD *)&v14 = 0;
          qfree();
        }
        return v19 - __readfsqword(0x28u);
      }
      v10 = 0;
      v9 = 4;
      v11 = 3;
    }
    src = (void *)qvector_reserve(&src, src, v9, 1);
    v8 = src;
LABEL_12:
    *(_QWORD *)&v14 = v9;
    v8[v11] = 0;
    if ( v10 )
      memmove((char *)src + 3, src, v10);
    goto LABEL_14;
  }
  return v19 - __readfsqword(0x28u);
}

