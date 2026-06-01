__int64 __fastcall sub_B4EA0(__int64 a1, __int128 *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int128 *v6; // r13
  int v7; // ebx
  char v8; // r12
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rdx
  int v12; // eax
  int v13; // r14d
  int v14; // eax
  unsigned int v15; // ebx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rbp
  __int64 *v19; // r12
  __int64 v20; // rdx
  __int64 *v21; // r13
  __int64 v22; // rax
  __int64 *v23; // rdi
  __int64 *v24; // rdi
  __int64 *v25; // r13
  __int64 *v26; // rdi
  __int64 *v27; // rdi
  __int64 v28; // rax
  __int128 v29; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v30; // [rsp+10h] [rbp-48h]
  __int64 v31; // [rsp+18h] [rbp-40h]
  unsigned __int64 v32; // [rsp+28h] [rbp-30h]

  v32 = __readfsqword(0x28u);
  v6 = a2;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  if ( !a2 )
    v6 = &v29;
  v7 = 0;
  v8 = 0;
LABEL_8:
  v10 = *(_DWORD *)(a1 + 24);
  while ( 1 )
  {
    v11 = v10 & 0x10;
    if ( (_DWORD)v11 )
      v7 += sub_A5F60(a1);
    v12 = sub_A6FD0(a1, 1, v11, a4, a5, a6);
    if ( !v12 )
    {
      if ( v8 )
        break;
    }
    v13 = v7 + v12;
    v14 = sub_17D300(a1, 0, v6);
    v10 = *(_DWORD *)(a1 + 24);
    v7 = v13 + v14;
    if ( (v10 & 0x40) == 0 )
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
    if ( (v10 & 0x200) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 24) & 0x40) != 0 )
      {
        v7 += sub_B4DA0(a1);
        if ( (*(_DWORD *)(a1 + 24) & 0x20) != 0 )
LABEL_19:
          v7 += sub_AFEF0(a1);
      }
      else if ( (v10 & 0x20) != 0 )
      {
        goto LABEL_19;
      }
      v9 = *(_QWORD *)(a1 + 56);
      if ( !v9
        || (unsigned int)(*(_DWORD *)v9 - 56) > 1
        || *(_BYTE *)(v9 + 64) != 8
        || *(_DWORD *)(*(_QWORD *)(v9 + 72) + 20LL) )
      {
        v8 = 1;
        if ( v7 == v13 )
          break;
        goto LABEL_8;
      }
      v8 = 1;
      v7 += (unsigned __int8)sub_F4B30(a1);
      if ( v7 != v13 )
        goto LABEL_8;
      break;
    }
  }
  v15 = sub_A7D60(a1) + v7;
  sub_137E80(*(_QWORD *)(a1 + 64));
  if ( (_QWORD)v29 )
    sub_104850();
  v16 = v30;
  if ( v30 )
  {
    v17 = *(_QWORD *)v30;
    if ( !v31 )
    {
      *(_QWORD *)v30 = v30 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v30 & 3LL;
      *(__m128i *)(v30 + 8) = _mm_unpacklo_epi64((__m128i)v30, (__m128i)v30);
      *(_QWORD *)v30 &= ~1uLL;
      *(_QWORD *)v30 |= 2uLL;
      goto LABEL_28;
    }
    v19 = (__int64 *)(v17 & 0xFFFFFFFFFFFFFFFCLL);
    v20 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v20 & 2) != 0 )
    {
LABEL_52:
      *(_QWORD *)v16 = v16 & 0xFFFFFFFFFFFFFFFCLL | v17 & 3;
      *(__m128i *)(v30 + 8) = _mm_unpacklo_epi64((__m128i)v30, (__m128i)v30);
      *(_QWORD *)v30 &= ~1uLL;
      *(_QWORD *)v30 |= 2uLL;
      v31 = 0;
LABEL_28:
      if ( v30 )
        qfree();
      return v15;
    }
    v21 = (__int64 *)v19[1];
    v22 = *v21;
    if ( (*v21 & 2) != 0 )
    {
      v25 = (__int64 *)v19[2];
      if ( (*(_BYTE *)v25 & 2) != 0 )
        goto LABEL_48;
      goto LABEL_41;
    }
    v23 = (__int64 *)v21[1];
    if ( (*(_BYTE *)v23 & 2) != 0 )
    {
      v24 = (__int64 *)v21[2];
      if ( (*(_BYTE *)v24 & 2) != 0 )
      {
LABEL_56:
        *v21 = v22 | 2;
LABEL_38:
        if ( v21 )
          qfree();
        v25 = (__int64 *)v19[2];
        if ( (*(_BYTE *)v25 & 2) != 0 )
        {
LABEL_47:
          v20 = *v19;
          if ( (*v19 & 2) != 0 )
          {
LABEL_49:
            if ( v17 > 3 )
              qfree();
            v16 = v30;
            v17 = *(_QWORD *)v30;
            goto LABEL_52;
          }
LABEL_48:
          *v19 = v20 | 2;
          goto LABEL_49;
        }
LABEL_41:
        v26 = (__int64 *)v25[1];
        if ( (*(_BYTE *)v26 & 2) != 0 )
        {
          v27 = (__int64 *)v25[2];
          if ( (*(_BYTE *)v27 & 2) != 0 )
          {
            v28 = *v25;
LABEL_59:
            *v25 = v28 | 2;
LABEL_45:
            if ( v25 )
              qfree();
            goto LABEL_47;
          }
        }
        else
        {
          sub_A0B60(v26);
          v27 = (__int64 *)v25[2];
          if ( (*(_BYTE *)v27 & 2) != 0 )
            goto LABEL_44;
        }
        sub_A0B60(v27);
LABEL_44:
        v28 = *v25;
        if ( (*v25 & 2) != 0 )
          goto LABEL_45;
        goto LABEL_59;
      }
    }
    else
    {
      sub_A0B60(v23);
      v24 = (__int64 *)v21[2];
      if ( (*(_BYTE *)v24 & 2) != 0 )
        goto LABEL_37;
    }
    sub_A0B60(v24);
LABEL_37:
    v22 = *v21;
    if ( (*v21 & 2) != 0 )
      goto LABEL_38;
    goto LABEL_56;
  }
  return v15;
}

