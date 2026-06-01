__int64 __fastcall sub_4F5E0()
{
  FILE *v0; // rbx
  unsigned int v1; // ebp

  v0 = stream;
  if ( !stream )
    v0 = stdout;
  v1 = qvfprintf();
  fflush(v0);
  return v1;
}

