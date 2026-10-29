__int64 __fastcall sub_2660(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  void (__fastcall *v3)(_QWORD *); // rax
  __int64 v4; // rbx
  __int64 (__fastcall *v6)(__int64); // rax
  unsigned __int64 v7; // rdx
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *a1;
  v8[1] = __readfsqword(0x28u);
  v8[0] = -1;
  v3 = *(void (__fastcall **)(_QWORD *))(v2 + 32);
  if ( a2 < 0 )
  {
    v4 = -1;
    v3(a1);
  }
  else
  {
    if ( (unsigned __int64)a2 < a1[28] )
      v8[0] = *(unsigned int *)(a1[27] + 4 * a2);
    v3(a1);
    v4 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*a1 + 72LL))(a1, v8);
    if ( v4 == -1 )
    {
      v6 = *(__int64 (__fastcall **)(__int64))(*a1 + 40LL);
      if ( v6 == sub_2470 )
        v7 = a1[28];
      else
        v7 = v6((__int64)a1);
      if ( v7 )
      {
        v4 = a2;
        if ( a2 >= v7 )
          return v7 - 1;
      }
    }
  }
  return v4;
}
