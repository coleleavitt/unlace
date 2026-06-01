__int64 __fastcall sub_1194E0(char *a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5)
{
  _DWORD *v7; // rdi
  int v9; // r14d
  __int64 v10; // rbp
  _DWORD *v11; // rax
  _DWORD *v12; // r12
  int v13; // eax
  __int64 v14; // r9
  unsigned __int8 *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // r9
  __int64 v25; // rbx
  unsigned __int8 *v27; // [rsp+8h] [rbp-80h]
  char *v28; // [rsp+18h] [rbp-70h] BYREF
  char v29[4]; // [rsp+20h] [rbp-68h] BYREF
  int v30; // [rsp+24h] [rbp-64h]
  __int64 v31; // [rsp+28h] [rbp-60h]
  _QWORD v32[11]; // [rsp+30h] [rbp-58h] BYREF

  v32[3] = __readfsqword(0x28u);
  if ( *(_BYTE *)a4 != 4 )
    return 0;
  v7 = *(_DWORD **)(a4 + 8);
  if ( *v7 != 14 )
    return 0;
  if ( !a2 )
    return 0;
  v9 = *(_DWORD *)a1;
  v10 = *(_QWORD *)(a2[30].m128i_i64[0] + 112);
  v11 = (_DWORD *)sub_11C8E0((__int64)v7, &v28, 0);
  v12 = v11;
  if ( !v11 )
    return 0;
  v13 = *v11;
  switch ( v13 )
  {
    case 10:
      if ( *((_BYTE *)v12 + 32) != 4 )
        return 0;
      v12 = *((_DWORD **)v12 + 5);
      if ( (unsigned int)(*v12 - 15) > 1 )
        return 0;
      goto LABEL_10;
    case 9:
      if ( *((_BYTE *)v12 + 32) != 4 )
        return 0;
      v12 = *((_DWORD **)v12 + 5);
      if ( *v12 != 34 || v12[9] < *(_DWORD *)(a5 + 4) )
        return 0;
LABEL_22:
      v24 = a5;
      v27 = (unsigned __int8 *)(v12 + 8);
      if ( !(unsigned __int8)sub_12EA80(v10, a2, a3, (__int64)(v12 + 8), a3, v24, 1) )
        return 0;
LABEL_23:
      if ( *((_BYTE *)v12 + 48) == 2 )
      {
        v25 = sub_32ABC0(*(_QWORD *)(*((_QWORD *)v12 + 7) + 16LL), *((_DWORD *)v28 + 1), 0);
        if ( (unsigned __int8)sub_11FD80(v28, v32, 0) )
        {
          if ( *(_DWORD *)a1 == 12 )
            v32[0] = sub_32ABC0(-v32[0], *((_DWORD *)v28 + 1), 0);
          v15 = (unsigned __int8 *)(v12 + 12);
          if ( v32[0] == v25 )
            goto LABEL_13;
        }
      }
      return 0;
    case 34:
      goto LABEL_22;
  }
  if ( (unsigned int)(v13 - 15) > 1 )
    return 0;
LABEL_10:
  v14 = a5;
  v27 = (unsigned __int8 *)(v12 + 8);
  if ( !(unsigned __int8)sub_12EA80(v10, a2, a3, (__int64)(v12 + 8), a3, v14, 1) )
    return 0;
  if ( v9 == 12 )
    goto LABEL_23;
  v15 = (unsigned __int8 *)(v12 + 12);
  if ( !(unsigned __int8)sub_12EA80(v10, a2, a3, (__int64)(v12 + 12), a3, (__int64)v28, 1) )
    return 0;
LABEL_13:
  *(_DWORD *)a1 = (*v12 == 16) + 17;
  sub_123A40((__int64)v29, v27, v16, v17);
  sub_123A40((__int64)v32, v15, v18, v19);
  sub_11CA10(a1 + 32, v29);
  sub_11CA10(a1 + 48, (char *)v32);
  if ( *((_DWORD *)a1 + 9) > *((_DWORD *)a1 + 17) )
  {
    v22 = j__qalloc_or_throw(80, (__int64)v32, v20, v21);
    *(_QWORD *)(v22 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v22 + 40) = 0;
    *(_QWORD *)(v22 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v22 + 56) = 0;
    *(_QWORD *)(v22 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v22 + 72) = 0;
    *(_OWORD *)(v22 + 8) = 0;
    sub_1253A0(v22, (__int64)a1);
    sub_11CDA0((__int64)v29);
    v23 = *((_DWORD *)a1 + 9);
    v29[0] = 4;
    v31 = v22;
    v30 = v23;
    sub_11CDA0(v22 + 64);
    *(_DWORD *)(v31 + 68) = *((_DWORD *)a1 + 9);
    sub_11CA10(a1 + 32, v29);
    sub_11CDA0((__int64)(a1 + 48));
    *(_QWORD *)a1 = 10;
  }
  sub_11CDA0((__int64)v32);
  sub_11CDA0((__int64)v29);
  return 1;
}

