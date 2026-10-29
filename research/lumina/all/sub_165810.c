__int64 __fastcall sub_165810(__int64 a1, __int64 a2, double a3)
{
  _QWORD *v4; // rbp
  __int64 result; // rax
  __int64 v6; // rdx
  int v7; // ecx
  __int64 *v8; // rbx
  int v9; // r8d
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  char *v14; // rdi
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  unsigned int v18; // [rsp+Ch] [rbp-1Ch]

  v4 = (_QWORD *)a1;
  *(_QWORD *)a2 = 0;
  result = sub_FEBD0(a1, a2);
  if ( !(_DWORD)result )
  {
    if ( !a1 )
      v4 = &unk_1BA83B;
    v8 = sub_DC1C0(0, 0x38u);
    if ( v8 )
    {
      v8[3] = 0;
      *((_WORD *)v8 + 10) = 1;
      sub_F11D0((__int64)v8, v4, -1, 2, nullptr, v10);
    }
    v11 = 1;
    v14 = (char *)sub_D9DB0((__int64)v8, 1u, a3, v6, v7, v9, v10);
    v17 = 7;
    if ( v14 )
    {
      v11 = a2;
      v17 = sub_1650B0(v14, a2, 6u, 0);
      if ( v17 )
      {
        v17 = (unsigned __int8)v17;
      }
      else
      {
        v12 = *(_QWORD *)a2;
        v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 24LL);
        if ( (*(_BYTE *)(v13 + 114) & 1) == 0 )
        {
          *(_BYTE *)(v12 + 100) = 2;
          v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 24LL);
          *(_BYTE *)(v12 + 113) = 2;
        }
      }
    }
    v18 = v17;
    sub_C9940((__int64)v8, v11, v12, v13, v15, v16);
    return v18;
  }
  return result;
}
