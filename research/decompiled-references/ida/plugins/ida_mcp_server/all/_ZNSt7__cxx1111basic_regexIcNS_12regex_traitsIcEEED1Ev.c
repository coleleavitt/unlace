// Alternative name is '_ZNSt7__cxx1111basic_regexIcNS_12regex_traitsIcEEED2Ev'
void __fastcall std::basic_regex<char,std::regex_traits<char>>::~basic_regex(__int64 a1)
{
  __int64 v1; // rax
  _DWORD *v2; // rdi
  volatile signed __int32 *v3; // rsi
  signed __int32 v4; // edx
  __int64 v5; // rdx
  __int64 v6; // [rsp+0h] [rbp-18h]
  __int64 v7; // [rsp+8h] [rbp-10h]

  v1 = a1;
  v2 = *(_DWORD **)(a1 + 24);
  if ( !v2 )
  {
LABEL_7:
    std::locale::~locale((std::locale *)(v1 + 8));
    return;
  }
  v3 = v2 + 2;
  if ( *((_QWORD *)v2 + 1) != 0x100000001LL )
  {
    if ( _libc_single_threaded )
    {
      v4 = v2[2];
      v2[2] = v4 - 1;
    }
    else
    {
      v4 = _InterlockedExchangeAdd(v3, 0xFFFFFFFF);
    }
    if ( v4 == 1 )
    {
      v6 = v1;
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold();
      v1 = v6;
    }
    goto LABEL_7;
  }
  v5 = *(_QWORD *)v2;
  v7 = v1;
  *((_QWORD *)v2 + 1) = 0;
  (*(void (__fastcall **)(_DWORD *, volatile signed __int32 *))(v5 + 16))(v2, v3);
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 24LL))(v2);
  std::locale::~locale((std::locale *)(v7 + 8));
}

