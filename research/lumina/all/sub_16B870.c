__int64 sub_16B870(__int64 a1, ...)
{
  FILE *v1; // rbx
  unsigned int v2; // ebp
  gcc_va_list va; // [rsp+0h] [rbp-E8h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-D0h]

  va_start(va, a1);
  v5 = __readfsqword(0x28u);
  v1 = stream;
  if ( !stream )
    v1 = stdout;
  v2 = sub_19D8E0(v1, a1, va);
  fflush(v1);
  return v2;
}
