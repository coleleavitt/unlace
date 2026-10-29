unsigned __int64 __fastcall sub_2312F0(__int64 a1, __int64 a2, int a3, int a4, const char *a5, __int64 a6)
{
  __int64 v7; // r13
  int v9; // edx
  __int64 v12; // rax
  char *sa; // [rsp+0h] [rbp-A8h]
  __int64 v15; // [rsp+8h] [rbp-A0h]
  const char *src; // [rsp+18h] [rbp-90h]
  __int64 v17; // [rsp+20h] [rbp-88h] BYREF
  __int128 v18; // [rsp+28h] [rbp-80h]
  __int64 v19; // [rsp+38h] [rbp-70h]
  __int64 v20; // [rsp+40h] [rbp-68h]
  __int64 v21; // [rsp+48h] [rbp-60h]
  int v22; // [rsp+50h] [rbp-58h]
  int v23; // [rsp+54h] [rbp-54h]
  int v24; // [rsp+58h] [rbp-50h]
  unsigned __int64 v25; // [rsp+68h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  if ( *(_DWORD *)a2 == 1 )
  {
    v7 = *(_QWORD *)(a2 + 8);
    v9 = 1;
    if ( a4 > 0 )
      v9 = a4;
    if ( (unsigned __int8)sub_1EA5F0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 8), v9) )
    {
      v12 = *(_QWORD *)(a2 + 16);
      v17 = 0;
      v18 = 0;
      v15 = v12;
      if ( a5 )
      {
        src = a5;
        sa = (char *)strlen(a5);
        v17 = qvector_reserve();
        *(_QWORD *)&v18 = sa + 1;
        memmove((void *)v17, src, (size_t)sa);
        sa[v17] = 0;
      }
      v19 = 0;
      if ( a6 )
        copy_tinfo_t();
      v23 = a4;
      v20 = v7;
      v21 = v15;
      v22 = -1;
      v24 = a3;
      if ( get_tinfo_size() <= 0 || (get_tinfo_property() & 0x3F) == 1 || (get_tinfo_property() & 0xF) == 0xC )
        clear_tinfo_t();
      sub_230D00((__m128i *)(a1 + 88), (__int64)&v17, nullptr);
      clear_tinfo_t();
      if ( v17 )
      {
        *(_QWORD *)&v18 = 0;
        qfree();
      }
    }
  }
  return v25 - __readfsqword(0x28u);
}

