__int64 __fastcall sub_2E660(__int64 a1)
{
  bool v1; // zf
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 **v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64 *); // rax
  __int64 *v7; // rax
  __int64 **v8; // rdi
  __int64 (__fastcall *v9)(__int64, _QWORD *); // rax
  _QWORD *v10; // rax
  __int64 v11; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v12[3]; // [rsp+10h] [rbp-18h] BYREF

  v1 = *(_BYTE *)(a1 + 56) == 0;
  v12[1] = __readfsqword(0x28u);
  if ( !v1 )
    goto LABEL_2;
  v5 = *(__int64 ***)(a1 + 24);
  v6 = (__int64 (__fastcall *)(__int64, __int64 *))(*v5)[27];
  if ( v6 == sub_2D160 )
  {
    v7 = (__int64 *)sub_2CEC0(v5[2], 0x40000000, 0x40000000u, 0x40000000);
    if ( !v7 )
      goto LABEL_14;
    v11 = *v7;
  }
  else if ( (unsigned int)v6((__int64)v5, &v11) )
  {
    goto LABEL_14;
  }
  v8 = *(__int64 ***)(a1 + 24);
  v9 = (__int64 (__fastcall *)(__int64, _QWORD *))(*v8)[14];
  if ( v9 == sub_2D0F0 )
  {
    v10 = (_QWORD *)sub_2CEC0(v8[2], 0x8000000, 0x8000000u, 0x8000000);
    if ( !v10 )
      goto LABEL_14;
    v12[0] = *v10;
  }
  else if ( (unsigned int)v9((__int64)v8, v12) )
  {
    goto LABEL_14;
  }
  if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 104LL) + 40LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL),
          a1 + 32,
          v11) )
  {
    *(_BYTE *)(a1 + 56) = 1;
    goto LABEL_2;
  }
LABEL_14:
  if ( !*(_BYTE *)(a1 + 56) )
    return 0;
LABEL_2:
  v3 = *(_QWORD *)(a1 + 40);
  result = 0xFFFFFFFFLL;
  if ( v3 )
    return *(unsigned int *)(*(_QWORD *)(a1 + 32) + 8 * (5 * v3 - 5) + 20);
  return result;
}

