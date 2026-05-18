__int64 __fastcall sub_11C930(__int64 a1, char a2, int a3)
{
  __int64 v3; // rbx
  int v4; // ebp
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 160);
  if ( !v3 )
    v3 = a1;
  v4 = 1 << a3;
  result = *(unsigned int *)(v3 + 116);
  if ( ((1 << a3) & (unsigned int)result) == 0
    && (result = v4 | (unsigned int)result, *(_DWORD *)(v3 + 116) = result, a3 == 1) )
  {
    result = sub_11C510(v3);
    *(_DWORD *)(v3 + 112) |= v4;
    *(_BYTE *)(v3 + 32) |= a2;
  }
  else
  {
    *(_DWORD *)(v3 + 112) |= v4;
    *(_BYTE *)(v3 + 32) |= a2;
  }
  return result;
}
