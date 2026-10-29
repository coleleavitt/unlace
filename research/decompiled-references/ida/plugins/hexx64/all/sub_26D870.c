__int64 __fastcall sub_26D870(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebp
  __int64 v6; // r13
  const char *v7; // rsi
  unsigned __int8 v8; // [rsp+Fh] [rbp-39h] BYREF
  _QWORD v9[7]; // [rsp+10h] [rbp-38h] BYREF

  v9[1] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 48);
  if ( !v3 || *(_DWORD *)(v3 + 8) != 61 || a2 != sub_255A30(*(__int64 **)(v3 + 24)) || !(unsigned __int8)is_stroff() )
    return 0;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL);
  v9[0] = 0;
  if ( (unsigned __int8)sub_265AA0(v6, nullptr, v9, &v8, a3) )
  {
    v4 = v8;
    clear_tinfo_t();
    if ( !(_BYTE)v4 )
      return 0;
    v7 = s1;
    if ( *(_QWORD *)(v6 + 24) )
      v7 = *(const char **)(v6 + 16);
    sub_32ACB0(v9, (__int64)v7);
    if ( !(unsigned __int8)compare_tinfo() )
    {
      *(_BYTE *)(a1 + 452) = 1;
      clear_tinfo_t();
      return v4;
    }
  }
  clear_tinfo_t();
  return 0;
}

