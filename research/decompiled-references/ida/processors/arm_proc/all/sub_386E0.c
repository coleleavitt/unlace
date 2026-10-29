__int64 __fastcall sub_386E0(__int64 a1, __int64 a2)
{
  char v2; // r11
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 i; // rdx
  __int64 v7; // rcx
  _DWORD v8[2]; // [rsp+10h] [rbp-28h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v2 = 0;
  v4 = 0;
  v9 = __readfsqword(0x28u);
  result = 0;
  v8[0] = 3;
  do
  {
    for ( i = 0; i != 4; ++i )
    {
      if ( v8[v4] == i )
        break;
      if ( (*(_QWORD *)(a2 + 1 * v4 + 72) & (1LL << i)) == 0 )
      {
        v7 = result & ~(1LL << v2);
        result |= 1LL << v2;
        if ( (*(_QWORD *)(a1 + 1 * v4 + 64) & (1LL << i)) == 0 )
          result = v7;
        ++v2;
      }
    }
    --v4;
  }
  while ( v4 != -5 );
  return result;
}

