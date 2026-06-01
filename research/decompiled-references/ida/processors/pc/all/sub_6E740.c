unsigned __int64 __fastcall sub_6E740(_QWORD *a1, unsigned __int64 *a2, char a3)
{
  unsigned __int64 v3; // r12
  char *v5; // rax
  int v6; // r13d
  int i; // ebx
  unsigned __int64 v8; // r12
  unsigned __int8 byte; // al
  __int64 first_cref_from; // rbp
  unsigned __int64 v12; // [rsp+10h] [rbp-648h] BYREF
  __m128i si128; // [rsp+18h] [rbp-640h]
  __m128i v14; // [rsp+28h] [rbp-630h]
  __int16 v15; // [rsp+38h] [rbp-620h]
  __int128 v16; // [rsp+40h] [rbp-618h]
  __int64 v17; // [rsp+50h] [rbp-608h]
  __int64 v18; // [rsp+58h] [rbp-600h]
  int v19; // [rsp+60h] [rbp-5F8h]
  __int64 v20; // [rsp+68h] [rbp-5F0h]
  int v21; // [rsp+70h] [rbp-5E8h]
  __int64 v22; // [rsp+78h] [rbp-5E0h]
  int v23; // [rsp+80h] [rbp-5D8h]
  __int64 v24; // [rsp+88h] [rbp-5D0h]
  int v25; // [rsp+90h] [rbp-5C8h]
  __int64 v26; // [rsp+98h] [rbp-5C0h]
  __int128 v27; // [rsp+A0h] [rbp-5B8h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-5A8h]
  __int64 v29; // [rsp+B8h] [rbp-5A0h]
  __int64 v30; // [rsp+C0h] [rbp-598h]
  char v31; // [rsp+C8h] [rbp-590h] BYREF
  char v32; // [rsp+208h] [rbp-450h] BYREF
  unsigned __int64 v33; // [rsp+618h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  v3 = *a2;
  if ( (get_flags_ex() & 0xC000) == 0x4000 )
    return v33 - __readfsqword(0x28u);
  v28 = -1;
  v5 = &v31;
  v29 = 0;
  v30 = 0;
  v27 = -1;
  do
  {
    *(_WORD *)v5 = 0;
    v5 += 40;
    *((_WORD *)v5 - 19) = 0;
    *((_WORD *)v5 - 18) = 0;
    *((_DWORD *)v5 - 2) = 0;
    *((_WORD *)v5 - 17) = 0;
    *((_OWORD *)v5 - 2) = 0;
    *((_QWORD *)v5 - 2) = 0;
  }
  while ( v5 != &v32 );
  decode_insn();
  if ( (v29 & 0x1000000000LL) != 0 )
  {
    if ( !(unsigned __int8)equal_bytes() && !(unsigned __int8)equal_bytes() )
      return v33 - __readfsqword(0x28u);
    goto LABEL_7;
  }
  if ( (unsigned __int8)equal_bytes()
    || (unsigned __int8)equal_bytes()
    || (unsigned __int8)equal_bytes()
    || (unsigned __int8)equal_bytes() )
  {
LABEL_7:
    v6 = 0;
    goto LABEL_8;
  }
  if ( (unsigned __int8)equal_bytes() )
  {
    byte = get_byte();
    v6 = byte + 1;
    if ( byte )
    {
      if ( ((unsigned __int8)v6 & byte) == 0 )
      {
        if ( a3 )
        {
          sub_6A760(*a2, &unk_159BB0, 0.0);
          return v33 - __readfsqword(0x28u);
        }
        first_cref_from = get_first_cref_from();
        if ( first_cref_from != -1 )
        {
          if ( (int)decode_insn() > 0 && (unsigned int)sub_23DD0(a1, (__int64)&v27, first_cref_from, 0) != 4 )
          {
            sub_6A760(first_cref_from, &v27, 0.0);
            sub_6A760(v3, &v27, 0.0);
            return v33 - __readfsqword(0x28u);
          }
LABEL_8:
          for ( i = 2; i != 1011; ++i )
          {
            qsnprintf();
            if ( v6 )
              qsnprintf();
            if ( (unsigned __int8)set_name() )
              break;
          }
          if ( !a3 )
            set_visible_func();
          v18 = 0;
          v15 = 0;
          si128 = _mm_load_si128((const __m128i *)&xmmword_95170);
          v17 = 0xFFFFFFFFLL;
          v14 = _mm_load_si128((const __m128i *)&xmmword_950A0);
          v19 = 0;
          v20 = 0;
          v21 = 0;
          v22 = 0;
          v23 = 0;
          v24 = 0;
          v25 = 0;
          v26 = 0;
          v16 = 0;
          if ( v6 == 16 )
          {
            v8 = v3 + 22;
          }
          else
          {
            if ( v6 != 8 || v3 <= 0x15 )
              return v33 - __readfsqword(0x28u);
            v8 = v3 - 22;
          }
          v12 = v8;
          sub_6E740(a1, &v12, 1);
        }
      }
    }
  }
  return v33 - __readfsqword(0x28u);
}
