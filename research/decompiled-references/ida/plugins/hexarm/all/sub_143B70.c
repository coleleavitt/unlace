__int64 __fastcall sub_143B70(__int64 *a1, __int128 *a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  _DWORD *v8; // r14
  char v9; // r12
  int v10; // ebp
  int v11; // eax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  int v14; // eax
  __int64 *v16; // r12
  __int64 v17; // rdx
  __int64 *v18; // rdi
  __int64 *v19; // rdi
  __int128 v20; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v21; // [rsp+10h] [rbp-58h]
  __int64 v22; // [rsp+18h] [rbp-50h]
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v7 = a1[65];
  v23 = __readfsqword(0x28u);
  v8 = (_DWORD *)a3;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  if ( !v7 )
  {
    v10 = 0;
    goto LABEL_14;
  }
  v9 = (char)a2;
  v10 = 0;
  do
  {
    if ( !v9 )
    {
      while ( (*(_DWORD *)(v7 + 24) & 0x3E0) == 0x200 )
      {
        v7 = *(_QWORD *)(v7 + 8);
        if ( !v7 )
          goto LABEL_7;
      }
    }
    a2 = &v20;
    v11 = sub_B4EA0(v7, &v20, a3, a4, a5, a6);
    v7 = *(_QWORD *)(v7 + 8);
    v10 += v11;
  }
  while ( v7 );
LABEL_7:
  if ( (_QWORD)v20 )
    sub_104850(v20);
  v12 = v21;
  if ( v21 )
  {
    v13 = *(_QWORD *)v21;
    if ( !v22 )
    {
      a3 = *(_QWORD *)v21 & 3LL | v21 & 0xFFFFFFFFFFFFFFFCLL;
      *(_QWORD *)v21 = a3;
      *(__m128i *)(v21 + 8) = _mm_unpacklo_epi64((__m128i)v21, (__m128i)v21);
      *(_QWORD *)v21 &= ~1uLL;
      *(_QWORD *)v21 |= 2uLL;
      goto LABEL_12;
    }
    v16 = (__int64 *)(v13 & 0xFFFFFFFFFFFFFFFCLL);
    v17 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v17 & 2) != 0 )
    {
LABEL_25:
      a3 = v13 & 3 | v12 & 0xFFFFFFFFFFFFFFFCLL;
      *(_QWORD *)v12 = a3;
      *(__m128i *)(v21 + 8) = _mm_unpacklo_epi64((__m128i)v21, (__m128i)v21);
      *(_QWORD *)v21 &= ~1uLL;
      *(_QWORD *)v21 |= 2uLL;
      v22 = 0;
LABEL_12:
      if ( v21 )
        qfree();
      goto LABEL_14;
    }
    v18 = (__int64 *)v16[1];
    if ( (*(_BYTE *)v18 & 2) != 0 )
    {
      v19 = (__int64 *)v16[2];
      if ( (*(_BYTE *)v19 & 2) != 0 )
        goto LABEL_28;
    }
    else
    {
      sub_134CA0(v18);
      v19 = (__int64 *)v16[2];
      if ( (*(_BYTE *)v19 & 2) != 0 )
        goto LABEL_21;
    }
    sub_134CA0(v19);
LABEL_21:
    v17 = *v16;
    if ( (*v16 & 2) != 0 )
    {
LABEL_22:
      if ( v13 > 3 )
        qfree();
      v12 = v21;
      v13 = *(_QWORD *)v21;
      goto LABEL_25;
    }
LABEL_28:
    *v16 = v17 | 2;
    goto LABEL_22;
  }
LABEL_14:
  v14 = sub_142F80(a1, a2, a3, a4, a5, a6);
  if ( v8 )
    *v8 += v10 + v14;
  return 0;
}

