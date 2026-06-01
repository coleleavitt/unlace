__int64 __fastcall sub_25C80(__int64 a1, __int64 a2, int a3)
{
  int v5; // ebp
  __int64 v6; // rbx
  unsigned int v7; // ebx
  __int64 (***v9)(); // rdi
  __int64 (*v10)(); // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // [rsp+8h] [rbp-1050h] BYREF
  _BYTE v15[4104]; // [rsp+10h] [rbp-1048h] BYREF
  unsigned __int64 v16; // [rsp+1018h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 464) )
    return 0;
  qtmpnam();
  if ( !fopenWB() )
  {
    get_errdesc();
    sub_196C0((__int64)"%s");
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
      v14 = 0;
      qstrncpy();
      v9 = *(__int64 (****)())(a1 + 464);
      v10 = **v9;
      if ( v10 == sub_118C0
         ? extract_module_from_archive()
         : ((unsigned __int8 (__fastcall *)(__int64 (***)(), _BYTE *, __int64, __int64 *, _QWORD))v10)(
             v9,
             v15,
             4096,
             &v14,
             0) )
      {
        if ( *(_BYTE *)(a1 + 56) )
          close_linput();
        v12 = open_linput();
        *(_QWORD *)(a1 + 48) = v12;
        if ( !v12 )
        {
          if ( !under_debugger )
            interr();
          BUG();
        }
        v13 = *(_QWORD *)(a1 + 72);
        *(_BYTE *)(a1 + 56) = 1;
        *(_QWORD *)(a1 + 96) = 0;
        if ( v13 )
        {
          *(_QWORD *)(a1 + 80) = 0;
          qfree();
          *(_QWORD *)(a1 + 72) = 0;
          *(_QWORD *)(a1 + 88) = 0;
        }
        if ( sub_25BB0(a1) )
        {
          v7 = sub_25EF0(a1, 0, 0, 0);
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

