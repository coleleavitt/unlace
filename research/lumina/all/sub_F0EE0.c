__int64 __fastcall sub_F0EE0(__int64 a1)
{
  __int64 result; // rax

  LODWORD(result) = sub_F0D30(a1, a1 + 32);
  *(_DWORD *)(a1 + 8) = 1;
  return (int)result;
}
