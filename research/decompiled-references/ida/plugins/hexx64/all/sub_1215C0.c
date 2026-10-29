unsigned __int64 __fastcall sub_1215C0(__int64 a1, _BYTE *a2, _BYTE *a3, double a4)
{
  __int64 v4; // rax
  __int64 v6; // rbx
  _QWORD v7[4]; // [rsp+0h] [rbp-A8h] BYREF
  _BYTE *v8; // [rsp+20h] [rbp-88h]
  _BYTE *v9; // [rsp+28h] [rbp-80h]
  __int64 (__fastcall **v10)(); // [rsp+30h] [rbp-78h] BYREF
  __int64 v11; // [rsp+38h] [rbp-70h]
  __int64 v12; // [rsp+40h] [rbp-68h]
  __int64 v13; // [rsp+48h] [rbp-60h]
  __int64 v14; // [rsp+50h] [rbp-58h]
  char v15; // [rsp+58h] [rbp-50h]
  _QWORD *v16; // [rsp+60h] [rbp-48h]
  unsigned __int64 v17; // [rsp+68h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v7[0] = &off_4DD868;
  memset(&v7[1], 0, 24);
  v9 = a3;
  v8 = a2;
  if ( a3 == a2
    || (v15 = 0,
        v11 = 0,
        v12 = 0,
        v13 = 0,
        v14 = 0,
        v10 = &off_4DD6D8,
        v16 = v7,
        (unsigned int)sub_11E900(a2, (__int64)&v10)) )
  {
LABEL_2:
    if ( a2 )
    {
      v4 = *(_QWORD *)(a1 + 48);
      if ( !v4 )
        goto LABEL_18;
      while ( a2 != (_BYTE *)v4 )
      {
        v4 = *(_QWORD *)(v4 + 8);
        if ( !v4 )
          goto LABEL_18;
      }
    }
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 48);
    if ( v6 )
    {
      while ( 1 )
      {
        if ( a2 != (_BYTE *)v6 )
        {
          v8 = (_BYTE *)v6;
          if ( (_BYTE *)v6 == v9 )
            break;
          v11 = 0;
          v12 = 0;
          v13 = 0;
          v14 = 0;
          v15 = 0;
          v10 = &off_4DD6D8;
          v16 = v7;
          if ( (unsigned int)sub_11E900((_BYTE *)v6, (__int64)&v10) )
            break;
        }
        v6 = *(_QWORD *)(v6 + 8);
        if ( !v6 )
          goto LABEL_2;
      }
      if ( !under_debugger )
        sub_383060(0xC46Fu, a4);
LABEL_20:
      BUG();
    }
    if ( a2 )
    {
LABEL_18:
      if ( !under_debugger )
        sub_383060(0xCCA3u, a4);
      goto LABEL_20;
    }
  }
  return v17 - __readfsqword(0x28u);
}

