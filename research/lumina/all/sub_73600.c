_BYTE *__fastcall sub_73600(void *a1, __int64 a2, unsigned int a3)
{
  _BYTE *v3; // rbx
  bool (__fastcall *v4)(__int64, char **, __int64); // r8
  void (__fastcall *v5)(_BYTE *); // rax
  _BYTE *v7; // rdi
  void *v9; // [rsp+8h] [rbp-110h] BYREF
  _BYTE v10[24]; // [rsp+10h] [rbp-108h] BYREF
  _BYTE v11[24]; // [rsp+28h] [rbp-F0h] BYREF
  _BYTE v12[32]; // [rsp+40h] [rbp-D8h] BYREF
  void *v13; // [rsp+60h] [rbp-B8h] BYREF
  __int128 v14; // [rsp+68h] [rbp-B0h]
  void *ptr; // [rsp+78h] [rbp-A0h] BYREF
  __int128 v16; // [rsp+80h] [rbp-98h]
  __int64 v17; // [rsp+90h] [rbp-88h] BYREF
  __int128 v18; // [rsp+98h] [rbp-80h]
  __int64 v19; // [rsp+A8h] [rbp-70h]
  __int128 v20; // [rsp+B0h] [rbp-68h]
  int v21; // [rsp+C0h] [rbp-58h]
  __int64 v22; // [rsp+C8h] [rbp-50h]
  int v23; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v24; // [rsp+D8h] [rbp-40h]

  v9 = a1;
  v24 = __readfsqword(0x28u);
  v3 = (_BYTE *)operator new(0x88u);
  sub_73590((__int64)v10, nullptr, nullptr, nullptr);
  v13 = nullptr;
  v14 = 0;
  sub_66360(&v13, (__int64)v10);
  ptr = nullptr;
  v16 = 0;
  sub_66360(&ptr, (__int64)v11);
  v17 = 0;
  v18 = 0;
  sub_66360(&v17, (__int64)v12);
  v3[8] = 49;
  v19 = 0;
  *(_QWORD *)v3 = &off_237610;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v20 = 0;
  sub_2F620((__int64)(v3 + 16), (__int64)&v13);
  sub_2F570((__int64)&v13);
  sub_2F570((__int64)v10);
  if ( v9 )
  {
    v4 = *(bool (__fastcall **)(__int64, char **, __int64))(*(_QWORD *)v3 + 24LL);
    if ( v4 == sub_6ECD0 )
    {
      v13 = v9;
      if ( !__CFADD__(a2, v9) && sub_6EB50((__int64)(v3 + 16), (char **)&v13, a2) )
        return v3;
    }
    else if ( ((unsigned __int8 (__fastcall *)(_BYTE *, void **, __int64, _QWORD))v4)(v3, &v9, a2, a3) )
    {
      return v3;
    }
    if ( v3 )
    {
      v5 = *(void (__fastcall **)(_BYTE *))(*(_QWORD *)v3 + 8LL);
      if ( (char *)v5 != (char *)sub_69960 )
      {
        v7 = v3;
        v3 = nullptr;
        v5(v7);
        return v3;
      }
      *(_QWORD *)v3 = &off_237610;
      sub_2F5C0((__int64)(v3 + 16));
      operator delete(v3, 0x88u);
    }
    return nullptr;
  }
  return v3;
}
