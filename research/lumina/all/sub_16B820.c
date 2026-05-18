__int64 __fastcall sub_16B820(__int64 a1, __int64 a2)
{
  FILE *v2; // rbx
  unsigned int v3; // ebp

  v2 = stream;
  if ( !stream )
    v2 = stdout;
  v3 = sub_19D8E0(v2, a1, a2);
  fflush(v2);
  return v3;
}
