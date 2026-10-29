__int64 __fastcall sub_5D8B0(__int64 *a1, bool *a2)
{
  __int64 v2; // rax
  __int16 v3; // bp
  __int64 result; // rax
  __int64 v5; // rdx
  __int16 v6; // cx
  unsigned int v7; // ecx
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *a1;
  v3 = *((_WORD *)a1 + 42);
  v8[1] = __readfsqword(0x28u);
  result = (*(__int64 (__fastcall **)(__int64 *, _QWORD *))(v2 + 248))(a1, v8);
  if ( !(_DWORD)result )
  {
    v5 = v8[0];
    v6 = *(_WORD *)(v8[0] + 84LL);
    if ( v3 == 4368 || v3 == 4423 )
    {
      if ( v6 != 4105 )
        return 1;
      v7 = 1;
      if ( *(_BYTE *)(v8[0] + 100LL) == 11 )
      {
        *a2 = 0;
        v7 = 0;
      }
      if ( *(_DWORD *)(v5 + 96) )
        return v7;
    }
    else if ( v6 != 4104 )
    {
      if ( v6 == 4105 )
      {
        *a2 = *(_BYTE *)(v8[0] + 100LL) != 11;
        return result;
      }
      return 1;
    }
    *a2 = 1;
  }
  return result;
}
