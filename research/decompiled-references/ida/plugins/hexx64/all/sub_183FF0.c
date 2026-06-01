__int64 __fastcall sub_183FF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __m128i a5)
{
  unsigned int v7; // eax
  int v8; // r13d
  unsigned int v9; // ebx
  char v11; // al
  int v12; // r12d
  int v13; // esi
  int v14; // r8d
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r15
  int v19; // r13d
  unsigned __int8 v20; // al
  __int64 v21[11]; // [rsp+0h] [rbp-58h] BYREF

  v21[3] = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 20) = 0;
  v7 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 == 4 )
  {
LABEL_9:
    v11 = *(_BYTE *)(a3 + 32);
    if ( v11 == 4 )
    {
      v18 = *(_QWORD *)(a3 + 40);
      if ( *(_DWORD *)v18 == 2 )
      {
        v19 = *(_DWORD *)(v18 + 68);
        sub_123A40((__int64)v21, (unsigned __int8 *)(v18 + 48), a3, a4);
        sub_183610(*(_QWORD *)(a2 + 480), (__int64)v21);
        v9 = sub_13C7E0(a2, a1, (int *)v18, v18 + 32, (__int64)v21, 0xFFFFFFFF, a5);
        if ( (_BYTE)v9 )
          *(_DWORD *)(a1 + 4) = v19;
        goto LABEL_7;
      }
    }
    else if ( v11 == 6 && (unsigned __int8)is_spec_ea() )
    {
      return 0;
    }
    sub_125180((unsigned __int8 *)a1, (unsigned __int8 *)(a3 + 32));
    return 1;
  }
  if ( v7 <= 4 )
  {
    if ( v7 != 1 )
    {
      if ( v7 == 2 )
      {
        v8 = *(_DWORD *)(a3 + 68);
        sub_123A40((__int64)v21, (unsigned __int8 *)(a3 + 48), a3, a4);
        sub_183610(*(_QWORD *)(a2 + 480), (__int64)v21);
        v9 = sub_13C7E0(a2, a1, (int *)a3, a3 + 32, (__int64)v21, 0xFFFFFFFF, a5);
        if ( (_BYTE)v9 )
          *(_DWORD *)(a1 + 4) = v8;
LABEL_7:
        sub_11CDA0((__int64)v21);
        return v9;
      }
      return 0;
    }
    goto LABEL_9;
  }
  if ( v7 != 56 )
    return 0;
  v12 = sub_183E40(*(_QWORD *)(a2 + 480), a3, 0, *(double *)a5.m128i_i64);
  if ( v12 < 0 )
    return 0;
  v13 = 0;
  if ( *(_BYTE *)(a3 + 64) == 8 )
    v13 = *(_DWORD *)(*(_QWORD *)(a3 + 72) + 284LL);
  v14 = sub_32FB00(*(_QWORD *)(a2 + 480), v13);
  v15 = *(_DWORD *)(a1 + 124);
  if ( v15 )
  {
    if ( v15 != v14 )
      return 0;
  }
  *(_DWORD *)(a1 + 124) = v14;
  v16 = *(_QWORD *)(a3 + 72);
  v17 = *(_QWORD *)(v16 + 24);
  if ( *(_BYTE *)(a3 + 64) == 8 && *(_DWORD *)(v16 + 284) == 2 )
  {
    if ( !(unsigned __int8)sub_11FD80((char *)(v17 + 80), v21, 0)
      || (unsigned __int8)(LOBYTE(v21[0]) - 32) > 0x5Fu && (unsigned __int8)(LOBYTE(v21[0]) - 9) > 1u )
    {
      return 0;
    }
    v20 = v21[0];
    *(_BYTE *)(a1 + 20) = 1;
    *(_DWORD *)(a1 + 16) = v20;
    *(_DWORD *)(a1 + 4) = v12;
    return 1;
  }
  return sub_1836F0(*(_QWORD *)(a2 + 480), a1, (unsigned __int8 *)(v17 + 80), (unsigned int)v12, v14);
}

