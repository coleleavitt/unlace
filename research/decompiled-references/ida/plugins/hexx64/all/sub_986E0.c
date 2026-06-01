__int64 __fastcall sub_986E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // r13d
  unsigned int v4; // r15d
  __int64 v6; // r14
  unsigned int v7; // eax
  int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r13
  int v13; // r9d
  int v14; // ebp
  int v15; // r9d
  unsigned __int8 *v16; // [rsp+8h] [rbp-80h]
  char *v17; // [rsp+10h] [rbp-78h]
  unsigned __int8 *v18; // [rsp+18h] [rbp-70h]
  unsigned __int8 *v19; // [rsp+20h] [rbp-68h]
  unsigned __int8 *v20; // [rsp+28h] [rbp-60h]
  unsigned __int64 v21; // [rsp+30h] [rbp-58h] BYREF
  __int64 v22; // [rsp+38h] [rbp-50h]
  unsigned __int64 v23; // [rsp+48h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 480);
  if ( !*(_DWORD *)(*(_QWORD *)(v2 + 112) + 16LL) )
    return 0;
  v3 = *(_DWORD *)(a2 + 68);
  if ( v3 != *(unsigned __int8 *)(v2 + 130) )
    return 0;
  if ( !(unsigned __int8)sub_11FD80((char *)(a2 + 48), &v21, 1u) )
    return 0;
  if ( 8 * v3 - 1 != v21 )
    return 0;
  v6 = *(_QWORD *)(a2 + 16);
  if ( !v6 )
    return 0;
  while ( !*(_DWORD *)v6
       || (unsigned int)(*(_DWORD *)v6 - 29) <= 0xC && sub_125B60((unsigned __int8 *)(v6 + 32), a2 + 32, 0) )
  {
    v6 = *(_QWORD *)(v6 + 16);
    if ( !v6 )
      return 0;
  }
  if ( *(_DWORD *)v6 != 4 )
    return 0;
  v17 = (char *)(a2 + 32);
  LOBYTE(v7) = sub_125B60((unsigned __int8 *)(v6 + 32), a2 + 32, 0);
  v4 = v7;
  if ( !(_BYTE)v7 || *(_QWORD *)(v6 + 24) == *(_QWORD *)(a2 + 24) )
    return 0;
  v18 = (unsigned __int8 *)(v6 + 64);
  v16 = (unsigned __int8 *)(a2 + 64);
  if ( (unsigned __int8)sub_12CF30(*(_QWORD *)(a1 + 64), v6 + 64, (unsigned __int8 *)(a2 + 64), 0, 0, v8) )
  {
    sub_123A40((__int64)&v21, v18, v9, v10);
    sub_1571F0(a1, *(_QWORD *)(v6 + 8), (__int64)&v21, *(_QWORD *)(a2 + 8), (__int64)v16, 1);
    *(_DWORD *)v6 = 8;
    sub_11CA10((char *)v18, (char *)&v21);
    *(_DWORD *)(v6 + 4) &= ~0x10u;
    sub_11D5A0(a2);
    sub_11CDA0((__int64)&v21);
    return v4;
  }
  if ( !sub_125B60((unsigned __int8 *)(v6 + 32), (__int64)v16, 0) )
    return 0;
  v11 = sub_122A00(*(_QWORD *)(a2 + 8));
  v12 = v11;
  if ( !v11 || *(_DWORD *)v11 != 4 )
    return 0;
  v20 = (unsigned __int8 *)(v11 + 32);
  if ( !sub_125B60((unsigned __int8 *)(v11 + 32), (__int64)v18, 0) )
  {
    if ( sub_125B60(v20, (__int64)v17, 0) )
    {
      v19 = (unsigned __int8 *)(v12 + 64);
      if ( (unsigned __int8)sub_12CF30(*(_QWORD *)(a1 + 64), (__int64)v18, (unsigned __int8 *)(v12 + 64), 0, 0, v15) )
      {
        v21 = 0xFFFFFFFF00000000LL;
        v22 = 0;
        sub_125180((__int64)&v21, v18);
        sub_1571F0(a1, *(_QWORD *)(v6 + 8), (__int64)&v21, *(_QWORD *)(v12 + 8), (__int64)v19, 1);
        v14 = 3;
        goto LABEL_23;
      }
    }
    return 0;
  }
  v19 = (unsigned __int8 *)(v12 + 64);
  if ( !(unsigned __int8)sub_12CF30(*(_QWORD *)(a1 + 64), v12 + 64, v16, 0, 0, v13) )
    return 0;
  v22 = 0;
  v21 = 0xFFFFFFFF00000000LL;
  sub_125180((__int64)&v21, v19);
  sub_1571F0(a1, *(_QWORD *)(v12 + 8), (__int64)&v21, *(_QWORD *)(a2 + 8), (__int64)v16, 1);
  v14 = 2;
LABEL_23:
  *(_DWORD *)v12 = 8;
  sub_11CA10((char *)v20, v17);
  sub_11CA10((char *)v19, (char *)&v21);
  *(_DWORD *)(v12 + 4) &= ~0x10u;
  sub_11D5A0(a2);
  if ( v14 == 3 )
    sub_11D5A0(v6);
  sub_11CDA0((__int64)&v21);
  return v4;
}

