__int64 __fastcall sub_169660(__int64 *a1, __int64 a2, __int64 a3)
{
  int v3; // r15d
  unsigned int v4; // r13d
  __int64 v9; // r13
  __int64 v10; // r14
  _DWORD *v11; // rax
  _DWORD *v12; // rax
  char v13; // r8
  _DWORD *v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 i; // r14
  int v19; // eax
  __int64 j; // r14
  int v21; // eax
  int v22; // eax
  __int64 v23; // [rsp+0h] [rbp-68h]
  __int64 v24; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v25[9]; // [rsp+20h] [rbp-48h] BYREF

  v25[1] = __readfsqword(0x28u);
  v3 = *(_DWORD *)a1[7];
  if ( (unsigned int)(v3 - 43) > 9 )
    return 0;
  v9 = sub_11E4E0(*(_QWORD *)(a2 + 48));
  v10 = sub_11E4E0(*(_QWORD *)(a3 + 48));
  if ( v10 == 0 || v9 == 0 )
    return 0;
  v11 = *(_DWORD **)(v9 + 8);
  if ( v11 )
  {
    if ( *v11 != 55 )
      return 0;
  }
  v12 = *(_DWORD **)(v10 + 8);
  if ( v12 )
  {
    if ( *v12 != 55 )
      return 0;
  }
  if ( *(_DWORD *)v9 != 4 )
    return 0;
  if ( *(_DWORD *)v10 != 4 )
    return 0;
  if ( !sub_1216A0((unsigned __int8 *)(v9 + 64), v10 + 64, 0) )
    return 0;
  if ( !(unsigned __int8)sub_11B8C0((char *)(v9 + 32), &v24, 0) )
    return 0;
  v4 = sub_11B8C0((char *)(v10 + 32), v25, 0);
  if ( !(_BYTE)v4 )
    return 0;
  v13 = 0;
  if ( v24 != 1 )
  {
    if ( !v24 && v25[0] == 1 )
      goto LABEL_17;
    return 0;
  }
  if ( v25[0] )
    return 0;
  v13 = v4;
LABEL_17:
  v14 = (_DWORD *)a1[7];
  v15 = a1[8];
  v16 = (unsigned int)v14[18];
  if ( (unsigned int)v16 >= *(_DWORD *)(v15 + 64) )
    sub_163630(v10 + 32);
  v17 = (unsigned int)(v3 - 11);
  v23 = *(_QWORD *)(*(_QWORD *)(v15 + 528) + 8 * v16);
  if ( v13 )
  {
    v22 = sub_329720(v17);
    v14 = (_DWORD *)a1[7];
    LODWORD(v17) = v22;
  }
  *v14 = v17;
  *(_DWORD *)(a1[7] + 68) = 1;
  if ( *(_DWORD *)(v10 + 68) != 1 )
    sub_127230(a1[7], *(_QWORD *)(a1[60] + 112), 9, -1, 1);
  sub_118550((char *)(a1[7] + 64), (char *)(v10 + 64));
  for ( i = *(_QWORD *)(a2 + 48); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)i == 55 )
      break;
    sub_1190E0(i);
    v19 = *(_DWORD *)(a2 + 24);
    BYTE1(v19) &= ~2u;
    LOBYTE(v19) = v19 | 0x80;
    *(_DWORD *)(a2 + 24) = v19;
  }
  for ( j = *(_QWORD *)(a3 + 48); j; j = *(_QWORD *)(j + 8) )
  {
    if ( *(_DWORD *)j == 55 )
      break;
    sub_1190E0(j);
    v21 = *(_DWORD *)(a3 + 24);
    BYTE1(v21) &= ~2u;
    LOBYTE(v21) = v21 | 0x80;
    *(_DWORD *)(a3 + 24) = v21;
  }
  sub_10E090((__int64)a1, a2, v23);
  sub_9E060((__int64)a1, (__int64)"CONVERT_IF_TO_SET");
  return v4;
}

