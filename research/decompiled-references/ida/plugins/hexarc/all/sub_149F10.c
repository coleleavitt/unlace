__int64 __fastcall sub_149F10(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  _QWORD v5[3]; // [rsp+0h] [rbp-18h] BYREF

  v5[1] = __readfsqword(0x28u);
  if ( *(_BYTE *)a1 != 4 )
    return 0;
  v2 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)v2 != 5 )
    return 0;
  if ( *(_BYTE *)(v2 + 32) != 4 )
    return 0;
  v3 = *(_QWORD *)(v2 + 40);
  if ( *(_DWORD *)v3 != 9 )
    return 0;
  if ( *(_BYTE *)(v3 + 32) != 4 )
    return 0;
  v4 = *(_QWORD *)(v3 + 40);
  if ( *(_DWORD *)v4 != 32 )
    return 0;
  result = sub_1196C0((char *)(v4 + 48), v5, 0);
  if ( !(_BYTE)result || v5[0] )
    return 0;
  return result;
}

