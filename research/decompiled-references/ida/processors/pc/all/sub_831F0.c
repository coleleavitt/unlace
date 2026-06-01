__int64 __fastcall sub_831F0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  result = *(unsigned int *)(v1 + 8);
  if ( (result & 0x100) == 0 )
  {
    if ( (result & 1) != 0 || (result = (unsigned int)~(_DWORD)result, (result & 0x46) == 0) )
      *(_DWORD *)(v1 + 8) = 1094;
    else
      *(_DWORD *)(v1 + 8) = 512;
  }
  return result;
}
