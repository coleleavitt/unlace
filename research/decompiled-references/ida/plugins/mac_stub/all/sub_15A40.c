__int64 __fastcall sub_15A40(__int64 a1, __int64 a2, int a3)
{
  int v5; // ebp
  __int64 v6; // rbx
  unsigned int v7; // ebx
  const char *errdesc; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // [rsp+8h] [rbp-1050h] BYREF
  _BYTE v13[4104]; // [rsp+10h] [rbp-1048h] BYREF
  unsigned __int64 v14; // [rsp+1018h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 464) )
    return 0;
  qtmpnam();
  if ( !fopenWB() )
  {
    errdesc = (const char *)get_errdesc();
    sub_DB20((__int64)"%s", errdesc);
    return 0;
  }
  v5 = a3;
  qlseek();
  if ( a3 <= 0 )
  {
LABEL_16:
    qfclose();
    if ( !v5 )
    {
      v12 = 0;
      qstrncpy();
      if ( (***(unsigned __int8 (__fastcall ****)(_QWORD, _BYTE *, __int64, __int64 *, _QWORD))(a1 + 464))(
             *(_QWORD *)(a1 + 464),
             v13,
             4096,
             &v12,
             0) )
      {
        if ( *(_BYTE *)(a1 + 56) )
          close_linput();
        v10 = open_linput();
        *(_QWORD *)(a1 + 48) = v10;
        if ( !v10 )
        {
          if ( !under_debugger )
            interr();
          BUG();
        }
        v11 = *(_QWORD *)(a1 + 72);
        *(_BYTE *)(a1 + 56) = 1;
        *(_QWORD *)(a1 + 96) = 0;
        if ( v11 )
        {
          *(_QWORD *)(a1 + 80) = 0;
          qfree();
          *(_QWORD *)(a1 + 72) = 0;
          *(_QWORD *)(a1 + 88) = 0;
        }
        if ( sub_15970(a1) )
        {
          v7 = sub_15C80(a1, 0, 0, 0);
          goto LABEL_12;
        }
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v6 = v5;
      if ( (unsigned __int64)v5 > 0x1000 )
        v6 = 4096;
      if ( v6 != qlread() || v6 != qfwrite() )
        break;
      v5 -= v6;
      if ( v5 <= 0 )
        goto LABEL_16;
    }
    qfclose();
  }
  v7 = 0;
LABEL_12:
  qunlink();
  return v7;
}

