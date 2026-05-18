unsigned __int64 __fastcall sub_CFDC0(__int64 a1, __int64 a2, __int64 a3)
{
  bool v4; // zf
  __int64 v5; // [rsp+8h] [rbp-70h]
  __int64 v6; // [rsp+8h] [rbp-70h]
  __int64 v7; // [rsp+10h] [rbp-68h] BYREF
  __int64 (*v8)(); // [rsp+18h] [rbp-60h]
  __int64 (__fastcall *v9)(); // [rsp+20h] [rbp-58h]
  __int64 (__fastcall *v10)(); // [rsp+28h] [rbp-50h]
  __int16 v11; // [rsp+34h] [rbp-44h]
  __int64 v12; // [rsp+38h] [rbp-40h]
  unsigned __int64 v13; // [rsp+48h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(*(_QWORD *)a1 + 103LL) && *(char *)(a2 + 4) >= 0 )
  {
    v4 = *(_BYTE *)(a1 + 34) == 0;
    v7 = a1;
    v8 = sub_C4340;
    if ( v4 )
    {
      v11 = 0;
      v9 = sub_1444D0;
      v10 = (__int64 (__fastcall *)())sub_C4E40;
      if ( !a2 )
        return __readfsqword(0x28u) ^ v13;
    }
    else
    {
      v5 = a3;
      v10 = nullptr;
      v9 = sub_E5B60;
      if ( !a2 )
        return __readfsqword(0x28u) ^ v13;
      sub_CDAF0((__int64)&v7, (_QWORD *)a2);
      a3 = v5;
      v11 = 0;
      v9 = sub_1444D0;
      v10 = (__int64 (__fastcall *)())sub_C4E40;
    }
    v6 = a3;
    sub_CDAF0((__int64)&v7, (_QWORD *)a2);
    if ( !*(_DWORD *)(a1 + 48) )
    {
      v10 = nullptr;
      v7 = a1;
      v8 = sub_105C10;
      v12 = v6;
      v9 = sub_F8DF0;
      sub_CDAF0((__int64)&v7, (_QWORD *)a2);
      if ( !*(_DWORD *)(a1 + 48) )
      {
        v8 = sub_C4340;
        v7 = a1;
        v9 = sub_D6C10;
        v10 = sub_F43D0;
        sub_CDAF0((__int64)&v7, (_QWORD *)a2);
      }
    }
  }
  return __readfsqword(0x28u) ^ v13;
}
