__int64 __fastcall sub_24922(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v6; // r12
  __int64 v7; // r14
  char v8; // al
  unsigned int v9; // ebp
  unsigned __int8 v10; // al
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rdx

  v6 = a3;
  v7 = *(_QWORD *)(a1 + 16);
  if ( !v7 )
    v7 = sub_E2050(a1);
  v8 = *(_BYTE *)(a1 + 31);
  if ( v8 )
  {
    v10 = v8 - 1;
    *(_BYTE *)(a1 + 31) = v10;
    v9 = *(_DWORD *)(a1 + 4LL * v10 + 216);
  }
  else
  {
    v9 = *(_DWORD *)(a1 + 56) + 1;
    *(_DWORD *)(a1 + 56) = v9;
  }
  if ( a2 <= 1 )
    sub_DBD10(a1, (unsigned int)"corrupt schema", a3, a4, a5, a6);
  sub_E1710(v7, 144, (unsigned int)a2, v9, (unsigned int)v6);
  v11 = *(_QWORD *)(a1 + 160);
  if ( !v11 )
    v11 = a1;
  *(_BYTE *)(v11 + 33) = 1;
  result = sub_15B750(
             a1,
             (unsigned int)"UPDATE %Q.sqlite_master SET rootpage=%d WHERE #%d AND rootpage=#%d",
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 32 * v6),
             a2,
             v9,
             v9);
  if ( v9 )
    return sub_CEFE0(a1, v9, v13);
  return result;
}
