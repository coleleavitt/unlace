__int64 __fastcall sub_1C050(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rdi
  unsigned __int64 v8; // rax
  __int64 result; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r12
  bool v12; // zf
  const char *v13; // rax
  const char *v14; // rax
  _DWORD v15[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v16; // [rsp+8h] [rbp-40h]
  _QWORD v17[7]; // [rsp+10h] [rbp-38h] BYREF

  v4 = a3;
  v17[3] = __readfsqword(0x28u);
  if ( a3 > 76 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v6 = *(_QWORD *)(a1 + 24);
  v16 = a2;
  v15[0] = 26;
  v15[1] = a3;
  v8 = sub_26290(v6, v15, 16);
  if ( v8 <= 0xF )
  {
    if ( (unsigned int)sub_260B0(*(_QWORD *)(a1 + 24)) == 62 )
    {
      *(_WORD *)(a1 + 1288) = 257;
    }
    else
    {
      v12 = *(_BYTE *)(a1 + 1289) == 0;
      *(_BYTE *)(a1 + 1288) = 1;
      if ( v12 && !*(_BYTE *)(a1 + 81) )
      {
        v13 = (const char *)sub_260C0(*(_QWORD *)(a1 + 24));
        sub_BDA0((__int64)"Network error: %s\n", v13);
      }
    }
    return 0;
  }
  if ( v8 != 16 )
    return 0;
  v10 = 36 * v4;
  v11 = sub_26290(*(_QWORD *)(a1 + 24), a4, v10);
  if ( v11 < v10 )
  {
    if ( (unsigned int)sub_260B0(*(_QWORD *)(a1 + 24)) == 62 )
    {
      *(_WORD *)(a1 + 1288) = 257;
    }
    else
    {
      v12 = *(_BYTE *)(a1 + 1289) == 0;
      *(_BYTE *)(a1 + 1288) = 1;
      if ( v12 && !*(_BYTE *)(a1 + 81) )
      {
        v14 = (const char *)sub_260C0(*(_QWORD *)(a1 + 24));
        sub_BDA0((__int64)"Network error: %s\n", v14);
      }
    }
  }
  if ( v10 != v11 )
    return 0;
  v17[0] = 0;
  v17[1] = -1;
  result = sub_18D10(a1, (int *)v17);
  if ( !(_BYTE)result )
    return 0;
  if ( LODWORD(v17[0]) )
  {
    if ( LODWORD(v17[0]) != 1 && !*(_BYTE *)(a1 + 1289) )
      sub_BDA0((__int64)"Error in send message, packet code %x.\n", v15[0]);
    return 0;
  }
  return result;
}

