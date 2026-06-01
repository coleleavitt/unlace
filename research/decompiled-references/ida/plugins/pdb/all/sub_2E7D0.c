__int64 __fastcall sub_2E7D0(__int64 a1)
{
  bool v1; // zf
  __int64 **v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64 *); // rax
  __int64 *v5; // rax
  __int64 **v6; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD *); // rax
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v12[3]; // [rsp+10h] [rbp-18h] BYREF

  v1 = *(_BYTE *)(a1 + 56) == 0;
  v12[1] = __readfsqword(0x28u);
  if ( !v1 )
    goto LABEL_10;
  v3 = *(__int64 ***)(a1 + 24);
  v4 = (__int64 (__fastcall *)(__int64, __int64 *))(*v3)[27];
  if ( v4 == sub_2D160 )
  {
    v5 = (__int64 *)sub_2CEC0(v3[2], 0x40000000, 0x40000000u, 0x40000000);
    if ( !v5 )
      goto LABEL_14;
    v11 = *v5;
  }
  else if ( (unsigned int)v4((__int64)v3, &v11) )
  {
    goto LABEL_14;
  }
  v6 = *(__int64 ***)(a1 + 24);
  v7 = (__int64 (__fastcall *)(__int64, _QWORD *))(*v6)[14];
  if ( v7 == sub_2D0F0 )
  {
    v8 = (_QWORD *)sub_2CEC0(v6[2], 0x8000000, 0x8000000u, 0x8000000);
    if ( !v8 )
      goto LABEL_14;
    v12[0] = *v8;
  }
  else if ( (unsigned int)v7((__int64)v6, v12) )
  {
    goto LABEL_14;
  }
  if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 104LL) + 40LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL),
          a1 + 32,
          v11) )
  {
    *(_BYTE *)(a1 + 56) = 1;
    goto LABEL_10;
  }
LABEL_14:
  if ( !*(_BYTE *)(a1 + 56) )
    return 0;
LABEL_10:
  v9 = *(_QWORD *)(a1 + 40);
  result = 0xFFFFFFFFLL;
  if ( v9 )
    return *(unsigned int *)(*(_QWORD *)(a1 + 32) + 8 * (5 * v9 - 5) + 12);
  return result;
}

