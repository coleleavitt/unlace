unsigned __int64 __fastcall sub_128220(__int64 a1, __int64 a2, unsigned int a3, double a4)
{
  __int64 v4; // r13
  unsigned int v7; // r12d
  __int64 *v8; // r14
  unsigned int v9; // r15d
  __int16 v11; // di
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int16 i; // cx
  __int16 j; // ax
  __int16 v16; // ax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  __int16 v19; // ax
  int v20; // [rsp+Ch] [rbp-4Ch]
  signed int v21; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v22; // [rsp+18h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) )
    return __readfsqword(0x28u) ^ v22;
  v4 = *(_QWORD *)(a2 + 96);
  if ( !v4 )
    return __readfsqword(0x28u) ^ v22;
  v7 = *(_DWORD *)(a1 + 56) + 1;
  *(_DWORD *)(a1 + 56) = v7;
  *(_DWORD *)(a2 + 8) = v7;
  v8 = *(__int64 **)(a1 + 16);
  if ( !v8 )
    v8 = sub_E2050((__int64 *)a1);
  if ( !(unsigned int)sub_CE930(*(_QWORD *)(v4 + 16), &v21) )
  {
    if ( *(_QWORD *)(a1 + 16) )
      sub_127300(a1, *(unsigned __int8 **)(v4 + 16), v7, a4);
    sub_E1710((__int64)v8, 12, v7, 0, 0);
    sub_E1710((__int64)v8, 16, v7, a3, 0);
    goto LABEL_9;
  }
  sub_E1710((__int64)v8, 71, v21, v7, 0);
  if ( v21 )
  {
    if ( v21 < 0 )
      goto LABEL_9;
    v11 = *(_WORD *)(a2 + 2);
    v12 = v21;
    if ( v21 > 7 )
    {
      _BitScanReverse64(&v17, v21);
      if ( v11 <= (__int16)(word_1BACD0[((unsigned __int64)v21 >> (60 - ((unsigned __int8)v17 ^ 0x3Fu))) & 7]
                          + 10 * (60 - (v17 ^ 0x3F))
                          + 30) )
        goto LABEL_9;
      _BitScanReverse64(&v18, v21);
      LOWORD(v18) = 60 - (v18 ^ 0x3F);
      v12 = (unsigned __int64)v21 >> v18;
      v16 = 10 * v18 + 30;
      goto LABEL_28;
    }
    if ( v21 == 1 )
    {
      if ( v11 > 0 )
      {
        v19 = 0;
        goto LABEL_29;
      }
    }
    else
    {
      v13 = v21;
      for ( i = 40; ; i -= 10 )
      {
        v13 *= 2LL;
        if ( v13 > 7 )
          break;
      }
      if ( v11 > (__int16)(i + word_1BACD0[v13 & 7] - 20) )
      {
        for ( j = 40; ; j -= 10 )
        {
          v12 *= 2LL;
          if ( v12 > 7 )
            break;
        }
        v16 = j - 20;
LABEL_28:
        v19 = word_1BACD0[v12 & 7] + v16;
LABEL_29:
        *(_WORD *)(a2 + 2) = v19;
        *(_DWORD *)(a2 + 4) |= 0x4000u;
      }
    }
  }
  else
  {
    sub_E1710((__int64)v8, 8, 0, a3, 0);
  }
LABEL_9:
  if ( *(_QWORD *)(v4 + 24) )
  {
    v9 = *(_DWORD *)(a1 + 56) + 1;
    v20 = *(_DWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 56) = v9;
    *(_DWORD *)(a2 + 12) = v9;
    ++*(_DWORD *)(a1 + 56);
    if ( *(_QWORD *)(a1 + 16) )
      sub_127300(a1, *(unsigned __int8 **)(v4 + 24), v9, a4);
    sub_E1710((__int64)v8, 12, v9, 0, 0);
    sub_E1710((__int64)v8, 160, v7, v20 + 2, v9);
  }
  return __readfsqword(0x28u) ^ v22;
}
