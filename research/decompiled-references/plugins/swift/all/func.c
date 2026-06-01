void __fastcall func(void *a1)
{
  __int64 *v1; // rbx
  __int64 *v2; // r12
  __int64 *v3; // rax
  __int64 v4; // rax
  int v5; // edx
  char v6; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v1 = &qword_28928;
  v2 = &qword_28928 - 33;
  while ( 1 )
  {
    v4 = v1[1];
    if ( (_UNKNOWN *)(v4 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v5 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 - 8), 0xFFFFFFFF);
      }
      else
      {
        v5 = *(_DWORD *)(v4 - 8);
        *(_DWORD *)(v4 - 8) = v5 - 1;
      }
      if ( v5 <= 0 )
        break;
    }
    v3 = v1 - 3;
    if ( v1 == v2 )
      return;
LABEL_3:
    v1 = v3;
  }
  std::string::_Rep::_M_destroy(v4 - 24, &v6);
  v3 = v1 - 3;
  if ( v1 != v2 )
    goto LABEL_3;
}
