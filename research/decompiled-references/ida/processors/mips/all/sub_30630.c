__int64 __fastcall sub_30630(__int64 a1, _QWORD *a2, int *a3)
{
  __int64 v4; // rax
  __int16 v5; // r14
  __int64 v6; // rbp
  unsigned int v7; // ecx
  char v8; // r8
  char v9; // r15
  int v10; // ebp
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r12
  unsigned int v16; // r13d
  unsigned __int8 v17; // r12
  __int64 (__fastcall *v18)(__int64, __int64); // rax
  unsigned __int8 v19; // al
  bool v20; // dl
  __int64 v22; // rdi
  __int64 first_seg; // rax
  __int64 v24; // rdx
  __int64 v26; // [rsp+20h] [rbp-68h] BYREF
  __int128 v27; // [rsp+28h] [rbp-60h]
  __int64 v28; // [rsp+38h] [rbp-50h]
  int v29; // [rsp+40h] [rbp-48h]
  unsigned __int64 v30; // [rsp+48h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  if ( *(_WORD *)(a1 + 40) != 35 )
    return 0;
  v4 = a1 + 56;
  if ( *(_BYTE *)(a1 + 137) )
    v4 = a1 + 96;
  *a2 = v4;
  if ( *(_BYTE *)(a1 + 137) || (v5 = 24, (*(_BYTE *)(a1 + 49) & 4) == 0) )
    v5 = *(_WORD *)(a1 + 62);
  v6 = *(_QWORD *)(a1 + 888);
  v7 = *(_DWORD *)(v6 + 120);
  if ( v7 > 5 )
    goto LABEL_40;
  if ( ((1LL << v7) & 0x16) != 0 )
  {
LABEL_8:
    v8 = 7;
    goto LABEL_9;
  }
  if ( ((1LL << v7) & 0x29) == 0 )
LABEL_40:
    sub_28E30();
  v22 = *(_QWORD *)(a1 + 32);
  if ( v22 == -1 )
    first_seg = get_first_seg(-1, a2, a3);
  else
    first_seg = getseg(v22);
  if ( !first_seg )
  {
    sub_28E10(v22, a2, v24);
    return sub_308D0();
  }
  if ( *(_BYTE *)(first_seg + 43) == 2 || (unsigned int)(*(_DWORD *)(v6 + 184) - 4) <= 1 )
    goto LABEL_8;
  v8 = 2;
LABEL_9:
  if ( *(_QWORD *)(a1 + 872) <= 1u )
    return 0;
  v9 = v8;
  v10 = 1;
  v11 = 1;
  v12 = 0;
  while ( 1 )
  {
    v13 = 5 * v11;
    v14 = *(_QWORD *)(a1 + 864);
    v26 = 256;
    v28 = 0;
    v15 = v14 + 8 * v13;
    v29 = 0;
    HIWORD(v26) = v5;
    BYTE5(v26) = v9;
    v27 = v12;
    if ( !*(_BYTE *)(v15 + 1) )
    {
      *(_BYTE *)(a1 + 792) = 1;
      goto LABEL_12;
    }
    v12 = 0;
    v16 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)a1 + 8LL))(a1, &v26, v15);
    if ( !(_BYTE)v16 )
      goto LABEL_12;
    v17 = *(_BYTE *)(v15 + 5);
    if ( BYTE5(v26) > 0xF9u )
      break;
    if ( BYTE5(v26) >= v17 || v17 > 0xF9u || *(_BYTE *)(a1 + 8) && BYTE5(v26) == 2 )
      goto LABEL_24;
LABEL_20:
    v18 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
    if ( v18 != sub_288C0 )
    {
      v19 = ((__int64 (__fastcall *)(__int64, __int64 *, double))v18)(a1, &v26, 0.0);
      v12 = 0;
      v20 = v17 <= 0xF9u || v19 < v17;
      if ( v19 <= 0xF9u )
        v20 = v19 < v17 && v17 <= 0xF9u;
      if ( !v20 )
      {
LABEL_24:
        *a3 = v10;
        return v16;
      }
    }
LABEL_12:
    v10 += 2;
    v11 = v10;
    if ( (unsigned __int64)v10 >= *(_QWORD *)(a1 + 872) )
      return 0;
  }
  if ( BYTE5(v26) < v17 || v17 <= 0xF9u )
    goto LABEL_20;
  *a3 = v10;
  return v16;
}

