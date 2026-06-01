__int64 __fastcall sub_28DF0(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebp
  int flags; // r12d
  unsigned __int64 v6; // r15
  unsigned __int16 v7; // ax
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  _BYTE *v11; // rax
  const char *v12; // r12
  _BYTE *v13; // rsi
  __int64 v14; // rbx
  size_t v15; // r13
  void *v16; // rdi
  unsigned __int64 v17; // rax
  _QWORD *func; // rax
  _BYTE *v19; // rsi
  __int64 v20; // r12
  size_t v21; // r13
  __int64 v22; // r15
  __int64 sreg; // rax
  _BYTE *v24; // rax
  unsigned __int64 v25; // [rsp+10h] [rbp-108h] BYREF
  __int64 v26; // [rsp+18h] [rbp-100h] BYREF
  void *src; // [rsp+20h] [rbp-F8h]
  __int128 v28; // [rsp+28h] [rbp-F0h]
  __m256i v29; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v30; // [rsp+60h] [rbp-B8h]
  __int16 v31; // [rsp+68h] [rbp-B0h]
  __int128 v32; // [rsp+70h] [rbp-A8h]
  __int64 v33; // [rsp+80h] [rbp-98h]
  __int64 v34; // [rsp+88h] [rbp-90h]
  int v35; // [rsp+90h] [rbp-88h]
  __int64 v36; // [rsp+98h] [rbp-80h]
  int v37; // [rsp+A0h] [rbp-78h]
  __int64 v38; // [rsp+A8h] [rbp-70h]
  int v39; // [rsp+B0h] [rbp-68h]
  __int64 v40; // [rsp+B8h] [rbp-60h]
  int v41; // [rsp+C0h] [rbp-58h]
  __int64 v42; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v43; // [rsp+D8h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v3 = sub_28780(a1, &v25, &v26, a2);
  if ( !(_BYTE)v3 )
    return v3;
  flags = get_flags_ex();
  if ( ((~BYTE1(flags) & 6) != 0 || (flags & 0x10000000) == 0) && (flags & 0x10000) == 0 )
  {
    v17 = *(_QWORD *)(a2 + 16);
    v30 = 0;
    v31 = 0;
    v34 = 0;
    v35 = 0;
    v33 = 0xFFFFFFFFLL;
    *(__m128i *)v29.m256i_i8 = _mm_unpacklo_epi64((__m128i)v17, (__m128i)(v17 + v26));
    v36 = 0;
    *(__m128i *)&v29.m256i_u64[2] = _mm_load_si128((const __m128i *)&xmmword_89540);
    v32 = 0;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    add_func_ex();
    func = (_QWORD *)get_func();
    if ( func && *func == *(_QWORD *)(a2 + 16) )
    {
      func[2] |= 0x80uLL;
      update_func();
    }
    LOWORD(flags) = get_flags_ex();
  }
  v6 = v25;
  src = nullptr;
  v28 = 0;
  v7 = get_flags_ex();
  v8 = v26;
  v9 = v7 & 0xC000;
  if ( v26 != 4 )
  {
    if ( v9 != 0x4000 || get_ea_name() <= 0 )
      goto LABEL_19;
    memset(&v29, 0, 24);
    if ( (flags & 0xC000) == 0x4000 && get_ea_name() > 0 )
    {
      v24 = &unk_AA4A1;
      if ( v29.m256i_i64[1] )
        v24 = (_BYTE *)v29.m256i_i64[0];
      if ( *v24 != 36 )
      {
LABEL_38:
        if ( v29.m256i_i64[0] )
        {
          v29.m256i_i64[1] = 0;
          qfree();
        }
        goto LABEL_19;
      }
    }
    v19 = src;
    if ( (_QWORD)v28 )
    {
      v20 = v28 + 2;
      v21 = v28 - 1;
      v22 = v28 + 1;
      if ( *((_QWORD *)&v28 + 1) >= (unsigned __int64)(v28 + 2) )
        goto LABEL_35;
    }
    else
    {
      if ( *((_QWORD *)&v28 + 1) > 2u )
      {
        *(_QWORD *)&v28 = 3;
        *((_BYTE *)src + 2) = 0;
LABEL_37:
        *(_WORD *)src = 24426;
        set_name();
        goto LABEL_38;
      }
      v21 = 0;
      v20 = 3;
      v22 = 2;
    }
    src = (void *)qvector_reserve();
    v19 = src;
LABEL_35:
    *(_QWORD *)&v28 = v20;
    v19[v22] = 0;
    if ( v21 )
      memmove((char *)src + 2, src, v21);
    goto LABEL_37;
  }
  if ( (flags & 0xC000) == 0x4000 )
  {
    if ( v9 == 0x4000 || get_ea_name() <= 0 )
      goto LABEL_19;
  }
  else
  {
    if ( v9 != 0x4000 || get_ea_name() <= 0 )
      goto LABEL_19;
    v6 = *(_QWORD *)(a2 + 16);
  }
  if ( v6 != -1 )
  {
    v10 = v28;
    v11 = &unk_AA4A1;
    if ( (_QWORD)v28 )
      v11 = src;
    if ( *v11 == 106 )
    {
      v16 = src;
      if ( *((_BYTE *)src + 1) == 95 )
        goto LABEL_20;
    }
    v12 = "__16";
    if ( *(_DWORD *)(a1 + 212) )
    {
      sreg = get_sreg();
      v10 = v28;
      if ( (unsigned __int64)(sreg - 1) >= 0xFFFFFFFFFFFFFFFELL )
        v12 = "__32";
    }
    v13 = src;
    if ( v10 )
    {
      v14 = v10 + 4;
      v15 = v10 - 1;
      v8 = v10 + 3;
      if ( *((_QWORD *)&v28 + 1) >= (unsigned __int64)(v10 + 4) )
        goto LABEL_16;
    }
    else
    {
      if ( *((_QWORD *)&v28 + 1) > 4u )
      {
        *(_QWORD *)&v28 = 5;
        *((_BYTE *)src + 4) = 0;
LABEL_42:
        *(_DWORD *)src = *(_DWORD *)v12;
        set_name();
        goto LABEL_19;
      }
      v15 = 0;
      v14 = 5;
    }
    src = (void *)qvector_reserve();
    v13 = src;
LABEL_16:
    *(_QWORD *)&v28 = v14;
    v13[v8] = 0;
    if ( v15 )
      memmove((char *)src + 4, src, v15);
    goto LABEL_42;
  }
LABEL_19:
  v16 = src;
LABEL_20:
  if ( v16 )
  {
    *(_QWORD *)&v28 = 0;
    qfree();
  }
  return v3;
}

