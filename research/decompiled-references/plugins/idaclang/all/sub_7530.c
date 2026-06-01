__int64 __fastcall sub_7530(__int64 a1)
{
  void *v2; // rdi
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    dlclose(v2);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 976) = 0;
    memset(
      (void *)((a1 + 8) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((unsigned int)a1 - (((_DWORD)a1 + 8) & 0xFFFFFFF8) + 984) >> 3));
    return 0;
  }
  return result;
}
