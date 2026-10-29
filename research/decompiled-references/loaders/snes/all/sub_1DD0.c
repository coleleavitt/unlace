__int64 __fastcall sub_1DD0(__int64 a1)
{
  unsigned int v1; // r12d
  unsigned int v2; // ebp
  int v3; // eax
  unsigned int v4; // edx
  unsigned int v6; // eax
  unsigned int v7; // ecx

  v1 = sub_1AB0(a1, 32704);
  v2 = sub_1AB0(a1, 65472);
  v3 = sub_1AB0(a1, 4259776);
  if ( !v3 )
    return v1 < v2 ? 65472 : 32704;
  v6 = v3 + 4;
  v4 = 32704;
  v7 = v6;
  if ( v2 >= v6 )
    v7 = v2;
  if ( v1 >= v7 )
    return v4;
  if ( v2 >= v6 )
    return 65472;
  return 4259776;
}
