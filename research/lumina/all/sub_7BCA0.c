__int64 __fastcall sub_7BCA0(__int64 a1, _BYTE *a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 56);
  *(_DWORD *)(a1 + 56) = result + 500;
  if ( *a2 )
  {
    result = (unsigned int)(result + 800);
    *(_DWORD *)(a1 + 56) = result;
  }
  return result;
}
