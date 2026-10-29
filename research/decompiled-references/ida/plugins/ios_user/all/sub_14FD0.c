__int64 __fastcall sub_14FD0(__int64 *a1)
{
  __int64 v1; // rax
  __int64 (*v2)(void); // rax
  __int64 v3; // rbx

  if ( !*((_BYTE *)a1 + 208) )
    return 0xFFFFFFFFLL;
  v1 = *a1;
  *((_BYTE *)a1 + 208) = 0;
  v2 = *(__int64 (**)(void))(v1 + 32);
  if ( (char *)v2 == (char *)sub_11DE0 )
    v3 = (__int64)(a1 + 34);
  else
    v3 = v2();
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 112LL))(v3);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 88LL))(v3);
}

