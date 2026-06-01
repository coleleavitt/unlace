__int64 __fastcall sub_6CF60(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rbx
  bool (__fastcall *v9)(__int64, __int64, __int64, __int64, __int64, __int64); // rax
  __int64 result; // rax
  __int64 v11; // rbx
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 (*v13)(); // rax
  _QWORD v14[5]; // [rsp+0h] [rbp-28h] BYREF

  v6 = a1;
  v7 = *a1;
  v14[1] = __readfsqword(0x28u);
  v8 = a2;
  v9 = *(bool (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(v7 + 32);
  if ( v9 == sub_13ED0 )
  {
    a2 = 0xDEC0DE00000004LL;
    a1 = (_QWORD *)&byte_7;
    if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                         7,
                         0xDEC0DE00000004LL,
                         v14,
                         0,
                         &callui,
                         a6) == 14598366 )
      goto LABEL_3;
    return 4;
  }
  if ( ((unsigned __int8 (*)(void))v9)() )
    return 4;
LABEL_3:
  if ( !v8 )
    return 7;
  result = 6;
  if ( *(_DWORD *)(v8 + 8) == 46 )
  {
    v11 = *(_QWORD *)v8;
    hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(a1, (const char *)a2);
    if ( hexdsp(438, v11) )
    {
      v13 = *(__int64 (**)())(*v6 + 64LL);
      if ( v13 == sub_6CF50 || ((unsigned __int8 (__fastcall *)(_QWORD *))v13)(v6) )
        return 3;
    }
    return 7;
  }
  return result;
}

