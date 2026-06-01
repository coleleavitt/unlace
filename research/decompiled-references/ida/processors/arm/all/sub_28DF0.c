__int64 __fastcall sub_28DF0(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebp
  int flags; // r12d
  __int64 v7; // r15
  unsigned __int16 v8; // ax
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  _BYTE *v12; // rax
  const char *v13; // r12
  _BYTE *v14; // rsi
  __int64 v15; // rbx
  size_t v16; // r13
  void *v17; // rdi
  unsigned __int64 v18; // rax
  _QWORD *func; // rax
  __int64 v20; // rdi
  _BYTE *v21; // rsi
  __int64 v22; // r12
  size_t v23; // r13
  __int64 v24; // r15
  __int64 sreg; // rax
  _BYTE *v26; // rax
  __int64 v27; // [rsp+10h] [rbp-108h] BYREF
  __int64 v28; // [rsp+18h] [rbp-100h] BYREF
  void *src; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v30; // [rsp+28h] [rbp-F0h]
  __m256i v31; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v32; // [rsp+60h] [rbp-B8h]
  __int16 v33; // [rsp+68h] [rbp-B0h]
  __int128 v34; // [rsp+70h] [rbp-A8h]
  __int64 v35; // [rsp+80h] [rbp-98h]
  __int64 v36; // [rsp+88h] [rbp-90h]
  int v37; // [rsp+90h] [rbp-88h]
  __int64 v38; // [rsp+98h] [rbp-80h]
  int v39; // [rsp+A0h] [rbp-78h]
  __int64 v40; // [rsp+A8h] [rbp-70h]
  int v41; // [rsp+B0h] [rbp-68h]
  __int64 v42; // [rsp+B8h] [rbp-60h]
  int v43; // [rsp+C0h] [rbp-58h]
  __int64 v44; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v45; // [rsp+D8h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  v4 = sub_28780(a1, (unsigned __int64 *)&v27, &v28, a2);
  if ( !(_BYTE)v4 )
    return v4;
  flags = get_flags_ex(*(_QWORD *)(a2 + 16), 4);
  if ( ((~BYTE1(flags) & 6) != 0 || (flags & 0x10000000) == 0) && (flags & 0x10000) == 0 )
  {
    v18 = *(_QWORD *)(a2 + 16);
    v32 = 0;
    v33 = 0;
    v36 = 0;
    v37 = 0;
    v35 = 0xFFFFFFFFLL;
    *(__m128i *)v31.m256i_i8 = _mm_unpacklo_epi64((__m128i)v18, (__m128i)(v18 + v28));
    v38 = 0;
    *(__m128i *)&v31.m256i_u64[2] = _mm_load_si128((const __m128i *)&xmmword_89540);
    v34 = 0;
    v39 = 0;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    add_func_ex();
    func = (_QWORD *)get_func(*(_QWORD *)(a2 + 16));
    v20 = *(_QWORD *)(a2 + 16);
    if ( func && *func == v20 )
    {
      func[2] |= 0x80uLL;
      update_func();
      v20 = *(_QWORD *)(a2 + 16);
    }
    LOWORD(flags) = get_flags_ex(v20, 4);
  }
  v7 = v27;
  src = 0;
  v30 = 0;
  v8 = get_flags_ex(v27, 4);
  v9 = v28;
  v10 = v8 & 0xC000;
  if ( v28 != 4 )
  {
    if ( v10 != 0x4000 || get_ea_name() <= 0 )
      goto LABEL_19;
    memset(&v31, 0, 24);
    if ( (flags & 0xC000) == 0x4000 && get_ea_name() > 0 )
    {
      v26 = &unk_AA4A1;
      if ( v31.m256i_i64[1] )
        v26 = (_BYTE *)v31.m256i_i64[0];
      if ( *v26 != 36 )
      {
LABEL_38:
        if ( v31.m256i_i64[0] )
        {
          v31.m256i_i64[1] = 0;
          qfree(v31.m256i_i64[0]);
        }
        goto LABEL_19;
      }
    }
    v21 = src;
    if ( (_QWORD)v30 )
    {
      v22 = v30 + 2;
      v23 = v30 - 1;
      v24 = v30 + 1;
      if ( *((_QWORD *)&v30 + 1) >= (unsigned __int64)(v30 + 2) )
        goto LABEL_35;
    }
    else
    {
      if ( *((_QWORD *)&v30 + 1) > 2u )
      {
        *(_QWORD *)&v30 = 3;
        *((_BYTE *)src + 2) = 0;
LABEL_37:
        *(_WORD *)src = 24426;
        set_name(*(_QWORD *)(a2 + 16), (__int64)src, 257);
        goto LABEL_38;
      }
      v23 = 0;
      v22 = 3;
      v24 = 2;
    }
    src = (void *)qvector_reserve((__int64)&src, (__int64)src, v22, 1);
    v21 = src;
LABEL_35:
    *(_QWORD *)&v30 = v22;
    v21[v24] = 0;
    if ( v23 )
      memmove((char *)src + 2, src, v23);
    goto LABEL_37;
  }
  if ( (flags & 0xC000) == 0x4000 )
  {
    if ( v10 == 0x4000 || get_ea_name() <= 0 )
      goto LABEL_19;
  }
  else
  {
    if ( v10 != 0x4000 || get_ea_name() <= 0 )
      goto LABEL_19;
    v7 = *(_QWORD *)(a2 + 16);
  }
  if ( v7 != -1 )
  {
    v11 = v30;
    v12 = &unk_AA4A1;
    if ( (_QWORD)v30 )
      v12 = src;
    if ( *v12 == 106 )
    {
      v17 = src;
      if ( *((_BYTE *)src + 1) == 95 )
        goto LABEL_20;
    }
    v13 = "__16";
    if ( *(_DWORD *)(a1 + 212) )
    {
      sreg = get_sreg(v7, 20);
      v11 = v30;
      if ( (unsigned __int64)(sreg - 1) >= 0xFFFFFFFFFFFFFFFELL )
        v13 = "__32";
    }
    v14 = src;
    if ( v11 )
    {
      v15 = v11 + 4;
      v16 = v11 - 1;
      v9 = v11 + 3;
      if ( *((_QWORD *)&v30 + 1) >= (unsigned __int64)(v11 + 4) )
        goto LABEL_16;
    }
    else
    {
      if ( *((_QWORD *)&v30 + 1) > 4u )
      {
        *(_QWORD *)&v30 = 5;
        *((_BYTE *)src + 4) = 0;
LABEL_42:
        *(_DWORD *)src = *(_DWORD *)v13;
        set_name(v7, (__int64)src, 6144);
        goto LABEL_19;
      }
      v16 = 0;
      v15 = 5;
    }
    src = (void *)qvector_reserve((__int64)&src, (__int64)src, v15, 1);
    v14 = src;
LABEL_16:
    *(_QWORD *)&v30 = v15;
    v14[v9] = 0;
    if ( v16 )
      memmove((char *)src + 4, src, v16);
    goto LABEL_42;
  }
LABEL_19:
  v17 = src;
LABEL_20:
  if ( v17 )
  {
    *(_QWORD *)&v30 = 0;
    qfree((__int64)v17);
  }
  return v4;
}
