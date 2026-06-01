__int64 __fastcall sub_13FB0(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 2777) != 0xFF )
  {
    switch ( a3 )
    {
      case 2:
        return sub_1AF80(a2);
      case 4:
        return sub_1AB90(a2);
      case 1:
        return sub_1AD40(a2);
    }
  }
  return result;
}

