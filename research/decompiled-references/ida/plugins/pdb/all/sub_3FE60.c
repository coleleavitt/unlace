__int64 __fastcall sub_3FE60(__int64 a1, _DWORD *a2, __int64 *a3, unsigned int a4, unsigned int a5)
{
  const char *v7; // rsi
  unsigned int v8; // ebx
  __int64 v9; // rax
  int v11; // [rsp+0h] [rbp-40h] BYREF
  int v12; // [rsp+4h] [rbp-3Ch]
  const char *v13; // [rsp+8h] [rbp-38h] BYREF
  __int128 v14; // [rsp+10h] [rbp-30h]
  unsigned __int64 v15; // [rsp+20h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  v14 = 0;
  v13 = nullptr;
  sub_38090(&v13, a4, a5);
  v7 = src;
  if ( (_QWORD)v14 )
    v7 = v13;
  v8 = parse_reg_name(&v11, v7);
  if ( (_BYTE)v8 )
  {
    *a2 = v11;
    v9 = -1;
    if ( (unsigned __int64)(8 * v12) <= 0x3F )
      v9 = (1LL << (8 * (unsigned __int8)v12)) - 1;
    *a3 = v9;
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  return v8;
}

