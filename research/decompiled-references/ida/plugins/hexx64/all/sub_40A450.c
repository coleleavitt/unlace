__int64 __fastcall sub_40A450(__int64 a1, int a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx

  v2 = sub_40A3A0(a1, a2, 1);
  v3 = 1;
  if ( *(_DWORD *)(v2 + 28) == a2 )
    return *(unsigned __int16 *)(v2 + 16);
  return v3;
}

