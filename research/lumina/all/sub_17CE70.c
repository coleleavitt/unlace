void __fastcall sub_17CE70(_QWORD *a1)
{
  char *v1; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  char *v5; // rax
  void *v6; // rdi
  __int64 v7; // rax
  int v8; // edx
  char v9; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v1 = (char *)a1[2];
  v10 = __readfsqword(0x28u);
  if ( v1 )
  {
    v3 = a1[3];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = &v1[32 * i];
        v6 = *(void **)v5;
        if ( *(_QWORD *)v5 )
        {
          *((_QWORD *)v5 + 1) = 0;
          j__free(v6);
          v1 = (char *)a1[2];
        }
      }
    }
    a1[3] = 0;
    j__free(v1);
  }
  v7 = a1[1];
  if ( (_UNKNOWN *)(v7 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 - 8), 0xFFFFFFFF);
    }
    else
    {
      v8 = *(_DWORD *)(v7 - 8);
      *(_DWORD *)(v7 - 8) = v8 - 1;
    }
    if ( v8 <= 0 )
      std::string::_Rep::_M_destroy(v7 - 24, &v9);
  }
  operator delete(a1, 0x30u);
}
