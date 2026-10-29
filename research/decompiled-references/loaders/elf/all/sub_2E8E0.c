__int64 __fastcall sub_2E8E0(_QWORD *a1)
{
  __int64 result; // rax
  const char *v3; // rsi
  const char *v4; // r14
  __int64 v5; // rdx
  const char *v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // [rsp+8h] [rbp-38h]
  const char *v9; // [rsp+10h] [rbp-30h] BYREF
  __int128 v10; // [rsp+18h] [rbp-28h]
  unsigned __int64 v11; // [rsp+28h] [rbp-18h]

  v11 = __readfsqword(0x28u);
  result = a1[24];
  if ( result == -1 )
  {
    v3 = "struct tlsdesc\n"
         "{\n"
         "  unsigned __int32 (*resolver)(struct tlsdesc *);\n"
         "  unsigned __int32 tp_offset __offset(OFF32,0x%a);\n"
         "};\n";
    v4 = "tlsdesc";
    if ( *(_BYTE *)(a1[8] + 617LL) )
    {
      v3 = "struct tlsdesc\n"
           "{\n"
           "  unsigned __int64 (*resolver)(struct tlsdesc *);\n"
           "  unsigned __int64 tp_offset __offset(OFF64,0x%a);\n"
           "};\n";
      v4 = "tlsdesc";
    }
    v5 = a1[4];
    v9 = nullptr;
    v10 = 0;
    sub_2B240((__int64 *)&v9, (__int64)v3, v5);
    v6 = &s1;
    if ( (_QWORD)v10 )
      v6 = v9;
    h2ti(0, 0, v6, 1024, 0, 0, sub_EAA0, 0, 0);
    result = get_named_type_tid(v4);
    v7 = (__int64)v9;
    a1[24] = result;
    if ( v7 )
    {
      v8 = result;
      *(_QWORD *)&v10 = 0;
      qfree(v7);
      return v8;
    }
  }
  return result;
}
