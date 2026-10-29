int __fastcall sub_C7E20(__int64 a1, int a2, const void *a3, int a4, const void *a5)
{
  size_t v6; // rdx
  int v7; // ebx
  int result; // eax

  v6 = a2;
  if ( a4 <= a2 )
    v6 = a4;
  v7 = a2 - a4;
  result = memcmp(a3, a5, v6);
  if ( !result )
    return v7;
  return result;
}
