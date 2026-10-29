__int64 __fastcall sub_8D620(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // r15
  __int64 v6; // r14
  int v7; // ebp
  __int64 v8; // rbx
  unsigned int v9; // ebx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // [rsp+8h] [rbp-1050h] BYREF
  _BYTE v14[4104]; // [rsp+10h] [rbp-1048h] BYREF
  unsigned __int64 v15; // [rsp+1018h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 464) )
    return 0;
  v5 = qtmpnam(0, 0);
  v6 = fopenWB(v5);
  if ( !v6 )
  {
    get_errdesc(v5, 0xFFFFFFFFLL);
    sub_17040();
    return 0;
  }
  v7 = a3;
  qlseek(*(_QWORD *)(a1 + 48), a2, 0);
  if ( a3 <= 0 )
  {
LABEL_16:
    qfclose(v6);
    if ( !v7 )
    {
      v13 = 0;
      qstrncpy(v14, v5, 4096);
      if ( (***(unsigned __int8 (__fastcall ****)(_QWORD, _BYTE *, __int64, __int64 *, _QWORD))(a1 + 464))(
             *(_QWORD *)(a1 + 464),
             v14,
             4096,
             &v13,
             0) )
      {
        if ( *(_BYTE *)(a1 + 56) )
          close_linput(*(_QWORD *)(a1 + 48));
        v11 = open_linput(v13, 0);
        *(_QWORD *)(a1 + 48) = v11;
        if ( !v11 )
        {
          if ( !under_debugger )
            interr(20028);
          BUG();
        }
        v12 = *(_QWORD *)(a1 + 72);
        *(_BYTE *)(a1 + 56) = 1;
        *(_QWORD *)(a1 + 96) = 0;
        if ( v12 )
        {
          *(_QWORD *)(a1 + 80) = 0;
          qfree(v12);
          *(_QWORD *)(a1 + 72) = 0;
          *(_QWORD *)(a1 + 88) = 0;
        }
        if ( sub_8D550(a1) )
        {
          v9 = sub_8D860(a1, 0, 0, 0);
          goto LABEL_12;
        }
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v8 = v7;
      if ( (unsigned __int64)v7 > 0x1000 )
        v8 = 4096;
      if ( v8 != qlread(*(_QWORD *)(a1 + 48), v14, v8) || v8 != qfwrite(v6, v14, v8) )
        break;
      v7 -= v8;
      if ( v7 <= 0 )
        goto LABEL_16;
    }
    qfclose(v6);
  }
  v9 = 0;
LABEL_12:
  qunlink(v5);
  return v9;
}

