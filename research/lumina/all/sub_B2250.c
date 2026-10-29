__int64 __fastcall sub_B2250(char *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  char *v5; // rax
  __int64 (__fastcall *v6)(__int64, char **, __int64); // r8
  char *v8; // [rsp+8h] [rbp-160h] BYREF
  char *v9[43]; // [rsp+10h] [rbp-158h] BYREF

  v8 = a1;
  v9[37] = (char *)__readfsqword(0x28u);
  v4 = operator new(0x130u);
  *(_BYTE *)(v4 + 8) = 83;
  *(_QWORD *)(v4 + 16) = 0;
  *(_OWORD *)(v4 + 24) = 0;
  memset(v9, 0, 0x120u);
  *(_QWORD *)v4 = &off_238AB8;
  sub_9CBB0((_QWORD *)(v4 + 16), (__int64)v9);
  *(_QWORD *)(v4 + 40) = 0;
  *(_OWORD *)(v4 + 48) = 0;
  sub_9CBB0((_QWORD *)(v4 + 40), (__int64)&v9[3]);
  *(_QWORD *)(v4 + 64) = 0;
  *(_OWORD *)(v4 + 72) = 0;
  sub_9CBB0((_QWORD *)(v4 + 64), (__int64)&v9[6]);
  *(_WORD *)(v4 + 104) = 0;
  *(_QWORD *)(v4 + 112) = 0;
  *(_OWORD *)(v4 + 88) = 0;
  *(_OWORD *)(v4 + 120) = 0;
  sub_9CBB0((_QWORD *)(v4 + 112), (__int64)&v9[12]);
  *(_QWORD *)(v4 + 136) = 0;
  *(_OWORD *)(v4 + 144) = 0;
  sub_9CBB0((_QWORD *)(v4 + 136), (__int64)&v9[15]);
  *(_QWORD *)(v4 + 160) = 0;
  *(_OWORD *)(v4 + 168) = 0;
  sub_9CBB0((_QWORD *)(v4 + 160), (__int64)&v9[18]);
  *(_QWORD *)(v4 + 184) = 0;
  *(_OWORD *)(v4 + 192) = 0;
  sub_9CBB0((_QWORD *)(v4 + 184), (__int64)&v9[21]);
  *(_QWORD *)(v4 + 208) = 0;
  *(_QWORD *)(v4 + 216) = 0;
  *(_OWORD *)(v4 + 224) = 0;
  sub_9CBB0((_QWORD *)(v4 + 216), (__int64)&v9[25]);
  *(_QWORD *)(v4 + 240) = 0;
  *(_OWORD *)(v4 + 248) = 0;
  sub_9CBB0((_QWORD *)(v4 + 240), (__int64)&v9[28]);
  *(_QWORD *)(v4 + 264) = 0;
  *(_OWORD *)(v4 + 272) = 0;
  sub_9CBB0((_QWORD *)(v4 + 264), (__int64)&v9[31]);
  v5 = v8;
  *(_OWORD *)(v4 + 288) = 0;
  if ( v5 )
  {
    v6 = *(__int64 (__fastcall **)(__int64, char **, __int64))(*(_QWORD *)v4 + 24LL);
    if ( v6 == sub_B21E0 )
    {
      v9[0] = v5;
      if ( !__CFADD__(a2, v5) && (unsigned __int8)sub_B2120(v4 + 16, v9, a2) )
        return v4;
    }
    else if ( ((unsigned __int8 (__fastcall *)(__int64, char **, __int64, _QWORD))v6)(v4, &v8, a2, a3) )
    {
      return v4;
    }
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    return 0;
  }
  return v4;
}
