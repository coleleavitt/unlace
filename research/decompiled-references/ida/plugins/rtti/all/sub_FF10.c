__int64 __fastcall sub_FF10(__int64 a1)
{
  char v1; // al
  __int64 v2; // rdx
  __int64 result; // rax

  v1 = getinf();
  v2 = 2;
  result = v1 & 6;
  if ( (_DWORD)result )
    v2 = 4LL * ((_DWORD)result != 2) + 4;
  *(_QWORD *)(a1 + 368) = v2;
  return result;
}
