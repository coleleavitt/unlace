__int64 __fastcall sub_25490(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned __int8 (__fastcall **v6)(__int64, __int64 *, __int64); // rax
  __int64 v8; // rdi
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // [rsp+8h] [rbp-50h] BYREF
  __int64 (__fastcall **v13[3])(_QWORD, __int64); // [rsp+10h] [rbp-48h] BYREF
  int v14; // [rsp+28h] [rbp-30h]
  unsigned __int64 v15; // [rsp+38h] [rbp-20h]

  v6 = *(unsigned __int8 (__fastcall ***)(__int64, __int64 *, __int64))a1;
  v15 = __readfsqword(0x28u);
  v12 = 0;
  if ( !v6[17](a1, &v12, a4 + a3) )
    return 0xFFFFFFFFLL;
  v8 = v12;
  result = 0;
  if ( v12 )
  {
    if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
    {
      create_data();
      v8 = v12;
      if ( !*(_BYTE *)(*(_QWORD *)(a1 + 8) + 2216LL) )
        goto LABEL_5;
    }
    else if ( !*(_BYTE *)(*(_QWORD *)(a1 + 8) + 2216LL) )
    {
LABEL_5:
      v10 = *(_QWORD *)(a1 + 824);
      v11 = *(_QWORD *)(a1 + 832);
      v13[1] = (__int64 (__fastcall **)(_QWORD, __int64))a1;
      v13[0] = (__int64 (__fastcall **)(_QWORD, __int64))&off_3C848;
      v13[2] = (__int64 (__fastcall **)(_QWORD, __int64))a2;
      v14 = a5;
      return sub_160F0(a1, v13, v8, v10, v11);
    }
    sub_EC40();
    v8 = v12;
    goto LABEL_5;
  }
  return result;
}
