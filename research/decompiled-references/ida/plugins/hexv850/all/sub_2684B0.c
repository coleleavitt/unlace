__int64 __fastcall sub_2684B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebp
  __int64 v5; // r13
  const char *v6; // rsi
  unsigned __int8 v7; // [rsp+Fh] [rbp-39h] BYREF
  _QWORD v8[7]; // [rsp+10h] [rbp-38h] BYREF

  v8[1] = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 48);
  if ( !v2 || *(_DWORD *)(v2 + 8) != 61 || a2 != sub_250670(*(__int64 **)(v2 + 24)) || !(unsigned __int8)is_stroff() )
    return 0;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL);
  v8[0] = 0;
  if ( (unsigned __int8)sub_2606E0(v5, nullptr, (__int64)v8, &v7) )
  {
    v3 = v7;
    clear_tinfo_t();
    if ( !(_BYTE)v3 )
      return 0;
    v6 = s1;
    if ( *(_QWORD *)(v5 + 24) )
      v6 = *(const char **)(v5 + 16);
    sub_325240(v8, v6);
    if ( !(unsigned __int8)compare_tinfo() )
    {
      *(_BYTE *)(a1 + 452) = 1;
      clear_tinfo_t();
      return v3;
    }
  }
  clear_tinfo_t();
  return 0;
}

