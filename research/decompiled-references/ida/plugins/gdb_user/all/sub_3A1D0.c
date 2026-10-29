__int64 __fastcall sub_3A1D0(__int64 a1, int a2, const char **a3)
{
  const char **v4; // r12
  unsigned __int64 v5; // r15
  size_t v6; // r9
  __int64 v7; // r8
  size_t v8; // r10
  char *v9; // rsi
  char *v10; // r15
  size_t v11; // rax
  size_t v13; // [rsp+0h] [rbp-90h]
  size_t v14; // [rsp+8h] [rbp-88h]
  __int64 v15; // [rsp+10h] [rbp-80h]
  char *v16; // [rsp+18h] [rbp-78h] BYREF
  __int128 v17; // [rsp+20h] [rbp-70h]
  void *src; // [rsp+38h] [rbp-58h]
  __int128 v19; // [rsp+40h] [rbp-50h]
  unsigned __int64 v20; // [rsp+50h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v17 = 0;
  v16 = (char *)qvector_reserve();
  *(_QWORD *)&v17 = 5;
  strcpy(v16, "vRun");
  if ( a2 > 0 )
  {
    v4 = &a3[a2];
    do
    {
      v19 = 0;
      src = nullptr;
      src = (void *)qvector_reserve();
      *(_QWORD *)&v19 = 2;
      *(_BYTE *)src = 59;
      *((_BYTE *)src + 1) = 0;
      v5 = v19;
      if ( (_QWORD)v19 )
      {
        v6 = v19 - 1;
        if ( (_QWORD)v19 != 1 )
        {
          v7 = v17;
          v8 = v19 - 1;
          if ( (_QWORD)v17 )
          {
            v7 = v17 - 1;
            v8 = v6 + v17 - 1;
            v5 = v19 + v17 - 1;
          }
          v9 = v16;
          if ( *((_QWORD *)&v17 + 1) < v5 )
          {
            v15 = v7;
            v14 = v19 - 1;
            v13 = v8;
            v16 = (char *)qvector_reserve();
            v7 = v15;
            v9 = v16;
            v6 = v14;
            v8 = v13;
          }
          *(_QWORD *)&v17 = v5;
          v9[v8] = 0;
          memcpy(&v16[v7], src, v6);
        }
      }
      if ( src )
      {
        *(_QWORD *)&v19 = 0;
        qfree();
      }
      v10 = (char *)*a3;
      v11 = strlen(*a3);
      sub_37B00((__int64 *)&v16, v10, v11);
      ++a3;
    }
    while ( v4 != a3 );
  }
  LOBYTE(a3) = (unsigned int)sub_39C70(a1, &v16) == 1;
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  return (unsigned int)a3;
}

