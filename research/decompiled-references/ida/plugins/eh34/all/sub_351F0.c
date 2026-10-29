__int64 __fastcall sub_351F0(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rsi
  const char *v6; // r9
  const char *v7; // r8
  __int64 v8; // rax
  __m128i v9; // xmm0
  int v11; // eax
  int v12; // eax
  bool v13; // zf
  __int64 v14; // [rsp+0h] [rbp-80h] BYREF
  __int64 v15; // [rsp+8h] [rbp-78h]
  __int64 v16; // [rsp+20h] [rbp-60h] BYREF
  __int64 v17; // [rsp+28h] [rbp-58h]
  __int64 v18; // [rsp+40h] [rbp-40h] BYREF
  __m128i v19; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-28h]

  v20 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a2 + 672) )
    ((void (__noreturn *)(void))sub_7964)();
  sub_28EA0((__int64)&v14, a2, *(_DWORD *)(a2 + 652));
  if ( !*(_BYTE *)(a2 + 672) )
    ((void (__noreturn *)(void))sub_7964)();
  sub_28EA0((__int64)&v16, a2, *(_DWORD *)(a2 + 656));
  if ( *(_DWORD *)(a2 + 636) > a3 )
  {
    v5 = *(_QWORD *)(a2 + 176);
    if ( !*(_BYTE *)(a2 + 672) )
      sub_7964(&v16, v5);
    v6 = s1;
    if ( v17 )
    {
      LODWORD(v6) = v16;
      v7 = s1;
      if ( !v15 )
        goto LABEL_7;
    }
    else
    {
      v7 = s1;
      if ( !v15 )
      {
LABEL_7:
        sub_64B50(
          (unsigned int)&v18,
          v5,
          (unsigned int)"record_split_test_results(%d, %s, %s, %d->%d): local score %d < min score %d",
          *(_DWORD *)(a2 + 668),
          (_DWORD)v7,
          (_DWORD)v6);
        v8 = v18;
        v9 = _mm_loadu_si128(&v19);
        *(_BYTE *)(a1 + 24) = 1;
        *(_QWORD *)a1 = v8;
        *(__m128i *)(a1 + 8) = v9;
        goto LABEL_8;
      }
    }
    LODWORD(v7) = v14;
    goto LABEL_7;
  }
  v11 = *(_DWORD *)(a2 + 644);
  *(_DWORD *)(a2 + 648) = a3;
  v12 = v11 - a3;
  if ( v12 > 0 )
  {
    if ( *(_DWORD *)(a2 + 772) >= v12 )
    {
      if ( *(_DWORD *)(a2 + 772) == v12 && *(_BYTE *)(a2 + 468) && !*(_BYTE *)(a2 + 672) )
        ((void (__noreturn *)(void))sub_7964)();
    }
    else
    {
      v13 = *(_BYTE *)(a2 + 672) == 0;
      *(_DWORD *)(a2 + 772) = v12;
      if ( v13 )
        ((void (__noreturn *)(void))sub_7964)();
      *(_QWORD *)(a2 + 760) = *(_QWORD *)(a2 + 652);
      *(_DWORD *)(a2 + 768) = *(_DWORD *)(a2 + 660);
    }
  }
  *(_BYTE *)(a1 + 24) = 0;
LABEL_8:
  if ( v16 )
  {
    v17 = 0;
    qfree(v16);
  }
  if ( v14 )
  {
    v15 = 0;
    qfree(v14);
  }
  return a1;
}

