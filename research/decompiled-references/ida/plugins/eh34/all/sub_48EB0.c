__int64 __fastcall sub_48EB0(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v6; // rbp
  __int64 v7; // rax
  __m128i v8; // xmm0
  unsigned __int64 v9; // rdi
  unsigned __int64 v11; // [rsp+0h] [rbp-88h] BYREF
  __int128 v12; // [rsp+8h] [rbp-80h]
  __int64 v13; // [rsp+20h] [rbp-68h] BYREF
  __m128i v14; // [rsp+28h] [rbp-60h] BYREF
  char v15; // [rsp+38h] [rbp-50h]
  unsigned __int64 v16; // [rsp+48h] [rbp-40h]

  v3 = a3[1];
  v4 = *a3;
  v16 = __readfsqword(0x28u);
  v12 = 0;
  v11 = 0;
  v6 = v4 + 80 * v3;
  if ( v6 == v4 )
  {
    *(_BYTE *)(a1 + 24) = 0;
  }
  else
  {
    do
    {
      sub_48380((__int64)&v13, a2, v4, &v11);
      if ( v15 )
      {
        v7 = v13;
        v8 = _mm_loadu_si128(&v14);
        *(_BYTE *)(a1 + 24) = 1;
        v9 = v11;
        *(_QWORD *)a1 = v7;
        *(__m128i *)(a1 + 8) = v8;
        goto LABEL_6;
      }
      v4 += 80;
    }
    while ( v6 != v4 );
    *(_BYTE *)(a1 + 24) = 0;
    v9 = v11;
LABEL_6:
    if ( v9 )
    {
      *(_QWORD *)&v12 = 0;
      qfree(v9);
    }
  }
  return a1;
}

