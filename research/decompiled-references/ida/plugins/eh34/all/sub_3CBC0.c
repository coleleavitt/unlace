__int64 __fastcall sub_3CBC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned int v7; // r13d
  char v8; // al
  __int64 v10; // rsi
  unsigned int v11; // r15d
  __int64 v12; // r12
  void (__fastcall *v13)(__int64, _BYTE *, __int64 *, _QWORD, __int64); // rax
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int128 v16; // kr00_16
  int v17; // eax
  __int64 v18; // rbp
  unsigned int v19; // r12d
  void (__fastcall *hexdsp)(__int64, __int64, _QWORD, _QWORD); // rax
  _BYTE v21[8]; // [rsp+8h] [rbp-70h] BYREF
  __int64 v22; // [rsp+10h] [rbp-68h] BYREF
  __int128 v23; // [rsp+18h] [rbp-60h]
  char v24; // [rsp+28h] [rbp-50h]
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v5 = *(_QWORD *)(a3 + 8);
  v25 = __readfsqword(0x28u);
  v7 = *(_DWORD *)(v5 + 64);
  v8 = *(_BYTE *)(a2 + 1985);
  if ( v8 == 3 )
  {
    v10 = a2 + 48;
    sub_136B0((__int64)&v22, v10, a3);
    if ( !v24 )
    {
LABEL_6:
      *(_DWORD *)(a2 + 1988) = v22;
      v11 = *(_DWORD *)(a2 + 1988);
      if ( v11 == -29 )
      {
        *(_BYTE *)(a2 + 1985) = -1;
        v17 = *(_DWORD *)(*(_QWORD *)(a3 + 8) + 64LL);
        if ( v17 != v7 )
        {
          *(_DWORD *)(*(_QWORD *)(a2 + 32) + 36LL) = v17 - v7;
          v18 = *(_QWORD *)(a3 + 8);
          v19 = *(_DWORD *)(v18 + 64);
          hexdsp = (void (__fastcall *)(__int64, __int64, _QWORD, _QWORD))get_hexdsp(&v22, v10);
          hexdsp(618, v18, v7, v19);
          goto LABEL_3;
        }
      }
      else if ( v11 )
      {
        v12 = *(_QWORD *)(a3 + 8);
        v22 = 0;
        v23 = 0;
        v13 = (void (__fastcall *)(__int64, _BYTE *, __int64 *, _QWORD, __int64))get_hexdsp(&v22, v10);
        v13(146, v21, &v22, v11, v12);
        v14 = v22;
        *(_BYTE *)(a2 + 1985) = -1;
        if ( v14 )
        {
          *(_QWORD *)&v23 = 0;
          qfree(v14);
        }
        v11 = *(_DWORD *)(a2 + 1988);
      }
      *(_DWORD *)a1 = v11;
      *(_BYTE *)(a1 + 24) = 0;
      return a1;
    }
LABEL_13:
    v15 = v22;
    v16 = v23;
    *(_BYTE *)(a2 + 1985) = -1;
    *(_QWORD *)a1 = v15;
    *(_OWORD *)(a1 + 8) = v16;
    *(_BYTE *)(a1 + 24) = 1;
    return a1;
  }
  if ( v8 == 4 )
  {
    v10 = a2 + 1360;
    sub_6CBE0(&v22, v10, a3);
    if ( !v24 )
      goto LABEL_6;
    goto LABEL_13;
  }
LABEL_3:
  *(_DWORD *)a1 = 0;
  *(_BYTE *)(a1 + 24) = 0;
  return a1;
}

