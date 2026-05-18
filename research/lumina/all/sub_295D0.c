__int64 __fastcall sub_295D0(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  const char *v12; // rsi
  __int64 result; // rax
  __int64 v14; // rdx
  __m128i v15; // xmm0
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  __int64 v19; // rdi
  _QWORD *v20; // [rsp+0h] [rbp-A8h]
  unsigned __int64 v23; // [rsp+18h] [rbp-90h]
  char v24[8]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v25; // [rsp+28h] [rbp-80h]
  __int64 v26; // [rsp+38h] [rbp-70h]
  char v27[8]; // [rsp+40h] [rbp-68h] BYREF
  __int128 v28; // [rsp+48h] [rbp-60h]
  __int64 v29; // [rsp+58h] [rbp-50h]
  unsigned __int64 v30; // [rsp+68h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v4 = a1[4];
  if ( v4 <= 1 )
  {
    if ( !unk_2439A0 )
      sub_198E10(1712);
    BUG();
  }
  v5 = a1[7];
  v6 = v4 - 1;
  v20 = a1 + 6;
  if ( v6 != v5 )
  {
    v24[0] = 2;
    v26 = 0;
    v25 = 0;
    if ( v6 < v5 )
    {
      v16 = v6;
      do
      {
        v17 = v16++;
        sub_176520(a1[6] + 32 * v17);
      }
      while ( v5 != v16 );
    }
    else
    {
      v9 = a1[6];
      v10 = a1[8];
      if ( (unsigned __int64)v24 >= v9 && (unsigned __int64)v24 < v9 + 32 * v10 )
      {
        v27[0] = 2;
        v28 = 0;
        v29 = 0;
        sub_176730(v27, v24);
        if ( a1[8] < v6 )
          a1[6] = sub_1987B0(v20, a1[6], v6, 32);
        v18 = a1[7];
        if ( v18 < v6 )
        {
          do
          {
            v23 = v18;
            v19 = a1[6] + 32 * v18;
            *(_BYTE *)v19 = 2;
            *(_QWORD *)(v19 + 24) = 0;
            *(_OWORD *)(v19 + 8) = 0;
            sub_176730(v19, v27);
            v18 = v23 + 1;
          }
          while ( v6 != v23 + 1 );
        }
        a1[7] = v6;
        sub_176520(v27);
LABEL_10:
        sub_176520(v24);
        v12 = s1;
        if ( !a1[4] )
          goto LABEL_11;
        goto LABEL_17;
      }
      if ( v10 < v6 )
      {
        a1[6] = sub_1987B0(v20, v9, v6, 32);
        v5 = a1[7];
      }
      if ( v5 < v6 )
      {
        do
        {
          v11 = a1[6] + 32 * v5;
          *(_BYTE *)v11 = 2;
          *(_QWORD *)(v11 + 24) = 0;
          *(_OWORD *)(v11 + 8) = 0;
          sub_176730(v11, v24);
          ++v5;
        }
        while ( v6 != v5 );
      }
    }
    a1[7] = v6;
    goto LABEL_10;
  }
LABEL_17:
  v12 = (const char *)a1[3];
LABEL_11:
  result = unk_241E78(a3, v12, v27, v20, a4);
  if ( (_BYTE)result )
  {
    v14 = *a2;
    v15 = _mm_loadu_si128((const __m128i *)(a2 + 1));
    *a2 = a1[6];
    a2[1] = a1[7];
    a2[2] = a1[8];
    a1[6] = v14;
    *(__m128i *)(a1 + 7) = v15;
  }
  return result;
}
