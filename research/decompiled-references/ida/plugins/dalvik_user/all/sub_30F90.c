__int64 __fastcall sub_30F90(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdx
  __int64 (__fastcall *v3)(); // rax
  bool v4; // cf
  __int64 result; // rax
  __int64 (__fastcall *v6)(); // rax
  __int64 (__fastcall *v7)(); // rdx

  if ( under_debugger )
    BUG();
  interr();
  v2 = *(_QWORD **)(a2 + 8);
  v3 = (__int64 (__fastcall *)())v2[4];
  v4 = (unsigned __int64)sub_60F30 < (unsigned __int64)v3;
  if ( sub_60F30 != v3 )
    return v4 ? -1 : 1;
  v6 = (__int64 (__fastcall *)())v2[5];
  v4 = (unsigned __int64)sub_60F40 < (unsigned __int64)v6;
  if ( sub_60F40 != v6 )
    return v4 ? -1 : 1;
  v7 = (__int64 (__fastcall *)())v2[6];
  result = 0;
  v4 = (unsigned __int64)sub_60F50 < (unsigned __int64)v7;
  if ( sub_60F50 != v7 )
    return v4 ? -1 : 1;
  return result;
}

