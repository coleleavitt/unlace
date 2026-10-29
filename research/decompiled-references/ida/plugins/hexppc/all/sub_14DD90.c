__int64 __fastcall sub_14DD90(__int64 a1, __int64 a2)
{
  bool v3; // zf
  unsigned int *v4; // rbp
  unsigned __int64 v5; // rax
  int v6; // r13d
  __int64 v7; // rdx
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdi
  char v17; // al
  int v18; // eax
  char v19; // al
  int v20; // r8d
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // [rsp+8h] [rbp-50h] BYREF
  char *v23[9]; // [rsp+10h] [rbp-48h] BYREF

  v3 = *(_BYTE *)(a1 + 32) == 4;
  v23[1] = (char *)__readfsqword(0x28u);
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
  v7 = 3690496;
  if ( !_bittest64(&v7, v5) || *(_DWORD *)a1 != (_DWORD)v5 )
    goto LABEL_9;
LABEL_19:
  v9 = sub_118E60((__int64)v4, &v22);
  if ( !v9 )
    goto LABEL_9;
  v10 = sub_118E60(a1, v23);
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
  v15 = sub_326890(v14, *(unsigned int *)(v10 + 4), 0);
  v16 = v22;
  *(__m128i *)(v12 + 16) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)(unsigned __int64)v15);
  if ( *(_BYTE *)v16 == 1 && *(_DWORD *)(v16 + 8) >= *(_DWORD *)(a2 + 68) || (v17 = sub_11C730(v16, a2), v16 = v22, v17) )
  {
    v18 = sub_203990(v16, v4);
    if ( v18 <= 15 )
      v18 = sub_119050(v18);
    v16 = v22;
    if ( *(_DWORD *)(v22 + 4) > v18 )
    {
      v19 = sub_127110(v22, a2, v18, 1);
      v16 = v22;
      if ( !v19 )
      {
        if ( !under_debugger )
          sub_37EEE0(52677);
        BUG();
      }
    }
  }
  sub_118FD0(v23[0], (char *)v16);
  v20 = *(_DWORD *)(v11 + 4);
  if ( *((_DWORD *)v23[0] + 1) != v20 )
    sub_11CDA0(v23[0], a2, 9, *(_QWORD *)(a1 + 24), v20);
  v21 = v22;
  *(_QWORD *)v22 = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v21 + 8) = 0;
  if ( v4 )
  {
    sub_119360((__int64)(v4 + 16));
    sub_119360((__int64)(v4 + 12));
    sub_119360((__int64)(v4 + 8));
    j__qfree();
  }
  return 1;
}

