__int64 __fastcall sub_72620(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rdi
  unsigned int v5; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v3 = *(__int64 **)(a1 + 8);
  if ( v3 )
  {
    if ( *(_DWORD *)(a1 + 88) )
    {
      return sub_722A0((_QWORD **)a1, a2);
    }
    else if ( (unsigned __int8)sub_6F3C0(v3, &v5, 0, 0) )
    {
      return sub_55B00(*(_QWORD **)(a1 + 8), a2, v5);
    }
    else
    {
      return 1;
    }
  }
  else
  {
    if ( under_debugger )
      BUG();
    interr(30571);
    return sub_72700();
  }
}

