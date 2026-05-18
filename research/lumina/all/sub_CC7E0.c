__int64 __fastcall sub_CC7E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // ebx
  __int64 v6; // rdi

  result = *(unsigned int *)(a1 + 40);
  if ( (int)result > 0 )
  {
    v5 = 0;
    do
    {
      result = *(_QWORD *)(a1 + 32) + 32LL * v5;
      v6 = *(_QWORD *)(result + 8);
      if ( v6 && *(_BYTE *)(v6 + 17) && (*(_DWORD *)(v6 + 20))-- == 1 )
        result = sub_CC7D0(v6, a2, a3);
      ++v5;
    }
    while ( *(_DWORD *)(a1 + 40) > v5 );
  }
  return result;
}
