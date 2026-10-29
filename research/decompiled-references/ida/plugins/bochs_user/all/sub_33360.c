__int64 __fastcall sub_33360(__int64 a1, double a2, double a3)
{
  __int64 v3; // r12
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v7; // [rsp+8h] [rbp-430h] BYREF
  _QWORD v8[133]; // [rsp+10h] [rbp-428h] BYREF

  v8[129] = __readfsqword(0x28u);
  v3 = operator new(0x10u);
  sub_3E5F0(v3);
  if ( *(_QWORD *)(a1 + 2768) )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v4 = operator new(0x50u);
  sub_3B690(v4, v3);
  v5 = *(_QWORD *)(a1 + 1200);
  *(_QWORD *)(a1 + 2768) = v4;
  *(_WORD *)(v4 + 16) = 8;
  if ( (unsigned int)sub_3F3F0(v3, 8384512, *(unsigned __int16 *)(v5 + 14488), a1 + 2720) )
  {
    sub_14430((__int64)"Internal error: could not initiate virtual memory manager!");
    return 14;
  }
  else
  {
    memset(v8, 0, 1024);
    HIDWORD(v8[1]) = 2136064;
    v8[2] = LODWORD(v8[1]) | 0x920000000000LL;
    v8[3] = v8[1];
    v8[4] = v8[2];
    BYTE5(v8[3]) = -8;
    BYTE5(v8[4]) = -14;
    v8[7] = v8[4] & 0xF0FF0000000000LL | 0xFFF;
    if ( (debug[2] & 1) != 0 )
      sub_E960((__int64)"--GDT/IDT translation-------------------------------------\n");
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 2768) + 48LL))(*(_QWORD *)(a1 + 2768), 2);
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, unsigned __int64, __int64 *, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 2768) + 56LL))(
           *(_QWORD *)(a1 + 2768),
           16,
           0xFFFFF80000300000LL,
           &v7,
           3072,
           0,
           0) )
    {
      sub_EB00((__int64)"AUTOHIDE NONE\nFailed to map GDT. Please make sure nothing occupies the VA %08a!", a2);
      return 9;
    }
    else
    {
      if ( (*(_DWORD *)debug & 0x10000) != 0 )
        sub_E960((__int64)"GDT/IDT VA:%08a->PHY:%08a\n", a2, a3);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))(**(_QWORD **)(a1 + 2768) + 8LL))(
        *(_QWORD *)(a1 + 2768),
        v7,
        v8,
        64);
      return 0;
    }
  }
}

