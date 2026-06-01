unsigned __int64 __fastcall sub_11D3C0(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  __int64 v3; // rax
  __int64 v5; // rbx
  _QWORD v6[4]; // [rsp+0h] [rbp-A8h] BYREF
  _BYTE *v7; // [rsp+20h] [rbp-88h]
  _BYTE *v8; // [rsp+28h] [rbp-80h]
  __int64 (__fastcall **v9)(); // [rsp+30h] [rbp-78h] BYREF
  __int64 v10; // [rsp+38h] [rbp-70h]
  __int64 v11; // [rsp+40h] [rbp-68h]
  __int64 v12; // [rsp+48h] [rbp-60h]
  __int64 v13; // [rsp+50h] [rbp-58h]
  char v14; // [rsp+58h] [rbp-50h]
  _QWORD *v15; // [rsp+60h] [rbp-48h]
  unsigned __int64 v16; // [rsp+68h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  v6[0] = off_4BDFE8;
  memset(&v6[1], 0, 24);
  v8 = a3;
  v7 = a2;
  if ( a3 == a2
    || (v14 = 0,
        v10 = 0,
        v11 = 0,
        v12 = 0,
        v13 = 0,
        v9 = off_4BDE58,
        v15 = v6,
        (unsigned int)sub_11A700(a2, (__int64)&v9)) )
  {
LABEL_2:
    if ( a2 )
    {
      v3 = *(_QWORD *)(a1 + 48);
      if ( !v3 )
        goto LABEL_18;
      while ( a2 != (_BYTE *)v3 )
      {
        v3 = *(_QWORD *)(v3 + 8);
        if ( !v3 )
          goto LABEL_18;
      }
    }
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      while ( 1 )
      {
        if ( a2 != (_BYTE *)v5 )
        {
          v7 = (_BYTE *)v5;
          if ( (_BYTE *)v5 == v8 )
            break;
          v10 = 0;
          v11 = 0;
          v12 = 0;
          v13 = 0;
          v14 = 0;
          v9 = off_4BDE58;
          v15 = v6;
          if ( (unsigned int)sub_11A700((_BYTE *)v5, (__int64)&v9) )
            break;
        }
        v5 = *(_QWORD *)(v5 + 8);
        if ( !v5 )
          goto LABEL_2;
      }
      if ( !under_debugger )
        sub_37E160(50287);
LABEL_20:
      BUG();
    }
    if ( a2 )
    {
LABEL_18:
      if ( !under_debugger )
        sub_37E160(52387);
      goto LABEL_20;
    }
  }
  return v16 - __readfsqword(0x28u);
}

