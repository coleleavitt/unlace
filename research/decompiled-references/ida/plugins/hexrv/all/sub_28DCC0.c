__int64 __fastcall sub_28DCC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v5; // r13
  int tinfo_size; // eax
  unsigned int tinfo_property; // r13d
  unsigned int v8; // r15d
  __int64 v9; // [rsp+8h] [rbp-50h] BYREF
  _BYTE v10[8]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 48);
  if ( (v2 & 0xE) == 0 && (v2 & 0x30) != 0 )
  {
    v9 = 0;
    if ( !(unsigned __int8)sub_27FD00((_QWORD *)a1, (int)&v9, a2) )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
      if ( (unsigned int)(*(_DWORD *)(v5 + 8) - 35) > 2 )
        goto LABEL_8;
      tinfo_size = get_tinfo_size();
      if ( !(unsigned int)sub_2816C0(a1, v5, tinfo_size, 1u, 1) )
        goto LABEL_8;
      copy_tinfo_t();
    }
    tinfo_property = get_tinfo_property();
    if ( tinfo_property )
    {
      v8 = get_tinfo_size();
      if ( v8 != (unsigned int)get_tinfo_size() )
        tinfo_property = 2;
      sub_327180(v10, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v8, tinfo_property);
      copy_tinfo_t();
      clear_tinfo_t();
      *(_DWORD *)(a2 + 56) |= 0x20u;
      if ( (unsigned __int8)sub_27EF00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
        *(_DWORD *)(a1 + 8) |= 8u;
      v3 = 1;
      goto LABEL_9;
    }
LABEL_8:
    v3 = 0;
LABEL_9:
    clear_tinfo_t();
    return v3;
  }
  return 0;
}

