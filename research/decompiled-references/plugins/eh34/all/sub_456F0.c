__int64 __fastcall sub_456F0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rbp
  unsigned __int8 **v9; // rdx
  __m128i v10; // xmm0
  __int64 v12; // [rsp+0h] [rbp-58h] BYREF
  __m128i v13; // [rsp+8h] [rbp-50h] BYREF
  char v14; // [rsp+18h] [rbp-40h]
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v6 = a2[3];
  v15 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(v6 + 24);
  v8 = v6 + 8;
  if ( v8 == v7 )
  {
LABEL_8:
    *(_BYTE *)(a1 + 24) = 0;
    return a1;
  }
  while ( 1 )
  {
    v9 = (unsigned __int8 **)(v7 + 40);
    if ( !*(_BYTE *)(v7 + 56) )
      break;
    sub_448C0((__int64)&v12, a2, v9, a4, a5, a6);
    if ( v14 )
      goto LABEL_7;
LABEL_4:
    v7 = std::_Rb_tree_increment(v7);
    if ( v8 == v7 )
      goto LABEL_8;
  }
  sub_45060((__int64)&v12, a2, (__int64 *)v9, a4, a5, a6);
  if ( !v14 )
    goto LABEL_4;
LABEL_7:
  *(_QWORD *)a1 = v12;
  v10 = _mm_loadu_si128(&v13);
  *(_BYTE *)(a1 + 24) = 1;
  *(__m128i *)(a1 + 8) = v10;
  return a1;
}
