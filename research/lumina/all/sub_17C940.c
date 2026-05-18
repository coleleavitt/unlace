__int64 __fastcall sub_17C940(__int64 a1, __int64 a2)
{
  unsigned int v3; // r13d
  __int64 v4; // rdx
  __int64 v5; // rbx
  int v6; // r9d
  __int64 v7; // rax
  _QWORD *v8; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  void *ptr; // [rsp+0h] [rbp-5098h] BYREF
  __int128 v13; // [rsp+8h] [rbp-5090h]
  _BYTE v14[4]; // [rsp+20h] [rbp-5078h] BYREF
  _BYTE v15[8228]; // [rsp+24h] [rbp-5074h] BYREF
  __int64 v16; // [rsp+2048h] [rbp-3050h]
  int v17; // [rsp+2054h] [rbp-3044h]
  _BYTE v18[4104]; // [rsp+4060h] [rbp-1038h] BYREF
  unsigned __int64 v19; // [rsp+5068h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  v3 = sub_197CA0(a1);
  if ( !(_BYTE)v3 )
  {
    v18[0] = 0;
    ptr = nullptr;
    v13 = 0;
    while ( 1 )
    {
      v5 = sub_1976D0(a1);
      v7 = v13;
      v8 = ptr;
      if ( *((_QWORD *)&v13 + 1) < (unsigned __int64)(v13 + 1) )
      {
        ptr = (void *)sub_1987B0(&ptr, ptr, v13 + 1, 8);
        v8 = ptr;
        v7 = v13;
      }
      v8[v7] = v5;
      v4 = v13 + 1;
      *(_QWORD *)&v13 = v13 + 1;
      if ( a1 == v5 )
        break;
      *(_BYTE *)(v5 - 1) = 0;
      if ( (unsigned __int8)sub_197CF0(a1) )
      {
        sub_1998A0(v18, a1, 4096);
        v4 = v13;
        break;
      }
    }
    if ( v4 )
    {
      while ( 1 )
      {
        v11 = *((_QWORD *)ptr + v4 - 1);
        *(_QWORD *)&v13 = v4 - 1;
        if ( v18[0] )
          sub_197540((unsigned int)v18, 4096, (unsigned int)v18, v11, 0, v6, (char)ptr);
        else
          sub_1998A0(v18, v11, 4096);
        v16 = 0;
        v17 = 0;
        if ( (unsigned int)sub_1972C0(v18, v14, (unsigned __int8)((_QWORD)v13 != 0) << 14) )
          break;
        v10 = sub_1976D0(v18);
        sub_1998A0(v10, v15, &v18[-v10 + 4096]);
        sub_197310(v14);
        v4 = v13;
        if ( !(_QWORD)v13 )
          goto LABEL_7;
      }
      sub_197310(v14);
    }
    else
    {
LABEL_7:
      sub_1998A0(a1, v18, a2);
      v3 = 1;
    }
    if ( ptr )
    {
      *(_QWORD *)&v13 = 0;
      j__free(ptr);
    }
  }
  return v3;
}
