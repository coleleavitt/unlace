__int64 __fastcall sub_40130(__int64 a1, unsigned __int16 a2, int a3, char a4)
{
  char v5; // dl
  __int64 result; // rax
  __int64 v7; // rsi
  void (__fastcall ***v8)(_QWORD, _QWORD, __int64, __int64); // rdi
  unsigned int v9; // [rsp+14h] [rbp-2Ch] BYREF
  _QWORD v10[5]; // [rsp+18h] [rbp-28h] BYREF

  v10[1] = __readfsqword(0x28u);
  v5 = sub_3FE20(a1, a2, a3, nullptr, nullptr, (__int64)v10, nullptr, nullptr, &v9);
  result = 6;
  if ( v5 )
  {
    v7 = v10[0];
    if ( v10[0] )
      *(_BYTE *)v10[0] = *(_BYTE *)v10[0] & 0xF8 | (4 * ((a4 & 2) == 0)) | ((a4 & 4) == 0) | (2 * (a4 & 1));
    v8 = *(void (__fastcall ****)(_QWORD, _QWORD, __int64, __int64))(a1 + 4184);
    if ( v8 )
      (**v8)(v8, v9, v7, 4);
    return 0;
  }
  return result;
}

