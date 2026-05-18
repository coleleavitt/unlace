__int64 __fastcall sub_D1DE0(__int64 a1)
{
  __int64 result; // rax

  result = a1;
  if ( a1 )
  {
    while ( *(_BYTE *)(result - 1) || *(_BYTE *)(result - 2) || *(_BYTE *)(result - 3) || *(_BYTE *)(result - 4) )
      --result;
  }
  return result;
}
