unsigned __int64 __fastcall sub_279F10(
        __m128i *a1,
        unsigned __int64 a2,
        int a3,
        __int64 a4,
        _QWORD *a5,
        const __m128i *a6,
        char a7)
{
  int tinfo_size; // eax
  int v12; // r15d
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v16; // [rsp+8h] [rbp-90h]
  unsigned __int64 v17[2]; // [rsp+18h] [rbp-80h] BYREF
  const __m128i *v18; // [rsp+28h] [rbp-70h] BYREF
  __m128i v19; // [rsp+30h] [rbp-68h] BYREF
  int v20; // [rsp+40h] [rbp-58h]
  int v21; // [rsp+44h] [rbp-54h]
  __int64 v22; // [rsp+48h] [rbp-50h]
  int v23; // [rsp+50h] [rbp-48h]
  unsigned __int64 v24; // [rsp+58h] [rbp-40h]

  v17[0] = a2;
  v24 = __readfsqword(0x28u);
  set_tinfo_property();
  if ( (get_tinfo_property() & 0xF) != 0xC )
  {
    if ( (unsigned __int8)*a5 && ((unsigned int)verify_tinfo() || (*(_BYTE *)a5 & 0xF) == 0xD && (*a5 & 0x100) == 0) )
    {
      v12 = a4;
    }
    else
    {
      tinfo_size = get_tinfo_size();
      v12 = a4 + tinfo_size;
      if ( !a4 && !a3 || (a3 >= tinfo_size || !a3) && (tinfo_size <= 0 || !(a4 % tinfo_size)) )
      {
        v19.m128i_i64[0] = (__int64)v17;
        v13 = sub_279CA0(a1, v17, (__int64 **)&v19);
        v21 = a4;
        v20 = a3;
        v16 = v13 + 24;
        v22 = 0;
        copy_tinfo_t();
        v23 = get_tinfo_size();
        if ( a6 )
          v19 = _mm_loadu_si128(a6);
        else
          v19.m128i_i32[2] = -1;
        v18 = &v19;
        sub_276390((__m128i *)(v16 + 8), (__int64)&v19, &v18);
        if ( a7 )
          *(_BYTE *)(v16 + 28) = 1;
        clear_tinfo_t();
      }
    }
    if ( v12 )
    {
      v19.m128i_i64[0] = (__int64)v17;
      v14 = sub_279CA0(a1, v17, (__int64 **)&v19);
      if ( *(_DWORD *)(v14 + 48) < v12 )
        *(_DWORD *)(v14 + 48) = v12;
    }
  }
  return v24 - __readfsqword(0x28u);
}

