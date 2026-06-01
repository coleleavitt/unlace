unsigned __int64 __fastcall sub_75F30(_QWORD *a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rbp
  __int64 v3; // rax
  int v5; // edx
  char v6; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      v1 = (_QWORD *)*v1;
      v3 = v2[1];
      if ( (unsigned __int64 *)(v3 - 24) != std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create )
        {
          v5 = _InterlockedExchangeAdd((volatile signed __int32 *)(v3 - 8), 0xFFFFFFFF);
        }
        else
        {
          v5 = *(_DWORD *)(v3 - 8);
          *(_DWORD *)(v3 - 8) = v5 - 1;
        }
        if ( v5 <= 0 )
          std::string::_Rep::_M_destroy(v3 - 24, &v6);
      }
      operator delete(v2, 0x20u);
    }
    while ( v1 );
  }
  return v7 - __readfsqword(0x28u);
}

