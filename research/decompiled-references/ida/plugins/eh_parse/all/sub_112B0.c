__int64 __fastcall sub_112B0(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rdx
  char v3; // al
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 124) & 2;
  if ( v1 )
  {
    v1 = 16;
    v2 = -1;
  }
  else
  {
    v2 = 0;
  }
  *(_DWORD *)(a1 + 320) = v1;
  *(_QWORD *)(a1 + 304) = v2;
  v3 = getinf_flag(3, 4);
  *(_QWORD *)(a1 + 296) = -1;
  *(_QWORD *)(a1 + 312) = 0;
  result = v3 == 0 ? 2 : 9;
  *(_DWORD *)(a1 + 320) |= result;
  return result;
}

