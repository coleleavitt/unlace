__int64 __fastcall sub_16DDA0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebp
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // eax
  int v12; // eax
  __int64 v13; // [rsp+8h] [rbp-50h]
  __int64 v14[9]; // [rsp+10h] [rbp-48h] BYREF

  v14[1] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 56);
  if ( *(_DWORD *)v3 != 43 )
    return 0;
  if ( *(_BYTE *)(v3 + 32) != 4 )
    return 0;
  v6 = *(_QWORD *)(v3 + 40);
  if ( *(_DWORD *)v6 != 56 )
    return 0;
  if ( !v6 )
    return 0;
  if ( *(_BYTE *)(v6 + 64) != 8 )
    return 0;
  v7 = *(_QWORD *)(v6 + 72);
  if ( *(_DWORD *)(v7 + 284) != 17 )
    return 0;
  v8 = *(_QWORD *)(a2 + 48);
  if ( *(_DWORD *)v8 != 4 )
    return 0;
  if ( !(unsigned __int8)sub_11FD80((char *)(v8 + 32), v14, 1) )
    return 0;
  if ( v14[0] != -1 )
    return 0;
  if ( *(_DWORD *)(v8 + 36) != *(_DWORD *)(*(_QWORD *)(v7 + 24) + 4LL) )
    return 0;
  if ( *(_QWORD *)(v8 + 8) )
    return 0;
  v13 = sub_167E70(*(_QWORD *)(a1 + 64), *(_DWORD *)(*(_QWORD *)(a1 + 56) + 72LL), a3);
  v9 = *(_QWORD *)(v13 + 48);
  if ( !v9 )
    return 0;
  if ( *(_DWORD *)v9 == 4 )
  {
    if ( *(_BYTE *)(v9 + 32) != 4 )
      return 0;
    v9 = *(_QWORD *)(v9 + 40);
  }
  if ( *(_DWORD *)v9 == 56 && *(_BYTE *)(v9 + 32) == 6 && *(_BYTE *)(v9 + 64) == 8 )
  {
    v10 = *(_QWORD *)(v9 + 72);
    if ( *(_QWORD *)(v10 + 32) == 1 )
    {
      LOBYTE(v11) = sub_125B60(*(unsigned __int8 **)(v10 + 24), v8 + 64, 0, a3);
      v4 = v11;
      if ( (_BYTE)v11 )
      {
        copy_tinfo_t();
        *(_DWORD *)(v7 + 284) = 18;
        qfree(*(_QWORD *)(v6 + 40));
        *(_QWORD *)(v6 + 40) = qstrdup();
        v12 = *(_DWORD *)(v8 + 68);
        *(_DWORD *)(v6 + 68) = v12;
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 36LL) = v12;
        sub_11CDA0(*(_QWORD *)(a1 + 56) + 48LL);
        sub_11CA10((char *)(*(_QWORD *)(a1 + 56) + 64LL), (char *)(v8 + 64));
        **(_DWORD **)(a1 + 56) = 4;
        sub_11D5A0(v8);
        sub_112550(a1, a2, v13);
        sub_66FA0(*(_QWORD *)(a1 + 64), 1);
        return v4;
      }
    }
  }
  return 0;
}

