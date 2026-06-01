unsigned __int64 __fastcall sub_1C8CC0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // rax
  __int64 v3; // r10
  unsigned __int64 v4; // rdx

  v2 = sub_1C8C20(a1, a2);
  v4 = 0;
  if ( v2 )
  {
    if ( *v2 == a2 )
    {
      v4 = v2[1];
      if ( v2 != *(unsigned __int64 **)(v3 + 1192) )
        v4 -= *(v2 - 1);
    }
  }
  return v4;
}

