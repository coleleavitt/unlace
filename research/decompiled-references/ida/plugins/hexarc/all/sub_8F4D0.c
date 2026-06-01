__int64 __fastcall sub_8F4D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _DWORD *v6; // r14
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rax
  _DWORD *v14; // rdx
  _DWORD *v15; // rax
  _DWORD *v16; // r15
  _DWORD *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // [rsp+0h] [rbp-88h] BYREF
  __int64 v22; // [rsp+8h] [rbp-80h] BYREF
  __int64 v23; // [rsp+10h] [rbp-78h] BYREF
  __int64 v24; // [rsp+18h] [rbp-70h] BYREF
  __int64 v25; // [rsp+20h] [rbp-68h] BYREF
  __int64 v26; // [rsp+28h] [rbp-60h]
  unsigned __int64 v27; // [rsp+48h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  if ( *(_BYTE *)a5 != 4 )
    return 0;
  v6 = *(_DWORD **)(a5 + 8);
  if ( *v6 != 14 || !v6 || (unsigned int)sub_8F430(a3, &v25, 4, 12) != 3 )
    return 0;
  v10 = 0;
  while ( 1 )
  {
    v11 = *(_QWORD *)(v9 + 8 * v10);
    if ( *(_BYTE *)v11 == 4 && **(_DWORD **)(v11 + 8) == 11 )
      break;
    if ( ++v10 == 3 )
      return 0;
  }
  memmove((void *)(v9 + 8LL * ((int)v10 + 1) - 8), (const void *)(v9 + 8LL * ((int)v10 + 1)), 8LL * (2 - (int)v10));
  if ( !v11 )
    return 0;
  v12 = *(_QWORD *)(v11 + 8);
  if ( *(_BYTE *)(v12 + 32) != 4 )
    return 0;
  v13 = *(_QWORD *)(v12 + 40);
  if ( *(_DWORD *)v13 != 14 )
    return 0;
  if ( !v13 )
    return 0;
  if ( *(_BYTE *)(v13 + 32) != 4 )
    return 0;
  v14 = *(_DWORD **)(v13 + 40);
  if ( *v14 != 9 )
    return 0;
  if ( !v14 )
    return 0;
  if ( *(_BYTE *)(v13 + 48) != 4 )
    return 0;
  v15 = *(_DWORD **)(v13 + 56);
  if ( *v15 != 9 )
    return 0;
  if ( !v15 )
    return 0;
  if ( !(unsigned int)sub_129DC0(
                        *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL),
                        a1,
                        a4,
                        (_DWORD)v6,
                        a2,
                        (int)v14 + 32,
                        (__int64)(v15 + 8),
                        2) )
    return 0;
  if ( *(_BYTE *)v25 != 4 )
    return 0;
  v16 = *(_DWORD **)(v25 + 8);
  if ( *v16 != 14 )
    return 0;
  if ( !v16 )
    return 0;
  if ( *(_BYTE *)v26 != 4 )
    return 0;
  v17 = *(_DWORD **)(v26 + 8);
  if ( *v17 != 14 )
    return 0;
  if ( !v17 )
    return 0;
  v23 = sub_12C220(a1, a2, (_DWORD)v17, a4, (_DWORD)v6, (unsigned int)&v22, (__int64)&v21, 0);
  if ( !v23 )
    return 0;
  v18 = sub_12C220(a1, a2, (_DWORD)v16, a4, (_DWORD)v6, (unsigned int)&v24, (__int64)&v23, 0);
  if ( v21 != v18 )
    return 0;
  sub_150B30(a1, a4, v21, a2, v22, 0);
  sub_150B30(a1, a4, v23, a2, v24, 0);
  v19 = *(_QWORD *)(a5 + 8);
  v20 = *(_DWORD *)(v21 + 4);
  *(_DWORD *)(a5 + 4) = v20;
  *(_DWORD *)(v19 + 68) = v20;
  return 1;
}

