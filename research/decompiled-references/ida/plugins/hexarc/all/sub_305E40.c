_DWORD *__fastcall sub_305E40(__int64 a1)
{
  _DWORD *v3; // rax
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rbx
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v8[1] = __readfsqword(0x28u);
  while ( 2 )
  {
    switch ( *(_DWORD *)a1 )
    {
      case 5:
        if ( *(_BYTE *)(a1 + 32) != 4 )
          return nullptr;
        v3 = *(_DWORD **)(a1 + 40);
        if ( *v3 != 29 )
          return nullptr;
        return v3 + 8;
      case 8:
      case 0xA:
        if ( *(_BYTE *)(a1 + 32) != 4 )
          return nullptr;
        a1 = *(_QWORD *)(a1 + 40);
        continue;
      case 0xB:
        if ( *(_BYTE *)(a1 + 32) != 4 )
          return nullptr;
        v3 = *(_DWORD **)(a1 + 40);
        if ( *v3 != 8 )
          return nullptr;
        return v3 + 8;
      case 0xD:
        if ( !(unsigned __int8)sub_1196C0((char *)(a1 + 48), v8, 0) )
          return nullptr;
        if ( v8[0] != 1 )
          return nullptr;
        if ( *(_BYTE *)(a1 + 32) != 4 )
          return nullptr;
        v4 = *(_QWORD *)(a1 + 40);
        if ( *(_DWORD *)v4 != 9 )
          return nullptr;
        if ( *(_BYTE *)(v4 + 32) != 4 )
          return nullptr;
        v5 = *(_QWORD *)(v4 + 40);
        if ( *(_DWORD *)v5 != 35 || (*(_BYTE *)(v5 + 4) & 0x10) != 0 )
          return nullptr;
        v6 = 0;
        if ( (unsigned __int64)(8 * *(_DWORD *)(a1 + 36) - 1) < 0x40 )
          v6 = 1LL << (8 * *(_BYTE *)(a1 + 36) - 1);
        v7 = v6;
        if ( !(unsigned __int8)sub_1196C0((char *)(v5 + 48), v8, 0) || v7 != v8[0] )
          return nullptr;
        return (_DWORD *)(v5 + 32);
      case 0x18:
        if ( !(unsigned __int8)sub_14BF70(a1, v8) || 8 * *(_DWORD *)(a1 + 36) - 1 > SLODWORD(v8[0]) )
          return nullptr;
        return (_DWORD *)(a1 + 32);
      default:
        return nullptr;
    }
  }
}

