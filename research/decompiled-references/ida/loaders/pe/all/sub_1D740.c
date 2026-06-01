unsigned __int64 __fastcall sub_1D740(unsigned int a1)
{
  __int64 v1; // rax
  int v2; // eax
  __int64 v4; // rdi
  unsigned int v5; // [rsp+4h] [rbp-109Ch] BYREF
  unsigned int v6; // [rsp+8h] [rbp-1098h] BYREF
  unsigned int v7; // [rsp+Ch] [rbp-1094h] BYREF
  int v8; // [rsp+10h] [rbp-1090h] BYREF
  int v9; // [rsp+14h] [rbp-108Ch] BYREF
  __int64 v10; // [rsp+18h] [rbp-1088h] BYREF
  _DWORD *v11; // [rsp+20h] [rbp-1080h] BYREF
  __int64 v12; // [rsp+28h] [rbp-1078h] BYREF
  __int128 v13; // [rsp+30h] [rbp-1070h]
  _OWORD v14[2]; // [rsp+48h] [rbp-1058h] BYREF
  _BYTE v15[4104]; // [rsp+68h] [rbp-1038h] BYREF
  unsigned __int64 v16; // [rsp+1070h] [rbp-30h]

  v5 = a1;
  v16 = __readfsqword(0x28u);
  memset(v14, 0, 28);
  v10 = 0;
  v11 = 0;
  v1 = *(_QWORD *)qword_44A20;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(v1 + 48))(qword_44A20, a1) )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, _OWORD *, void *, __int64, unsigned int *, char *, __int64 *, unsigned int *, char *, _DWORD **, int *, char *, _OWORD *, _BYTE *, __int64, int *))(*(_QWORD *)qword_44A20 + 264LL))(
           qword_44A20,
           v5,
           v14,
           &unk_34A00,
           0x8000,
           &v6,
           (char *)v14 + 4,
           &v10,
           &v7,
           (char *)v14 + 8,
           &v11,
           &v8,
           (char *)v14 + 12,
           &v14[1],
           v15,
           1024,
           &v9);
    if ( !(unsigned __int8)sub_1CDD0("GetPropertyProps", v2) )
    {
      if ( v6 > 0x7FFF )
        word_449FE = 0;
      v13 = 0;
      v12 = 0;
      utf16_utf8();
      sub_1D230(&v12);
      sub_F030(v5, (__int64)&v12);
      *(_QWORD *)((char *)&v14[1] + 4) = qword_44A10;
      sub_EF20(v5, v14, 28, 97);
      sub_EF20(v5, v10, v7, 100);
      sub_1CD80(v5, DWORD2(v14[0]), v11, v8);
      if ( v9 )
        sub_EF20(v5, v15, (unsigned int)(4 * v9), 101);
      v4 = qword_44A10++;
      sub_EF20(v4, &v5, 4, 112);
      if ( v12 )
      {
        *(_QWORD *)&v13 = 0;
        qfree();
      }
    }
  }
  else
  {
    sub_A660((__int64)"%s: invalid token.", "display_property");
  }
  return v16 - __readfsqword(0x28u);
}
