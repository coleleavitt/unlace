__int64 __fastcall sub_12BA0(int a1, __int64 a2)
{
  __int64 v4; // rbx
  char *v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rsi
  unsigned __int16 v8; // [rsp+6h] [rbp-22h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( a1 == -1 || a1 == 11 )
  {
    if ( !(**(unsigned __int8 (__fastcall ***)(__int64, __int64, unsigned __int16 *))a2)(a2, 11, &v8) )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    v4 = 1;
    v5 = (char *)&unk_61A30 + 6 * v8;
    do
    {
      v6 = (unsigned __int8)v5[v4 - 1];
      v7 = (unsigned int)v4++;
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v7, v6);
    }
    while ( v4 != 7 );
  }
  return 1;
}

