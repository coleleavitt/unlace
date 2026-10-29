__int64 __fastcall sub_AFB90(char *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  char *v6; // rax
  __int64 (__fastcall *v7)(__int64, char **, __int64); // r8
  char *v9; // [rsp+8h] [rbp-70h] BYREF
  char *v10; // [rsp+10h] [rbp-68h] BYREF
  __int128 v11; // [rsp+18h] [rbp-60h]
  __int64 v12; // [rsp+28h] [rbp-50h]
  __int128 v13; // [rsp+30h] [rbp-48h]
  unsigned __int64 v14; // [rsp+48h] [rbp-30h]

  v9 = a1;
  v14 = __readfsqword(0x28u);
  v4 = operator new(0x40u);
  v10 = nullptr;
  v5 = v4;
  *(_BYTE *)(v4 + 8) = 33;
  *(_QWORD *)v4 = &off_238158;
  *(_QWORD *)(v4 + 16) = 0;
  *(_OWORD *)(v4 + 24) = 0;
  v12 = 0;
  v11 = 0;
  v13 = 0;
  sub_9CBB0((_QWORD *)(v4 + 16), (__int64)&v10);
  v6 = v9;
  *(_QWORD *)(v5 + 40) = 0;
  *(_OWORD *)(v5 + 48) = 0;
  if ( v6 )
  {
    v7 = *(__int64 (__fastcall **)(__int64, char **, __int64))(*(_QWORD *)v5 + 24LL);
    if ( v7 == sub_AFB20 )
    {
      v10 = v6;
      if ( !__CFADD__(a2, v6) && (unsigned __int8)sub_AF9F0((__int64 *)(v5 + 16), &v10, a2) )
        return v5;
    }
    else if ( ((unsigned __int8 (__fastcall *)(__int64, char **, __int64, _QWORD))v7)(v5, &v9, a2, a3) )
    {
      return v5;
    }
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  return v5;
}
