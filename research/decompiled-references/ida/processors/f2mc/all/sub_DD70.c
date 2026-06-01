__int64 __fastcall sub_DD70(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, const char *a4)
{
  char *v5; // rbx
  size_t v7; // r12
  unsigned __int64 v9; // [rsp+18h] [rbp-70h]
  void *v10; // [rsp+30h] [rbp-58h] BYREF
  __int128 v11; // [rsp+38h] [rbp-50h]
  unsigned __int64 v12; // [rsp+48h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  if ( a2 < a3 )
  {
    v5 = (char *)qword_10000 + a2;
    v9 = a3 - a2;
    while ( 1 )
    {
      allocate_selector();
      v10 = nullptr;
      v11 = 0;
      if ( a4 )
      {
        v7 = strlen(a4);
        v10 = (void *)qvector_reserve();
        *(_QWORD *)&v11 = v7 + 1;
        memmove(v10, a4, v7);
        *((_BYTE *)v10 + v7) = 0;
        if ( v9 <= (unsigned __int64)qword_10000 )
          goto LABEL_4;
      }
      else if ( v9 <= (unsigned __int64)qword_10000 )
      {
        goto LABEL_4;
      }
      sub_DCB0((__int64 *)&v10);
LABEL_4:
      add_segm();
      if ( v10 )
      {
        *(_QWORD *)&v11 = 0;
        qfree();
      }
      if ( (unsigned __int64)v5 >= a3 )
        return 1;
      v5 = (char *)qword_10000 + (_QWORD)v5;
    }
  }
  return 1;
}

