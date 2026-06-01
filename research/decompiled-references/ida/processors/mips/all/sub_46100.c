__int64 __fastcall sub_46100(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  __int64 v7; // r15
  unsigned __int64 *v8; // rax
  char v13; // [rsp+3Dh] [rbp-1CBh] BYREF
  unsigned __int16 v14; // [rsp+3Eh] [rbp-1CAh] BYREF
  _QWORD v15[4]; // [rsp+40h] [rbp-1C8h] BYREF
  __m128i v16; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v17; // [rsp+70h] [rbp-198h]
  __int64 v18; // [rsp+78h] [rbp-190h]
  __int64 v19; // [rsp+80h] [rbp-188h]
  char v20; // [rsp+88h] [rbp-180h] BYREF
  unsigned __int64 v21; // [rsp+1C8h] [rbp-40h] BYREF

  v21 = __readfsqword(0x28u);
  *a2 = 0;
  if ( !(unsigned __int8)xrefblk_t_first_to(v15, *(_QWORD *)(a5 + 16), 5) )
    return 1;
  while ( 1 )
  {
    v7 = v15[0];
    *a2 = 1;
    if ( sub_1F000(a1, &v13, v7, (__int16 *)&v14) )
      v7 += v14;
    v8 = (unsigned __int64 *)&v20;
    v17 = -1;
    v18 = 0;
    v19 = 0;
    v16 = (__m128i)-1LL;
    do
    {
      *(_WORD *)v8 = 0;
      v8 += 5;
      *((_WORD *)v8 - 19) = 0;
      *((_WORD *)v8 - 18) = 0;
      *((_DWORD *)v8 - 2) = 0;
      *((_WORD *)v8 - 17) = 0;
      *((_OWORD *)v8 - 2) = 0;
      *(v8 - 2) = 0;
    }
    while ( &v21 != v8 );
    if ( !(unsigned int)sub_271A0(a1, 0, &v16, v7, 0, 0.0) || !sub_45B00(a1, a3, a4, &v16, a6, a7) )
      break;
    if ( !(unsigned __int8)xrefblk_t_next_to(v15) )
      return 1;
  }
  return 0;
}

