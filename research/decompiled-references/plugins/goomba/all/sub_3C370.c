unsigned __int64 __fastcall sub_3C370(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbp
  unsigned __int8 (__fastcall *hexdsp)(__int64, __int64, _QWORD, __int64); // rax
  unsigned __int8 (__fastcall *v8)(__int64, __int64, _QWORD, __int64); // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdx
  unsigned __int8 (__fastcall *v12)(__int64, __int64, _QWORD, __int64); // rax
  __int64 v13; // rdx
  void (__fastcall *v14)(__int64, _BYTE *, __int64); // rax
  __int64 v15; // rdx
  _BYTE v16[24]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v3 = a2;
  v17 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = a1 + 16;
  *(_QWORD *)(a1 + 40) = a1 + 16;
  *(_QWORD *)(a1 + 48) = 0;
  hexdsp = (unsigned __int8 (__fastcall *)(__int64, __int64, _QWORD, __int64))get_hexdsp(a1, a2);
  if ( hexdsp(299, a2, 0, 1) )
  {
LABEL_6:
    *(_DWORD *)a1 = a3 * extend_sign(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 16LL), *(unsigned int *)(v3 + 4), 1);
    return v17 - __readfsqword(0x28u);
  }
  if ( (unsigned __int8)sub_373C0((_DWORD *)a2, a2) )
  {
    *(_DWORD *)a1 = a3;
    v14 = (void (__fastcall *)(__int64, _BYTE *, __int64))get_hexdsp(a2, a2);
    v14(273, v16, a2);
    sub_3BC70((_QWORD *)(a1 + 8), (__int64)v16);
    sub_C930((__int64)v16, (__int64)v16, v15);
    return v17 - __readfsqword(0x28u);
  }
  if ( *(_BYTE *)a2 != 4 || (v3 = *(_QWORD *)(a2 + 8), *(_DWORD *)v3 != 14) )
  {
    if ( under_debugger )
      BUG();
    interr(30826);
    goto LABEL_6;
  }
  v8 = (unsigned __int8 (__fastcall *)(__int64, __int64, _QWORD, __int64))get_hexdsp(a2, a2);
  v9 = v3 + 32;
  v10 = 299;
  if ( v8(299, v3 + 32, 0, 1) && (v10 = v3 + 48, (unsigned __int8)sub_373C0((_DWORD *)(v3 + 48), v9)) )
  {
    *(_DWORD *)a1 = a3 * extend_sign(*(_QWORD *)(*(_QWORD *)(v3 + 40) + 16LL), *(unsigned int *)(v3 + 36), 1);
    sub_33DA0((__int64)v16, v3 + 48);
    sub_3BC70((_QWORD *)(a1 + 8), (__int64)v16);
    sub_C930((__int64)v16, (__int64)v16, v11);
  }
  else
  {
    v12 = (unsigned __int8 (__fastcall *)(__int64, __int64, _QWORD, __int64))get_hexdsp(v10, v9);
    if ( v12(299, v3 + 48, 0, 1) && (unsigned __int8)sub_373C0((_DWORD *)(v3 + 32), v3 + 48) )
    {
      *(_DWORD *)a1 = extend_sign(*(_QWORD *)(*(_QWORD *)(v3 + 56) + 16LL), *(unsigned int *)(v3 + 52), 1) * a3;
      sub_33DA0((__int64)v16, v3 + 32);
      sub_3BC70((_QWORD *)(a1 + 8), (__int64)v16);
      sub_C930((__int64)v16, (__int64)v16, v13);
    }
  }
  return v17 - __readfsqword(0x28u);
}
