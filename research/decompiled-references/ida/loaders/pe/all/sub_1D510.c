unsigned __int64 __fastcall sub_1D510(unsigned int a1)
{
  __int64 v1; // rax
  int v2; // eax
  __int64 v4; // rdi
  unsigned int v5[3]; // [rsp+4h] [rbp-108Ch] BYREF
  unsigned int v6; // [rsp+10h] [rbp-1080h] BYREF
  int v7; // [rsp+14h] [rbp-107Ch] BYREF
  __int64 v8; // [rsp+18h] [rbp-1078h] BYREF
  __int128 v9; // [rsp+20h] [rbp-1070h]
  __int128 v10; // [rsp+38h] [rbp-1058h] BYREF
  __int128 v11; // [rsp+48h] [rbp-1048h] BYREF
  _BYTE v12[4104]; // [rsp+58h] [rbp-1038h] BYREF
  unsigned __int64 v13; // [rsp+1060h] [rbp-30h]

  v5[0] = a1;
  v13 = __readfsqword(0x28u);
  v10 = 0;
  v11 = 0;
  v1 = *(_QWORD *)qword_44A20;
  v6 = 0;
  v7 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(v1 + 48))(qword_44A20, a1) )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, void *, __int64, unsigned int *, char *, char *, char *, __int128 *, char *, _BYTE *, __int64, int *))(*(_QWORD *)qword_44A20 + 176LL))(
           qword_44A20,
           v5[0],
           &v10,
           &unk_34A00,
           0x8000,
           &v6,
           (char *)&v10 + 4,
           (char *)&v10 + 8,
           (char *)&v10 + 12,
           &v11,
           (char *)&v11 + 4,
           v12,
           1024,
           &v7);
    if ( !(unsigned __int8)sub_1CDD0("GetEventProps", v2) )
    {
      if ( v6 > 0x7FFF )
        word_449FE = 0;
      v9 = 0;
      v8 = 0;
      utf16_utf8();
      sub_1D230(&v8);
      sub_F030(v5[0], (__int64)&v8);
      *((_QWORD *)&v11 + 1) = qword_44A10;
      sub_EF20(v5[0], &v10, 32, 97);
      if ( v7 )
        sub_EF20(v5[0], v12, (unsigned int)(4 * v7), 101);
      v4 = qword_44A10++;
      sub_EF20(v4, v5, 4, 112);
      sub_1CFE0(v5[0]);
      if ( v8 )
      {
        *(_QWORD *)&v9 = 0;
        qfree();
      }
    }
  }
  else
  {
    sub_A660((__int64)"%s: invalid token.", "display_event");
  }
  return v13 - __readfsqword(0x28u);
}
