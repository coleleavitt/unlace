__int64 __fastcall sub_21900(__int64 a1, __int64 *a2, int *a3, __int64 a4)
{
  int v4; // r13d
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // r8
  bool v12; // zf
  __int64 v13; // rax
  _BYTE *v14; // rdx
  char v15; // al
  _BYTE *v16; // rdi
  int v17; // eax
  __int64 v18; // r14
  __int64 fchunk; // r15
  __int64 v20; // rbx
  __int64 next_fchunk; // rax
  int v22; // [rsp+18h] [rbp-100h]
  int v23; // [rsp+1Ch] [rbp-FCh]
  _BYTE *v24; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v25; // [rsp+28h] [rbp-F0h]
  __int128 v26; // [rsp+40h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+50h] [rbp-C8h]
  __int64 v28; // [rsp+60h] [rbp-B8h]
  __int64 v29; // [rsp+68h] [rbp-B0h]
  __int128 v30; // [rsp+70h] [rbp-A8h]
  __int64 v31; // [rsp+80h] [rbp-98h]
  __int64 v32; // [rsp+88h] [rbp-90h]
  __int64 v33; // [rsp+90h] [rbp-88h]
  __int64 v34; // [rsp+98h] [rbp-80h]
  __int64 v35; // [rsp+A0h] [rbp-78h]
  __int64 v36; // [rsp+A8h] [rbp-70h]
  __int64 v37; // [rsp+B0h] [rbp-68h]
  __int64 v38; // [rsp+B8h] [rbp-60h]
  __int64 v39; // [rsp+C0h] [rbp-58h]
  __int64 v40; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v41; // [rsp+D8h] [rbp-40h]

  v4 = *(unsigned __int16 *)(a4 + 24);
  v41 = __readfsqword(0x28u);
  if ( (unsigned __int16)(v4 - 43) > 0x24u )
    return 0;
  v6 = 0x1000000005LL;
  if ( !_bittest64(&v6, (unsigned int)(v4 - 43)) )
    return 0;
  if ( *(_BYTE *)(a4 + 41) != 7 )
    return 0;
  v22 = -1;
  if ( (_WORD)v4 == 45 )
  {
    v17 = *(unsigned __int16 *)(a4 + 86);
    v22 = v17;
    if ( v17 != 31 && v17 != 10 )
      return 0;
  }
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
  v10 = *(_QWORD *)(a4 + 56) + 16LL * *(_QWORD *)a4;
  if ( v10 != v9 )
  {
    v11 = v10 & v9;
    v12 = v10 == -1;
    v13 = -1;
    if ( !v12 )
      v13 = v11;
    v9 = v13;
  }
  v24 = nullptr;
  v25 = 0;
  if ( get_ea_name(&v24, v9, 512, 0) <= 0 )
    goto LABEL_15;
  v14 = &unk_255D0;
  if ( (_QWORD)v25 )
    v14 = v24;
  if ( !(unsigned __int8)cleanup_name(&v24, v9, v14, 1) || (v23 = sub_1F3A0(a2, a3, v24)) == 0 )
  {
LABEL_15:
    v28 = 0;
    v31 = 0xFFFFFFFFLL;
    v29 = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    v26 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23C80);
    v30 = 0;
    v15 = sub_21780((__int64)&v24, (__int64)&v26, v9, (_WORD)v4 == 79);
    v16 = v24;
    if ( v15 )
    {
      v23 = sub_1F3A0(a2, a3, v24);
      if ( v23 )
      {
        do
        {
          v18 = v26;
          fchunk = get_fchunk(v26);
          if ( fchunk || (next_fchunk = get_next_fchunk(v18), (fchunk = next_fchunk) != 0) )
          {
            while ( *(_QWORD *)fchunk < *((_QWORD *)&v26 + 1) )
            {
              v20 = *(_QWORD *)fchunk;
              if ( *(char *)(fchunk + 17) < 0 )
                v20 = *(_QWORD *)(fchunk + 24);
              fchunk = get_next_fchunk(*(_QWORD *)fchunk);
              if ( (get_flags_ex(v20, 4) & 0xC000) == 0x8000 )
              {
                del_func(v20);
                if ( !fchunk )
                  break;
              }
              else if ( !fchunk )
              {
                break;
              }
            }
          }
          set_name(v18, v24, 18432);
          si128.m128i_i64[0] |= 0x84uLL;
          create_insn(v18, 0);
          add_func_ex(&v26);
        }
        while ( (unsigned __int8)sub_21780((__int64)&v24, (__int64)&v26, *((__int64 *)&v26 + 1), (_WORD)v4 == 79) );
        goto LABEL_31;
      }
      v16 = v24;
      if ( !v24 )
        return 0;
    }
    else if ( !v24 )
    {
      return 0;
    }
    *(_QWORD *)&v25 = 0;
    qfree(v16);
    return 0;
  }
LABEL_31:
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24);
  }
  if ( v23 != 5 )
  {
    if ( *(_WORD *)(a4 + 24) != 45 || v22 == 31 )
      return 6;
    return 0;
  }
  if ( *(_WORD *)(a4 + 24) == 43 )
    return 0;
  if ( (~*(_BYTE *)a3 & 9) == 0 )
  {
    result = 5;
    if ( (_WORD)v4 == 79 )
      return result;
    return 0;
  }
  if ( (_WORD)v4 == 79 )
    return 0;
  result = 5;
  if ( v22 != 10 )
    return 0;
  return result;
}

