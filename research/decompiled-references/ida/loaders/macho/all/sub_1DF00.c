unsigned __int64 __fastcall sub_1DF00(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned __int8 a6,
        char a7,
        __int64 a8)
{
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // eax
  __int64 v16; // [rsp+48h] [rbp-50h]
  unsigned __int64 v17; // [rsp+58h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  if ( !(unsigned __int8)get_fixup() )
  {
    v11 = a3 + (1LL << a5);
    if ( a7 && (*(_BYTE *)(a2 + 364) & 0x50) == 0 && (*(_BYTE *)(a1 + 13689) & 8) == 0 )
    {
      sub_19660(a3, a5);
      v11 = a3 + (1LL << a5);
    }
    v16 = (v11 & -(__int64)a6) + (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) & (sub_195E0(a3, a5) - a8));
    v12 = getseg();
    v13 = getseg();
    if ( v13 )
    {
      if ( v12 != v13 )
      {
        v14 = *(_DWORD *)(a2 + 364);
        if ( (v14 & 0x40) == 0 && (v14 & 0x10) == 0 && (*(_BYTE *)(a1 + 13689) & 8) == 0 )
          get_segm_name();
      }
    }
    if ( (unsigned __int8)segtype() == 2 && (*(_BYTE *)(*(_QWORD *)a1 + 12LL) & 8) != 0 && (v16 & 1) != 0 )
      sub_1A010();
    set_fixup();
  }
  return v17 - __readfsqword(0x28u);
}

