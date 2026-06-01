unsigned __int64 __fastcall sub_4C10(const char *src)
{
  size_t v1; // rax
  size_t v2; // r13
  size_t v3; // rbp
  __int64 v5; // [rsp+0h] [rbp-50h] BYREF
  void *v6; // [rsp+8h] [rbp-48h] BYREF
  __int128 v7; // [rsp+10h] [rbp-40h]
  unsigned __int64 v8; // [rsp+20h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v7 = 0;
  v6 = nullptr;
  if ( src )
  {
    v1 = strlen(src);
    v2 = v1 + 1;
    v3 = v1;
    v6 = (void *)qvector_reserve(&v6, 0, v1 + 1, 1);
    *(_QWORD *)&v7 = v2;
    memmove(v6, src, v3);
    *((_BYTE *)v6 + v3) = 0;
  }
  if ( (unsigned __int8)validate_name(&v6, 6, 1) )
  {
    v5 = -1;
    netnode_check(&v5, v6, 0, 1);
  }
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree(v6);
  }
  return v8 - __readfsqword(0x28u);
}

