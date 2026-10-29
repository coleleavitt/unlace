unsigned __int64 __fastcall sub_27980(__int64 *a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v9; // rbx
  size_t v11; // rax
  size_t v12; // r15
  size_t v13; // r12
  void *v14; // [rsp+20h] [rbp-58h] BYREF
  __int128 v15; // [rsp+28h] [rbp-50h]
  unsigned __int64 v16; // [rsp+38h] [rbp-40h]

  v6 = a1[3];
  v7 = a1[7];
  v16 = __readfsqword(0x28u);
  sub_EB50(a2, v7, v6);
  v9 = a1[7] + a2;
  if ( (a3 & 0x2000000) != 0 )
  {
    sub_EB50(v9, a1[8], a1[4]);
    v9 += a1[8];
    if ( (a3 & 0x40000000) == 0 )
      return v16 - __readfsqword(0x28u);
  }
  else if ( (a3 & 0x40000000) == 0 )
  {
    return v16 - __readfsqword(0x28u);
  }
  sub_EB50(v9, a1[9], a1[5]);
  sub_EAF0(a1[13] + v9);
  if ( get_strlit_contents() )
  {
    v14 = 0;
    v15 = 0;
    if ( src )
    {
      v11 = strlen(src);
      v12 = v11 + 1;
      v13 = v11;
      v14 = (void *)qvector_reserve();
      *(_QWORD *)&v15 = v12;
      memmove(v14, src, v13);
      *((_BYTE *)v14 + v13) = 0;
    }
    sub_21620(*a1, 0, a4, (__int64 *)&v14);
    if ( v14 )
    {
      *(_QWORD *)&v15 = 0;
      qfree();
    }
  }
  return v16 - __readfsqword(0x28u);
}
