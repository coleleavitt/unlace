__int64 __fastcall sub_724D0(__int64 a1)
{
  __int64 result; // rax

  result = sub_72110(a1, 0);
  if ( (_BYTE)result )
  {
    if ( (**(_DWORD **)(a1 + 376) & 0x404) == 0x400 )
      *(_BYTE *)(a1 + 515) = 1;
  }
  return result;
}
