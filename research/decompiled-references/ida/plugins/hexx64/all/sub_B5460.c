__int64 __fastcall sub_B5460(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  const __m128i *v6; // r13
  int v7; // ebx
  char v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // rdx
  int v13; // eax
  int v14; // r14d
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rax
  unsigned __int64 v18; // rbp
  __int64 *v20; // r12
  __int64 v21; // rdx
  __int64 *v22; // r13
  __int64 v23; // rax
  __int64 *v24; // rdi
  __int64 *v25; // rdi
  __int64 v26; // r13
  __int64 *v27; // rdi
  __int64 *v28; // rdi
  __int64 v29; // rax
  __int128 v30; // [rsp+0h] [rbp-58h] BYREF
  __int64 v31; // [rsp+10h] [rbp-48h]
  __int64 v32; // [rsp+18h] [rbp-40h]
  unsigned __int64 v33; // [rsp+28h] [rbp-30h]

  v33 = __readfsqword(0x28u);
  v6 = a2;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  if ( !a2 )
    v6 = (const __m128i *)&v30;
  v7 = 0;
  v8 = 0;
LABEL_8:
  v11 = *(_DWORD *)(a1 + 24);
  while ( 1 )
  {
    v12 = v11 & 0x10;
    if ( (_DWORD)v12 )
      v7 += sub_A6520(a1, 0.0);
    v13 = sub_A7590(a1, 1, v12, a4, a5, a6);
    if ( !v13 )
    {
      if ( v8 )
        break;
    }
    v14 = v7 + v13;
    v15 = sub_17D8C0(a1, 0, v6);
    v11 = *(_DWORD *)(a1 + 24);
    v7 = v14 + v15;
    if ( (v11 & 0x40) == 0 )
    {
      a4 = *(_QWORD *)(a1 + 56);
      if ( a4 )
      {
        a4 = (unsigned int)(*(_DWORD *)a4 - 56);
        LOBYTE(a4) = (unsigned int)a4 > 1;
        v8 |= a4;
      }
      else
      {
        v8 = 1;
      }
    }
    if ( (v11 & 0x200) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 24) & 0x40) != 0 )
      {
        v7 += sub_B5360(a1);
        v9 = *(_DWORD *)(a1 + 24) & 0x20;
        if ( (*(_DWORD *)(a1 + 24) & 0x20) != 0 )
LABEL_19:
          v7 += sub_B04B0(a1, 0, v9, a4, a5, a6);
      }
      else
      {
        v9 = v11 & 0x20;
        if ( (_DWORD)v9 )
          goto LABEL_19;
      }
      v10 = *(_QWORD *)(a1 + 56);
      if ( !v10
        || (unsigned int)(*(_DWORD *)v10 - 56) > 1
        || *(_BYTE *)(v10 + 64) != 8
        || *(_DWORD *)(*(_QWORD *)(v10 + 72) + 20LL) )
      {
        v8 = 1;
        if ( v7 == v14 )
          break;
        goto LABEL_8;
      }
      v8 = 1;
      v7 += sub_F50F0(a1);
      if ( v7 != v14 )
        goto LABEL_8;
      break;
    }
  }
  v16 = sub_A8320(a1) + v7;
  sub_138440(*(_QWORD *)(a1 + 64));
  if ( (_QWORD)v30 )
    sub_104E10(v30);
  v17 = v31;
  if ( v31 )
  {
    v18 = *(_QWORD *)v31;
    if ( !v32 )
    {
      *(_QWORD *)v31 = v31 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v31 & 3LL;
      *(__m128i *)(v31 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v31, (__m128i)(unsigned __int64)v31);
      *(_QWORD *)v31 &= ~1uLL;
      *(_QWORD *)v31 |= 2uLL;
      goto LABEL_28;
    }
    v20 = (__int64 *)(v18 & 0xFFFFFFFFFFFFFFFCLL);
    v21 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v21 & 2) != 0 )
    {
LABEL_52:
      *(_QWORD *)v17 = v17 & 0xFFFFFFFFFFFFFFFCLL | v18 & 3;
      *(__m128i *)(v31 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v31, (__m128i)(unsigned __int64)v31);
      *(_QWORD *)v31 &= ~1uLL;
      *(_QWORD *)v31 |= 2uLL;
      v32 = 0;
LABEL_28:
      if ( v31 )
        qfree(v31);
      return v16;
    }
    v22 = (__int64 *)v20[1];
    v23 = *v22;
    if ( (*v22 & 2) != 0 )
    {
      v26 = v20[2];
      if ( (*(_BYTE *)v26 & 2) != 0 )
        goto LABEL_48;
      goto LABEL_41;
    }
    v24 = (__int64 *)v22[1];
    if ( (*(_BYTE *)v24 & 2) != 0 )
    {
      v25 = (__int64 *)v22[2];
      if ( (*(_BYTE *)v25 & 2) != 0 )
      {
LABEL_56:
        *v22 = v23 | 2;
LABEL_38:
        if ( v22 )
          qfree((__int64)v22);
        v26 = v20[2];
        if ( (*(_BYTE *)v26 & 2) != 0 )
        {
LABEL_47:
          v21 = *v20;
          if ( (*v20 & 2) != 0 )
          {
LABEL_49:
            if ( v18 > 3 )
              qfree(v18 & 0xFFFFFFFFFFFFFFFCLL);
            v17 = v31;
            v18 = *(_QWORD *)v31;
            goto LABEL_52;
          }
LABEL_48:
          *v20 = v21 | 2;
          goto LABEL_49;
        }
LABEL_41:
        v27 = *(__int64 **)(v26 + 8);
        if ( (*(_BYTE *)v27 & 2) != 0 )
        {
          v28 = *(__int64 **)(v26 + 16);
          if ( (*(_BYTE *)v28 & 2) != 0 )
          {
            v29 = *(_QWORD *)v26;
LABEL_59:
            *(_QWORD *)v26 = v29 | 2;
LABEL_45:
            if ( v26 )
              qfree(v26);
            goto LABEL_47;
          }
        }
        else
        {
          sub_A1120(v27);
          v28 = *(__int64 **)(v26 + 16);
          if ( (*(_BYTE *)v28 & 2) != 0 )
            goto LABEL_44;
        }
        sub_A1120(v28);
LABEL_44:
        v29 = *(_QWORD *)v26;
        if ( (*(_QWORD *)v26 & 2) != 0 )
          goto LABEL_45;
        goto LABEL_59;
      }
    }
    else
    {
      sub_A1120(v24);
      v25 = (__int64 *)v22[2];
      if ( (*(_BYTE *)v25 & 2) != 0 )
        goto LABEL_37;
    }
    sub_A1120(v25);
LABEL_37:
    v23 = *v22;
    if ( (*v22 & 2) != 0 )
      goto LABEL_38;
    goto LABEL_56;
  }
  return v16;
}

