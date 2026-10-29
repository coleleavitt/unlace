unsigned __int64 __fastcall sub_39C30(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // [rsp+4h] [rbp-64h] BYREF
  _BYTE v15[8]; // [rsp+8h] [rbp-60h] BYREF
  __int64 v16; // [rsp+10h] [rbp-58h] BYREF
  __int64 v17; // [rsp+18h] [rbp-50h]
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v1 = a1 + 112;
  v2 = a1;
  v18 = __readfsqword(0x28u);
  v16 = 0;
  v17 = 0;
  while ( 1 )
  {
    v4 = *(_QWORD *)(v2 + 80);
    v5 = *(_QWORD *)(v2 + 104);
    v14 = 0;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, int *, _BYTE *))(*(_QWORD *)(*(_QWORD *)(v4 + 144) + 88LL) + 112LL))(
           v5,
           73,
           &v14,
           v15);
    v7 = *(_QWORD *)(v2 + 104);
    v8 = *(_QWORD *)(v2 + 80);
    if ( !v6 )
    {
      if ( v14 )
        break;
    }
    if ( !(unsigned __int8)sub_28340(v8, v7, 0x31u, &v16) || !(unsigned int)sub_849A0(&v16, v1) )
      goto LABEL_9;
    v9 = v17;
    v10 = sub_39BA0(*(_QWORD *)(v17 + 144) + 72LL, (__int64)&v16);
    if ( v10 == *(_QWORD *)(v9 + 144) + 80LL )
      return v18 - __readfsqword(0x28u);
    v2 = *(_QWORD *)(v10 + 48);
  }
  if ( !(unsigned __int8)sub_28340(v8, v7, 0x49u, &v16) )
  {
LABEL_9:
    *(_QWORD *)(a1 + 88) = a1;
    return v18 - __readfsqword(0x28u);
  }
  v12 = v17;
  v13 = sub_39BA0(*(_QWORD *)(v17 + 144) + 72LL, (__int64)&v16);
  if ( v13 != *(_QWORD *)(v12 + 144) + 80LL )
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(v13 + 48);
  return v18 - __readfsqword(0x28u);
}

