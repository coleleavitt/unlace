unsigned __int64 __fastcall sub_39D60(__int64 a1)
{
  const char *v1; // rdx
  const char *v3; // [rsp+0h] [rbp-28h] BYREF
  __int128 v4; // [rsp+8h] [rbp-20h]
  unsigned __int64 v5; // [rsp+18h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 368LL))(a1, 15, 0, 0);
  v3 = nullptr;
  v4 = 0;
  if ( get_abi_name(&v3) > 0 )
  {
    v1 = byte_51ACD;
    if ( (_QWORD)v4 )
      v1 = v3;
    sub_37F00(a1, (__int64)"ABI setting     : %s", v1);
  }
  if ( v3 )
  {
    *(_QWORD *)&v4 = 0;
    qfree(v3);
  }
  return v5 - __readfsqword(0x28u);
}

