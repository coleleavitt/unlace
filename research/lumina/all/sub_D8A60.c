unsigned __int64 __fastcall sub_D8A60(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __m128i v5; // xmm0
  _QWORD *v6; // rbx
  _QWORD *v7; // rbx
  __int16 v9; // ax
  __m128i v11; // [rsp+0h] [rbp-58h] BYREF
  __int64 v12; // [rsp+10h] [rbp-48h]
  __m128i v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h]
  unsigned __int64 v15; // [rsp+38h] [rbp-20h]

  v3 = a1 + 32;
  v15 = __readfsqword(0x28u);
  v12 = *(_QWORD *)(v3 - 8);
  v4 = *(_QWORD *)(v3 + 40);
  v11 = _mm_loadu_si128((const __m128i *)(v3 - 24));
  *(_QWORD *)(v3 + 40) = 0;
  v5 = _mm_loadu_si128((const __m128i *)(v3 + 24));
  *(_QWORD *)(v3 + 24) = 0;
  *(_QWORD *)(v3 + 32) = 0;
  v13 = v5;
  v14 = v4;
  sub_C9C70(v3, a2);
  v6 = (_QWORD *)v5.m128i_i64[1];
  if ( v5.m128i_i64[1] )
  {
    do
    {
      while ( 1 )
      {
        a2 = v6[2];
        if ( a2 )
        {
          if ( !*(_BYTE *)(a2 + 18) )
            break;
        }
        v6 = (_QWORD *)*v6;
        if ( !v6 )
          goto LABEL_7;
      }
      sub_D8450(0, (_QWORD *)a2);
      v6 = (_QWORD *)*v6;
    }
    while ( v6 );
  }
LABEL_7:
  sub_C9C70((__int64)&v13, a2);
  v7 = (_QWORD *)v11.m128i_i64[1];
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  for ( *(_QWORD *)(a1 + 24) = 0; v7; v7 = (_QWORD *)*v7 )
  {
    while ( 1 )
    {
      a2 = v7[2];
      if ( a2 )
      {
        if ( (*(_DWORD *)(a2 + 44))-- == 1 )
          break;
      }
      v7 = (_QWORD *)*v7;
      if ( !v7 )
        goto LABEL_13;
    }
    sub_D7FB0(0, (_QWORD *)a2);
  }
LABEL_13:
  sub_C9C70((__int64)&v11, a2);
  sub_C9C70(a1 + 80, a2);
  v9 = *(_WORD *)(a1 + 114);
  *(_QWORD *)(a1 + 104) = 0;
  if ( (v9 & 1) != 0 )
    ++*(_DWORD *)(a1 + 4);
  *(_WORD *)(a1 + 114) = v9 & 0xFFF6;
  return __readfsqword(0x28u) ^ v15;
}
