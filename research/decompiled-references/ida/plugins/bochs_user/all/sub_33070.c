__int64 __fastcall sub_33070(__int64 a1, double a2)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rbp
  __int64 v3; // r12
  void (__fastcall **v4)(_QWORD, __int64); // rax
  __int64 v6; // [rsp+8h] [rbp-440h] BYREF
  _QWORD v7[135]; // [rsp+10h] [rbp-438h] BYREF

  v7[129] = __readfsqword(0x28u);
  v2 = (void (__fastcall ***)(_QWORD, __int64))operator new(0x10u);
  sub_40230(v2);
  if ( *(_QWORD *)(a1 + 2768) )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v3 = operator new(0x50u);
  sub_3B690(v3, v2);
  v4 = *v2;
  *(_QWORD *)(a1 + 2768) = v3;
  (*v4)(v2, a1 + 2720);
  memset(v7, 0, 1024);
  v7[2] = 0xCF92000000FFFFLL;
  v7[3] = 0xCFFB000000FFFFLL;
  v7[1] = 0xCF9B000000FFFFLL;
  v7[4] = 0xCFF2000000FFFFLL;
  v7[7] = 0x7F40F2FDE0000FFFLL;
  if ( (debug[2] & 1) != 0 )
  {
    sub_E960((__int64)"--PAGE translation initialization---------------------\n");
    if ( (debug[2] & 1) != 0 )
    {
      sub_E960((__int64)"PDBR     : PHY[%08X..%08X]\n", 8384512, 12582911);
      if ( (debug[2] & 1) != 0 )
        sub_E960((__int64)"free phys begin: %08X\n", 12582912);
    }
  }
  if ( (unsigned int)sub_40220(v2, 12582912, 8384512, v7, 128) )
  {
    sub_14430((__int64)"Internal error: could not initiate virtual memory manager!");
    return 14;
  }
  else
  {
    *(_WORD *)(*(_QWORD *)(a1 + 2768) + 16LL) = 8;
    if ( (debug[2] & 1) != 0 )
      sub_E960((__int64)"--GDT/IDT translation-------------------------------------\n");
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 2768) + 48LL))(*(_QWORD *)(a1 + 2768), 2);
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64, __int64 *, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 2768) + 56LL))(
           *(_QWORD *)(a1 + 2768),
           16,
           2147741696LL,
           &v6,
           3072,
           0,
           0) )
    {
      sub_EB00((__int64)"AUTOHIDE NONE\nFailed to map GDT. Please make sure nothing occupies the VA %08X!", -2147225600);
      return 9;
    }
    else
    {
      if ( (*(_DWORD *)debug & 0x10000) != 0 )
        sub_E960((__int64)"GDT/IDT VA:%08X->PHY:%08a\n", -2147225600, a2);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))(**(_QWORD **)(a1 + 2768) + 8LL))(
        *(_QWORD *)(a1 + 2768),
        v6,
        v7,
        64);
      return 0;
    }
  }
}

