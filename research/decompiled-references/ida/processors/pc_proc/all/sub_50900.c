__int64 __fastcall sub_50900(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 *a3,
        _DWORD a4,
        _DWORD a5,
        _DWORD a6,
        double a7,
        __m128i a8,
        __m128i a9,
        char a10)
{
  unsigned int v10; // r15d
  unsigned __int64 *v13; // rax
  __int64 v14; // rax
  char v15; // al
  unsigned __int8 v16; // al
  __int64 v17; // rdi
  unsigned __int8 v18; // [rsp+Fh] [rbp-1F9h]
  unsigned __int64 v19; // [rsp+10h] [rbp-1F8h]
  unsigned __int64 v21; // [rsp+28h] [rbp-1E0h] BYREF
  __int64 v22; // [rsp+30h] [rbp-1D8h]
  int v23; // [rsp+38h] [rbp-1D0h]
  __int128 v24; // [rsp+40h] [rbp-1C8h]
  __int64 v25; // [rsp+50h] [rbp-1B8h]
  __int128 v26; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v27; // [rsp+70h] [rbp-198h]
  __int64 v28; // [rsp+78h] [rbp-190h]
  __int64 v29; // [rsp+80h] [rbp-188h]
  _BYTE v30[46]; // [rsp+88h] [rbp-180h] BYREF
  unsigned __int16 v31; // [rsp+B6h] [rbp-152h]
  unsigned __int64 v32; // [rsp+1C8h] [rbp-40h] BYREF

  v10 = *(unsigned __int8 *)(a1 + 5352);
  v32 = __readfsqword(0x28u);
  if ( (_BYTE)v10 )
  {
    return 0;
  }
  else
  {
    *(_BYTE *)(a1 + 5352) = 1;
    v26 = -1;
    v13 = (unsigned __int64 *)v30;
    v27 = -1;
    v28 = 0;
    v29 = 0;
    do
    {
      *(_WORD *)v13 = 0;
      v13 += 5;
      *((_WORD *)v13 - 19) = 0;
      *((_WORD *)v13 - 18) = 0;
      *((_DWORD *)v13 - 2) = 0;
      *((_WORD *)v13 - 17) = 0;
      *((_OWORD *)v13 - 2) = 0;
      *(v13 - 2) = 0;
    }
    while ( v13 != &v32 );
    v22 = 0;
    v14 = -1;
    v23 = -1;
    v24 = 0;
    if ( a2 )
      v14 = *a2;
    v25 = v14;
    v15 = func_tail_iterator_set();
    v18 = 0;
    v19 = 0;
    while ( v15 )
    {
      decode_insn();
      if ( (unsigned __int8)sub_6C2B0(&v26, 1) && (unsigned __int8)sub_4E570((__int64)v30, (__int64)&a10) )
      {
        if ( v30[41] != 1 )
          goto LABEL_18;
        v16 = sub_50830(a1, &v21, nullptr, &v26, v31, 0.0, a8, a9);
        if ( v16 )
        {
          if ( v18 )
          {
            if ( v19 != v21 )
              goto LABEL_18;
          }
          else
          {
            v18 = v16;
            v19 = v21;
          }
        }
      }
      v15 = func_item_iterator_next();
    }
    LOBYTE(v10) = v18 & (a3 != nullptr);
    if ( (_BYTE)v10 )
      *a3 = v19;
    else
      v10 = v18;
LABEL_18:
    v17 = v22;
    *(_BYTE *)(a1 + 5352) = 0;
    if ( v17 )
      lock_func_range();
  }
  return v10;
}

