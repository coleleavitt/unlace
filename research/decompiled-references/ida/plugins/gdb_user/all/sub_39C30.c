__int64 __fastcall sub_39C30(__int64 a1, __int64 *a2)
{
  int v2; // eax
  int v3; // edx
  __int64 result; // rax

  v2 = sub_39BC0(a1);
  *(_BYTE *)(a1 + 16) = 0;
  v3 = v2;
  result = 0;
  if ( v3 == 1 )
  {
    sub_382A0(a1, a2);
    return 1;
  }
  return result;
}

