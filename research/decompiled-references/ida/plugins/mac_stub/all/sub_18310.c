__int64 __fastcall sub_18310(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  bool v5; // cc
  const char *v9; // r14
  __int64 v10; // r13
  unsigned int v11; // ebx
  const char *v13; // rsi
  const char *v14; // [rsp+8h] [rbp-60h]
  const char *v15; // [rsp+10h] [rbp-58h] BYREF
  __int64 v16; // [rsp+18h] [rbp-50h]
  __int64 v17; // [rsp+20h] [rbp-48h]
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 216) <= 1u;
  v18 = __readfsqword(0x28u);
  v17 = 0;
  if ( !v5 )
  {
    v15 = nullptr;
    v16 = 0;
    sub_15060(a1, &v15);
    v9 = v15;
    if ( v16 )
    {
      v10 = open_linput();
      if ( v10 )
      {
        v14 = v9;
        goto LABEL_5;
      }
      v13 = v9;
    }
    else
    {
      v10 = open_linput();
      v14 = s;
      v13 = s;
      if ( v10 )
      {
LABEL_5:
        v11 = sub_17FF0(a1, v10, a4);
        if ( (_BYTE)v11 )
          v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, v10, a2, a5);
        else
          sub_DBF0(
            (__int64)"WARNING: UUID mismatch for symbol file %s. Please make sure SYMBOL_PATH in the debugger's cfg file "
                     "points to symbols that are compatible with the remote machine.\n",
            v14);
LABEL_7:
        close_linput();
        if ( v9 )
          qfree();
        return v11;
      }
    }
    sub_DBF0((__int64)"WARNING: symbol file not found %s.\n", v13);
    v11 = 0;
    goto LABEL_7;
  }
  if ( *(_BYTE *)(a1 + 25) )
  {
    sub_DBF0((__int64)"WARNING: No path to local symbol cache specified. Symbol loading might be very slow. You can set S"
                      "YMBOL_PATH in the debugger's cfg file for faster and more detailed debugging.\n");
    *(_BYTE *)(a1 + 25) = 0;
  }
  return 0;
}

