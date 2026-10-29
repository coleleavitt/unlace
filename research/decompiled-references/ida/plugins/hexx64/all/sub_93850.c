__int64 __fastcall sub_93850(
        __int64 a1,
        char *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        int a6,
        int a7,
        __int64 a8)
{
  unsigned __int8 *v8; // r15
  unsigned __int8 *v9; // r12
  int v10; // eax
  int v11; // edx
  unsigned int v13; // r14d
  unsigned __int8 *v15; // rdx
  char v16; // al
  unsigned __int8 *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r14
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r15
  int v25; // eax
  int v26; // eax
  unsigned __int8 *v27; // rdx
  unsigned __int8 *v28; // [rsp+0h] [rbp-88h]
  __int64 v29; // [rsp+0h] [rbp-88h]
  int v30; // [rsp+Ch] [rbp-7Ch]
  __int64 v31; // [rsp+10h] [rbp-78h]
  char v32[16]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v33[11]; // [rsp+30h] [rbp-58h] BYREF

  v8 = a5;
  v9 = a3;
  v10 = *(_DWORD *)a5;
  v11 = *(_DWORD *)a3;
  v33[3] = __readfsqword(0x28u);
  if ( v10 == a6 )
  {
    v26 = *(_DWORD *)a4;
    if ( *(_DWORD *)a4 == a6 )
    {
      v26 = v11;
    }
    else
    {
      if ( a6 != v11 )
        return 0;
      v27 = v9;
      v9 = a4;
      a4 = v27;
    }
    if ( a7 != v26 )
      return 0;
  }
  else
  {
    if ( a6 != v11 )
      return 0;
    if ( *(_DWORD *)a4 != a6 )
      return 0;
    v15 = v9;
    v9 = a5;
    v8 = v15;
    if ( a7 != v10 )
      return 0;
  }
  v28 = a4;
  v16 = sub_125B60(v9 + 32, (__int64)(a4 + 32), 0);
  v17 = v28;
  if ( !v16 )
  {
    if ( sub_125B60(v9 + 32, (__int64)(v8 + 32), 0) )
    {
      v17 = v8;
      v8 = v28;
      goto LABEL_8;
    }
    return 0;
  }
LABEL_8:
  if ( v9[48] != 4 )
    return 0;
  v18 = *((_QWORD *)v9 + 7);
  if ( *(_DWORD *)v18 != 13 )
    return 0;
  if ( v17[48] != 4 )
    return 0;
  v19 = *((_QWORD *)v17 + 7);
  if ( *(_DWORD *)v19 != 13 )
    return 0;
  v31 = (__int64)v17;
  v30 = *((_DWORD *)v9 + 9);
  v29 = *((_QWORD *)v9 + 7);
  if ( !(unsigned __int8)sub_11FD80((char *)(v18 + 32), v33, 1u) )
    return 0;
  if ( 8 * v30 != v33[0] )
    return 0;
  if ( !(unsigned __int8)sub_11FD80((char *)(v19 + 48), v33, 1u) )
    return 0;
  if ( 8 * v30 != v33[0] )
    return 0;
  if ( !sub_125B60((unsigned __int8 *)(v29 + 48), (__int64)(v8 + 48), 0) )
    return 0;
  LOBYTE(v20) = sub_125B60((unsigned __int8 *)(v29 + 48), v19 + 32, 0);
  v13 = v20;
  if ( !(_BYTE)v20 )
    return 0;
  sub_123A40((__int64)v32, v8 + 48, v21, v22);
  sub_123A40((__int64)v33, (unsigned __int8 *)(v31 + 32), v23, v31);
  if ( a6 == 22 )
    sub_1571F0(a1, (__int64)a2, (__int64)v33, (__int64)a2, (__int64)(v8 + 32), 0);
  else
    sub_157210(a1, (__int64)a2, (__int64)(v8 + 32), (__int64)a2, (__int64)v33, 0);
  v24 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  sub_11CA10(a2 + 32, (char *)v33);
  sub_11CA10(a2 + 48, v32);
  v25 = *((_DWORD *)a2 + 9);
  *(_DWORD *)a2 = a6;
  *((_DWORD *)a2 + 17) = v25;
  sub_12B6F0((__int64)a2, v24, a8, -1, 1);
  *((_DWORD *)a2 + 17) = v30;
  sub_11CDA0((__int64)v33);
  sub_11CDA0((__int64)v32);
  return v13;
}

