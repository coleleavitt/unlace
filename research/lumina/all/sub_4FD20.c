__int64 __fastcall sub_4FD20(__int64 a1, _BYTE *a2, _QWORD *a3)
{
  int v3; // ecx
  char v4; // al
  int v6; // eax
  int v7; // [rsp+10h] [rbp-28h] BYREF
  __int16 v8; // [rsp+14h] [rbp-24h]
  __int64 v9; // [rsp+18h] [rbp-20h]
  int v10; // [rsp+20h] [rbp-18h]
  int v11; // [rsp+24h] [rbp-14h]
  unsigned __int64 v12; // [rsp+28h] [rbp-10h]

  v3 = *(_DWORD *)(a1 + 208);
  v4 = *(_BYTE *)(a1 + 352);
  v12 = __readfsqword(0x28u);
  if ( v3 )
  {
    if ( v4
      && (!a3
       || (v6 = *(_DWORD *)(a1 + 200),
           v11 = 0,
           v7 = v6,
           v8 = *(_WORD *)(a1 + 204),
           v9 = *(_QWORD *)(a1 + 212),
           v10 = *(_DWORD *)(a1 + 220),
           (unsigned int)sub_4F9E0(a1, a3, (__int64)&v7))) )
    {
      if ( a2 )
        *a2 = 1;
    }
    else if ( a2 )
    {
      *a2 = 0;
    }
    return a1 + 200;
  }
  else
  {
    if ( a2 )
      *a2 = v4;
    return 0;
  }
}
