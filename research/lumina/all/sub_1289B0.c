__int64 __fastcall sub_1289B0(__int64 a1, __int64 a2, int *a3, double a4)
{
  __int64 v5; // rbx
  int v6; // eax
  char v7; // al
  unsigned __int8 v8; // al
  int v9; // r12d
  __int64 result; // rax
  unsigned int v11; // [rsp+Ch] [rbp-6Ch]
  _BYTE v12[8]; // [rsp+10h] [rbp-68h] BYREF
  __int64 (__fastcall *v13)(__int64, __int64); // [rsp+18h] [rbp-60h]
  __int64 (__fastcall *v14)(__int64); // [rsp+20h] [rbp-58h]
  __int16 v15; // [rsp+34h] [rbp-44h]
  int v16; // [rsp+38h] [rbp-40h]
  unsigned __int64 v17; // [rsp+48h] [rbp-30h]

  v5 = a2;
  v17 = __readfsqword(0x28u);
  if ( !a2 )
    goto LABEL_7;
  while ( 1 )
  {
    v6 = *(_DWORD *)(v5 + 4);
    if ( (v6 & 0x41000) == 0 )
      break;
    if ( (v6 & 0x40000) != 0 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 8LL);
      if ( !v5 )
        goto LABEL_7;
    }
    else
    {
      v5 = *(_QWORD *)(v5 + 16);
      if ( !v5 )
        goto LABEL_7;
    }
  }
  if ( *(_BYTE *)(a1 + 35)
    && *(_BYTE *)v5 != 0xB0
    && (v15 = 2, v16 = 0, v13 = sub_CE7B0, v14 = sub_C43E0, sub_CDCD0((__int64)v12, v5), v15) )
  {
    *a3 = 0;
    return sub_127A90(a1, v5, -1, a4);
  }
  else
  {
LABEL_7:
    v7 = *(_BYTE *)(a1 + 31);
    if ( v7 )
    {
      v8 = v7 - 1;
      *(_BYTE *)(a1 + 31) = v8;
      v9 = *(_DWORD *)(a1 + 4LL * v8 + 216);
    }
    else
    {
      v9 = *(_DWORD *)(a1 + 56) + 1;
      *(_DWORD *)(a1 + 56) = v9;
    }
    result = sub_1257D0(a1, (unsigned __int8 *)v5, v9, a4);
    if ( (_DWORD)result == v9 )
    {
      *a3 = v9;
    }
    else
    {
      if ( v9 )
      {
        v11 = result;
        sub_CEFE0(a1, v9);
        result = v11;
      }
      *a3 = 0;
    }
  }
  return result;
}
