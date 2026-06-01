__int64 __fastcall sub_1517D0(__int64 a1, __int64 a2)
{
  bool v3; // zf
  unsigned int *v4; // rbp
  unsigned __int64 v5; // rax
  int v6; // r13d
  void (__fastcall *v7)(_QWORD *); // rdx
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned int **v16; // rdi
  __m128i v17; // xmm0
  char v18; // al
  int v19; // eax
  char v20; // al
  int v21; // r8d
  unsigned int **v22; // rax
  unsigned int **v23; // [rsp+8h] [rbp-50h] BYREF
  char *v24[9]; // [rsp+10h] [rbp-48h] BYREF

  v3 = *(_BYTE *)(a1 + 32) == 4;
  v24[1] = (char *)__readfsqword(0x28u);
  if ( v3 )
  {
    v4 = *(unsigned int **)(a1 + 40);
    v5 = *v4;
    if ( (_DWORD)v5 == 9 )
    {
      if ( *((_BYTE *)v4 + 32) == 4 )
      {
        v6 = 0;
        goto LABEL_17;
      }
    }
    else if ( (unsigned int)v5 <= 0x15 )
    {
      v6 = 0;
      goto LABEL_7;
    }
  }
  while ( 1 )
  {
    if ( *(_BYTE *)(a1 + 48) != 4 )
      return 0;
    v4 = *(unsigned int **)(a1 + 56);
    v5 = *v4;
    if ( (_DWORD)v5 != 9 )
      break;
    if ( *((_BYTE *)v4 + 32) != 4 )
      return 0;
    v6 = 1;
LABEL_17:
    v4 = *((unsigned int **)v4 + 5);
    if ( *v4 - 19 > 2 )
      return 0;
    if ( *(_DWORD *)a1 == *v4 )
      goto LABEL_19;
LABEL_9:
    if ( v6 == 1 )
      return 0;
  }
  if ( (unsigned int)v5 > 0x15 )
    return 0;
  v6 = 1;
LABEL_7:
  v7 = sub_385000;
  if ( !_bittest64((const __int64 *)&v7, v5) || *(_DWORD *)a1 != (_DWORD)v5 )
    goto LABEL_9;
LABEL_19:
  v9 = sub_11C8A0((__int64)v4, &v23);
  if ( !v9 )
    goto LABEL_9;
  v10 = sub_11C8A0(a1, v24);
  v11 = v10;
  if ( !v10 )
    goto LABEL_9;
  v12 = *(_QWORD *)(v10 + 8);
  v13 = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
  v14 = *(_QWORD *)(v12 + 16);
  switch ( *(_DWORD *)a1 )
  {
    case 0xC:
      v14 += v13;
      break;
    case 0xE:
      v14 *= v13;
      break;
    case 0x13:
      v14 |= v13;
      break;
    case 0x14:
      v14 &= v13;
      break;
    case 0x15:
      v14 ^= v13;
      break;
    default:
      break;
  }
  v15 = sub_32ABC0(v14, *(_DWORD *)(v10 + 4), 0);
  v16 = v23;
  v17 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)(unsigned __int64)v15);
  *(__m128i *)(v12 + 16) = v17;
  if ( *(_BYTE *)v16 == 1 && *((_DWORD *)v16 + 2) >= *(_DWORD *)(a2 + 68)
    || (v18 = sub_120170((__int64)v16, a2), v16 = v23, v18) )
  {
    v19 = sub_207610((__int64)v16, (int **)v4);
    if ( v19 <= 15 )
      v19 = sub_11CA90(v19, *(double *)v17.m128i_i64);
    v16 = v23;
    if ( *((_DWORD *)v23 + 1) > v19 )
    {
      v20 = sub_12AB50(v23, (unsigned __int64 *)a2, v19, 1, v17);
      v16 = v23;
      if ( !v20 )
      {
        if ( !under_debugger )
          sub_383060(0xCDC5u, *(double *)v17.m128i_i64);
        BUG();
      }
    }
  }
  sub_11CA10(v24[0], (char *)v16);
  v21 = *(_DWORD *)(v11 + 4);
  if ( *((_DWORD *)v24[0] + 1) != v21 )
    sub_1207E0(v24[0], (unsigned __int64 *)a2, 9, *(_QWORD *)(a1 + 24), v21, v17);
  v22 = v23;
  *v23 = (unsigned int *)0xFFFFFFFF00000000LL;
  v22[1] = nullptr;
  if ( v4 )
  {
    sub_11CDA0((__int64)(v4 + 16));
    sub_11CDA0((__int64)(v4 + 12));
    sub_11CDA0((__int64)(v4 + 8));
    j__qfree((__int64)v4);
  }
  return 1;
}

