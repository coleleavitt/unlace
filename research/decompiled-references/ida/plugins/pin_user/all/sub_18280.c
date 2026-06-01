__int64 __fastcall sub_18280(__int64 a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rax
  __int64 result; // rax
  int v5; // eax
  const char *v6; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  bool v9; // zf
  const char *v10; // rax
  _QWORD v11[2]; // [rsp+0h] [rbp-448h] BYREF
  _BYTE v12[1024]; // [rsp+10h] [rbp-438h] BYREF
  int v13; // [rsp+410h] [rbp-38h]
  int v14; // [rsp+414h] [rbp-34h]
  bool v15; // [rsp+418h] [rbp-30h]
  unsigned __int64 v16; // [rsp+428h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  qstrncpy();
  v14 = 0;
  v2 = *(_QWORD *)(a1 + 24);
  v13 = dword_3A5B8;
  v15 = (byte_3A5B0[0] & 0x10) != 0;
  v3 = sub_26290(v2, v12, 1033);
  if ( v3 <= 0x408 )
  {
    v5 = sub_260B0(*(_QWORD *)(a1 + 24));
    *(_BYTE *)(a1 + 1288) = 1;
    if ( v5 != 62 && !*(_BYTE *)(a1 + 1289) && !*(_BYTE *)(a1 + 81) )
    {
      v6 = (const char *)sub_260C0(*(_QWORD *)(a1 + 24));
      sub_BDA0((__int64)"Network error: %s\n", v6);
    }
  }
  else if ( v3 == -1 )
  {
    return 0;
  }
  *(_BYTE *)(a1 + 1289) = 0;
  v7 = *(_QWORD *)(a1 + 24);
  v11[0] = 0;
  v11[1] = -1;
  v8 = sub_26190(v7, v11, 16, 0xFFFFFFFFLL);
  if ( v8 <= 0xF )
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
  if ( v8 != 16 )
    return 0;
  result = 1;
  if ( LODWORD(v11[0]) )
  {
    sub_BCD0((__int64)"Sorry, PIN tracer doesn't support tracing from beginning with the current options.\n"
                      "Note that basic block or instruction level tracing since beginning with the option\n"
                      "\"Trace over debugger segments\" unchecked is not supported in Win32 targets.\n"
                      "\n"
                      "Please change the options in Debugger->Debugging Options->Set Specific Options");
    return 0;
  }
  return result;
}

