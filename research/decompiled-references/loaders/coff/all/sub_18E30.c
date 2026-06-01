unsigned __int64 __fastcall sub_18E30(const char *src)
{
  size_t v1; // rax
  size_t v2; // r13
  size_t v3; // rbp
  void *v4; // rsi
  __int64 name_ea; // rbx
  __int64 v6; // rbp
  void *v8; // [rsp+0h] [rbp-48h] BYREF
  __int128 v9; // [rsp+8h] [rbp-40h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v8 = nullptr;
  v9 = 0;
  if ( src )
  {
    v1 = strlen(src);
    v2 = v1 + 1;
    v3 = v1;
    v8 = (void *)qvector_reserve(&v8, 0, v1 + 1, 1);
    *(_QWORD *)&v9 = v2;
    memmove(v8, src, v3);
    *((_BYTE *)v8 + v3) = 0;
  }
  validate_name(&v8, 6, 1);
  v4 = &unk_1E0EC;
  if ( (_QWORD)v9 )
    v4 = v8;
  name_ea = get_name_ea(-1, v4);
  v6 = getseg(name_ea);
  if ( v6 )
  {
    setinf(14);
    get_segm_base(v6);
    setinf(15);
  }
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8);
  }
  return v10 - __readfsqword(0x28u);
}
