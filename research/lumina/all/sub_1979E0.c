__int64 __fastcall sub_1979E0(int a1)
{
  unsigned int v1; // ebx

  v1 = close(a1);
  if ( v1 != -1 )
    return v1;
  sub_18FA40(1u);
  return 0xFFFFFFFFLL;
}
