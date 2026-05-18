__int64 __fastcall sub_1795B0(_QWORD *a1)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  unsigned int v6; // ebx
  __int64 v8; // rdi
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  __int128 v10; // [rsp+8h] [rbp-70h]
  unsigned __int8 v11[8]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v12; // [rsp+28h] [rbp-50h]
  __int64 v13; // [rsp+38h] [rbp-40h]
  unsigned __int64 v14; // [rsp+48h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  ptr = nullptr;
  v10 = 0;
  v2 = sub_178260((__int64)a1, (__int64)&ptr);
  if ( v2 )
  {
    v3 = a1[4];
    v4 = a1[3];
    v11[0] = 2;
    v12 = 0;
    v13 = 0;
    sub_176730(v11, (unsigned __int8 *)(v4 + 32 * v3 - 32));
    v5 = a1[4];
    if ( v5 )
    {
      v8 = v5 - 1;
      a1[4] = v8;
      sub_176520(a1[3] + 32 * v8);
    }
    sub_176520((__int64)v11);
    v6 = sub_178BF0(a1, v2, (const char **)&ptr, (unsigned __int8 *)(a1[3] + 32LL * a1[4] - 32));
  }
  else
  {
    sub_179510(a1, (__int64)&ptr);
    v6 = 0;
  }
  if ( ptr )
  {
    *(_QWORD *)&v10 = 0;
    j__free(ptr);
  }
  return v6;
}
