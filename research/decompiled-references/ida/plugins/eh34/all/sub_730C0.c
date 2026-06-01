unsigned __int64 __fastcall sub_730C0(__int64 a1)
{
  __int64 v3; // rax
  const char *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 i; // rbp
  unsigned int v8; // r15d
  void (__fastcall *v9)(__int64, __int64, _QWORD); // rax
  void (__fastcall *hexdsp)(__int64, __int64, _QWORD *); // rax
  _QWORD *exception; // rdi
  __int64 v12; // [rsp+8h] [rbp-140h] BYREF
  _QWORD v13[3]; // [rsp+10h] [rbp-138h] BYREF
  __int16 v14; // [rsp+28h] [rbp-120h]
  __int64 v15; // [rsp+40h] [rbp-108h]
  unsigned int v16; // [rsp+A0h] [rbp-A8h]
  int v17; // [rsp+A4h] [rbp-A4h]
  unsigned __int64 v18; // [rsp+108h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 8) = get_ph();
  *(_QWORD *)(a1 + 16) = get_ash();
  *(_QWORD *)(a1 + 24) = get_eah();
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)a1 = off_8C688;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  sub_71650(a1 + 104, a1);
  netnode_check(&v12, "$ PE header", 0, 0);
  if ( netnode_valobj(v12, v13, 248) != 248 || !v16 || v16 >= v16 + v17 )
    goto LABEL_2;
  v3 = getinf(93);
  if ( !v3 )
  {
    v3 = netnode_altval(v12, -2, 65);
    if ( !v3 )
    {
      v3 = v15;
      if ( v14 != 523 )
        v3 = HIDWORD(v15);
    }
  }
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
  {
    sub_6E630((_DWORD *)(a1 + 984), (__int64 (__fastcall ***)(_QWORD, __int64))(*(_QWORD *)(a1 + 960) + 64LL));
    sub_6E630((_DWORD *)(a1 + 2296), (__int64 (__fastcall ***)(_QWORD, __int64))(*(_QWORD *)(a1 + 2272) + 64LL));
    v4 = *(const char **)(a1 + 184);
    v5 = a1 + 104;
    sub_17CF0(a1 + 104, v4);
    v6 = sub_17CE0();
    if ( !*(_BYTE *)(a1 + 136) )
    {
      *(_QWORD *)(a1 + 120) = 0;
      *(_QWORD *)(a1 + 128) = 0;
      v13[0] = 0;
      v13[1] = 0;
      hexdsp = (void (__fastcall *)(__int64, __int64, _QWORD *))get_hexdsp(v5, v4);
      v4 = (const char *)(a1 + 120);
      hexdsp(203, a1 + 120, v13);
      *(_BYTE *)(a1 + 136) = 1;
      v5 = v13[0];
      qfree(v13[0]);
    }
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        if ( !*(_BYTE *)(a1 + 136) )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = &off_8BF10;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_optional_access,
            (void (*)(void *))sub_20F70);
        }
        v8 = dword_8D3E0[i];
        v9 = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(v5, v4);
        v4 = (const char *)(a1 + 120);
        v5 = 205;
        v9(205, a1 + 120, v8);
      }
    }
    sub_18040(a1 + 104, (__int64)v4);
    sub_18CB0((_QWORD *)(a1 + 104));
  }
  else
  {
LABEL_2:
    *(_BYTE *)(a1 + 808) = 0;
  }
  return v18 - __readfsqword(0x28u);
}

