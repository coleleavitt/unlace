__int64 __fastcall sub_3E7760(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  unsigned __int8 v7; // al
  __int64 v8; // rdx
  unsigned __int8 v9; // [rsp+Fh] [rbp-69h]
  __int64 v10; // [rsp+18h] [rbp-60h] BYREF
  __int64 v11; // [rsp+20h] [rbp-58h] BYREF
  __int64 v12; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v13[9]; // [rsp+30h] [rbp-48h] BYREF

  v13[3] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 68) != *(_DWORD *)(a1 + 84) )
    return 0;
  if ( *(_BYTE *)(a2 + 32) != 4 )
    return 0;
  v3 = *(_QWORD *)(a2 + 40);
  if ( (unsigned int)(*(_DWORD *)v3 - 12) > 1 )
    return 0;
  if ( *(_BYTE *)(v3 + 32) != 1 )
    return 0;
  if ( *(_DWORD *)(a1 + 468) != *(_DWORD *)(v3 + 40) )
    return 0;
  if ( !(unsigned __int8)sub_154850(v3 + 48, &v10, 0) )
    return 0;
  if ( (_WORD)v10 )
    return 0;
  if ( *(_BYTE *)(a2 + 48) != 4 )
    return 0;
  v4 = *(_QWORD *)(a2 + 56);
  if ( *(_DWORD *)v4 != 8 )
    return 0;
  if ( *(_DWORD *)(v4 + 36) != 2 )
    return 0;
  if ( *(_BYTE *)(v4 + 32) != 4 )
    return 0;
  v5 = *(_QWORD *)(v4 + 40);
  if ( *(_DWORD *)v5 != 10 )
    return 0;
  if ( *(_BYTE *)(v5 + 32) != 4 )
    return 0;
  v6 = *(_DWORD **)(v5 + 40);
  if ( (unsigned int)(*v6 - 12) > 1 )
    return 0;
  if ( !(unsigned __int8)sub_154850((__int64)(v6 + 8), &v11, 0) )
    return 0;
  v7 = sub_154850((__int64)(v6 + 12), &v12, 0);
  if ( !v7 )
    return 0;
  v8 = v11 - v12;
  if ( *v6 == 12 )
    v8 = v11 + v12;
  v11 = v8;
  if ( (((_DWORD)v8 + 0x8000) & 0xFFFF0000) != v10 )
    return 0;
  v9 = v7;
  v13[0] = 0xFFFFFFFF00000000LL;
  v13[1] = 0;
  sub_117E50((char *)v13, (char *)(v3 + 32));
  sub_117E50((char *)(a2 + 32), (char *)v13);
  sub_117E50((char *)v13, (char *)(*(_QWORD *)(v4 + 40) + 32LL));
  sub_117E50((char *)(a2 + 48), (char *)v13);
  sub_1181E0((__int64)v13);
  return v9;
}

