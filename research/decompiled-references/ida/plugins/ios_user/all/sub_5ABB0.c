__int64 __fastcall sub_5ABB0(__int64 a1, __int64 *a2)
{
  int v2; // eax
  int v3; // edx
  __int64 result; // rax

  v2 = sub_5AB40(a1);
  *(_BYTE *)(a1 + 16) = 0;
  v3 = v2;
  result = 0;
  if ( v3 == 1 )
  {
    sub_59220(a1, a2);
    return 1;
  }
  return result;
}

