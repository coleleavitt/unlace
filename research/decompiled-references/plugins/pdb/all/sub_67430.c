__int64 __fastcall sub_67430(__int64 a1, _WORD *a2, unsigned int a3)
{
  unsigned int v3; // r12d
  __int64 v5; // rbx
  int v6; // r14d
  __int64 v7; // r12
  char v8; // al
  __int64 v9; // r12
  unsigned __int16 v10; // [rsp+Eh] [rbp-3Ah] BYREF
  _QWORD v11[7]; // [rsp+10h] [rbp-38h] BYREF

  v11[1] = __readfsqword(0x28u);
  v3 = 0;
  if ( a3 > 0xFFF )
  {
    sub_67120(v11, a1, a3, nullptr);
    v5 = v11[0];
    if ( v11[0] )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v11[0] + 32LL))(v11[0]);
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int16 *, __int64))(*(_QWORD *)v5 + 48LL))(
              v5,
              &v10,
              2) )
        goto LABEL_5;
      v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 40LL))(v5, v7);
      if ( !(_BYTE)v3 )
        goto LABEL_5;
      if ( v10 <= 0x1607u )
      {
        if ( v10 > 0x1507u )
        {
          if ( v10 == 5386 )
          {
            *a2 = 0;
            goto LABEL_6;
          }
          if ( v10 != 5401 )
            goto LABEL_5;
        }
        else if ( v10 <= 0x1503u )
        {
          if ( v10 <= 6u )
          {
            if ( v10 <= 3u )
              goto LABEL_5;
            v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 40LL))(v5, (unsigned int)(v6 + 6));
          }
          else
          {
            if ( v10 != 7 )
              goto LABEL_5;
            v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 40LL))(v5, (unsigned int)(v6 + 8));
          }
          goto LABEL_11;
        }
        v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 40LL))(v5, (unsigned int)(v6 + 4));
      }
      else
      {
        if ( (unsigned int)v10 - 5640 > 3 )
          goto LABEL_5;
        v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 40LL))(v5, (unsigned int)(v6 + 2));
      }
LABEL_11:
      if ( v8 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
        if ( (*(unsigned __int8 (__fastcall **)(__int64, _WORD *, __int64))(*(_QWORD *)v5 + 48LL))(v5, a2, 2) )
        {
          v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 40LL))(v5, v9);
          goto LABEL_6;
        }
      }
LABEL_5:
      v3 = 0;
LABEL_6:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return v3;
}
