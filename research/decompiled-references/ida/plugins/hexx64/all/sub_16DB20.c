__int64 __fastcall sub_16DB20(__int64 *a1, __int64 a2, __int64 a3, __m128i a4)
{
  int v4; // r15d
  unsigned int v5; // r13d
  __int64 v10; // r13
  __int64 v11; // r14
  _DWORD *v12; // rax
  _DWORD *v13; // rax
  char v14; // r8
  int *v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rax
  int v18; // edi
  __int64 i; // r14
  int v20; // eax
  __int64 j; // r14
  int v22; // eax
  int v23; // eax
  __int64 v24; // [rsp+0h] [rbp-68h]
  __int64 v25; // [rsp+18h] [rbp-50h] BYREF
  __int64 v26[9]; // [rsp+20h] [rbp-48h] BYREF

  v26[1] = __readfsqword(0x28u);
  v4 = *(_DWORD *)a1[7];
  if ( (unsigned int)(v4 - 43) > 9 )
    return 0;
  v10 = sub_1229A0(*(_QWORD *)(a2 + 48));
  v11 = sub_1229A0(*(_QWORD *)(a3 + 48));
  if ( v11 == 0 || v10 == 0 )
    return 0;
  v12 = *(_DWORD **)(v10 + 8);
  if ( v12 )
  {
    if ( *v12 != 55 )
      return 0;
  }
  v13 = *(_DWORD **)(v11 + 8);
  if ( v13 )
  {
    if ( *v13 != 55 )
      return 0;
  }
  if ( *(_DWORD *)v10 != 4 )
    return 0;
  if ( *(_DWORD *)v11 != 4 )
    return 0;
  if ( !sub_125B60((unsigned __int8 *)(v10 + 64), v11 + 64, 0, *(double *)a4.m128i_i64) )
    return 0;
  if ( !(unsigned __int8)sub_11FD80((char *)(v10 + 32), &v25, 0) )
    return 0;
  v5 = sub_11FD80((char *)(v11 + 32), v26, 0);
  if ( !(_BYTE)v5 )
    return 0;
  v14 = 0;
  if ( v25 != 1 )
  {
    if ( !v25 && v26[0] == 1 )
      goto LABEL_17;
    return 0;
  }
  if ( v26[0] )
    return 0;
  v14 = v5;
LABEL_17:
  v15 = (int *)a1[7];
  v16 = a1[8];
  v17 = (unsigned int)v15[18];
  if ( (unsigned int)v17 >= *(_DWORD *)(v16 + 64) )
    sub_167AF0(*(double *)a4.m128i_i64);
  v18 = v4 - 11;
  v24 = *(_QWORD *)(*(_QWORD *)(v16 + 528) + 8 * v17);
  if ( v14 )
  {
    v23 = sub_32E9E0(v18);
    v15 = (int *)a1[7];
    v18 = v23;
  }
  *v15 = v18;
  *(_DWORD *)(a1[7] + 68) = 1;
  if ( *(_DWORD *)(v11 + 68) != 1 )
    sub_12B6F0(a1[7], *(unsigned __int64 **)(a1[60] + 112), 9, -1, 1, a4);
  sub_11CA10((char *)(a1[7] + 64), (char *)(v11 + 64));
  for ( i = *(_QWORD *)(a2 + 48); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)i == 55 )
      break;
    sub_11D5A0(i);
    v20 = *(_DWORD *)(a2 + 24);
    BYTE1(v20) &= ~2u;
    LOBYTE(v20) = v20 | 0x80;
    *(_DWORD *)(a2 + 24) = v20;
  }
  for ( j = *(_QWORD *)(a3 + 48); j; j = *(_QWORD *)(j + 8) )
  {
    if ( *(_DWORD *)j == 55 )
      break;
    sub_11D5A0(j);
    v22 = *(_DWORD *)(a3 + 24);
    BYTE1(v22) &= ~2u;
    LOBYTE(v22) = v22 | 0x80;
    *(_DWORD *)(a3 + 24) = v22;
  }
  sub_112550((__int64)a1, a2, v24);
  sub_A2520((__int64)a1, "CONVERT_IF_TO_SET");
  return v5;
}

