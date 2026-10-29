void __fastcall sub_10000(std::exception *this)
{
  __int64 v1; // rax
  int v2; // edx
  char v3; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  *(_QWORD *)this = off_4D828;
  v1 = *((_QWORD *)this + 1);
  if ( (_UNKNOWN *)(v1 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 - 8), 0xFFFFFFFF);
    }
    else
    {
      v2 = *(_DWORD *)(v1 - 8);
      *(_DWORD *)(v1 - 8) = v2 - 1;
    }
    if ( v2 <= 0 )
      std::string::_Rep::_M_destroy(v1 - 24, &v3);
  }
  std::exception::~exception(this);
  operator delete(this, 0x10u);
}

