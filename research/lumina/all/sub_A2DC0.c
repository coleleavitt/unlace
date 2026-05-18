_QWORD *__fastcall sub_A2DC0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx
  void (__fastcall *v7)(_QWORD *); // rax
  char *v8; // rdx
  __int64 v9; // r12
  __int64 i; // rbp
  char *v11; // rax
  void *v12; // rdi
  _QWORD *v13; // rdi
  __int64 v14[6]; // [rsp+8h] [rbp-30h] BYREF

  v14[0] = a1;
  v4 = operator new(0x28u);
  *(_BYTE *)(v4 + 8) = 80;
  v5 = (_QWORD *)v4;
  *(_QWORD *)v4 = &off_238A28;
  *(_QWORD *)(v4 + 16) = 0;
  *(_OWORD *)(v4 + 24) = 0;
  if ( a1 && !(unsigned __int8)sub_AEAB0(v4, v14, a2, a3) )
  {
    if ( v5 )
    {
      v7 = *(void (__fastcall **)(_QWORD *))(*v5 + 8LL);
      if ( v7 != sub_A0540 )
      {
        v13 = v5;
        v5 = nullptr;
        v7(v13);
        return v5;
      }
      v8 = (char *)v5[2];
      *v5 = &off_238A28;
      if ( v8 )
      {
        v9 = v5[3];
        if ( v9 )
        {
          for ( i = 0; i != v9; ++i )
          {
            v11 = &v8[32 * i];
            v12 = *((void **)v11 + 1);
            if ( v12 )
            {
              *((_QWORD *)v11 + 2) = 0;
              j__free(v12);
              v8 = (char *)v5[2];
            }
          }
        }
        v5[3] = 0;
        j__free(v8);
      }
      operator delete(v5, 0x28u);
    }
    return nullptr;
  }
  return v5;
}
