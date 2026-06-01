__int64 __fastcall sub_3E3F0(__int64 a1, unsigned __int64 a2, unsigned __int16 a3)
{
  unsigned int v4; // ebx
  __int64 v6; // r8
  void (__fastcall ***v7)(_QWORD, __int64, __int64, __int64); // rdi
  __int64 v8; // [rsp+8h] [rbp-30h] BYREF
  _WORD *v9[5]; // [rsp+10h] [rbp-28h] BYREF

  v9[1] = (_WORD *)__readfsqword(0x28u);
  v8 = 0;
  v9[0] = nullptr;
  v4 = sub_3E090(a1, a2, nullptr, v9, &v8, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr);
  if ( !v4 )
  {
    sub_3E360(a1, v9[0], a3);
    v7 = *(void (__fastcall ****)(_QWORD, __int64, __int64, __int64))(a1 + 4184);
    if ( v7 )
      (**v7)(v7, v8, v6, 8);
  }
  return v4;
}

