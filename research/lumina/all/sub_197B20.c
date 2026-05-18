__int64 __fastcall sub_197B20(const char *a1, __mode_t a2)
{
  unsigned int v2; // ebx

  v2 = mkdir(a1, a2);
  if ( v2 != -1 )
    return v2;
  sub_18FA40(1u);
  return 0xFFFFFFFFLL;
}
