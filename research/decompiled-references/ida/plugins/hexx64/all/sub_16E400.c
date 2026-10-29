__int64 __fastcall sub_16E400(_QWORD *a1, __int64 a2, __m128i a3, __m128 a4)
{
  unsigned int v4; // r12d
  __int64 v6; // r13
  __int64 v8; // rax
  __int64 v9; // r15
  _DWORD *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // r14d
  __int64 v14; // rcx
  __int64 v15; // r10
  unsigned __int64 *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r8
  char v20; // al
  char v21; // al
  unsigned __int8 *v22; // [rsp+0h] [rbp-88h]
  __int64 v23; // [rsp+8h] [rbp-80h]
  __int64 v24; // [rsp+8h] [rbp-80h]
  unsigned __int64 v25; // [rsp+10h] [rbp-78h] BYREF
  _QWORD *v26; // [rsp+18h] [rbp-70h] BYREF
  __int64 v27; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-60h] BYREF
  __int64 v29[11]; // [rsp+30h] [rbp-58h] BYREF

  v29[3] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 76) != 3 )
    return 0;
  if ( *(_DWORD *)(a2 + 352) != 1 )
    return 0;
  v6 = a1[7];
  v8 = sub_1229A0(*(_QWORD *)(a2 + 48));
  v9 = v8;
  if ( !v8 )
    return 0;
  v10 = (_DWORD *)sub_1229A0(*(_QWORD *)(v8 + 8));
  if ( v10 )
  {
    if ( *v10 != 55 )
      return 0;
  }
  if ( *(_DWORD *)v9 != 4 )
    return 0;
  if ( !(unsigned __int8)sub_11FD80((char *)(v9 + 32), (__int64 *)&v25, 1) )
    return 0;
  if ( v25 > 1 )
    return 0;
  if ( (unsigned int)sub_1399E0((__int64)a1, 0) )
    return 0;
  v11 = a1[8];
  v26 = a1;
  v27 = v6;
  v4 = sub_1297E0(v11, (__int64 *)&v26, &v27, v9 + 64, *(double *)a3.m128i_i64, a4);
  if ( !(_BYTE)v4 )
    return 0;
  v12 = v27;
  v13 = *(_DWORD *)v27;
  if ( *(_DWORD *)v27 != 13 )
  {
    if ( v13 != 4 )
      return 0;
    if ( (unsigned __int8)sub_11FD80((char *)(v27 + 32), (__int64 *)&v28, 1) )
    {
      v14 = v28;
      if ( v28 <= 1 && (v25 ^ 1) == v28 )
      {
        if ( *(_DWORD *)v6 == 42 )
        {
          if ( v25 )
            v13 = 6;
        }
        else
        {
          v13 = *(_DWORD *)v6 - 11;
          if ( v25 )
          {
            if ( *(_DWORD *)v6 == 15 )
              v13 = 6;
            else
              v13 = sub_32E9E0(v13);
          }
        }
        *(_DWORD *)v6 = v13;
        *(_QWORD *)(v6 + 24) = *(_QWORD *)(v9 + 24);
        goto LABEL_24;
      }
    }
    v12 = v27;
    if ( *(_DWORD *)v27 != 13 )
      return 0;
  }
  if ( !(unsigned __int8)sub_11FD80((char *)(v12 + 32), v29, 0) || v29[0] != 1 || v25 )
    return 0;
  v15 = v6 + 48;
  v16 = *(unsigned __int64 **)(a1[60] + 112LL);
  if ( *(_DWORD *)v6 == 42 )
  {
    if ( *(_BYTE *)(v6 + 32) == 1 && !*(_DWORD *)(v6 + 40) )
    {
      if ( !sub_125B60((unsigned __int8 *)(v27 + 48), v27 + 64, 0, *(double *)a3.m128i_i64) )
        return 0;
      v19 = *(_QWORD *)(v27 + 16);
      if ( !v19 )
        return 0;
      if ( *(_DWORD *)(v19 + 36) < *(_DWORD *)(v27 + 52) )
        return 0;
      v24 = *(_QWORD *)(v27 + 16);
      v22 = (unsigned __int8 *)(v19 + 32);
      if ( !sub_1255D0((unsigned __int8 *)(v19 + 32), (__int64)v16, v27 + 48, 1, *(double *)a3.m128i_i64)
        || !sub_A2350((char *)(v24 + 48), 1, 0)
        || *(_BYTE *)(v24 + 64) != 1
        || *(_DWORD *)(v24 + 72) )
      {
        return 0;
      }
      sub_125180((unsigned __int8 *)(v6 + 32), v22);
      v15 = v6 + 48;
    }
  }
  else if ( *(_DWORD *)v6 == 48 )
  {
    v20 = sub_A2350((char *)(v6 + 48), 1, 0);
    v15 = v6 + 48;
    if ( v20 )
    {
      if ( *(_DWORD *)(v27 + 52) > *(_DWORD *)(v6 + 36) )
        return 0;
      v21 = sub_1255D0((unsigned __int8 *)(v6 + 32), (__int64)v16, v27 + 48, 1, *(double *)a3.m128i_i64);
      v15 = v6 + 48;
      if ( !v21 )
        return 0;
    }
  }
  *(_DWORD *)v6 = 33;
  sub_120A10(v15, v16, 0, *(_DWORD *)(v6 + 36), **(_QWORD **)(v9 + 40), 0);
LABEL_24:
  v17 = a1[8];
  v18 = *(unsigned int *)(v6 + 72);
  if ( (unsigned int)v18 >= *(_DWORD *)(v17 + 64) )
    sub_167AF0(*(double *)a3.m128i_i64);
  v23 = *(_QWORD *)(*(_QWORD *)(v17 + 528) + 8 * v18);
  sub_123A40((__int64)v29, (unsigned __int8 *)(v27 + 64), v23, v14);
  sub_167DA0((__int64)a1, a2, v23, *(_DWORD *)v6, (__int64)v29, v9, a3);
  sub_11CDA0((__int64)v29);
  if ( v26 == a1 )
    sub_11D5A0(v27);
  sub_66FA0(a1[8], 1);
  return v4;
}

