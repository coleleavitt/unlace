__int64 *__fastcall sub_379D0(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rax
  const void *v5; // r13
  __int64 v6; // r14
  size_t v7; // r12
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  char *v10; // rdi
  char *v11; // rdx
  __int64 v12; // r13
  char *v13; // r12
  char *v15; // rdx
  __int64 v16; // rax
  void *src[7]; // [rsp+0h] [rbp-38h] BYREF

  src[1] = (void *)__readfsqword(0x28u);
  v2 = (*(__int64 (**)(void))(qword_48840 + 48))();
  v3 = (*(__int64 (__fastcall **)(__int64))(qword_48840 + 24))(v2);
  (*(void (__fastcall **)(__int64))(qword_48840 + 72))(v3);
  src[0] = nullptr;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, void **))(qword_48840 + 8))(v3, 3, 0, src);
  *a1 = 0;
  v5 = src[0];
  *(_OWORD *)(a1 + 1) = 0;
  if ( v4 > 0 )
  {
    if ( v5 )
    {
      v6 = v4 + 1;
      v7 = v4;
      v8 = qvector_reserve();
      *a1 = v8;
      a1[1] = v6;
      *(_BYTE *)(v8 + v7) = 0;
      memmove((void *)*a1, v5, v7);
      v9 = a1[1];
      if ( v9 > 1 )
      {
        v10 = (char *)*a1;
        v11 = (char *)(*a1 + v9 - 1);
        if ( *a1 < (unsigned __int64)v11 )
        {
          while ( *(v11 - 1) == 10 )
          {
            if ( v10 == --v11 )
              goto LABEL_14;
          }
        }
        v12 = v11 - v10;
        if ( v11 == v10 )
        {
LABEL_14:
          if ( v10 )
          {
            a1[1] = 0;
            qfree();
            *a1 = 0;
            a1[2] = 0;
          }
        }
        else
        {
          v13 = (char *)(v12 + 1);
          if ( v9 < v12 + 1 )
          {
            if ( a1[2] < (unsigned __int64)v13 )
            {
              v16 = qvector_reserve();
              *a1 = v16;
              v10 = (char *)v16;
              v9 = a1[1];
            }
            memset(&v10[v9], 0, (size_t)&v13[-v9]);
            v15 = (char *)*a1;
            a1[1] = (__int64)v13;
            v11 = &v15[v12];
          }
          else if ( v9 != v12 + 1 )
          {
            a1[1] = (__int64)v13;
          }
          *v11 = 0;
        }
      }
    }
  }
  (*(void (__fastcall **)(__int64))(qword_48840 + 16))(v3);
  return a1;
}

