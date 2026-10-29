unsigned __int64 __fastcall sub_1D9E0(unsigned int a1)
{
  __int64 v1; // rax
  int v2; // eax
  __int64 v4; // rdi
  int v5; // eax
  unsigned int v6; // [rsp+4h] [rbp-8Ch] BYREF
  unsigned int v7; // [rsp+Ch] [rbp-84h] BYREF
  unsigned int v8; // [rsp+10h] [rbp-80h] BYREF
  int v9; // [rsp+14h] [rbp-7Ch] BYREF
  unsigned int v10; // [rsp+18h] [rbp-78h] BYREF
  int v11; // [rsp+1Ch] [rbp-74h] BYREF
  __int64 v12; // [rsp+20h] [rbp-70h] BYREF
  _DWORD *v13; // [rsp+28h] [rbp-68h] BYREF
  __int64 v14; // [rsp+30h] [rbp-60h] BYREF
  _OWORD v15[2]; // [rsp+38h] [rbp-58h] BYREF
  __int64 v16; // [rsp+58h] [rbp-38h] BYREF
  __int128 v17; // [rsp+60h] [rbp-30h]
  unsigned __int64 v18; // [rsp+70h] [rbp-20h]

  v6 = a1;
  v18 = __readfsqword(0x28u);
  v12 = 0;
  v13 = 0;
  memset(v15, 0, 20);
  v1 = *(_QWORD *)qword_44A20;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(v1 + 48))(qword_44A20, a1) )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, _OWORD *, void *, __int64, unsigned int *, char *, __int64 *, unsigned int *, char *, _DWORD **, int *))(*(_QWORD *)qword_44A20 + 184LL))(
           qword_44A20,
           v6,
           v15,
           &unk_34A00,
           0x8000,
           &v7,
           (char *)v15 + 4,
           &v12,
           &v8,
           (char *)v15 + 8,
           &v13,
           &v9);
    if ( !(unsigned __int8)sub_1CDD0("GetFieldProps", v2) )
    {
      if ( v7 > 0x7FFF )
        word_449FE = 0;
      v17 = 0;
      v16 = 0;
      utf16_utf8();
      sub_1D230(&v16);
      sub_F030(v6, (__int64)&v16);
      *(_QWORD *)((char *)v15 + 12) = qword_44A10;
      sub_EF20(v6, v15, 20, 97);
      sub_EF20(v6, v12, v8, 100);
      sub_1CD80(v6, DWORD2(v15[0]), v13, v9);
      v4 = qword_44A10++;
      sub_EF20(v4, &v6, 4, 112);
      if ( (BYTE5(v15[0]) & 1) != 0 )
      {
        v10 = 0;
        v11 = 0;
        v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *, int *))(*(_QWORD *)qword_44A20 + 272LL))(
               qword_44A20,
               v6,
               &v10,
               &v11);
        if ( !(unsigned __int8)sub_1CDD0("GetRVA", v5) )
        {
          v14 = v10;
          sub_EF20(v6, &v14, 8, 120);
        }
      }
      if ( v16 )
      {
        *(_QWORD *)&v17 = 0;
        qfree();
      }
    }
  }
  else
  {
    sub_A660((__int64)"%s: invalid token.", "display_field");
  }
  return v18 - __readfsqword(0x28u);
}
