__int64 __fastcall sub_830E0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(result + 9) & 1) == 0 )
  {
    *(_DWORD *)(result + 8) = 1;
    *(_QWORD *)result = a2;
  }
  return result;
}
