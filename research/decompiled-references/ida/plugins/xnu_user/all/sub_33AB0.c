__int64 __fastcall sub_33AB0(__int64 a1, const char *a2, char a3, __int64 a4)
{
  size_t v6; // r14
  __int64 (*v7)(); // rdx
  __int64 (*v8)(); // rcx
  __int64 v9; // rbx
  __m128i v11; // [rsp+10h] [rbp-88h] BYREF
  void *v12; // [rsp+20h] [rbp-78h]
  __int128 v13; // [rsp+28h] [rbp-70h]
  __int64 v14; // [rsp+38h] [rbp-60h]
  __int64 v15; // [rsp+40h] [rbp-58h]
  char v16; // [rsp+48h] [rbp-50h]
  unsigned __int64 v17; // [rsp+58h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  if ( !a2 || !*a2 )
    return -1;
  v11.m128i_i64[1] = a1;
  v11.m128i_i64[0] = (__int64)off_97CF0;
  v13 = 0;
  v6 = strlen(a2);
  v12 = (void *)qvector_reserve();
  *(_QWORD *)&v13 = v6 + 1;
  memmove(v12, a2, v6);
  *((_BYTE *)v12 + v6) = 0;
  v14 = a4;
  v15 = -1;
  v16 = a3;
  sub_32130(a1, &v11, v7, v8);
  v9 = v15;
  v11.m128i_i64[0] = (__int64)off_97CF0;
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  return v9;
}

