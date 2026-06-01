__int64 __fastcall sub_3F50(_QWORD *a1, _DWORD *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 result; // rax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  int v10; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v4 = a1[1];
  v5 = a1[3];
  v11 = __readfsqword(0x28u);
  result = 0;
  v7 = v4 + v5;
  v8 = a1[4] + v4;
  if ( v7 < v8 )
  {
    result = sub_E4B0(v7, v8, &v10);
    if ( result )
    {
      v9 = a1[3];
      a1[5] = v9;
      a1[3] = result + v9;
      LODWORD(v9) = v10;
      a2[1] = -1;
      *a2 = v9;
    }
  }
  return result;
}

