__int64 __fastcall sub_13BBE0(__int64 a1, char a2)
{
  unsigned int v2; // ebp
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  __int64 i; // rbx
  unsigned int v8; // eax
  int v9; // edx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r12
  _QWORD *v13; // rdi
  _QWORD *v14; // rdi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r12
  _QWORD *v18; // rdi
  _QWORD *v19; // rdi
  _BYTE v20[16]; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 v21; // [rsp+10h] [rbp-78h]
  __int64 v22; // [rsp+18h] [rbp-70h]
  unsigned __int64 v23; // [rsp+30h] [rbp-58h]
  __int64 v24; // [rsp+38h] [rbp-50h]
  unsigned __int64 v25; // [rsp+58h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 784) )
    return 0;
  if ( (*(_BYTE *)(a1 + 4) & 8) != 0 )
    return 0;
  v2 = ((int)*(unsigned __int8 *)(a1 + 757) >> 4) & 1;
  if ( v2 )
    return 0;
  sub_1DED60(v20, a1);
  if ( (unsigned __int8)sub_30D6A0(*(_QWORD *)(a1 + 784), v20) )
  {
    *(_DWORD *)(a1 + 4) |= 8u;
    if ( a2 )
    {
      for ( i = *(_QWORD *)(a1 + 520); i; i = *(_QWORD *)(i + 8) )
      {
        if ( *(_QWORD *)(i + 48) && *(char *)(i + 25) < 0 )
        {
          v8 = sub_155DC0(i, *(_QWORD *)(i + 56), 0);
          v9 = *(_DWORD *)(i + 24);
          if ( (_BYTE)v8 )
          {
            BYTE1(v9) &= ~2u;
            v2 = v8;
            LOBYTE(v9) = v9 | 0x80;
          }
          BYTE1(v9) &= ~0x80u;
          *(_DWORD *)(i + 24) = v9;
        }
      }
    }
  }
  else
  {
    sub_32C190(a1, *(_QWORD *)(a1 + 40), 44, v4, v5, v6);
  }
  v10 = v23;
  if ( v23 )
  {
    v11 = *(_QWORD *)v23;
    if ( !v24 )
    {
      *(_QWORD *)v23 = *(_QWORD *)v23 & 3LL | v23 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v23 + 8) = _mm_unpacklo_epi64((__m128i)v23, (__m128i)v23);
      *(_QWORD *)v23 &= ~1uLL;
      *(_QWORD *)v23 |= 2uLL;
LABEL_26:
      if ( v23 )
        qfree();
      goto LABEL_28;
    }
    v12 = v11 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v11 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_25:
      *(_QWORD *)v10 = v11 & 3 | v10 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v23 + 8) = _mm_unpacklo_epi64((__m128i)v23, (__m128i)v23);
      *(_QWORD *)v23 &= ~1uLL;
      *(_QWORD *)v23 |= 2uLL;
      v24 = 0;
      goto LABEL_26;
    }
    v13 = *(_QWORD **)(v12 + 8);
    if ( (*(_BYTE *)v13 & 2) != 0 )
    {
      v14 = *(_QWORD **)(v12 + 16);
      if ( (*(_BYTE *)v14 & 2) != 0 )
        goto LABEL_47;
    }
    else
    {
      sub_131E40(v13);
      v14 = *(_QWORD **)(v12 + 16);
      if ( (*(_BYTE *)v14 & 2) != 0 )
        goto LABEL_21;
    }
    sub_131E40(v14);
LABEL_21:
    if ( (*(_BYTE *)v12 & 2) != 0 )
    {
LABEL_22:
      if ( v11 > 3 )
        qfree();
      v10 = v23;
      v11 = *(_QWORD *)v23;
      goto LABEL_25;
    }
LABEL_47:
    sub_30DE00(v12 + 40);
    *(_QWORD *)v12 |= 2uLL;
    goto LABEL_22;
  }
LABEL_28:
  v15 = v21;
  if ( !v21 )
    return v2;
  v16 = *(_QWORD *)v21;
  if ( v22 )
  {
    v17 = v16 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v16 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_38:
      *(_QWORD *)v15 = v16 & 3 | v15 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v21 + 8) = _mm_unpacklo_epi64((__m128i)v21, (__m128i)v21);
      *(_QWORD *)v21 &= ~1uLL;
      *(_QWORD *)v21 |= 2uLL;
      v22 = 0;
      goto LABEL_39;
    }
    v18 = *(_QWORD **)(v17 + 8);
    if ( (*(_BYTE *)v18 & 2) != 0 )
    {
      v19 = *(_QWORD **)(v17 + 16);
      if ( (*(_BYTE *)v19 & 2) != 0 )
        goto LABEL_45;
    }
    else
    {
      sub_131E40(v18);
      v19 = *(_QWORD **)(v17 + 16);
      if ( (*(_BYTE *)v19 & 2) != 0 )
        goto LABEL_34;
    }
    sub_131E40(v19);
LABEL_34:
    if ( (*(_BYTE *)v17 & 2) != 0 )
    {
LABEL_35:
      if ( v16 > 3 )
        qfree();
      v15 = v21;
      v16 = *(_QWORD *)v21;
      goto LABEL_38;
    }
LABEL_45:
    sub_30DE00(v17 + 40);
    *(_QWORD *)v17 |= 2uLL;
    goto LABEL_35;
  }
  *(_QWORD *)v21 = *(_QWORD *)v21 & 3LL | v21 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(v21 + 8) = _mm_unpacklo_epi64((__m128i)v21, (__m128i)v21);
  *(_QWORD *)v21 &= ~1uLL;
  *(_QWORD *)v21 |= 2uLL;
LABEL_39:
  if ( v21 )
    qfree();
  return v2;
}

