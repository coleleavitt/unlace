unsigned __int64 __fastcall sub_386AC0(__int64 a1, unsigned __int64 **a2, __int64 a3, __m128 a4)
{
  __int64 v6; // rsi
  __int64 v8; // rax
  int v9; // r13d
  unsigned __int64 *v10; // rax
  unsigned int v11; // r13d
  unsigned __int64 v12; // rax
  signed int v13; // ebx
  int i; // esi
  __int64 v15; // rax
  char *v16; // r13
  unsigned __int64 v18; // r12
  __int64 *v19; // r14
  __int64 v20; // rdx
  __int64 *v21; // rdi
  __int64 *v22; // rdi
  _UNKNOWN **v23; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 **v24; // [rsp+8h] [rbp-40h]
  __int64 v25; // [rsp+10h] [rbp-38h]
  unsigned __int64 v26; // [rsp+18h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  if ( a3
    && (v6 = *(_QWORD *)(a3 + 8)) != 0
    && (v8 = callui(56, v6, 0, a3 + 48, a3 + 52, &callui, v23, v24, v25, v26)) != 0 )
  {
    v9 = *(_DWORD *)(v8 + 12);
    *(_DWORD *)(a3 + 44) = v9;
    v10 = *a2;
    v11 = v9 - *(_DWORD *)(a3 + 52);
    if ( !*a2 )
    {
LABEL_5:
      a2[1] = nullptr;
      goto LABEL_6;
    }
  }
  else
  {
    v10 = *a2;
    v11 = 0;
    if ( !*a2 )
      goto LABEL_5;
  }
  v18 = *v10;
  if ( a2[1] )
  {
    v19 = (__int64 *)(v18 & 0xFFFFFFFFFFFFFFFCLL);
    v20 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v20 & 2) != 0 )
    {
LABEL_26:
      *v10 = v18 & 3 | (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFCLL;
      a4 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)*a2, (__m128i)(unsigned __int64)*a2);
      *(__m128 *)(*a2 + 1) = a4;
      **a2 &= ~1uLL;
      **a2 |= 2u;
      goto LABEL_5;
    }
    v21 = (__int64 *)v19[1];
    if ( (*(_BYTE *)v21 & 2) != 0 )
    {
      v22 = (__int64 *)v19[2];
      if ( (*(_BYTE *)v22 & 2) != 0 )
        goto LABEL_28;
    }
    else
    {
      sub_3806A0(v21);
      v22 = (__int64 *)v19[2];
      if ( (*(_BYTE *)v22 & 2) != 0 )
        goto LABEL_22;
    }
    sub_3806A0(v22);
LABEL_22:
    v20 = *v19;
    if ( (*v19 & 2) != 0 )
    {
LABEL_23:
      if ( v18 > 3 )
        qfree();
      v10 = *a2;
      v18 = **a2;
      goto LABEL_26;
    }
LABEL_28:
    *v19 = v20 | 2;
    goto LABEL_23;
  }
  *v10 = *v10 & 3 | (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFCLL;
  a4 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)*a2, (__m128i)(unsigned __int64)*a2);
  *(__m128 *)(*a2 + 1) = a4;
  **a2 &= ~1uLL;
  **a2 |= 2u;
LABEL_6:
  v24 = a2;
  v23 = &off_4C7108;
  v12 = *(int *)(a1 + 152);
  v25 = v11;
  v13 = v12;
  if ( v12 < *(_QWORD *)(a1 + 136) )
  {
    for ( i = 0; ; i = HIDWORD(v25) )
    {
      v15 = *(_QWORD *)(a1 + 128) + 32 * v12;
      v16 = (char *)s1;
      if ( *(_QWORD *)(v15 + 8) )
        v16 = *(char **)v15;
      HIDWORD(v25) = sub_3813A0(v16, i);
      if ( !HIDWORD(v25) )
      {
        if ( (unsigned int)sub_3855F0(a1, v16, v13, (__int64)&v23, *(double *)a4.m128_u64) )
          break;
      }
      v12 = ++v13;
      if ( (unsigned __int64)v13 >= *(_QWORD *)(a1 + 136) )
        break;
    }
  }
  return v26 - __readfsqword(0x28u);
}

