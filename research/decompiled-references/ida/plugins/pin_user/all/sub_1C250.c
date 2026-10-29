__int64 __fastcall sub_1C250(__int64 a1, int a2, int a3, __int64 *a4)
{
  __int64 v5; // rdi
  unsigned __int64 v7; // rax
  __int64 result; // rax
  bool v9; // zf
  const char *v10; // rax
  _DWORD v11[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+8h] [rbp-40h]
  __int64 v13; // [rsp+10h] [rbp-38h] BYREF
  __int64 v14; // [rsp+18h] [rbp-30h]
  unsigned __int64 v15; // [rsp+28h] [rbp-20h]

  v5 = *(_QWORD *)(a1 + 24);
  v15 = __readfsqword(0x28u);
  v11[1] = a2;
  v12 = a3;
  v11[0] = 27;
  v7 = sub_26290(v5, v11, 16);
  if ( v7 <= 0xF )
  {
    if ( (unsigned int)sub_260B0(*(_QWORD *)(a1 + 24)) == 62 )
    {
      *(_WORD *)(a1 + 1288) = 257;
    }
    else
    {
      v9 = *(_BYTE *)(a1 + 1289) == 0;
      *(_BYTE *)(a1 + 1288) = 1;
      if ( v9 && !*(_BYTE *)(a1 + 81) )
      {
        v10 = (const char *)sub_260C0(*(_QWORD *)(a1 + 24));
        sub_BDA0((__int64)"Network error: %s\n", v10);
      }
    }
    return 0;
  }
  if ( v7 != 16 )
    return 0;
  v13 = 0;
  v14 = -1;
  result = sub_18D10(a1, (int *)&v13);
  if ( !(_BYTE)result || (_DWORD)v13 )
    return 0;
  *a4 = v14;
  return result;
}

