__int64 __fastcall sub_1178C0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int128 v5; // rdi
  __int64 v6; // rbp
  _DWORD *v7; // rax
  _DWORD *v8; // r14
  int v9; // eax
  __int64 v10; // r15
  __int64 v11; // rax
  int v12; // edx
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rax
  _DWORD *v16; // rbp
  unsigned int v17; // r13d
  unsigned __int8 *v18; // r14
  __int64 v19; // rax
  __int64 v21; // rbp
  __int64 v22; // r9
  __int64 v23; // rbp
  __int64 v24; // rax
  _DWORD *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rbp
  __int128 v28; // rdi
  _DWORD *v29; // rcx
  unsigned __int8 *v30; // r14
  unsigned int v31; // eax
  __int64 v32; // rax
  __int64 v33; // r9
  char v34; // al
  __int128 v35; // rdi
  char v36; // al
  _DWORD *v37; // rdx
  __int64 v38; // [rsp+0h] [rbp-68h] BYREF
  __int64 v39; // [rsp+8h] [rbp-60h] BYREF
  __int64 v40; // [rsp+10h] [rbp-58h] BYREF
  __int64 v41; // [rsp+18h] [rbp-50h] BYREF
  __int64 v42[9]; // [rsp+20h] [rbp-48h] BYREF

  v42[1] = __readfsqword(0x28u);
  v4 = sub_11C8A0(a2, &v38);
  if ( !v4 )
    return 0;
  v39 = 0;
  *((_QWORD *)&v5 + 1) = v38;
  v6 = v4;
  if ( *(_BYTE *)v38 == 4 )
  {
    v8 = *(_DWORD **)(v38 + 8);
    if ( *v8 == 10 )
    {
      if ( *((_BYTE *)v8 + 32) == 4 )
      {
        v8 = *((_DWORD **)v8 + 5);
        if ( *v8 == 13 )
          goto LABEL_29;
      }
    }
    else if ( *v8 == 13 )
    {
      goto LABEL_29;
    }
  }
  *(_QWORD *)&v5 = *(_QWORD *)(a1 + 8);
  if ( !(_QWORD)v5 )
    return 0;
  v39 = *(_QWORD *)(a1 + 16);
  v7 = (_DWORD *)sub_129440(v5, (__int64)&v39, 0);
  v8 = v7;
  if ( !v7 )
    return 0;
  v9 = *v7;
  if ( v9 == 4 )
  {
    if ( *((_BYTE *)v8 + 32) != 4 )
      return 0;
    v8 = *((_DWORD **)v8 + 5);
    if ( *v8 != 13 )
      return 0;
LABEL_29:
    if ( !v8 )
      return 0;
    goto LABEL_7;
  }
  if ( v9 != 13 )
    return 0;
LABEL_7:
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_WORD *)(a1 + 132) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 120) = 8 * *(_DWORD *)(a2 + 68);
  v10 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 16LL), *(_DWORD *)(v6 + 4), 0);
  *(_QWORD *)(a1 + 64) = **(_QWORD **)(v6 + 8);
  if ( !v10 || (v10 & 1) == 0 )
    goto LABEL_24;
  v11 = v10;
  v12 = 6;
  do
  {
    v11 *= 2 - v11 * v10;
    --v12;
  }
  while ( v12 );
  v13 = *(_DWORD *)(a1 + 120);
  if ( v13 <= 63 )
  {
    v11 &= ~(-1LL << v13);
    if ( v11 )
    {
      v14 = (1LL << v13) - 1;
      goto LABEL_13;
    }
LABEL_24:
    *(_QWORD *)(a1 + 112) = 0;
    return 0;
  }
  v14 = -1;
  if ( !v11 )
    goto LABEL_24;
LABEL_13:
  if ( (v14 & (v11 * v10)) != 1 || (unsigned __int64)(v11 - 2) > 0x7FFFFFFD )
    goto LABEL_24;
  *(_QWORD *)(a1 + 112) = v11;
  v15 = sub_116070((__int64)(v8 + 12));
  v16 = (_DWORD *)v15;
  if ( v15 )
  {
    v17 = sub_11FD80((char *)(v15 + 48), v42, 0);
    if ( (_BYTE)v17 && *(_QWORD *)(a1 + 112) == v42[0] && v8[9] <= *(_DWORD *)(a2 + 68) )
    {
      if ( v39 )
      {
        v18 = (unsigned __int8 *)(v8 + 8);
        if ( sub_125B60(v18, (__int64)(v16 + 8), 1u) )
        {
LABEL_21:
          *(_QWORD *)(a1 + 48) = v18;
          sub_125180(a1 + 32, v18);
          v19 = v39;
          if ( !v39 )
            v19 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 56) = v19;
          *(_BYTE *)(a1 + 133) = *v16 == 18;
          *(_QWORD *)(a1 + 96) = v10;
          *(_QWORD *)(a1 + 104) = 0;
          return v17;
        }
      }
      else
      {
        v18 = (unsigned __int8 *)(v8 + 8);
        if ( (unsigned __int8)sub_12EA80(
                                *(_QWORD *)a1,
                                *(const __m128i **)(a1 + 8),
                                *(_QWORD *)(a1 + 16),
                                (__int64)v18,
                                *(_QWORD *)(a1 + 16),
                                (__int64)(v16 + 8),
                                1) )
          goto LABEL_21;
      }
    }
    return 0;
  }
  if ( *((_BYTE *)v8 + 48) != 4 )
    return 0;
  v21 = *((_QWORD *)v8 + 7);
  if ( (unsigned int)(*(_DWORD *)v21 - 8) <= 1 )
  {
    v34 = *(_BYTE *)(v21 + 32);
    if ( v34 == 4 )
    {
      v21 = *(_QWORD *)(v21 + 40);
      if ( *(_DWORD *)v21 != 12 )
        return 0;
    }
    else
    {
      if ( v34 != 1 )
        return 0;
      *(_QWORD *)&v35 = *(_QWORD *)(a1 + 8);
      if ( !(_QWORD)v35 )
        return 0;
      *((_QWORD *)&v35 + 1) = v21 + 32;
      v42[0] = *(_QWORD *)(a1 + 16);
      v21 = sub_129440(v35, (__int64)v42, 0);
      v36 = *((_BYTE *)v8 + 48);
      if ( !v21 )
        goto LABEL_82;
      if ( *(_DWORD *)v21 == 12 )
      {
        if ( v36 != 4 || **((_DWORD **)v8 + 7) != 12 )
          goto LABEL_43;
        v21 = *((_QWORD *)v8 + 7);
        goto LABEL_42;
      }
      if ( *(_DWORD *)v21 == 4 && *(_BYTE *)(v21 + 32) == 4 && (v37 = *(_DWORD **)(v21 + 40), *v37 == 12) )
      {
        if ( v36 != 4 || (v21 = *((_QWORD *)v8 + 7), *(_DWORD *)v21 != 12) )
        {
          v21 = (__int64)v37;
          if ( !v37 )
            return 0;
          goto LABEL_43;
        }
      }
      else
      {
LABEL_82:
        if ( v36 != 4 )
          return 0;
        v21 = *((_QWORD *)v8 + 7);
        if ( *(_DWORD *)v21 != 12 )
          return 0;
      }
    }
  }
  else if ( *(_DWORD *)v21 != 12 )
  {
    return 0;
  }
LABEL_42:
  if ( !v21 )
    return 0;
LABEL_43:
  v22 = v21 + 32;
  v23 = v21 + 48;
  v24 = sub_116070(v22);
  if ( !v24 )
  {
    v24 = sub_116070(v23);
    if ( !v24 )
      return 0;
    v23 = v33;
  }
  if ( !(unsigned __int8)sub_11FD80((char *)(v24 + 48), &v40, 0) )
    return 0;
  if ( *(_QWORD *)(a1 + 112) != v40 )
    return 0;
  if ( *(_BYTE *)v23 != 4 )
    return 0;
  v25 = *(_DWORD **)(v23 + 8);
  if ( *v25 != 20 )
    return 0;
  v26 = sub_11C8A0((__int64)v25, &v41);
  if ( !v26 )
    return 0;
  v27 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v26 + 8) + 16LL), *(_DWORD *)(v26 + 4), 0);
  if ( sub_32ABC0(1LL - *(_QWORD *)(a1 + 112), *(_DWORD *)(a1 + 120) / 8, 0) != v27 )
    return 0;
  *(_QWORD *)&v28 = *(_QWORD *)(a1 + 8);
  *((_QWORD *)&v28 + 1) = v41;
  v42[0] = *(_QWORD *)(a1 + 16);
  v29 = (_DWORD *)sub_129440(v28, (__int64)v42, 1);
  if ( !v29 )
    return 0;
  v30 = (unsigned __int8 *)(v8 + 8);
  LOBYTE(v31) = sub_30D8F0(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), v42[0], v29, *(_QWORD *)(a1 + 16), (__int64)v30);
  v17 = v31;
  if ( !(_BYTE)v31 )
    return 0;
  *(_QWORD *)(a1 + 48) = v30;
  sub_125180(a1 + 32, v30);
  v32 = v39;
  if ( !v39 )
    v32 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 56) = v32;
  *(_BYTE *)(a1 + 133) = 1;
  *(_QWORD *)(a1 + 96) = v10;
  *(_QWORD *)(a1 + 104) = 0;
  return v17;
}

