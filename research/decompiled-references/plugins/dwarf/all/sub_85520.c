__int64 __fastcall sub_85520(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // ebx

  result = *(unsigned int *)(a2 + 24);
  if ( (_DWORD)result == 0x80000000 )
  {
    v4 = *(unsigned __int16 *)(a3 + 40);
    return v4 + (unsigned int)get_frame_retsize(a3);
  }
  else if ( (*(_BYTE *)(a3 + 17) & 1) == 0 )
  {
    return (unsigned int)(result - *(_DWORD *)(a3 + 56));
  }
  return result;
}
