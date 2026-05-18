__int64 __fastcall sub_110F40(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int16 v3; // ax
  __int64 result; // rax
  __int64 v5; // r13

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_WORD *)(v2 + 40) & 0xFFDF;
  if ( a2 == 1 )
    v3 = *(_WORD *)(v2 + 40) & 0xFFDF | 0x20;
  *(_WORD *)(v2 + 40) = v3;
  result = sub_110580(a1, 0, 0);
  if ( !(_DWORD)result )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(v2 + 24) + 80LL);
    if ( *(_BYTE *)(v5 + 18) != (_BYTE)a2 || (_BYTE)a2 != *(_BYTE *)(v5 + 19) )
    {
      result = sub_110580(a1, 2, 0);
      if ( !(_DWORD)result )
      {
        result = sub_10D290(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 112LL), 2);
        if ( !(_DWORD)result )
        {
          *(_BYTE *)(v5 + 18) = a2;
          *(_BYTE *)(v5 + 19) = a2;
        }
      }
    }
  }
  *(_WORD *)(v2 + 40) &= ~0x20u;
  return result;
}
