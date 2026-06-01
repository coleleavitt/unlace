__int64 __fastcall sub_36D40(__int64 a1, __int64 *a2)
{
  __int64 v2; // r14
  bool v3; // cc
  int v4; // r15d
  __int64 v5; // rbp
  int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // rax
  void (__fastcall *hexdsp)(__int64, __int64 *, _QWORD); // rax
  __int64 (__fastcall *v10)(__int64, __int64 *, _QWORD); // rax
  unsigned int i; // eax
  __int64 (__fastcall *v12)(__int64, __int64 *, _QWORD); // rax
  unsigned int v13; // ebx
  __m128i v14; // xmm0
  bool v16; // zf
  bool v17; // sf
  bool v18; // of
  bool v19; // al
  __int64 v20; // [rsp+0h] [rbp-78h] BYREF
  __int64 v21; // [rsp+8h] [rbp-70h]
  __int64 v22; // [rsp+10h] [rbp-68h] BYREF
  __m128i v23; // [rsp+18h] [rbp-60h] BYREF
  char v24; // [rsp+28h] [rbp-50h]
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v2 = a1;
  v3 = (unsigned __int64)a2[71] <= 1;
  v4 = *((_DWORD *)a2 + 161);
  v25 = __readfsqword(0x28u);
  v5 = (__int64)a2;
  v20 = 0;
  v21 = 0;
  if ( v3 )
    goto LABEL_7;
  v6 = 1;
  v7 = 1;
  do
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(v5 + 560) + (v7 << 6);
      if ( (*(_BYTE *)(v8 + 16) & 1) != 0 || !*(_BYTE *)(v8 + 12) )
        break;
      hexdsp = (void (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(a1, a2);
      a2 = &v20;
      a1 = 205;
      hexdsp(205, &v20, (unsigned int)v6++);
      v7 = v6;
      if ( (unsigned __int64)v6 >= *(_QWORD *)(v5 + 568) )
        goto LABEL_7;
    }
    v7 = ++v6;
  }
  while ( (unsigned __int64)v6 < *(_QWORD *)(v5 + 568) );
  while ( 1 )
  {
LABEL_7:
    sub_33600((__int64)&v22, v5);
    if ( v24 )
      goto LABEL_15;
    *(_BYTE *)(v5 + 672) = 0;
    v10 = (__int64 (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(&v22, v5);
    for ( i = v10(227, &v20, 0); ; i = v12(227, &v20, v13 + 1) )
    {
      v13 = i;
      if ( (_DWORD)v21 == i )
        break;
      sub_35400((__int64)&v22, v5, i);
      if ( v24 )
        goto LABEL_15;
      v12 = (__int64 (__fastcall *)(__int64, __int64 *, _QWORD))get_hexdsp(&v22, v5);
    }
    v21 = 0;
    sub_36B50((__int64)&v22, v5, (__int64)&v20);
    if ( v24 )
    {
LABEL_15:
      *(_QWORD *)v2 = v22;
      v14 = _mm_loadu_si128(&v23);
      *(_BYTE *)(v2 + 24) = 1;
      *(__m128i *)(v2 + 8) = v14;
      goto LABEL_16;
    }
    if ( !(_BYTE)v22 )
      break;
    sub_34040(v5);
  }
  v18 = __OFSUB__(v4, *(_DWORD *)(v5 + 644));
  v16 = v4 == *(_DWORD *)(v5 + 644);
  v17 = v4 - *(_DWORD *)(v5 + 644) < 0;
  *(_BYTE *)(v5 + 672) = 0;
  v19 = !(v17 ^ v18 | v16);
  v16 = *(_DWORD *)(v5 + 632) == v4;
  *(_BYTE *)(v2 + 24) = 0;
  *(_BYTE *)v2 = !v16 || v19;
LABEL_16:
  qfree(v20);
  return v2;
}

