__int64 __fastcall sub_19A7A0(__int64 a1, __m128i a2)
{
  __int64 v2; // rsi
  __int64 v3; // r12
  __int64 v4; // rax
  bool v5; // zf
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // edx
  __int64 v10; // rax
  char v11[16]; // [rsp+0h] [rbp-50h] BYREF
  _QWORD v12[8]; // [rsp+10h] [rbp-40h] BYREF

  v12[3] = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 16) || !*(_QWORD *)(a1 + 8) || (v2 = *(_QWORD *)(a1 + 24)) == 0 )
  {
    if ( !under_debugger )
      sub_37EEE0(51648);
LABEL_20:
    BUG();
  }
  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 8LL) + 8LL);
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 && *(_BYTE *)v4 == 2 )
  {
    v10 = sub_326890(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 16LL), *(unsigned int *)(v4 + 4), 1);
    v2 = *(_QWORD *)(a1 + 24);
    v3 += v10;
  }
  sub_120000((__int64)v11, (unsigned __int8 *)v2);
  v5 = *(_QWORD *)(a1 + 8) == 0;
  v12[1] = 0;
  v12[0] = 0xFFFFFFFF00000000LL;
  if ( v5 || !*(_QWORD *)(a1 + 24) )
  {
    if ( !under_debugger )
      sub_37EEE0(51647);
    goto LABEL_20;
  }
  v6 = *(_QWORD *)(a1 + 32);
  if ( v6 && *(_BYTE *)v6 == 2 && sub_326890(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 16LL), *(unsigned int *)(v6 + 4), 1) )
    sub_121740((__int64)v12, *(unsigned __int8 **)(a1 + 32));
  sub_118FD0((char *)(*(_QWORD *)(a1 + 16) + 32LL), v11);
  sub_118FD0((char *)(*(_QWORD *)(a1 + 16) + 48LL), (char *)v12);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = 12;
  if ( !*(_BYTE *)(v7 + 48) )
    v8 = 4;
  *(_DWORD *)v7 = v8;
  sub_158230(*(unsigned int **)(a1 + 16), *(_QWORD *)a1, nullptr, 0, nullptr, nullptr, a2, 0);
  sub_119360((__int64)v12);
  sub_119360((__int64)v11);
  return v3;
}

