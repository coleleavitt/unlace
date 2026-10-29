unsigned __int64 __fastcall sub_9D60(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r12
  size_t v5; // r14
  __int64 v6; // rsi
  __int64 v8; // [rsp+0h] [rbp-78h]
  char *src; // [rsp+20h] [rbp-58h]
  unsigned __int64 v10; // [rsp+38h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  if ( a3 || (get_flags_ex() & 0x4000) == 0 )
  {
    src = (char *)qvector_reserve();
    strcpy(src, "RTYPE_");
    v8 = qalloc_or_throw();
    memcpy((void *)v8, src, 7u);
    v4 = *(_QWORD *)(a2 + 8);
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v4 != 1 )
      {
        v6 = v8;
        if ( (unsigned __int64)(v4 + 6) > 7 )
        {
          v8 = qvector_reserve();
          v6 = v8;
        }
        *(_BYTE *)(v6 + v5 + 6) = 0;
        memcpy((void *)(v8 + 6), *(const void **)a2, v5);
      }
    }
    if ( src )
      qfree();
    set_name();
    if ( v8 )
      qfree();
  }
  return v10 - __readfsqword(0x28u);
}
