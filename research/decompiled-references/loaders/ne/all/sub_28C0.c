unsigned __int64 __fastcall sub_28C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  unsigned __int64 v6; // [rsp+8h] [rbp-440h] BYREF
  _BYTE v7[1032]; // [rsp+10h] [rbp-438h] BYREF
  unsigned __int64 v8; // [rsp+418h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  qlseek(a1, a2, 0);
  while ( 1 )
  {
    v6 = 0;
    lread(a1, &v6, 1);
    v4 = v6;
    if ( !v6 )
      break;
    if ( v6 > 0x400 )
    {
      v6 = 1024;
      v4 = 1024;
    }
    lread(a1, v7, v4);
    v7[v6] = 0;
    if ( qlread(a1, &v6, 2) != 2 )
      break;
    (*(void (__fastcall **)(_QWORD, _BYTE *, _QWORD))(a3 + 8))((unsigned __int16)v6, v7, *(_QWORD *)(a3 + 16));
  }
  return v8 - __readfsqword(0x28u);
}
