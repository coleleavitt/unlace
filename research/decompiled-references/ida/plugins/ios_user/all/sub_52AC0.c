unsigned __int64 __fastcall sub_52AC0(__int64 a1)
{
  int v1; // r12d
  char v2; // r15
  __m128i v3; // xmm0
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v14; // [rsp+10h] [rbp-70h] BYREF
  __int128 v15; // [rsp+18h] [rbp-68h]
  char *v16; // [rsp+30h] [rbp-50h]
  __m128i v17; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  if ( !(unsigned __int8)is_miniidb() )
  {
    if ( !(unsigned __int8)getinf_flag() )
      goto LABEL_3;
LABEL_15:
    v1 = 8;
    v2 = 7;
    goto LABEL_4;
  }
  if ( *(int *)(a1 + 276) > 4 )
    goto LABEL_15;
LABEL_3:
  v1 = 4;
  v2 = 2;
LABEL_4:
  sub_47E40(a1);
  v15 = 0;
  v14 = 0;
  v17 = 0;
  v16 = (char *)qvector_reserve();
  v17.m128i_i64[0] = 16;
  strcpy(v16, "Dummy registers");
  v14 = qvector_reserve();
  v3 = _mm_loadu_si128(&v17);
  v4 = v14 + 24 * v15;
  *(_QWORD *)v4 = v16;
  *(__m128i *)(v4 + 8) = v3;
  *(_QWORD *)&v15 = v15 + 1;
  sub_49080(a1, &v14);
  sub_523E0((__int64 *)a1, "IP", 0, v1, 0, "IP", 2, v2, 1, 0, 0);
  sub_523E0((__int64 *)a1, "SP", v1, v1, 1, "SP", 4, v2, 1, 0, 0);
  sub_481B0(a1);
  sub_49000((_QWORD *)a1, (__int64)"SP", v5, v6, v7, v8);
  v9 = v14;
  if ( v14 )
  {
    v10 = v15;
    if ( (_QWORD)v15 )
    {
      v11 = 0;
      do
      {
        v12 = (_QWORD *)(v9 + 24 * v11);
        if ( *v12 )
        {
          v12[1] = 0;
          qfree();
          v9 = v14;
        }
        ++v11;
      }
      while ( v10 != v11 );
    }
    *(_QWORD *)&v15 = 0;
    qfree();
  }
  return v18 - __readfsqword(0x28u);
}

