__int64 __fastcall sub_10F6E0(__int64 a1, unsigned int a2, __int64 *a3, char a4)
{
  __int64 v8; // rdi
  unsigned int v9; // r12d
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r13
  _DWORD *v16; // rax
  _QWORD *v18; // rax
  __int64 v19; // [rsp+8h] [rbp-60h]
  int v20; // [rsp+1Ch] [rbp-4Ch] BYREF
  _QWORD v21[9]; // [rsp+20h] [rbp-48h] BYREF

  v21[1] = __readfsqword(0x28u);
  v20 = 0;
  if ( a2 <= 1 )
  {
    if ( !a2 )
    {
      sub_E8BB0(
        0xBu,
        "%s at line %d of [%.10s]",
        "database corruption",
        59364,
        "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
      return 11;
    }
    return (unsigned int)sub_10F3A0(a1, a2, a3, a4);
  }
  if ( *(_BYTE *)(a1 + 21) != 1 && (a4 & 2) == 0 )
    return (unsigned int)sub_10F3A0(a1, a2, a3, a4);
  v8 = *(_QWORD *)(a1 + 296);
  if ( v8 )
  {
    v9 = sub_EC5B0(v8, a2, &v20);
    if ( v9 )
      goto LABEL_16;
    if ( v20 )
      return (unsigned int)sub_10F3A0(a1, a2, a3, a4);
  }
  v10 = *(_QWORD *)(a1 + 72);
  v11 = *(_QWORD *)(a1 + 200);
  v12 = a2 - 1;
  v21[0] = 0;
  v13 = v12 * v11;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *))(*(_QWORD *)v10 + 136LL))(
         v10,
         v12 * v11,
         v11,
         v21);
  if ( v9 )
    goto LABEL_16;
  v14 = v21[0];
  if ( !v21[0] )
    return (unsigned int)sub_10F3A0(a1, a2, a3, a4);
  if ( *(_BYTE *)(a1 + 21) <= 1u && !*(_BYTE *)(a1 + 16) )
    goto LABEL_22;
  v13 = a2;
  v15 = sub_CC270((__int64 *)(a1 + 288), a2);
  if ( !v15 )
  {
    v14 = v21[0];
LABEL_22:
    v15 = *(_QWORD *)(a1 + 168);
    if ( v15 )
    {
      *(_QWORD *)(a1 + 168) = *(_QWORD *)(v15 + 32);
      v18 = *(_QWORD **)(v15 + 16);
      *(_QWORD *)(v15 + 32) = 0;
      *v18 = 0;
LABEL_24:
      *(_DWORD *)(v15 + 48) = a2;
      *(_QWORD *)(v15 + 8) = v14;
      ++*(_DWORD *)(a1 + 152);
      goto LABEL_13;
    }
    v19 = v14;
    v16 = sub_D2260(*(unsigned __int16 *)(a1 + 176) + 72LL, v13);
    v15 = (__int64)v16;
    v14 = v19;
    if ( v16 )
    {
      v16[13] = 65568;
      *((_QWORD *)v16 + 5) = a1;
      *((_QWORD *)v16 + 2) = v16 + 18;
      goto LABEL_24;
    }
    v9 = 7;
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 72) + 144LL))(
      *(_QWORD *)(a1 + 72),
      v12 * *(_QWORD *)(a1 + 200),
      v19);
LABEL_16:
    *a3 = 0;
    return v9;
  }
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 72) + 144LL))(
    *(_QWORD *)(a1 + 72),
    v12 * *(_QWORD *)(a1 + 200),
    v21[0]);
LABEL_13:
  *a3 = v15;
  return v9;
}
