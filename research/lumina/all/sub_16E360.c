__int64 sub_16E360()
{
  int *v0; // rbx
  int v1; // edi

  v0 = (int *)&unk_1BF150;
  do
  {
    v1 = *v0++;
    signal(v1, (__sighandler_t)handler);
  }
  while ( v0 != (int *)jpt_17429D );
  return sub_1A6F40(sub_16E010);
}
