__int64 __fastcall sub_711D0(__int64 a1, char a2)
{
  __int16 v3; // ax
  __int64 result; // rax
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 v7; // rdx
  int v8; // esi
  _QWORD v9[5]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *(_WORD *)(a1 + 40);
  v9[1] = __readfsqword(0x28u);
  if ( v3 == 20 || v3 == 522 )
  {
    v5 = a1 + 56;
  }
  else
  {
    if ( (*(_QWORD *)(a1 + 40) & 0x10000FFFFLL) != 0x10000000CLL )
      return 0;
    v5 = a1 + 96;
  }
  if ( (*(_BYTE *)(a1 + 48) & 0xF) != 0xE )
    return 0;
  if ( !(unsigned __int8)same_value_jpt() )
    return 0;
  v6 = *(_QWORD *)(a1 + 888);
  v9[0] = 0;
  result = sub_839C0(v6, v9, a1 + 16, v5 + 40, 0);
  if ( !(_BYTE)result )
    return 0;
  *(_WORD *)(*(_QWORD *)(a1 + 376) + 4LL) = v9[0];
  if ( a2 )
  {
    v7 = *(_QWORD *)(a1 + 376);
    v8 = *(unsigned __int16 *)(v5 + 6);
    *(_BYTE *)(v7 + 68) = *(_BYTE *)(v5 + 5);
    *(_DWORD *)(v7 + 64) = v8;
  }
  return result;
}
